// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/dbfs20200418.hpp>
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

using namespace Alibabacloud_DBFS20200418;

Alibabacloud_DBFS20200418::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"ap-northeast-2-pop", "dbfs.aliyuncs.com"},
    {"cn-beijing-finance-1", "dbfs.aliyuncs.com"},
    {"cn-beijing-finance-pop", "dbfs.aliyuncs.com"},
    {"cn-beijing-gov-1", "dbfs.aliyuncs.com"},
    {"cn-beijing-nu16-b01", "dbfs.aliyuncs.com"},
    {"cn-edge-1", "dbfs.aliyuncs.com"},
    {"cn-fujian", "dbfs.aliyuncs.com"},
    {"cn-haidian-cm12-c01", "dbfs.aliyuncs.com"},
    {"cn-hangzhou-bj-b01", "dbfs.aliyuncs.com"},
    {"cn-hangzhou-finance", "dbfs.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1", "dbfs.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1", "dbfs.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2", "dbfs.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3", "dbfs.aliyuncs.com"},
    {"cn-hangzhou-test-306", "dbfs.aliyuncs.com"},
    {"cn-hongkong-finance-pop", "dbfs.aliyuncs.com"},
    {"cn-huhehaote-nebula-1", "dbfs.aliyuncs.com"},
    {"cn-north-2-gov-1", "dbfs.aliyuncs.com"},
    {"cn-qingdao-nebula", "dbfs.aliyuncs.com"},
    {"cn-shanghai-et15-b01", "dbfs.aliyuncs.com"},
    {"cn-shanghai-et2-b01", "dbfs.aliyuncs.com"},
    {"cn-shanghai-finance-1", "dbfs.aliyuncs.com"},
    {"cn-shanghai-inner", "dbfs.aliyuncs.com"},
    {"cn-shanghai-internal-test-1", "dbfs.aliyuncs.com"},
    {"cn-shenzhen-finance-1", "dbfs.aliyuncs.com"},
    {"cn-shenzhen-inner", "dbfs.aliyuncs.com"},
    {"cn-shenzhen-st4-d01", "dbfs.aliyuncs.com"},
    {"cn-shenzhen-su18-b01", "dbfs.aliyuncs.com"},
    {"cn-wuhan", "dbfs.aliyuncs.com"},
    {"cn-wulanchabu", "dbfs.aliyuncs.com"},
    {"cn-yushanfang", "dbfs.aliyuncs.com"},
    {"cn-zhangbei", "dbfs.aliyuncs.com"},
    {"cn-zhangbei-na61-b01", "dbfs.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01", "dbfs.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1", "dbfs.aliyuncs.com"},
    {"eu-west-1-oxs", "dbfs.aliyuncs.com"},
    {"rus-west-1-pop", "dbfs.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("dbfs"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_DBFS20200418::Client::getEndpoint(shared_ptr<string> productId,
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

AddTagsBatchResponse Alibabacloud_DBFS20200418::Client::addTagsBatchWithOptions(shared_ptr<AddTagsBatchRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dbfsList)) {
    query->insert(pair<string, string>("DbfsList", *request->dbfsList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tags)) {
    query->insert(pair<string, string>("Tags", *request->tags));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddTagsBatch"))},
    {"version", boost::any(string("2020-04-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddTagsBatchResponse(callApi(params, req, runtime));
}

AddTagsBatchResponse Alibabacloud_DBFS20200418::Client::addTagsBatch(shared_ptr<AddTagsBatchRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addTagsBatchWithOptions(request, runtime);
}

AttachDbfsResponse Alibabacloud_DBFS20200418::Client::attachDbfsWithOptions(shared_ptr<AttachDbfsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->attachMode)) {
    query->insert(pair<string, string>("AttachMode", *request->attachMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->attachPoint)) {
    query->insert(pair<string, string>("AttachPoint", *request->attachPoint));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ECSInstanceId)) {
    query->insert(pair<string, string>("ECSInstanceId", *request->ECSInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fsId)) {
    query->insert(pair<string, string>("FsId", *request->fsId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serverUrl)) {
    query->insert(pair<string, string>("ServerUrl", *request->serverUrl));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AttachDbfs"))},
    {"version", boost::any(string("2020-04-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AttachDbfsResponse(callApi(params, req, runtime));
}

AttachDbfsResponse Alibabacloud_DBFS20200418::Client::attachDbfs(shared_ptr<AttachDbfsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return attachDbfsWithOptions(request, runtime);
}

CancelAutoSnapshotPolicyResponse Alibabacloud_DBFS20200418::Client::cancelAutoSnapshotPolicyWithOptions(shared_ptr<CancelAutoSnapshotPolicyRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CancelAutoSnapshotPolicyShrinkRequest> request = make_shared<CancelAutoSnapshotPolicyShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->dbfsIds)) {
    request->dbfsIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->dbfsIds, make_shared<string>("DbfsIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dbfsIdsShrink)) {
    query->insert(pair<string, string>("DbfsIds", *request->dbfsIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policyId)) {
    query->insert(pair<string, string>("PolicyId", *request->policyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CancelAutoSnapshotPolicy"))},
    {"version", boost::any(string("2020-04-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CancelAutoSnapshotPolicyResponse(callApi(params, req, runtime));
}

CancelAutoSnapshotPolicyResponse Alibabacloud_DBFS20200418::Client::cancelAutoSnapshotPolicy(shared_ptr<CancelAutoSnapshotPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelAutoSnapshotPolicyWithOptions(request, runtime);
}

CreateAutoSnapshotPolicyResponse Alibabacloud_DBFS20200418::Client::createAutoSnapshotPolicyWithOptions(shared_ptr<CreateAutoSnapshotPolicyRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateAutoSnapshotPolicyShrinkRequest> request = make_shared<CreateAutoSnapshotPolicyShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->repeatWeekdays)) {
    request->repeatWeekdaysShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->repeatWeekdays, make_shared<string>("RepeatWeekdays"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->timePoints)) {
    request->timePointsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->timePoints, make_shared<string>("TimePoints"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->policyName)) {
    query->insert(pair<string, string>("PolicyName", *request->policyName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->repeatWeekdaysShrink)) {
    query->insert(pair<string, string>("RepeatWeekdays", *request->repeatWeekdaysShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->retentionDays)) {
    query->insert(pair<string, long>("RetentionDays", *request->retentionDays));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timePointsShrink)) {
    query->insert(pair<string, string>("TimePoints", *request->timePointsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAutoSnapshotPolicy"))},
    {"version", boost::any(string("2020-04-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateAutoSnapshotPolicyResponse(callApi(params, req, runtime));
}

CreateAutoSnapshotPolicyResponse Alibabacloud_DBFS20200418::Client::createAutoSnapshotPolicy(shared_ptr<CreateAutoSnapshotPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAutoSnapshotPolicyWithOptions(request, runtime);
}

CreateDbfsResponse Alibabacloud_DBFS20200418::Client::createDbfsWithOptions(shared_ptr<CreateDbfsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->advancedFeatures)) {
    query->insert(pair<string, string>("AdvancedFeatures", *request->advancedFeatures));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->category)) {
    query->insert(pair<string, string>("Category", *request->category));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->deleteSnapshot)) {
    query->insert(pair<string, bool>("DeleteSnapshot", *request->deleteSnapshot));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableRaid)) {
    query->insert(pair<string, bool>("EnableRaid", *request->enableRaid));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->encryption)) {
    query->insert(pair<string, bool>("Encryption", *request->encryption));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fsName)) {
    query->insert(pair<string, string>("FsName", *request->fsName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceType)) {
    query->insert(pair<string, string>("InstanceType", *request->instanceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->KMSKeyId)) {
    query->insert(pair<string, string>("KMSKeyId", *request->KMSKeyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->performanceLevel)) {
    query->insert(pair<string, string>("PerformanceLevel", *request->performanceLevel));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->raidStripeUnitNumber)) {
    query->insert(pair<string, long>("RaidStripeUnitNumber", *request->raidStripeUnitNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->sizeG)) {
    query->insert(pair<string, long>("SizeG", *request->sizeG));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->snapshotId)) {
    query->insert(pair<string, string>("SnapshotId", *request->snapshotId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->usedScene)) {
    query->insert(pair<string, string>("UsedScene", *request->usedScene));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->zoneId)) {
    query->insert(pair<string, string>("ZoneId", *request->zoneId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDbfs"))},
    {"version", boost::any(string("2020-04-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDbfsResponse(callApi(params, req, runtime));
}

CreateDbfsResponse Alibabacloud_DBFS20200418::Client::createDbfs(shared_ptr<CreateDbfsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDbfsWithOptions(request, runtime);
}

CreateServiceLinkedRoleResponse Alibabacloud_DBFS20200418::Client::createServiceLinkedRoleWithOptions(shared_ptr<CreateServiceLinkedRoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateServiceLinkedRole"))},
    {"version", boost::any(string("2020-04-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateServiceLinkedRoleResponse(callApi(params, req, runtime));
}

CreateServiceLinkedRoleResponse Alibabacloud_DBFS20200418::Client::createServiceLinkedRole(shared_ptr<CreateServiceLinkedRoleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createServiceLinkedRoleWithOptions(request, runtime);
}

CreateSnapshotResponse Alibabacloud_DBFS20200418::Client::createSnapshotWithOptions(shared_ptr<CreateSnapshotRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fsId)) {
    query->insert(pair<string, string>("FsId", *request->fsId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->retentionDays)) {
    query->insert(pair<string, long>("RetentionDays", *request->retentionDays));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->snapshotName)) {
    query->insert(pair<string, string>("SnapshotName", *request->snapshotName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSnapshot"))},
    {"version", boost::any(string("2020-04-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateSnapshotResponse(callApi(params, req, runtime));
}

CreateSnapshotResponse Alibabacloud_DBFS20200418::Client::createSnapshot(shared_ptr<CreateSnapshotRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSnapshotWithOptions(request, runtime);
}

DeleteDbfsResponse Alibabacloud_DBFS20200418::Client::deleteDbfsWithOptions(shared_ptr<DeleteDbfsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->fsId)) {
    query->insert(pair<string, string>("FsId", *request->fsId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDbfs"))},
    {"version", boost::any(string("2020-04-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDbfsResponse(callApi(params, req, runtime));
}

DeleteDbfsResponse Alibabacloud_DBFS20200418::Client::deleteDbfs(shared_ptr<DeleteDbfsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDbfsWithOptions(request, runtime);
}

DeleteSnapshotResponse Alibabacloud_DBFS20200418::Client::deleteSnapshotWithOptions(shared_ptr<DeleteSnapshotRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->force)) {
    query->insert(pair<string, bool>("Force", *request->force));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->snapshotId)) {
    query->insert(pair<string, string>("SnapshotId", *request->snapshotId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteSnapshot"))},
    {"version", boost::any(string("2020-04-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteSnapshotResponse(callApi(params, req, runtime));
}

DeleteSnapshotResponse Alibabacloud_DBFS20200418::Client::deleteSnapshot(shared_ptr<DeleteSnapshotRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSnapshotWithOptions(request, runtime);
}

DeleteTagsBatchResponse Alibabacloud_DBFS20200418::Client::deleteTagsBatchWithOptions(shared_ptr<DeleteTagsBatchRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dbfsList)) {
    query->insert(pair<string, string>("DbfsList", *request->dbfsList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tags)) {
    query->insert(pair<string, string>("Tags", *request->tags));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteTagsBatch"))},
    {"version", boost::any(string("2020-04-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteTagsBatchResponse(callApi(params, req, runtime));
}

DeleteTagsBatchResponse Alibabacloud_DBFS20200418::Client::deleteTagsBatch(shared_ptr<DeleteTagsBatchRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteTagsBatchWithOptions(request, runtime);
}

DescribeDbfsSpecificationsResponse Alibabacloud_DBFS20200418::Client::describeDbfsSpecificationsWithOptions(shared_ptr<DescribeDbfsSpecificationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->category)) {
    query->insert(pair<string, string>("Category", *request->category));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ecsInstanceType)) {
    query->insert(pair<string, string>("EcsInstanceType", *request->ecsInstanceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDbfsSpecifications"))},
    {"version", boost::any(string("2020-04-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDbfsSpecificationsResponse(callApi(params, req, runtime));
}

DescribeDbfsSpecificationsResponse Alibabacloud_DBFS20200418::Client::describeDbfsSpecifications(shared_ptr<DescribeDbfsSpecificationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDbfsSpecificationsWithOptions(request, runtime);
}

DescribeInstanceTypesResponse Alibabacloud_DBFS20200418::Client::describeInstanceTypesWithOptions(shared_ptr<DescribeInstanceTypesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeInstanceTypes"))},
    {"version", boost::any(string("2020-04-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeInstanceTypesResponse(callApi(params, req, runtime));
}

DescribeInstanceTypesResponse Alibabacloud_DBFS20200418::Client::describeInstanceTypes(shared_ptr<DescribeInstanceTypesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstanceTypesWithOptions(request, runtime);
}

DetachDbfsResponse Alibabacloud_DBFS20200418::Client::detachDbfsWithOptions(shared_ptr<DetachDbfsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ECSInstanceId)) {
    query->insert(pair<string, string>("ECSInstanceId", *request->ECSInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fsId)) {
    query->insert(pair<string, string>("FsId", *request->fsId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DetachDbfs"))},
    {"version", boost::any(string("2020-04-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DetachDbfsResponse(callApi(params, req, runtime));
}

DetachDbfsResponse Alibabacloud_DBFS20200418::Client::detachDbfs(shared_ptr<DetachDbfsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detachDbfsWithOptions(request, runtime);
}

GetDbfsResponse Alibabacloud_DBFS20200418::Client::getDbfsWithOptions(shared_ptr<GetDbfsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->fsId)) {
    query->insert(pair<string, string>("FsId", *request->fsId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDbfs"))},
    {"version", boost::any(string("2020-04-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDbfsResponse(callApi(params, req, runtime));
}

GetDbfsResponse Alibabacloud_DBFS20200418::Client::getDbfs(shared_ptr<GetDbfsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDbfsWithOptions(request, runtime);
}

GetServiceLinkedRoleResponse Alibabacloud_DBFS20200418::Client::getServiceLinkedRoleWithOptions(shared_ptr<GetServiceLinkedRoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetServiceLinkedRole"))},
    {"version", boost::any(string("2020-04-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetServiceLinkedRoleResponse(callApi(params, req, runtime));
}

GetServiceLinkedRoleResponse Alibabacloud_DBFS20200418::Client::getServiceLinkedRole(shared_ptr<GetServiceLinkedRoleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getServiceLinkedRoleWithOptions(request, runtime);
}

ListDbfsResponse Alibabacloud_DBFS20200418::Client::listDbfsWithOptions(shared_ptr<ListDbfsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->filterKey)) {
    query->insert(pair<string, string>("FilterKey", *request->filterKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filterValue)) {
    query->insert(pair<string, string>("FilterValue", *request->filterValue));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->sortKey)) {
    query->insert(pair<string, string>("SortKey", *request->sortKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortType)) {
    query->insert(pair<string, string>("SortType", *request->sortType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tags)) {
    query->insert(pair<string, string>("Tags", *request->tags));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDbfs"))},
    {"version", boost::any(string("2020-04-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDbfsResponse(callApi(params, req, runtime));
}

ListDbfsResponse Alibabacloud_DBFS20200418::Client::listDbfs(shared_ptr<ListDbfsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDbfsWithOptions(request, runtime);
}

ListDbfsAttachableEcsInstancesResponse Alibabacloud_DBFS20200418::Client::listDbfsAttachableEcsInstancesWithOptions(shared_ptr<ListDbfsAttachableEcsInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->filterKey)) {
    query->insert(pair<string, string>("FilterKey", *request->filterKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filterValue)) {
    query->insert(pair<string, string>("FilterValue", *request->filterValue));
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
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDbfsAttachableEcsInstances"))},
    {"version", boost::any(string("2020-04-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDbfsAttachableEcsInstancesResponse(callApi(params, req, runtime));
}

ListDbfsAttachableEcsInstancesResponse Alibabacloud_DBFS20200418::Client::listDbfsAttachableEcsInstances(shared_ptr<ListDbfsAttachableEcsInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDbfsAttachableEcsInstancesWithOptions(request, runtime);
}

ListDbfsAttachedEcsInstancesResponse Alibabacloud_DBFS20200418::Client::listDbfsAttachedEcsInstancesWithOptions(shared_ptr<ListDbfsAttachedEcsInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->fsId)) {
    query->insert(pair<string, string>("FsId", *request->fsId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDbfsAttachedEcsInstances"))},
    {"version", boost::any(string("2020-04-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDbfsAttachedEcsInstancesResponse(callApi(params, req, runtime));
}

ListDbfsAttachedEcsInstancesResponse Alibabacloud_DBFS20200418::Client::listDbfsAttachedEcsInstances(shared_ptr<ListDbfsAttachedEcsInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDbfsAttachedEcsInstancesWithOptions(request, runtime);
}

ListSnapshotResponse Alibabacloud_DBFS20200418::Client::listSnapshotWithOptions(shared_ptr<ListSnapshotRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->filterKey)) {
    query->insert(pair<string, string>("FilterKey", *request->filterKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filterValue)) {
    query->insert(pair<string, string>("FilterValue", *request->filterValue));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fsId)) {
    query->insert(pair<string, string>("FsId", *request->fsId));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->snapshotIds)) {
    query->insert(pair<string, string>("SnapshotIds", *request->snapshotIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->snapshotName)) {
    query->insert(pair<string, string>("SnapshotName", *request->snapshotName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->snapshotType)) {
    query->insert(pair<string, string>("SnapshotType", *request->snapshotType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortKey)) {
    query->insert(pair<string, string>("SortKey", *request->sortKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortType)) {
    query->insert(pair<string, string>("SortType", *request->sortType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSnapshot"))},
    {"version", boost::any(string("2020-04-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSnapshotResponse(callApi(params, req, runtime));
}

ListSnapshotResponse Alibabacloud_DBFS20200418::Client::listSnapshot(shared_ptr<ListSnapshotRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSnapshotWithOptions(request, runtime);
}

ListTagKeysResponse Alibabacloud_DBFS20200418::Client::listTagKeysWithOptions(shared_ptr<ListTagKeysRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTagKeys"))},
    {"version", boost::any(string("2020-04-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTagKeysResponse(callApi(params, req, runtime));
}

ListTagKeysResponse Alibabacloud_DBFS20200418::Client::listTagKeys(shared_ptr<ListTagKeysRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTagKeysWithOptions(request, runtime);
}

ListTagValuesResponse Alibabacloud_DBFS20200418::Client::listTagValuesWithOptions(shared_ptr<ListTagValuesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagKey)) {
    query->insert(pair<string, string>("TagKey", *request->tagKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTagValues"))},
    {"version", boost::any(string("2020-04-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTagValuesResponse(callApi(params, req, runtime));
}

ListTagValuesResponse Alibabacloud_DBFS20200418::Client::listTagValues(shared_ptr<ListTagValuesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTagValuesWithOptions(request, runtime);
}

RenameDbfsResponse Alibabacloud_DBFS20200418::Client::renameDbfsWithOptions(shared_ptr<RenameDbfsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->fsId)) {
    query->insert(pair<string, string>("FsId", *request->fsId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fsName)) {
    query->insert(pair<string, string>("FsName", *request->fsName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RenameDbfs"))},
    {"version", boost::any(string("2020-04-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RenameDbfsResponse(callApi(params, req, runtime));
}

RenameDbfsResponse Alibabacloud_DBFS20200418::Client::renameDbfs(shared_ptr<RenameDbfsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return renameDbfsWithOptions(request, runtime);
}

ResizeDbfsResponse Alibabacloud_DBFS20200418::Client::resizeDbfsWithOptions(shared_ptr<ResizeDbfsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->fsId)) {
    query->insert(pair<string, string>("FsId", *request->fsId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->newSizeG)) {
    query->insert(pair<string, long>("NewSizeG", *request->newSizeG));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ResizeDbfs"))},
    {"version", boost::any(string("2020-04-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ResizeDbfsResponse(callApi(params, req, runtime));
}

ResizeDbfsResponse Alibabacloud_DBFS20200418::Client::resizeDbfs(shared_ptr<ResizeDbfsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resizeDbfsWithOptions(request, runtime);
}

TagDbfsResponse Alibabacloud_DBFS20200418::Client::tagDbfsWithOptions(shared_ptr<TagDbfsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dbfsId)) {
    query->insert(pair<string, string>("DbfsId", *request->dbfsId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tags)) {
    query->insert(pair<string, string>("Tags", *request->tags));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TagDbfs"))},
    {"version", boost::any(string("2020-04-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TagDbfsResponse(callApi(params, req, runtime));
}

TagDbfsResponse Alibabacloud_DBFS20200418::Client::tagDbfs(shared_ptr<TagDbfsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return tagDbfsWithOptions(request, runtime);
}

UpdateDbfsResponse Alibabacloud_DBFS20200418::Client::updateDbfsWithOptions(shared_ptr<UpdateDbfsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->advancedFeatures)) {
    query->insert(pair<string, string>("AdvancedFeatures", *request->advancedFeatures));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fsId)) {
    query->insert(pair<string, string>("FsId", *request->fsId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceType)) {
    query->insert(pair<string, string>("InstanceType", *request->instanceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->usedScene)) {
    query->insert(pair<string, string>("UsedScene", *request->usedScene));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateDbfs"))},
    {"version", boost::any(string("2020-04-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateDbfsResponse(callApi(params, req, runtime));
}

UpdateDbfsResponse Alibabacloud_DBFS20200418::Client::updateDbfs(shared_ptr<UpdateDbfsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateDbfsWithOptions(request, runtime);
}

