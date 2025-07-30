// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/starrocks_20221019.hpp>
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

using namespace Alibabacloud_Starrocks20221019;

Alibabacloud_Starrocks20221019::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("starrocks"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Starrocks20221019::Client::getEndpoint(shared_ptr<string> productId,
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

ChangeResourceGroupResponse Alibabacloud_Starrocks20221019::Client::changeResourceGroupWithOptions(shared_ptr<ChangeResourceGroupRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->newResourceGroupId)) {
    query->insert(pair<string, string>("NewResourceGroupId", *request->newResourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ChangeResourceGroup"))},
    {"version", boost::any(string("2022-10-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/webapi/resourceGroup/change"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ChangeResourceGroupResponse(callApi(params, req, runtime));
}

ChangeResourceGroupResponse Alibabacloud_Starrocks20221019::Client::changeResourceGroup(shared_ptr<ChangeResourceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return changeResourceGroupWithOptions(request, headers, runtime);
}

CreateInstanceV1Response Alibabacloud_Starrocks20221019::Client::createInstanceV1WithOptions(shared_ptr<CreateInstanceV1Request> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->adminPassword)) {
    body->insert(pair<string, string>("AdminPassword", *request->adminPassword));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoRenew)) {
    body->insert(pair<string, bool>("AutoRenew", *request->autoRenew));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateInstanceV1RequestBackendNodeGroups>>(request->backendNodeGroups)) {
    body->insert(pair<string, vector<CreateInstanceV1RequestBackendNodeGroups>>("BackendNodeGroups", *request->backendNodeGroups));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->duration)) {
    body->insert(pair<string, long>("Duration", *request->duration));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->encrypted)) {
    body->insert(pair<string, bool>("Encrypted", *request->encrypted));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateInstanceV1RequestFrontendNodeGroups>>(request->frontendNodeGroups)) {
    body->insert(pair<string, vector<CreateInstanceV1RequestFrontendNodeGroups>>("FrontendNodeGroups", *request->frontendNodeGroups));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceName)) {
    body->insert(pair<string, string>("InstanceName", *request->instanceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->kmsKeyId)) {
    body->insert(pair<string, string>("KmsKeyId", *request->kmsKeyId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateInstanceV1RequestObserverNodeGroups>>(request->observerNodeGroups)) {
    body->insert(pair<string, vector<CreateInstanceV1RequestObserverNodeGroups>>("ObserverNodeGroups", *request->observerNodeGroups));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossAccessingRoleName)) {
    body->insert(pair<string, string>("OssAccessingRoleName", *request->ossAccessingRoleName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->packageType)) {
    body->insert(pair<string, string>("PackageType", *request->packageType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->payType)) {
    body->insert(pair<string, string>("PayType", *request->payType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pricingCycle)) {
    body->insert(pair<string, string>("PricingCycle", *request->pricingCycle));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->promotionOptionNo)) {
    body->insert(pair<string, string>("PromotionOptionNo", *request->promotionOptionNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    body->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->runMode)) {
    body->insert(pair<string, string>("RunMode", *request->runMode));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateInstanceV1RequestTags>>(request->tags)) {
    body->insert(pair<string, vector<CreateInstanceV1RequestTags>>("Tags", *request->tags));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateInstanceV1RequestVSwitches>>(request->vSwitches)) {
    body->insert(pair<string, vector<CreateInstanceV1RequestVSwitches>>("VSwitches", *request->vSwitches));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->version)) {
    body->insert(pair<string, string>("Version", *request->version));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcId)) {
    body->insert(pair<string, string>("VpcId", *request->vpcId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->zoneId)) {
    body->insert(pair<string, string>("ZoneId", *request->zoneId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateInstanceV1"))},
    {"version", boost::any(string("2022-10-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/webapi/cluster/createV1"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateInstanceV1Response(callApi(params, req, runtime));
}

CreateInstanceV1Response Alibabacloud_Starrocks20221019::Client::createInstanceV1(shared_ptr<CreateInstanceV1Request> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createInstanceV1WithOptions(request, headers, runtime);
}

CreateServiceLinkedRoleResponse Alibabacloud_Starrocks20221019::Client::createServiceLinkedRoleWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateServiceLinkedRole"))},
    {"version", boost::any(string("2022-10-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/webapi/user/create_default_role"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateServiceLinkedRoleResponse(callApi(params, req, runtime));
}

CreateServiceLinkedRoleResponse Alibabacloud_Starrocks20221019::Client::createServiceLinkedRole() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createServiceLinkedRoleWithOptions(headers, runtime);
}

DescribeInstancesResponse Alibabacloud_Starrocks20221019::Client::describeInstancesWithOptions(shared_ptr<DescribeInstancesRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DescribeInstancesShrinkRequest> request = make_shared<DescribeInstancesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<DescribeInstancesRequestTag>>(tmpReq->tag)) {
    request->tagShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tag, make_shared<string>("Tag"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceName)) {
    query->insert(pair<string, string>("InstanceName", *request->instanceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceStatus)) {
    query->insert(pair<string, string>("InstanceStatus", *request->instanceStatus));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagShrink)) {
    query->insert(pair<string, string>("Tag", *request->tagShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeInstances"))},
    {"version", boost::any(string("2022-10-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/webapi/starrocks/describeInstances"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeInstancesResponse(callApi(params, req, runtime));
}

DescribeInstancesResponse Alibabacloud_Starrocks20221019::Client::describeInstances(shared_ptr<DescribeInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeInstancesWithOptions(request, headers, runtime);
}

ModifyCuResponse Alibabacloud_Starrocks20221019::Client::modifyCuWithOptions(shared_ptr<ModifyCuRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->fastMode)) {
    query->insert(pair<string, bool>("FastMode", *request->fastMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeGroupId)) {
    query->insert(pair<string, string>("NodeGroupId", *request->nodeGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->promotionOptionNo)) {
    query->insert(pair<string, string>("PromotionOptionNo", *request->promotionOptionNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->target)) {
    query->insert(pair<string, long>("Target", *request->target));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyCu"))},
    {"version", boost::any(string("2022-10-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/webapi/resourceChange/modifyCu"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyCuResponse(callApi(params, req, runtime));
}

ModifyCuResponse Alibabacloud_Starrocks20221019::Client::modifyCu(shared_ptr<ModifyCuRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return modifyCuWithOptions(request, headers, runtime);
}

ModifyCuPreCheckResponse Alibabacloud_Starrocks20221019::Client::modifyCuPreCheckWithOptions(shared_ptr<ModifyCuPreCheckRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeGroupId)) {
    query->insert(pair<string, string>("NodeGroupId", *request->nodeGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->target)) {
    query->insert(pair<string, long>("Target", *request->target));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyCuPreCheck"))},
    {"version", boost::any(string("2022-10-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/webapi/resourceChange/modifyCuPreCheck"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyCuPreCheckResponse(callApi(params, req, runtime));
}

ModifyCuPreCheckResponse Alibabacloud_Starrocks20221019::Client::modifyCuPreCheck(shared_ptr<ModifyCuPreCheckRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return modifyCuPreCheckWithOptions(request, headers, runtime);
}

ModifyDiskNumberResponse Alibabacloud_Starrocks20221019::Client::modifyDiskNumberWithOptions(shared_ptr<ModifyDiskNumberRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->fastMode)) {
    query->insert(pair<string, bool>("FastMode", *request->fastMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeGroupId)) {
    query->insert(pair<string, string>("NodeGroupId", *request->nodeGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->promotionOptionNo)) {
    query->insert(pair<string, string>("PromotionOptionNo", *request->promotionOptionNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->target)) {
    query->insert(pair<string, long>("Target", *request->target));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDiskNumber"))},
    {"version", boost::any(string("2022-10-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/webapi/resourceChange/modifyDiskNumber"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyDiskNumberResponse(callApi(params, req, runtime));
}

ModifyDiskNumberResponse Alibabacloud_Starrocks20221019::Client::modifyDiskNumber(shared_ptr<ModifyDiskNumberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return modifyDiskNumberWithOptions(request, headers, runtime);
}

ModifyDiskPerformanceLevelResponse Alibabacloud_Starrocks20221019::Client::modifyDiskPerformanceLevelWithOptions(shared_ptr<ModifyDiskPerformanceLevelRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeGroupId)) {
    query->insert(pair<string, string>("NodeGroupId", *request->nodeGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->promotionOptionNo)) {
    query->insert(pair<string, string>("PromotionOptionNo", *request->promotionOptionNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->target)) {
    query->insert(pair<string, string>("Target", *request->target));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDiskPerformanceLevel"))},
    {"version", boost::any(string("2022-10-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/webapi/resourceChange/modifyDiskPerformanceLevel"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyDiskPerformanceLevelResponse(callApi(params, req, runtime));
}

ModifyDiskPerformanceLevelResponse Alibabacloud_Starrocks20221019::Client::modifyDiskPerformanceLevel(shared_ptr<ModifyDiskPerformanceLevelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return modifyDiskPerformanceLevelWithOptions(request, headers, runtime);
}

ModifyDiskSizeResponse Alibabacloud_Starrocks20221019::Client::modifyDiskSizeWithOptions(shared_ptr<ModifyDiskSizeRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeGroupId)) {
    query->insert(pair<string, string>("NodeGroupId", *request->nodeGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->promotionOptionNo)) {
    query->insert(pair<string, string>("PromotionOptionNo", *request->promotionOptionNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->target)) {
    query->insert(pair<string, long>("Target", *request->target));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDiskSize"))},
    {"version", boost::any(string("2022-10-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/webapi/resourceChange/modifyDiskSize"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyDiskSizeResponse(callApi(params, req, runtime));
}

ModifyDiskSizeResponse Alibabacloud_Starrocks20221019::Client::modifyDiskSize(shared_ptr<ModifyDiskSizeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return modifyDiskSizeWithOptions(request, headers, runtime);
}

ModifyNodeNumberResponse Alibabacloud_Starrocks20221019::Client::modifyNodeNumberWithOptions(shared_ptr<ModifyNodeNumberRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeGroupId)) {
    query->insert(pair<string, string>("NodeGroupId", *request->nodeGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->promotionOptionNo)) {
    query->insert(pair<string, string>("PromotionOptionNo", *request->promotionOptionNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->target)) {
    query->insert(pair<string, long>("Target", *request->target));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyNodeNumber"))},
    {"version", boost::any(string("2022-10-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/webapi/resourceChange/modifyNodeNumber"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyNodeNumberResponse(callApi(params, req, runtime));
}

ModifyNodeNumberResponse Alibabacloud_Starrocks20221019::Client::modifyNodeNumber(shared_ptr<ModifyNodeNumberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return modifyNodeNumberWithOptions(request, headers, runtime);
}

ModifyNodeNumberPreCheckResponse Alibabacloud_Starrocks20221019::Client::modifyNodeNumberPreCheckWithOptions(shared_ptr<ModifyNodeNumberPreCheckRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeGroupId)) {
    query->insert(pair<string, string>("NodeGroupId", *request->nodeGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->target)) {
    query->insert(pair<string, long>("Target", *request->target));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyNodeNumberPreCheck"))},
    {"version", boost::any(string("2022-10-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/webapi/resourceChange/modifyNodeNumberPreCheck"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyNodeNumberPreCheckResponse(callApi(params, req, runtime));
}

ModifyNodeNumberPreCheckResponse Alibabacloud_Starrocks20221019::Client::modifyNodeNumberPreCheck(shared_ptr<ModifyNodeNumberPreCheckRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return modifyNodeNumberPreCheckWithOptions(request, headers, runtime);
}

QueryUpgradableVersionsResponse Alibabacloud_Starrocks20221019::Client::queryUpgradableVersionsWithOptions(shared_ptr<QueryUpgradableVersionsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->minor)) {
    query->insert(pair<string, bool>("Minor", *request->minor));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryUpgradableVersions"))},
    {"version", boost::any(string("2022-10-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/webapi/starrocks/queryUpgradableVersions"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryUpgradableVersionsResponse(callApi(params, req, runtime));
}

QueryUpgradableVersionsResponse Alibabacloud_Starrocks20221019::Client::queryUpgradableVersions(shared_ptr<QueryUpgradableVersionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return queryUpgradableVersionsWithOptions(request, headers, runtime);
}

ReleaseInstanceResponse Alibabacloud_Starrocks20221019::Client::releaseInstanceWithOptions(shared_ptr<ReleaseInstanceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReleaseInstance"))},
    {"version", boost::any(string("2022-10-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/webapi/cluster/release"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ReleaseInstanceResponse(callApi(params, req, runtime));
}

ReleaseInstanceResponse Alibabacloud_Starrocks20221019::Client::releaseInstance(shared_ptr<ReleaseInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return releaseInstanceWithOptions(request, headers, runtime);
}

RestartInstanceResponse Alibabacloud_Starrocks20221019::Client::restartInstanceWithOptions(shared_ptr<RestartInstanceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->fastMode)) {
    query->insert(pair<string, bool>("FastMode", *request->fastMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RestartInstance"))},
    {"version", boost::any(string("2022-10-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/webapi/starrocks/restartCluster"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RestartInstanceResponse(callApi(params, req, runtime));
}

RestartInstanceResponse Alibabacloud_Starrocks20221019::Client::restartInstance(shared_ptr<RestartInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return restartInstanceWithOptions(request, headers, runtime);
}

TagResourcesResponse Alibabacloud_Starrocks20221019::Client::tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceId)) {
    body->insert(pair<string, vector<string>>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    body->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<TagResourcesRequestTag>>(request->tag)) {
    body->insert(pair<string, vector<TagResourcesRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TagResources"))},
    {"version", boost::any(string("2022-10-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/webapi/tags"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TagResourcesResponse(callApi(params, req, runtime));
}

TagResourcesResponse Alibabacloud_Starrocks20221019::Client::tagResources(shared_ptr<TagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return tagResourcesWithOptions(request, headers, runtime);
}

UnTagResourcesResponse Alibabacloud_Starrocks20221019::Client::unTagResourcesWithOptions(shared_ptr<UnTagResourcesRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UnTagResourcesShrinkRequest> request = make_shared<UnTagResourcesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->resourceId)) {
    request->resourceIdShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->resourceId, make_shared<string>("ResourceId"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->tagKey)) {
    request->tagKeyShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tagKey, make_shared<string>("TagKey"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->all)) {
    query->insert(pair<string, bool>("All", *request->all));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceIdShrink)) {
    query->insert(pair<string, string>("ResourceId", *request->resourceIdShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagKeyShrink)) {
    query->insert(pair<string, string>("TagKey", *request->tagKeyShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UnTagResources"))},
    {"version", boost::any(string("2022-10-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/webapi/tags"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UnTagResourcesResponse(callApi(params, req, runtime));
}

UnTagResourcesResponse Alibabacloud_Starrocks20221019::Client::unTagResources(shared_ptr<UnTagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return unTagResourcesWithOptions(request, headers, runtime);
}

UpdateInstanceNameResponse Alibabacloud_Starrocks20221019::Client::updateInstanceNameWithOptions(shared_ptr<UpdateInstanceNameRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterName)) {
    query->insert(pair<string, string>("ClusterName", *request->clusterName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateInstanceName"))},
    {"version", boost::any(string("2022-10-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/webapi/cluster/update_name"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateInstanceNameResponse(callApi(params, req, runtime));
}

UpdateInstanceNameResponse Alibabacloud_Starrocks20221019::Client::updateInstanceName(shared_ptr<UpdateInstanceNameRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateInstanceNameWithOptions(request, headers, runtime);
}

UpgradeVersionResponse Alibabacloud_Starrocks20221019::Client::upgradeVersionWithOptions(shared_ptr<UpgradeVersionRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->fastMode)) {
    query->insert(pair<string, bool>("FastMode", *request->fastMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->minor)) {
    query->insert(pair<string, bool>("Minor", *request->minor));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetVersion)) {
    query->insert(pair<string, string>("TargetVersion", *request->targetVersion));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpgradeVersion"))},
    {"version", boost::any(string("2022-10-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/webapi/starrocks/upgradeVersion"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpgradeVersionResponse(callApi(params, req, runtime));
}

UpgradeVersionResponse Alibabacloud_Starrocks20221019::Client::upgradeVersion(shared_ptr<UpgradeVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return upgradeVersionWithOptions(request, headers, runtime);
}

