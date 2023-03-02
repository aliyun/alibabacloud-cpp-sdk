// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/ltl_20190510.hpp>
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

using namespace Alibabacloud_Ltl20190510;

Alibabacloud_Ltl20190510::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"ap-northeast-1", "ltl.aliyuncs.com"},
    {"ap-northeast-2-pop", "ltl.aliyuncs.com"},
    {"ap-south-1", "ltl.aliyuncs.com"},
    {"ap-southeast-1", "ltl.aliyuncs.com"},
    {"ap-southeast-2", "ltl.aliyuncs.com"},
    {"ap-southeast-3", "ltl.aliyuncs.com"},
    {"ap-southeast-5", "ltl.aliyuncs.com"},
    {"cn-beijing", "ltl.aliyuncs.com"},
    {"cn-beijing-finance-1", "ltl.aliyuncs.com"},
    {"cn-beijing-finance-pop", "ltl.aliyuncs.com"},
    {"cn-beijing-gov-1", "ltl.aliyuncs.com"},
    {"cn-beijing-nu16-b01", "ltl.aliyuncs.com"},
    {"cn-chengdu", "ltl.aliyuncs.com"},
    {"cn-edge-1", "ltl.aliyuncs.com"},
    {"cn-fujian", "ltl.aliyuncs.com"},
    {"cn-haidian-cm12-c01", "ltl.aliyuncs.com"},
    {"cn-hangzhou-bj-b01", "ltl.aliyuncs.com"},
    {"cn-hangzhou-finance", "ltl.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1", "ltl.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1", "ltl.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2", "ltl.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3", "ltl.aliyuncs.com"},
    {"cn-hangzhou-test-306", "ltl.aliyuncs.com"},
    {"cn-hongkong", "ltl.aliyuncs.com"},
    {"cn-hongkong-finance-pop", "ltl.aliyuncs.com"},
    {"cn-huhehaote", "ltl.aliyuncs.com"},
    {"cn-huhehaote-nebula-1", "ltl.aliyuncs.com"},
    {"cn-north-2-gov-1", "ltl.aliyuncs.com"},
    {"cn-qingdao", "ltl.aliyuncs.com"},
    {"cn-qingdao-nebula", "ltl.aliyuncs.com"},
    {"cn-shanghai-et15-b01", "ltl.aliyuncs.com"},
    {"cn-shanghai-et2-b01", "ltl.aliyuncs.com"},
    {"cn-shanghai-finance-1", "ltl.aliyuncs.com"},
    {"cn-shanghai-inner", "ltl.aliyuncs.com"},
    {"cn-shanghai-internal-test-1", "ltl.aliyuncs.com"},
    {"cn-shenzhen", "ltl.aliyuncs.com"},
    {"cn-shenzhen-finance-1", "ltl.aliyuncs.com"},
    {"cn-shenzhen-inner", "ltl.aliyuncs.com"},
    {"cn-shenzhen-st4-d01", "ltl.aliyuncs.com"},
    {"cn-shenzhen-su18-b01", "ltl.aliyuncs.com"},
    {"cn-wuhan", "ltl.aliyuncs.com"},
    {"cn-wulanchabu", "ltl.aliyuncs.com"},
    {"cn-yushanfang", "ltl.aliyuncs.com"},
    {"cn-zhangbei", "ltl.aliyuncs.com"},
    {"cn-zhangbei-na61-b01", "ltl.aliyuncs.com"},
    {"cn-zhangjiakou", "ltl.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01", "ltl.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1", "ltl.aliyuncs.com"},
    {"eu-central-1", "ltl.aliyuncs.com"},
    {"eu-west-1", "ltl.aliyuncs.com"},
    {"eu-west-1-oxs", "ltl.aliyuncs.com"},
    {"me-east-1", "ltl.aliyuncs.com"},
    {"rus-west-1-pop", "ltl.aliyuncs.com"},
    {"us-east-1", "ltl.aliyuncs.com"},
    {"us-west-1", "ltl.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("ltl"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Ltl20190510::Client::getEndpoint(shared_ptr<string> productId,
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

ApplyDataModelConfigInfoResponse Alibabacloud_Ltl20190510::Client::applyDataModelConfigInfoWithOptions(shared_ptr<ApplyDataModelConfigInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiVersion)) {
    query->insert(pair<string, string>("ApiVersion", *request->apiVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->configuration)) {
    query->insert(pair<string, string>("Configuration", *request->configuration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataModelCode)) {
    query->insert(pair<string, string>("DataModelCode", *request->dataModelCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ApplyDataModelConfigInfo"))},
    {"version", boost::any(string("2019-05-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ApplyDataModelConfigInfoResponse(callApi(params, req, runtime));
}

ApplyDataModelConfigInfoResponse Alibabacloud_Ltl20190510::Client::applyDataModelConfigInfo(shared_ptr<ApplyDataModelConfigInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return applyDataModelConfigInfoWithOptions(request, runtime);
}

AttachDataResponse Alibabacloud_Ltl20190510::Client::attachDataWithOptions(shared_ptr<AttachDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiVersion)) {
    query->insert(pair<string, string>("ApiVersion", *request->apiVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->businessId)) {
    query->insert(pair<string, string>("BusinessId", *request->businessId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->key)) {
    query->insert(pair<string, string>("Key", *request->key));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->value)) {
    query->insert(pair<string, string>("Value", *request->value));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AttachData"))},
    {"version", boost::any(string("2019-05-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AttachDataResponse(callApi(params, req, runtime));
}

AttachDataResponse Alibabacloud_Ltl20190510::Client::attachData(shared_ptr<AttachDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return attachDataWithOptions(request, runtime);
}

AttachDataWithSignatureResponse Alibabacloud_Ltl20190510::Client::attachDataWithSignatureWithOptions(shared_ptr<AttachDataWithSignatureRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiVersion)) {
    query->insert(pair<string, string>("ApiVersion", *request->apiVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->businessId)) {
    query->insert(pair<string, string>("BusinessId", *request->businessId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotAuthType)) {
    query->insert(pair<string, string>("IotAuthType", *request->iotAuthType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotDataDigest)) {
    query->insert(pair<string, string>("IotDataDigest", *request->iotDataDigest));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotId)) {
    query->insert(pair<string, string>("IotId", *request->iotId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotIdServiceProvider)) {
    query->insert(pair<string, string>("IotIdServiceProvider", *request->iotIdServiceProvider));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotIdSource)) {
    query->insert(pair<string, string>("IotIdSource", *request->iotIdSource));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotSignature)) {
    query->insert(pair<string, string>("IotSignature", *request->iotSignature));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->key)) {
    query->insert(pair<string, string>("Key", *request->key));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->value)) {
    query->insert(pair<string, string>("Value", *request->value));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AttachDataWithSignature"))},
    {"version", boost::any(string("2019-05-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AttachDataWithSignatureResponse(callApi(params, req, runtime));
}

AttachDataWithSignatureResponse Alibabacloud_Ltl20190510::Client::attachDataWithSignature(shared_ptr<AttachDataWithSignatureRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return attachDataWithSignatureWithOptions(request, runtime);
}

AuthorizeDeviceResponse Alibabacloud_Ltl20190510::Client::authorizeDeviceWithOptions(shared_ptr<AuthorizeDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiVersion)) {
    query->insert(pair<string, string>("ApiVersion", *request->apiVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizChainId)) {
    query->insert(pair<string, string>("BizChainId", *request->bizChainId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceGroupId)) {
    query->insert(pair<string, string>("DeviceGroupId", *request->deviceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceId)) {
    query->insert(pair<string, string>("DeviceId", *request->deviceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AuthorizeDevice"))},
    {"version", boost::any(string("2019-05-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AuthorizeDeviceResponse(callApi(params, req, runtime));
}

AuthorizeDeviceResponse Alibabacloud_Ltl20190510::Client::authorizeDevice(shared_ptr<AuthorizeDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return authorizeDeviceWithOptions(request, runtime);
}

AuthorizeDeviceGroupResponse Alibabacloud_Ltl20190510::Client::authorizeDeviceGroupWithOptions(shared_ptr<AuthorizeDeviceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiVersion)) {
    query->insert(pair<string, string>("ApiVersion", *request->apiVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizChainId)) {
    query->insert(pair<string, string>("BizChainId", *request->bizChainId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceGroupId)) {
    query->insert(pair<string, string>("DeviceGroupId", *request->deviceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AuthorizeDeviceGroup"))},
    {"version", boost::any(string("2019-05-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AuthorizeDeviceGroupResponse(callApi(params, req, runtime));
}

AuthorizeDeviceGroupResponse Alibabacloud_Ltl20190510::Client::authorizeDeviceGroup(shared_ptr<AuthorizeDeviceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return authorizeDeviceGroupWithOptions(request, runtime);
}

BatchUploadMPCoSPhaseDigestInfoResponse Alibabacloud_Ltl20190510::Client::batchUploadMPCoSPhaseDigestInfoWithOptions(shared_ptr<BatchUploadMPCoSPhaseDigestInfoRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<BatchUploadMPCoSPhaseDigestInfoShrinkRequest> request = make_shared<BatchUploadMPCoSPhaseDigestInfoShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->phaseDataList)) {
    request->phaseDataListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->phaseDataList, make_shared<string>("PhaseDataList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiVersion)) {
    query->insert(pair<string, string>("ApiVersion", *request->apiVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizChainId)) {
    query->insert(pair<string, string>("BizChainId", *request->bizChainId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phaseDataListShrink)) {
    query->insert(pair<string, string>("PhaseDataList", *request->phaseDataListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phaseGroupId)) {
    query->insert(pair<string, string>("PhaseGroupId", *request->phaseGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phaseId)) {
    query->insert(pair<string, string>("PhaseId", *request->phaseId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchUploadMPCoSPhaseDigestInfo"))},
    {"version", boost::any(string("2019-05-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BatchUploadMPCoSPhaseDigestInfoResponse(callApi(params, req, runtime));
}

BatchUploadMPCoSPhaseDigestInfoResponse Alibabacloud_Ltl20190510::Client::batchUploadMPCoSPhaseDigestInfo(shared_ptr<BatchUploadMPCoSPhaseDigestInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchUploadMPCoSPhaseDigestInfoWithOptions(request, runtime);
}

BatchUploadMPCoSPhaseDigestInfoByDeviceResponse Alibabacloud_Ltl20190510::Client::batchUploadMPCoSPhaseDigestInfoByDeviceWithOptions(shared_ptr<BatchUploadMPCoSPhaseDigestInfoByDeviceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<BatchUploadMPCoSPhaseDigestInfoByDeviceShrinkRequest> request = make_shared<BatchUploadMPCoSPhaseDigestInfoByDeviceShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->phaseDataList)) {
    request->phaseDataListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->phaseDataList, make_shared<string>("PhaseDataList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiVersion)) {
    query->insert(pair<string, string>("ApiVersion", *request->apiVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizChainId)) {
    query->insert(pair<string, string>("BizChainId", *request->bizChainId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotAuthType)) {
    query->insert(pair<string, string>("IotAuthType", *request->iotAuthType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotDataDigest)) {
    query->insert(pair<string, string>("IotDataDigest", *request->iotDataDigest));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotId)) {
    query->insert(pair<string, string>("IotId", *request->iotId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotIdServiceProvider)) {
    query->insert(pair<string, string>("IotIdServiceProvider", *request->iotIdServiceProvider));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotIdSource)) {
    query->insert(pair<string, string>("IotIdSource", *request->iotIdSource));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotSignature)) {
    query->insert(pair<string, string>("IotSignature", *request->iotSignature));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phaseDataListShrink)) {
    query->insert(pair<string, string>("PhaseDataList", *request->phaseDataListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phaseGroupId)) {
    query->insert(pair<string, string>("PhaseGroupId", *request->phaseGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phaseId)) {
    query->insert(pair<string, string>("PhaseId", *request->phaseId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchUploadMPCoSPhaseDigestInfoByDevice"))},
    {"version", boost::any(string("2019-05-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BatchUploadMPCoSPhaseDigestInfoByDeviceResponse(callApi(params, req, runtime));
}

BatchUploadMPCoSPhaseDigestInfoByDeviceResponse Alibabacloud_Ltl20190510::Client::batchUploadMPCoSPhaseDigestInfoByDevice(shared_ptr<BatchUploadMPCoSPhaseDigestInfoByDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchUploadMPCoSPhaseDigestInfoByDeviceWithOptions(request, runtime);
}

BatchUploadMPCoSPhaseTextInfoResponse Alibabacloud_Ltl20190510::Client::batchUploadMPCoSPhaseTextInfoWithOptions(shared_ptr<BatchUploadMPCoSPhaseTextInfoRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<BatchUploadMPCoSPhaseTextInfoShrinkRequest> request = make_shared<BatchUploadMPCoSPhaseTextInfoShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->phaseDataList)) {
    request->phaseDataListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->phaseDataList, make_shared<string>("PhaseDataList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiVersion)) {
    query->insert(pair<string, string>("ApiVersion", *request->apiVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizChainId)) {
    query->insert(pair<string, string>("BizChainId", *request->bizChainId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phaseDataListShrink)) {
    query->insert(pair<string, string>("PhaseDataList", *request->phaseDataListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phaseGroupId)) {
    query->insert(pair<string, string>("PhaseGroupId", *request->phaseGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phaseId)) {
    query->insert(pair<string, string>("PhaseId", *request->phaseId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchUploadMPCoSPhaseTextInfo"))},
    {"version", boost::any(string("2019-05-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BatchUploadMPCoSPhaseTextInfoResponse(callApi(params, req, runtime));
}

BatchUploadMPCoSPhaseTextInfoResponse Alibabacloud_Ltl20190510::Client::batchUploadMPCoSPhaseTextInfo(shared_ptr<BatchUploadMPCoSPhaseTextInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchUploadMPCoSPhaseTextInfoWithOptions(request, runtime);
}

BatchUploadMPCoSPhaseTextInfoByDeviceResponse Alibabacloud_Ltl20190510::Client::batchUploadMPCoSPhaseTextInfoByDeviceWithOptions(shared_ptr<BatchUploadMPCoSPhaseTextInfoByDeviceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<BatchUploadMPCoSPhaseTextInfoByDeviceShrinkRequest> request = make_shared<BatchUploadMPCoSPhaseTextInfoByDeviceShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->phaseDataList)) {
    request->phaseDataListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->phaseDataList, make_shared<string>("PhaseDataList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiVersion)) {
    query->insert(pair<string, string>("ApiVersion", *request->apiVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizChainId)) {
    query->insert(pair<string, string>("BizChainId", *request->bizChainId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotAuthType)) {
    query->insert(pair<string, string>("IotAuthType", *request->iotAuthType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotDataDigest)) {
    query->insert(pair<string, string>("IotDataDigest", *request->iotDataDigest));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotId)) {
    query->insert(pair<string, string>("IotId", *request->iotId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotIdServiceProvider)) {
    query->insert(pair<string, string>("IotIdServiceProvider", *request->iotIdServiceProvider));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotIdSource)) {
    query->insert(pair<string, string>("IotIdSource", *request->iotIdSource));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotSignature)) {
    query->insert(pair<string, string>("IotSignature", *request->iotSignature));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phaseDataListShrink)) {
    query->insert(pair<string, string>("PhaseDataList", *request->phaseDataListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phaseGroupId)) {
    query->insert(pair<string, string>("PhaseGroupId", *request->phaseGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phaseId)) {
    query->insert(pair<string, string>("PhaseId", *request->phaseId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchUploadMPCoSPhaseTextInfoByDevice"))},
    {"version", boost::any(string("2019-05-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BatchUploadMPCoSPhaseTextInfoByDeviceResponse(callApi(params, req, runtime));
}

BatchUploadMPCoSPhaseTextInfoByDeviceResponse Alibabacloud_Ltl20190510::Client::batchUploadMPCoSPhaseTextInfoByDevice(shared_ptr<BatchUploadMPCoSPhaseTextInfoByDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchUploadMPCoSPhaseTextInfoByDeviceWithOptions(request, runtime);
}

CreateMPCoSPhaseResponse Alibabacloud_Ltl20190510::Client::createMPCoSPhaseWithOptions(shared_ptr<CreateMPCoSPhaseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiVersion)) {
    query->insert(pair<string, string>("ApiVersion", *request->apiVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizChainId)) {
    query->insert(pair<string, string>("BizChainId", *request->bizChainId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phaseGroupId)) {
    query->insert(pair<string, string>("PhaseGroupId", *request->phaseGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remark)) {
    query->insert(pair<string, string>("Remark", *request->remark));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateMPCoSPhase"))},
    {"version", boost::any(string("2019-05-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateMPCoSPhaseResponse(callApi(params, req, runtime));
}

CreateMPCoSPhaseResponse Alibabacloud_Ltl20190510::Client::createMPCoSPhase(shared_ptr<CreateMPCoSPhaseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createMPCoSPhaseWithOptions(request, runtime);
}

CreateMPCoSPhaseGroupResponse Alibabacloud_Ltl20190510::Client::createMPCoSPhaseGroupWithOptions(shared_ptr<CreateMPCoSPhaseGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiVersion)) {
    query->insert(pair<string, string>("ApiVersion", *request->apiVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizChainId)) {
    query->insert(pair<string, string>("BizChainId", *request->bizChainId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remark)) {
    query->insert(pair<string, string>("Remark", *request->remark));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateMPCoSPhaseGroup"))},
    {"version", boost::any(string("2019-05-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateMPCoSPhaseGroupResponse(callApi(params, req, runtime));
}

CreateMPCoSPhaseGroupResponse Alibabacloud_Ltl20190510::Client::createMPCoSPhaseGroup(shared_ptr<CreateMPCoSPhaseGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createMPCoSPhaseGroupWithOptions(request, runtime);
}

CreateMemberResponse Alibabacloud_Ltl20190510::Client::createMemberWithOptions(shared_ptr<CreateMemberRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiVersion)) {
    query->insert(pair<string, string>("ApiVersion", *request->apiVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizChainId)) {
    query->insert(pair<string, string>("BizChainId", *request->bizChainId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->memberContact)) {
    query->insert(pair<string, string>("MemberContact", *request->memberContact));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->memberName)) {
    query->insert(pair<string, string>("MemberName", *request->memberName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->memberPhone)) {
    query->insert(pair<string, string>("MemberPhone", *request->memberPhone));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->memberUid)) {
    query->insert(pair<string, string>("MemberUid", *request->memberUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remark)) {
    query->insert(pair<string, string>("Remark", *request->remark));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateMember"))},
    {"version", boost::any(string("2019-05-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateMemberResponse(callApi(params, req, runtime));
}

CreateMemberResponse Alibabacloud_Ltl20190510::Client::createMember(shared_ptr<CreateMemberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createMemberWithOptions(request, runtime);
}

DescribeCapacityInfoResponse Alibabacloud_Ltl20190510::Client::describeCapacityInfoWithOptions(shared_ptr<DescribeCapacityInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiVersion)) {
    query->insert(pair<string, string>("ApiVersion", *request->apiVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizChainId)) {
    query->insert(pair<string, string>("BizChainId", *request->bizChainId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCapacityInfo"))},
    {"version", boost::any(string("2019-05-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCapacityInfoResponse(callApi(params, req, runtime));
}

DescribeCapacityInfoResponse Alibabacloud_Ltl20190510::Client::describeCapacityInfo(shared_ptr<DescribeCapacityInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCapacityInfoWithOptions(request, runtime);
}

DescribeMPCoSAuthorizedInfoResponse Alibabacloud_Ltl20190510::Client::describeMPCoSAuthorizedInfoWithOptions(shared_ptr<DescribeMPCoSAuthorizedInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiVersion)) {
    query->insert(pair<string, string>("ApiVersion", *request->apiVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizChainId)) {
    query->insert(pair<string, string>("BizChainId", *request->bizChainId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->memberId)) {
    query->insert(pair<string, string>("MemberId", *request->memberId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phaseGroupId)) {
    query->insert(pair<string, string>("PhaseGroupId", *request->phaseGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeMPCoSAuthorizedInfo"))},
    {"version", boost::any(string("2019-05-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeMPCoSAuthorizedInfoResponse(callApi(params, req, runtime));
}

DescribeMPCoSAuthorizedInfoResponse Alibabacloud_Ltl20190510::Client::describeMPCoSAuthorizedInfo(shared_ptr<DescribeMPCoSAuthorizedInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeMPCoSAuthorizedInfoWithOptions(request, runtime);
}

DescribeMPCoSPhaseInfoResponse Alibabacloud_Ltl20190510::Client::describeMPCoSPhaseInfoWithOptions(shared_ptr<DescribeMPCoSPhaseInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiVersion)) {
    query->insert(pair<string, string>("ApiVersion", *request->apiVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizChainId)) {
    query->insert(pair<string, string>("BizChainId", *request->bizChainId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataKey)) {
    query->insert(pair<string, string>("DataKey", *request->dataKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSeq)) {
    query->insert(pair<string, string>("DataSeq", *request->dataSeq));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phaseGroupId)) {
    query->insert(pair<string, string>("PhaseGroupId", *request->phaseGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phaseId)) {
    query->insert(pair<string, string>("PhaseId", *request->phaseId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeMPCoSPhaseInfo"))},
    {"version", boost::any(string("2019-05-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeMPCoSPhaseInfoResponse(callApi(params, req, runtime));
}

DescribeMPCoSPhaseInfoResponse Alibabacloud_Ltl20190510::Client::describeMPCoSPhaseInfo(shared_ptr<DescribeMPCoSPhaseInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeMPCoSPhaseInfoWithOptions(request, runtime);
}

DescribeMPCoSResourceInfoResponse Alibabacloud_Ltl20190510::Client::describeMPCoSResourceInfoWithOptions(shared_ptr<DescribeMPCoSResourceInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiVersion)) {
    query->insert(pair<string, string>("ApiVersion", *request->apiVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizChainId)) {
    query->insert(pair<string, string>("BizChainId", *request->bizChainId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeMPCoSResourceInfo"))},
    {"version", boost::any(string("2019-05-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeMPCoSResourceInfoResponse(callApi(params, req, runtime));
}

DescribeMPCoSResourceInfoResponse Alibabacloud_Ltl20190510::Client::describeMPCoSResourceInfo(shared_ptr<DescribeMPCoSResourceInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeMPCoSResourceInfoWithOptions(request, runtime);
}

DescribeMemberCapacityInfoResponse Alibabacloud_Ltl20190510::Client::describeMemberCapacityInfoWithOptions(shared_ptr<DescribeMemberCapacityInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiVersion)) {
    query->insert(pair<string, string>("ApiVersion", *request->apiVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizChainId)) {
    query->insert(pair<string, string>("BizChainId", *request->bizChainId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeMemberCapacityInfo"))},
    {"version", boost::any(string("2019-05-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeMemberCapacityInfoResponse(callApi(params, req, runtime));
}

DescribeMemberCapacityInfoResponse Alibabacloud_Ltl20190510::Client::describeMemberCapacityInfo(shared_ptr<DescribeMemberCapacityInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeMemberCapacityInfoWithOptions(request, runtime);
}

DescribeResourceInfoResponse Alibabacloud_Ltl20190510::Client::describeResourceInfoWithOptions(shared_ptr<DescribeResourceInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiVersion)) {
    query->insert(pair<string, string>("ApiVersion", *request->apiVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizChainId)) {
    query->insert(pair<string, string>("BizChainId", *request->bizChainId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeResourceInfo"))},
    {"version", boost::any(string("2019-05-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeResourceInfoResponse(callApi(params, req, runtime));
}

DescribeResourceInfoResponse Alibabacloud_Ltl20190510::Client::describeResourceInfo(shared_ptr<DescribeResourceInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeResourceInfoWithOptions(request, runtime);
}

GetBlockChainInfoResponse Alibabacloud_Ltl20190510::Client::getBlockChainInfoWithOptions(shared_ptr<GetBlockChainInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiVersion)) {
    query->insert(pair<string, string>("ApiVersion", *request->apiVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->businessId)) {
    query->insert(pair<string, string>("BusinessId", *request->businessId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->key)) {
    query->insert(pair<string, string>("Key", *request->key));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetBlockChainInfo"))},
    {"version", boost::any(string("2019-05-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetBlockChainInfoResponse(callApi(params, req, runtime));
}

GetBlockChainInfoResponse Alibabacloud_Ltl20190510::Client::getBlockChainInfo(shared_ptr<GetBlockChainInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getBlockChainInfoWithOptions(request, runtime);
}

GetDataResponse Alibabacloud_Ltl20190510::Client::getDataWithOptions(shared_ptr<GetDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiVersion)) {
    query->insert(pair<string, string>("ApiVersion", *request->apiVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->businessId)) {
    query->insert(pair<string, string>("BusinessId", *request->businessId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->key)) {
    query->insert(pair<string, string>("Key", *request->key));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetData"))},
    {"version", boost::any(string("2019-05-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDataResponse(callApi(params, req, runtime));
}

GetDataResponse Alibabacloud_Ltl20190510::Client::getData(shared_ptr<GetDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDataWithOptions(request, runtime);
}

GetDataModelConfigInfoResponse Alibabacloud_Ltl20190510::Client::getDataModelConfigInfoWithOptions(shared_ptr<GetDataModelConfigInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiVersion)) {
    query->insert(pair<string, string>("ApiVersion", *request->apiVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataModelCode)) {
    query->insert(pair<string, string>("DataModelCode", *request->dataModelCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDataModelConfigInfo"))},
    {"version", boost::any(string("2019-05-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDataModelConfigInfoResponse(callApi(params, req, runtime));
}

GetDataModelConfigInfoResponse Alibabacloud_Ltl20190510::Client::getDataModelConfigInfo(shared_ptr<GetDataModelConfigInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDataModelConfigInfoWithOptions(request, runtime);
}

GetHistoryDataCountResponse Alibabacloud_Ltl20190510::Client::getHistoryDataCountWithOptions(shared_ptr<GetHistoryDataCountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiVersion)) {
    query->insert(pair<string, string>("ApiVersion", *request->apiVersion));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->key)) {
    query->insert(pair<string, string>("Key", *request->key));
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
    {"action", boost::any(string("GetHistoryDataCount"))},
    {"version", boost::any(string("2019-05-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetHistoryDataCountResponse(callApi(params, req, runtime));
}

GetHistoryDataCountResponse Alibabacloud_Ltl20190510::Client::getHistoryDataCount(shared_ptr<GetHistoryDataCountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getHistoryDataCountWithOptions(request, runtime);
}

GetHistoryDataListResponse Alibabacloud_Ltl20190510::Client::getHistoryDataListWithOptions(shared_ptr<GetHistoryDataListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiVersion)) {
    query->insert(pair<string, string>("ApiVersion", *request->apiVersion));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->key)) {
    query->insert(pair<string, string>("Key", *request->key));
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
    {"action", boost::any(string("GetHistoryDataList"))},
    {"version", boost::any(string("2019-05-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetHistoryDataListResponse(callApi(params, req, runtime));
}

GetHistoryDataListResponse Alibabacloud_Ltl20190510::Client::getHistoryDataList(shared_ptr<GetHistoryDataListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getHistoryDataListWithOptions(request, runtime);
}

ListDependentDataModelsResponse Alibabacloud_Ltl20190510::Client::listDependentDataModelsWithOptions(shared_ptr<ListDependentDataModelsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiVersion)) {
    query->insert(pair<string, string>("ApiVersion", *request->apiVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDependentDataModels"))},
    {"version", boost::any(string("2019-05-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDependentDataModelsResponse(callApi(params, req, runtime));
}

ListDependentDataModelsResponse Alibabacloud_Ltl20190510::Client::listDependentDataModels(shared_ptr<ListDependentDataModelsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDependentDataModelsWithOptions(request, runtime);
}

ListDeviceResponse Alibabacloud_Ltl20190510::Client::listDeviceWithOptions(shared_ptr<ListDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiVersion)) {
    query->insert(pair<string, string>("ApiVersion", *request->apiVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizChainId)) {
    query->insert(pair<string, string>("BizChainId", *request->bizChainId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceGroupId)) {
    query->insert(pair<string, string>("DeviceGroupId", *request->deviceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotId)) {
    query->insert(pair<string, string>("IotId", *request->iotId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->num)) {
    query->insert(pair<string, long>("Num", *request->num));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    query->insert(pair<string, long>("Size", *request->size));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDevice"))},
    {"version", boost::any(string("2019-05-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDeviceResponse(callApi(params, req, runtime));
}

ListDeviceResponse Alibabacloud_Ltl20190510::Client::listDevice(shared_ptr<ListDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDeviceWithOptions(request, runtime);
}

ListDeviceGroupResponse Alibabacloud_Ltl20190510::Client::listDeviceGroupWithOptions(shared_ptr<ListDeviceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiVersion)) {
    query->insert(pair<string, string>("ApiVersion", *request->apiVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizChainId)) {
    query->insert(pair<string, string>("BizChainId", *request->bizChainId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->num)) {
    query->insert(pair<string, long>("Num", *request->num));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    query->insert(pair<string, long>("Size", *request->size));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDeviceGroup"))},
    {"version", boost::any(string("2019-05-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDeviceGroupResponse(callApi(params, req, runtime));
}

ListDeviceGroupResponse Alibabacloud_Ltl20190510::Client::listDeviceGroup(shared_ptr<ListDeviceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDeviceGroupWithOptions(request, runtime);
}

ListMPCoSPhaseResponse Alibabacloud_Ltl20190510::Client::listMPCoSPhaseWithOptions(shared_ptr<ListMPCoSPhaseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiVersion)) {
    query->insert(pair<string, string>("ApiVersion", *request->apiVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizChainId)) {
    query->insert(pair<string, string>("BizChainId", *request->bizChainId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->num)) {
    query->insert(pair<string, long>("Num", *request->num));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phaseGroupId)) {
    query->insert(pair<string, string>("PhaseGroupId", *request->phaseGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    query->insert(pair<string, long>("Size", *request->size));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListMPCoSPhase"))},
    {"version", boost::any(string("2019-05-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListMPCoSPhaseResponse(callApi(params, req, runtime));
}

ListMPCoSPhaseResponse Alibabacloud_Ltl20190510::Client::listMPCoSPhase(shared_ptr<ListMPCoSPhaseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listMPCoSPhaseWithOptions(request, runtime);
}

ListMPCoSPhaseGroupResponse Alibabacloud_Ltl20190510::Client::listMPCoSPhaseGroupWithOptions(shared_ptr<ListMPCoSPhaseGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiVersion)) {
    query->insert(pair<string, string>("ApiVersion", *request->apiVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizChainId)) {
    query->insert(pair<string, string>("BizChainId", *request->bizChainId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->num)) {
    query->insert(pair<string, long>("Num", *request->num));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    query->insert(pair<string, long>("Size", *request->size));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListMPCoSPhaseGroup"))},
    {"version", boost::any(string("2019-05-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListMPCoSPhaseGroupResponse(callApi(params, req, runtime));
}

ListMPCoSPhaseGroupResponse Alibabacloud_Ltl20190510::Client::listMPCoSPhaseGroup(shared_ptr<ListMPCoSPhaseGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listMPCoSPhaseGroupWithOptions(request, runtime);
}

ListMPCoSPhaseHistoryResponse Alibabacloud_Ltl20190510::Client::listMPCoSPhaseHistoryWithOptions(shared_ptr<ListMPCoSPhaseHistoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiVersion)) {
    query->insert(pair<string, string>("ApiVersion", *request->apiVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizChainId)) {
    query->insert(pair<string, string>("BizChainId", *request->bizChainId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataKey)) {
    query->insert(pair<string, string>("DataKey", *request->dataKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->num)) {
    query->insert(pair<string, long>("Num", *request->num));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phaseGroupId)) {
    query->insert(pair<string, string>("PhaseGroupId", *request->phaseGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phaseId)) {
    query->insert(pair<string, string>("PhaseId", *request->phaseId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    query->insert(pair<string, long>("Size", *request->size));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    query->insert(pair<string, long>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListMPCoSPhaseHistory"))},
    {"version", boost::any(string("2019-05-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListMPCoSPhaseHistoryResponse(callApi(params, req, runtime));
}

ListMPCoSPhaseHistoryResponse Alibabacloud_Ltl20190510::Client::listMPCoSPhaseHistory(shared_ptr<ListMPCoSPhaseHistoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listMPCoSPhaseHistoryWithOptions(request, runtime);
}

ListMemberResponse Alibabacloud_Ltl20190510::Client::listMemberWithOptions(shared_ptr<ListMemberRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiVersion)) {
    query->insert(pair<string, string>("ApiVersion", *request->apiVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizChainId)) {
    query->insert(pair<string, string>("BizChainId", *request->bizChainId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->memberUid)) {
    query->insert(pair<string, string>("MemberUid", *request->memberUid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->num)) {
    query->insert(pair<string, long>("Num", *request->num));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    query->insert(pair<string, long>("Size", *request->size));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListMember"))},
    {"version", boost::any(string("2019-05-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListMemberResponse(callApi(params, req, runtime));
}

ListMemberResponse Alibabacloud_Ltl20190510::Client::listMember(shared_ptr<ListMemberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listMemberWithOptions(request, runtime);
}

ListMultiPartyCollaborationChainResponse Alibabacloud_Ltl20190510::Client::listMultiPartyCollaborationChainWithOptions(shared_ptr<ListMultiPartyCollaborationChainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiVersion)) {
    query->insert(pair<string, string>("ApiVersion", *request->apiVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->num)) {
    query->insert(pair<string, long>("Num", *request->num));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    query->insert(pair<string, long>("Size", *request->size));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListMultiPartyCollaborationChain"))},
    {"version", boost::any(string("2019-05-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListMultiPartyCollaborationChainResponse(callApi(params, req, runtime));
}

ListMultiPartyCollaborationChainResponse Alibabacloud_Ltl20190510::Client::listMultiPartyCollaborationChain(shared_ptr<ListMultiPartyCollaborationChainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listMultiPartyCollaborationChainWithOptions(request, runtime);
}

ListPSMemberDataTypeCodeResponse Alibabacloud_Ltl20190510::Client::listPSMemberDataTypeCodeWithOptions(shared_ptr<ListPSMemberDataTypeCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiVersion)) {
    query->insert(pair<string, string>("ApiVersion", *request->apiVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizChainId)) {
    query->insert(pair<string, string>("BizChainId", *request->bizChainId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->memberUid)) {
    query->insert(pair<string, string>("MemberUid", *request->memberUid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->num)) {
    query->insert(pair<string, long>("Num", *request->num));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    query->insert(pair<string, long>("Size", *request->size));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListPSMemberDataTypeCode"))},
    {"version", boost::any(string("2019-05-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListPSMemberDataTypeCodeResponse(callApi(params, req, runtime));
}

ListPSMemberDataTypeCodeResponse Alibabacloud_Ltl20190510::Client::listPSMemberDataTypeCode(shared_ptr<ListPSMemberDataTypeCodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listPSMemberDataTypeCodeWithOptions(request, runtime);
}

ListProofChainResponse Alibabacloud_Ltl20190510::Client::listProofChainWithOptions(shared_ptr<ListProofChainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiVersion)) {
    query->insert(pair<string, string>("ApiVersion", *request->apiVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->num)) {
    query->insert(pair<string, long>("Num", *request->num));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    query->insert(pair<string, long>("Size", *request->size));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListProofChain"))},
    {"version", boost::any(string("2019-05-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListProofChainResponse(callApi(params, req, runtime));
}

ListProofChainResponse Alibabacloud_Ltl20190510::Client::listProofChain(shared_ptr<ListProofChainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listProofChainWithOptions(request, runtime);
}

LockMemberResponse Alibabacloud_Ltl20190510::Client::lockMemberWithOptions(shared_ptr<LockMemberRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiVersion)) {
    query->insert(pair<string, string>("ApiVersion", *request->apiVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizChainId)) {
    query->insert(pair<string, string>("BizChainId", *request->bizChainId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->memberId)) {
    query->insert(pair<string, string>("MemberId", *request->memberId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("LockMember"))},
    {"version", boost::any(string("2019-05-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return LockMemberResponse(callApi(params, req, runtime));
}

LockMemberResponse Alibabacloud_Ltl20190510::Client::lockMember(shared_ptr<LockMemberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return lockMemberWithOptions(request, runtime);
}

ModifyMPCoSPhaseResponse Alibabacloud_Ltl20190510::Client::modifyMPCoSPhaseWithOptions(shared_ptr<ModifyMPCoSPhaseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiVersion)) {
    query->insert(pair<string, string>("ApiVersion", *request->apiVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizChainId)) {
    query->insert(pair<string, string>("BizChainId", *request->bizChainId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phaseId)) {
    query->insert(pair<string, string>("PhaseId", *request->phaseId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remark)) {
    query->insert(pair<string, string>("Remark", *request->remark));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyMPCoSPhase"))},
    {"version", boost::any(string("2019-05-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyMPCoSPhaseResponse(callApi(params, req, runtime));
}

ModifyMPCoSPhaseResponse Alibabacloud_Ltl20190510::Client::modifyMPCoSPhase(shared_ptr<ModifyMPCoSPhaseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyMPCoSPhaseWithOptions(request, runtime);
}

ModifyMPCoSPhaseGroupResponse Alibabacloud_Ltl20190510::Client::modifyMPCoSPhaseGroupWithOptions(shared_ptr<ModifyMPCoSPhaseGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiVersion)) {
    query->insert(pair<string, string>("ApiVersion", *request->apiVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizChainId)) {
    query->insert(pair<string, string>("BizChainId", *request->bizChainId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phaseGroupId)) {
    query->insert(pair<string, string>("PhaseGroupId", *request->phaseGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remark)) {
    query->insert(pair<string, string>("Remark", *request->remark));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyMPCoSPhaseGroup"))},
    {"version", boost::any(string("2019-05-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyMPCoSPhaseGroupResponse(callApi(params, req, runtime));
}

ModifyMPCoSPhaseGroupResponse Alibabacloud_Ltl20190510::Client::modifyMPCoSPhaseGroup(shared_ptr<ModifyMPCoSPhaseGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyMPCoSPhaseGroupWithOptions(request, runtime);
}

ModifyMemberResponse Alibabacloud_Ltl20190510::Client::modifyMemberWithOptions(shared_ptr<ModifyMemberRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiVersion)) {
    query->insert(pair<string, string>("ApiVersion", *request->apiVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizChainId)) {
    query->insert(pair<string, string>("BizChainId", *request->bizChainId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->memberContact)) {
    query->insert(pair<string, string>("MemberContact", *request->memberContact));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->memberId)) {
    query->insert(pair<string, string>("MemberId", *request->memberId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->memberName)) {
    query->insert(pair<string, string>("MemberName", *request->memberName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->memberPhone)) {
    query->insert(pair<string, string>("MemberPhone", *request->memberPhone));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->memberUid)) {
    query->insert(pair<string, string>("MemberUid", *request->memberUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remark)) {
    query->insert(pair<string, string>("Remark", *request->remark));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyMember"))},
    {"version", boost::any(string("2019-05-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyMemberResponse(callApi(params, req, runtime));
}

ModifyMemberResponse Alibabacloud_Ltl20190510::Client::modifyMember(shared_ptr<ModifyMemberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyMemberWithOptions(request, runtime);
}

RegisterDeviceGroupResponse Alibabacloud_Ltl20190510::Client::registerDeviceGroupWithOptions(shared_ptr<RegisterDeviceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiVersion)) {
    query->insert(pair<string, string>("ApiVersion", *request->apiVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->authorizeType)) {
    query->insert(pair<string, string>("AuthorizeType", *request->authorizeType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizChainId)) {
    query->insert(pair<string, string>("BizChainId", *request->bizChainId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceGroupName)) {
    query->insert(pair<string, string>("DeviceGroupName", *request->deviceGroupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remark)) {
    query->insert(pair<string, string>("Remark", *request->remark));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RegisterDeviceGroup"))},
    {"version", boost::any(string("2019-05-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RegisterDeviceGroupResponse(callApi(params, req, runtime));
}

RegisterDeviceGroupResponse Alibabacloud_Ltl20190510::Client::registerDeviceGroup(shared_ptr<RegisterDeviceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return registerDeviceGroupWithOptions(request, runtime);
}

SetDataResponse Alibabacloud_Ltl20190510::Client::setDataWithOptions(shared_ptr<SetDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiVersion)) {
    query->insert(pair<string, string>("ApiVersion", *request->apiVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->key)) {
    query->insert(pair<string, string>("Key", *request->key));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->value)) {
    query->insert(pair<string, string>("Value", *request->value));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetData"))},
    {"version", boost::any(string("2019-05-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetDataResponse(callApi(params, req, runtime));
}

SetDataResponse Alibabacloud_Ltl20190510::Client::setData(shared_ptr<SetDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setDataWithOptions(request, runtime);
}

SetDataWithSignatureResponse Alibabacloud_Ltl20190510::Client::setDataWithSignatureWithOptions(shared_ptr<SetDataWithSignatureRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiVersion)) {
    query->insert(pair<string, string>("ApiVersion", *request->apiVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotAuthType)) {
    query->insert(pair<string, string>("IotAuthType", *request->iotAuthType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotDataDigest)) {
    query->insert(pair<string, string>("IotDataDigest", *request->iotDataDigest));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotId)) {
    query->insert(pair<string, string>("IotId", *request->iotId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotIdServiceProvider)) {
    query->insert(pair<string, string>("IotIdServiceProvider", *request->iotIdServiceProvider));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotIdSource)) {
    query->insert(pair<string, string>("IotIdSource", *request->iotIdSource));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotSignature)) {
    query->insert(pair<string, string>("IotSignature", *request->iotSignature));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->key)) {
    query->insert(pair<string, string>("Key", *request->key));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->value)) {
    query->insert(pair<string, string>("Value", *request->value));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetDataWithSignature"))},
    {"version", boost::any(string("2019-05-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetDataWithSignatureResponse(callApi(params, req, runtime));
}

SetDataWithSignatureResponse Alibabacloud_Ltl20190510::Client::setDataWithSignature(shared_ptr<SetDataWithSignatureRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setDataWithSignatureWithOptions(request, runtime);
}

UnAuthorizeDeviceResponse Alibabacloud_Ltl20190510::Client::unAuthorizeDeviceWithOptions(shared_ptr<UnAuthorizeDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiVersion)) {
    query->insert(pair<string, string>("ApiVersion", *request->apiVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizChainId)) {
    query->insert(pair<string, string>("BizChainId", *request->bizChainId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceGroupId)) {
    query->insert(pair<string, string>("DeviceGroupId", *request->deviceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceId)) {
    query->insert(pair<string, string>("DeviceId", *request->deviceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UnAuthorizeDevice"))},
    {"version", boost::any(string("2019-05-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UnAuthorizeDeviceResponse(callApi(params, req, runtime));
}

UnAuthorizeDeviceResponse Alibabacloud_Ltl20190510::Client::unAuthorizeDevice(shared_ptr<UnAuthorizeDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unAuthorizeDeviceWithOptions(request, runtime);
}

UnAuthorizeDeviceGroupResponse Alibabacloud_Ltl20190510::Client::unAuthorizeDeviceGroupWithOptions(shared_ptr<UnAuthorizeDeviceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiVersion)) {
    query->insert(pair<string, string>("ApiVersion", *request->apiVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizChainId)) {
    query->insert(pair<string, string>("BizChainId", *request->bizChainId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceGroupId)) {
    query->insert(pair<string, string>("DeviceGroupId", *request->deviceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UnAuthorizeDeviceGroup"))},
    {"version", boost::any(string("2019-05-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UnAuthorizeDeviceGroupResponse(callApi(params, req, runtime));
}

UnAuthorizeDeviceGroupResponse Alibabacloud_Ltl20190510::Client::unAuthorizeDeviceGroup(shared_ptr<UnAuthorizeDeviceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unAuthorizeDeviceGroupWithOptions(request, runtime);
}

UnLockMemberResponse Alibabacloud_Ltl20190510::Client::unLockMemberWithOptions(shared_ptr<UnLockMemberRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiVersion)) {
    query->insert(pair<string, string>("ApiVersion", *request->apiVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizChainId)) {
    query->insert(pair<string, string>("BizChainId", *request->bizChainId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->memberId)) {
    query->insert(pair<string, string>("MemberId", *request->memberId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UnLockMember"))},
    {"version", boost::any(string("2019-05-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UnLockMemberResponse(callApi(params, req, runtime));
}

UnLockMemberResponse Alibabacloud_Ltl20190510::Client::unLockMember(shared_ptr<UnLockMemberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unLockMemberWithOptions(request, runtime);
}

UpdateMPCoSAuthorizedInfoResponse Alibabacloud_Ltl20190510::Client::updateMPCoSAuthorizedInfoWithOptions(shared_ptr<UpdateMPCoSAuthorizedInfoRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateMPCoSAuthorizedInfoShrinkRequest> request = make_shared<UpdateMPCoSAuthorizedInfoShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->authorizedPhaseList)) {
    request->authorizedPhaseListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->authorizedPhaseList, make_shared<string>("AuthorizedPhaseList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiVersion)) {
    query->insert(pair<string, string>("ApiVersion", *request->apiVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->authorizedPhaseListShrink)) {
    query->insert(pair<string, string>("AuthorizedPhaseList", *request->authorizedPhaseListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizChainId)) {
    query->insert(pair<string, string>("BizChainId", *request->bizChainId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->memberId)) {
    query->insert(pair<string, string>("MemberId", *request->memberId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phaseGroupId)) {
    query->insert(pair<string, string>("PhaseGroupId", *request->phaseGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateMPCoSAuthorizedInfo"))},
    {"version", boost::any(string("2019-05-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateMPCoSAuthorizedInfoResponse(callApi(params, req, runtime));
}

UpdateMPCoSAuthorizedInfoResponse Alibabacloud_Ltl20190510::Client::updateMPCoSAuthorizedInfo(shared_ptr<UpdateMPCoSAuthorizedInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateMPCoSAuthorizedInfoWithOptions(request, runtime);
}

UploadMPCoSPhaseDigestInfoResponse Alibabacloud_Ltl20190510::Client::uploadMPCoSPhaseDigestInfoWithOptions(shared_ptr<UploadMPCoSPhaseDigestInfoRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UploadMPCoSPhaseDigestInfoShrinkRequest> request = make_shared<UploadMPCoSPhaseDigestInfoShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->relatedDataList)) {
    request->relatedDataListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->relatedDataList, make_shared<string>("RelatedDataList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiVersion)) {
    query->insert(pair<string, string>("ApiVersion", *request->apiVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizChainId)) {
    query->insert(pair<string, string>("BizChainId", *request->bizChainId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataKey)) {
    query->insert(pair<string, string>("DataKey", *request->dataKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSeq)) {
    query->insert(pair<string, string>("DataSeq", *request->dataSeq));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phaseData)) {
    query->insert(pair<string, string>("PhaseData", *request->phaseData));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phaseGroupId)) {
    query->insert(pair<string, string>("PhaseGroupId", *request->phaseGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phaseId)) {
    query->insert(pair<string, string>("PhaseId", *request->phaseId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->relatedDataListShrink)) {
    query->insert(pair<string, string>("RelatedDataList", *request->relatedDataListShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UploadMPCoSPhaseDigestInfo"))},
    {"version", boost::any(string("2019-05-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UploadMPCoSPhaseDigestInfoResponse(callApi(params, req, runtime));
}

UploadMPCoSPhaseDigestInfoResponse Alibabacloud_Ltl20190510::Client::uploadMPCoSPhaseDigestInfo(shared_ptr<UploadMPCoSPhaseDigestInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return uploadMPCoSPhaseDigestInfoWithOptions(request, runtime);
}

UploadMPCoSPhaseDigestInfoByDeviceResponse Alibabacloud_Ltl20190510::Client::uploadMPCoSPhaseDigestInfoByDeviceWithOptions(shared_ptr<UploadMPCoSPhaseDigestInfoByDeviceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UploadMPCoSPhaseDigestInfoByDeviceShrinkRequest> request = make_shared<UploadMPCoSPhaseDigestInfoByDeviceShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->relatedDataList)) {
    request->relatedDataListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->relatedDataList, make_shared<string>("RelatedDataList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiVersion)) {
    query->insert(pair<string, string>("ApiVersion", *request->apiVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizChainId)) {
    query->insert(pair<string, string>("BizChainId", *request->bizChainId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataKey)) {
    query->insert(pair<string, string>("DataKey", *request->dataKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSeq)) {
    query->insert(pair<string, string>("DataSeq", *request->dataSeq));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotAuthType)) {
    query->insert(pair<string, string>("IotAuthType", *request->iotAuthType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotDataDigest)) {
    query->insert(pair<string, string>("IotDataDigest", *request->iotDataDigest));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotId)) {
    query->insert(pair<string, string>("IotId", *request->iotId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotIdServiceProvider)) {
    query->insert(pair<string, string>("IotIdServiceProvider", *request->iotIdServiceProvider));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotIdSource)) {
    query->insert(pair<string, string>("IotIdSource", *request->iotIdSource));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotSignature)) {
    query->insert(pair<string, string>("IotSignature", *request->iotSignature));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phaseData)) {
    query->insert(pair<string, string>("PhaseData", *request->phaseData));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phaseGroupId)) {
    query->insert(pair<string, string>("PhaseGroupId", *request->phaseGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phaseId)) {
    query->insert(pair<string, string>("PhaseId", *request->phaseId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->relatedDataListShrink)) {
    query->insert(pair<string, string>("RelatedDataList", *request->relatedDataListShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UploadMPCoSPhaseDigestInfoByDevice"))},
    {"version", boost::any(string("2019-05-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UploadMPCoSPhaseDigestInfoByDeviceResponse(callApi(params, req, runtime));
}

UploadMPCoSPhaseDigestInfoByDeviceResponse Alibabacloud_Ltl20190510::Client::uploadMPCoSPhaseDigestInfoByDevice(shared_ptr<UploadMPCoSPhaseDigestInfoByDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return uploadMPCoSPhaseDigestInfoByDeviceWithOptions(request, runtime);
}

UploadMPCoSPhaseTextInfoResponse Alibabacloud_Ltl20190510::Client::uploadMPCoSPhaseTextInfoWithOptions(shared_ptr<UploadMPCoSPhaseTextInfoRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UploadMPCoSPhaseTextInfoShrinkRequest> request = make_shared<UploadMPCoSPhaseTextInfoShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->relatedDataList)) {
    request->relatedDataListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->relatedDataList, make_shared<string>("RelatedDataList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiVersion)) {
    query->insert(pair<string, string>("ApiVersion", *request->apiVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizChainId)) {
    query->insert(pair<string, string>("BizChainId", *request->bizChainId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataKey)) {
    query->insert(pair<string, string>("DataKey", *request->dataKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSeq)) {
    query->insert(pair<string, string>("DataSeq", *request->dataSeq));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phaseData)) {
    query->insert(pair<string, string>("PhaseData", *request->phaseData));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phaseGroupId)) {
    query->insert(pair<string, string>("PhaseGroupId", *request->phaseGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phaseId)) {
    query->insert(pair<string, string>("PhaseId", *request->phaseId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->relatedDataListShrink)) {
    query->insert(pair<string, string>("RelatedDataList", *request->relatedDataListShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UploadMPCoSPhaseTextInfo"))},
    {"version", boost::any(string("2019-05-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UploadMPCoSPhaseTextInfoResponse(callApi(params, req, runtime));
}

UploadMPCoSPhaseTextInfoResponse Alibabacloud_Ltl20190510::Client::uploadMPCoSPhaseTextInfo(shared_ptr<UploadMPCoSPhaseTextInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return uploadMPCoSPhaseTextInfoWithOptions(request, runtime);
}

UploadMPCoSPhaseTextInfoByDeviceResponse Alibabacloud_Ltl20190510::Client::uploadMPCoSPhaseTextInfoByDeviceWithOptions(shared_ptr<UploadMPCoSPhaseTextInfoByDeviceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UploadMPCoSPhaseTextInfoByDeviceShrinkRequest> request = make_shared<UploadMPCoSPhaseTextInfoByDeviceShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->relatedDataList)) {
    request->relatedDataListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->relatedDataList, make_shared<string>("RelatedDataList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiVersion)) {
    query->insert(pair<string, string>("ApiVersion", *request->apiVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizChainId)) {
    query->insert(pair<string, string>("BizChainId", *request->bizChainId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataKey)) {
    query->insert(pair<string, string>("DataKey", *request->dataKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSeq)) {
    query->insert(pair<string, string>("DataSeq", *request->dataSeq));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotAuthType)) {
    query->insert(pair<string, string>("IotAuthType", *request->iotAuthType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotDataDigest)) {
    query->insert(pair<string, string>("IotDataDigest", *request->iotDataDigest));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotId)) {
    query->insert(pair<string, string>("IotId", *request->iotId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotIdServiceProvider)) {
    query->insert(pair<string, string>("IotIdServiceProvider", *request->iotIdServiceProvider));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotIdSource)) {
    query->insert(pair<string, string>("IotIdSource", *request->iotIdSource));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotSignature)) {
    query->insert(pair<string, string>("IotSignature", *request->iotSignature));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phaseData)) {
    query->insert(pair<string, string>("PhaseData", *request->phaseData));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phaseGroupId)) {
    query->insert(pair<string, string>("PhaseGroupId", *request->phaseGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phaseId)) {
    query->insert(pair<string, string>("PhaseId", *request->phaseId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->relatedDataListShrink)) {
    query->insert(pair<string, string>("RelatedDataList", *request->relatedDataListShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UploadMPCoSPhaseTextInfoByDevice"))},
    {"version", boost::any(string("2019-05-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UploadMPCoSPhaseTextInfoByDeviceResponse(callApi(params, req, runtime));
}

UploadMPCoSPhaseTextInfoByDeviceResponse Alibabacloud_Ltl20190510::Client::uploadMPCoSPhaseTextInfoByDevice(shared_ptr<UploadMPCoSPhaseTextInfoByDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return uploadMPCoSPhaseTextInfoByDeviceWithOptions(request, runtime);
}

