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

