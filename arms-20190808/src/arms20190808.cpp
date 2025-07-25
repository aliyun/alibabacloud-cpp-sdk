// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/arms20190808.hpp>
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

using namespace Alibabacloud_ARMS20190808;

Alibabacloud_ARMS20190808::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _signatureAlgorithm = make_shared<string>("v2");
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"ap-northeast-2-pop", "arms.aliyuncs.com"},
    {"cn-beijing-finance-1", "arms.aliyuncs.com"},
    {"cn-beijing-finance-pop", "arms.aliyuncs.com"},
    {"cn-beijing-gov-1", "arms.aliyuncs.com"},
    {"cn-beijing-nu16-b01", "arms.aliyuncs.com"},
    {"cn-edge-1", "arms.aliyuncs.com"},
    {"cn-fujian", "arms.aliyuncs.com"},
    {"cn-haidian-cm12-c01", "arms.aliyuncs.com"},
    {"cn-hangzhou-bj-b01", "arms.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1", "arms.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1", "arms.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2", "arms.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3", "arms.aliyuncs.com"},
    {"cn-hangzhou-test-306", "arms.aliyuncs.com"},
    {"cn-hongkong-finance-pop", "arms.aliyuncs.com"},
    {"cn-huhehaote-nebula-1", "arms.aliyuncs.com"},
    {"cn-qingdao-nebula", "arms.aliyuncs.com"},
    {"cn-shanghai-et15-b01", "arms.aliyuncs.com"},
    {"cn-shanghai-et2-b01", "arms.aliyuncs.com"},
    {"cn-shanghai-inner", "arms.aliyuncs.com"},
    {"cn-shanghai-internal-test-1", "arms.aliyuncs.com"},
    {"cn-shenzhen-inner", "arms.aliyuncs.com"},
    {"cn-shenzhen-st4-d01", "arms.aliyuncs.com"},
    {"cn-shenzhen-su18-b01", "arms.aliyuncs.com"},
    {"cn-wuhan", "arms.aliyuncs.com"},
    {"cn-yushanfang", "arms.aliyuncs.com"},
    {"cn-zhangbei", "arms.aliyuncs.com"},
    {"cn-zhangbei-na61-b01", "arms.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01", "arms.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1", "arms.aliyuncs.com"},
    {"eu-west-1-oxs", "arms.aliyuncs.com"},
    {"me-east-1", "arms.aliyuncs.com"},
    {"rus-west-1-pop", "arms.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("arms"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_ARMS20190808::Client::getEndpoint(shared_ptr<string> productId,
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

AddAliClusterIdsToPrometheusGlobalViewResponse Alibabacloud_ARMS20190808::Client::addAliClusterIdsToPrometheusGlobalViewWithOptions(shared_ptr<AddAliClusterIdsToPrometheusGlobalViewRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterIds)) {
    query->insert(pair<string, string>("ClusterIds", *request->clusterIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->globalViewClusterId)) {
    query->insert(pair<string, string>("GlobalViewClusterId", *request->globalViewClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    query->insert(pair<string, string>("GroupName", *request->groupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddAliClusterIdsToPrometheusGlobalView"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddAliClusterIdsToPrometheusGlobalViewResponse(callApi(params, req, runtime));
}

AddAliClusterIdsToPrometheusGlobalViewResponse Alibabacloud_ARMS20190808::Client::addAliClusterIdsToPrometheusGlobalView(shared_ptr<AddAliClusterIdsToPrometheusGlobalViewRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addAliClusterIdsToPrometheusGlobalViewWithOptions(request, runtime);
}

AddGrafanaResponse Alibabacloud_ARMS20190808::Client::addGrafanaWithOptions(shared_ptr<AddGrafanaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->integration)) {
    query->insert(pair<string, string>("Integration", *request->integration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddGrafana"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddGrafanaResponse(callApi(params, req, runtime));
}

AddGrafanaResponse Alibabacloud_ARMS20190808::Client::addGrafana(shared_ptr<AddGrafanaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addGrafanaWithOptions(request, runtime);
}

AddIntegrationResponse Alibabacloud_ARMS20190808::Client::addIntegrationWithOptions(shared_ptr<AddIntegrationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->integration)) {
    query->insert(pair<string, string>("Integration", *request->integration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddIntegration"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddIntegrationResponse(callApi(params, req, runtime));
}

AddIntegrationResponse Alibabacloud_ARMS20190808::Client::addIntegration(shared_ptr<AddIntegrationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addIntegrationWithOptions(request, runtime);
}

AddPrometheusGlobalViewResponse Alibabacloud_ARMS20190808::Client::addPrometheusGlobalViewWithOptions(shared_ptr<AddPrometheusGlobalViewRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusters)) {
    query->insert(pair<string, string>("Clusters", *request->clusters));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    query->insert(pair<string, string>("GroupName", *request->groupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<AddPrometheusGlobalViewRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<AddPrometheusGlobalViewRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddPrometheusGlobalView"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddPrometheusGlobalViewResponse(callApi(params, req, runtime));
}

AddPrometheusGlobalViewResponse Alibabacloud_ARMS20190808::Client::addPrometheusGlobalView(shared_ptr<AddPrometheusGlobalViewRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addPrometheusGlobalViewWithOptions(request, runtime);
}

AddPrometheusGlobalViewByAliClusterIdsResponse Alibabacloud_ARMS20190808::Client::addPrometheusGlobalViewByAliClusterIdsWithOptions(shared_ptr<AddPrometheusGlobalViewByAliClusterIdsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterIds)) {
    query->insert(pair<string, string>("ClusterIds", *request->clusterIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    query->insert(pair<string, string>("GroupName", *request->groupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    query->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddPrometheusGlobalViewByAliClusterIds"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddPrometheusGlobalViewByAliClusterIdsResponse(callApi(params, req, runtime));
}

AddPrometheusGlobalViewByAliClusterIdsResponse Alibabacloud_ARMS20190808::Client::addPrometheusGlobalViewByAliClusterIds(shared_ptr<AddPrometheusGlobalViewByAliClusterIdsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addPrometheusGlobalViewByAliClusterIdsWithOptions(request, runtime);
}

AddPrometheusInstanceResponse Alibabacloud_ARMS20190808::Client::addPrometheusInstanceWithOptions(shared_ptr<AddPrometheusInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddPrometheusInstance"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddPrometheusInstanceResponse(callApi(params, req, runtime));
}

AddPrometheusInstanceResponse Alibabacloud_ARMS20190808::Client::addPrometheusInstance(shared_ptr<AddPrometheusInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addPrometheusInstanceWithOptions(request, runtime);
}

AddPrometheusIntegrationResponse Alibabacloud_ARMS20190808::Client::addPrometheusIntegrationWithOptions(shared_ptr<AddPrometheusIntegrationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->integrationType)) {
    query->insert(pair<string, string>("IntegrationType", *request->integrationType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->param)) {
    query->insert(pair<string, string>("Param", *request->param));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddPrometheusIntegration"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddPrometheusIntegrationResponse(callApi(params, req, runtime));
}

AddPrometheusIntegrationResponse Alibabacloud_ARMS20190808::Client::addPrometheusIntegration(shared_ptr<AddPrometheusIntegrationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addPrometheusIntegrationWithOptions(request, runtime);
}

AddRecordingRuleResponse Alibabacloud_ARMS20190808::Client::addRecordingRuleWithOptions(shared_ptr<AddRecordingRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleYaml)) {
    query->insert(pair<string, string>("RuleYaml", *request->ruleYaml));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddRecordingRule"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddRecordingRuleResponse(callApi(params, req, runtime));
}

AddRecordingRuleResponse Alibabacloud_ARMS20190808::Client::addRecordingRule(shared_ptr<AddRecordingRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addRecordingRuleWithOptions(request, runtime);
}

AddTagToFlinkClusterResponse Alibabacloud_ARMS20190808::Client::addTagToFlinkClusterWithOptions(shared_ptr<AddTagToFlinkClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->flinkWorkSpaceId)) {
    query->insert(pair<string, string>("FlinkWorkSpaceId", *request->flinkWorkSpaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->flinkWorkSpaceName)) {
    query->insert(pair<string, string>("FlinkWorkSpaceName", *request->flinkWorkSpaceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetUserId)) {
    query->insert(pair<string, string>("TargetUserId", *request->targetUserId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddTagToFlinkCluster"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddTagToFlinkClusterResponse(callApi(params, req, runtime));
}

AddTagToFlinkClusterResponse Alibabacloud_ARMS20190808::Client::addTagToFlinkCluster(shared_ptr<AddTagToFlinkClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addTagToFlinkClusterWithOptions(request, runtime);
}

AppendInstancesToPrometheusGlobalViewResponse Alibabacloud_ARMS20190808::Client::appendInstancesToPrometheusGlobalViewWithOptions(shared_ptr<AppendInstancesToPrometheusGlobalViewRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusters)) {
    query->insert(pair<string, string>("Clusters", *request->clusters));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->globalViewClusterId)) {
    query->insert(pair<string, string>("GlobalViewClusterId", *request->globalViewClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    query->insert(pair<string, string>("GroupName", *request->groupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AppendInstancesToPrometheusGlobalView"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AppendInstancesToPrometheusGlobalViewResponse(callApi(params, req, runtime));
}

AppendInstancesToPrometheusGlobalViewResponse Alibabacloud_ARMS20190808::Client::appendInstancesToPrometheusGlobalView(shared_ptr<AppendInstancesToPrometheusGlobalViewRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return appendInstancesToPrometheusGlobalViewWithOptions(request, runtime);
}

ApplyScenarioResponse Alibabacloud_ARMS20190808::Client::applyScenarioWithOptions(shared_ptr<ApplyScenarioRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ApplyScenarioShrinkRequest> request = make_shared<ApplyScenarioShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->config)) {
    request->configShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->config, make_shared<string>("Config"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->configShrink)) {
    query->insert(pair<string, string>("Config", *request->configShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scenario)) {
    query->insert(pair<string, string>("Scenario", *request->scenario));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sign)) {
    query->insert(pair<string, string>("Sign", *request->sign));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->snDump)) {
    query->insert(pair<string, bool>("SnDump", *request->snDump));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->snForce)) {
    query->insert(pair<string, bool>("SnForce", *request->snForce));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->snStat)) {
    query->insert(pair<string, bool>("SnStat", *request->snStat));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->snTransfer)) {
    query->insert(pair<string, bool>("SnTransfer", *request->snTransfer));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->updateOption)) {
    query->insert(pair<string, bool>("UpdateOption", *request->updateOption));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ApplyScenario"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ApplyScenarioResponse(callApi(params, req, runtime));
}

ApplyScenarioResponse Alibabacloud_ARMS20190808::Client::applyScenario(shared_ptr<ApplyScenarioRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return applyScenarioWithOptions(request, runtime);
}

BindPrometheusGrafanaInstanceResponse Alibabacloud_ARMS20190808::Client::bindPrometheusGrafanaInstanceWithOptions(shared_ptr<BindPrometheusGrafanaInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->grafanaInstanceId)) {
    query->insert(pair<string, string>("GrafanaInstanceId", *request->grafanaInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BindPrometheusGrafanaInstance"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BindPrometheusGrafanaInstanceResponse(callApi(params, req, runtime));
}

BindPrometheusGrafanaInstanceResponse Alibabacloud_ARMS20190808::Client::bindPrometheusGrafanaInstance(shared_ptr<BindPrometheusGrafanaInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return bindPrometheusGrafanaInstanceWithOptions(request, runtime);
}

BlockAlarmNotificationResponse Alibabacloud_ARMS20190808::Client::blockAlarmNotificationWithOptions(shared_ptr<BlockAlarmNotificationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->alarmId)) {
    query->insert(pair<string, long>("AlarmId", *request->alarmId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->handlerId)) {
    query->insert(pair<string, long>("HandlerId", *request->handlerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->timeout)) {
    query->insert(pair<string, long>("Timeout", *request->timeout));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BlockAlarmNotification"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BlockAlarmNotificationResponse(callApi(params, req, runtime));
}

BlockAlarmNotificationResponse Alibabacloud_ARMS20190808::Client::blockAlarmNotification(shared_ptr<BlockAlarmNotificationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return blockAlarmNotificationWithOptions(request, runtime);
}

ChangeAlarmSeverityResponse Alibabacloud_ARMS20190808::Client::changeAlarmSeverityWithOptions(shared_ptr<ChangeAlarmSeverityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->alarmId)) {
    query->insert(pair<string, long>("AlarmId", *request->alarmId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->handlerId)) {
    query->insert(pair<string, long>("HandlerId", *request->handlerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->severity)) {
    query->insert(pair<string, string>("Severity", *request->severity));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ChangeAlarmSeverity"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ChangeAlarmSeverityResponse(callApi(params, req, runtime));
}

ChangeAlarmSeverityResponse Alibabacloud_ARMS20190808::Client::changeAlarmSeverity(shared_ptr<ChangeAlarmSeverityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return changeAlarmSeverityWithOptions(request, runtime);
}

ChangeResourceGroupResponse Alibabacloud_ARMS20190808::Client::changeResourceGroupWithOptions(shared_ptr<ChangeResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->newResourceGroupId)) {
    query->insert(pair<string, string>("NewResourceGroupId", *request->newResourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceId)) {
    query->insert(pair<string, string>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ChangeResourceGroup"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ChangeResourceGroupResponse(callApi(params, req, runtime));
}

ChangeResourceGroupResponse Alibabacloud_ARMS20190808::Client::changeResourceGroup(shared_ptr<ChangeResourceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return changeResourceGroupWithOptions(request, runtime);
}

CheckCommercialStatusResponse Alibabacloud_ARMS20190808::Client::checkCommercialStatusWithOptions(shared_ptr<CheckCommercialStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckCommercialStatus"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CheckCommercialStatusResponse(callApi(params, req, runtime));
}

CheckCommercialStatusResponse Alibabacloud_ARMS20190808::Client::checkCommercialStatus(shared_ptr<CheckCommercialStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkCommercialStatusWithOptions(request, runtime);
}

CheckServiceStatusResponse Alibabacloud_ARMS20190808::Client::checkServiceStatusWithOptions(shared_ptr<CheckServiceStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->svcCode)) {
    query->insert(pair<string, string>("SvcCode", *request->svcCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckServiceStatus"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CheckServiceStatusResponse(callApi(params, req, runtime));
}

CheckServiceStatusResponse Alibabacloud_ARMS20190808::Client::checkServiceStatus(shared_ptr<CheckServiceStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkServiceStatusWithOptions(request, runtime);
}

ClaimAlarmResponse Alibabacloud_ARMS20190808::Client::claimAlarmWithOptions(shared_ptr<ClaimAlarmRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->alarmId)) {
    query->insert(pair<string, long>("AlarmId", *request->alarmId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->handlerId)) {
    query->insert(pair<string, long>("HandlerId", *request->handlerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ClaimAlarm"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ClaimAlarmResponse(callApi(params, req, runtime));
}

ClaimAlarmResponse Alibabacloud_ARMS20190808::Client::claimAlarm(shared_ptr<ClaimAlarmRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return claimAlarmWithOptions(request, runtime);
}

CloseAlarmResponse Alibabacloud_ARMS20190808::Client::closeAlarmWithOptions(shared_ptr<CloseAlarmRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->alarmId)) {
    query->insert(pair<string, long>("AlarmId", *request->alarmId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->handlerId)) {
    query->insert(pair<string, long>("HandlerId", *request->handlerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->solution)) {
    query->insert(pair<string, string>("Solution", *request->solution));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CloseAlarm"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CloseAlarmResponse(callApi(params, req, runtime));
}

CloseAlarmResponse Alibabacloud_ARMS20190808::Client::closeAlarm(shared_ptr<CloseAlarmRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return closeAlarmWithOptions(request, runtime);
}

ConfigAppResponse Alibabacloud_ARMS20190808::Client::configAppWithOptions(shared_ptr<ConfigAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appIds)) {
    query->insert(pair<string, string>("AppIds", *request->appIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->enable)) {
    query->insert(pair<string, string>("Enable", *request->enable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ConfigApp"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ConfigAppResponse(callApi(params, req, runtime));
}

ConfigAppResponse Alibabacloud_ARMS20190808::Client::configApp(shared_ptr<ConfigAppRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return configAppWithOptions(request, runtime);
}

CreateAlertContactResponse Alibabacloud_ARMS20190808::Client::createAlertContactWithOptions(shared_ptr<CreateAlertContactRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->contactName)) {
    query->insert(pair<string, string>("ContactName", *request->contactName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dingRobotWebhookUrl)) {
    query->insert(pair<string, string>("DingRobotWebhookUrl", *request->dingRobotWebhookUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->email)) {
    query->insert(pair<string, string>("Email", *request->email));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phoneNum)) {
    query->insert(pair<string, string>("PhoneNum", *request->phoneNum));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->systemNoc)) {
    query->insert(pair<string, bool>("SystemNoc", *request->systemNoc));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAlertContact"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateAlertContactResponse(callApi(params, req, runtime));
}

CreateAlertContactResponse Alibabacloud_ARMS20190808::Client::createAlertContact(shared_ptr<CreateAlertContactRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAlertContactWithOptions(request, runtime);
}

CreateAlertContactGroupResponse Alibabacloud_ARMS20190808::Client::createAlertContactGroupWithOptions(shared_ptr<CreateAlertContactGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->contactGroupName)) {
    query->insert(pair<string, string>("ContactGroupName", *request->contactGroupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contactIds)) {
    query->insert(pair<string, string>("ContactIds", *request->contactIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAlertContactGroup"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateAlertContactGroupResponse(callApi(params, req, runtime));
}

CreateAlertContactGroupResponse Alibabacloud_ARMS20190808::Client::createAlertContactGroup(shared_ptr<CreateAlertContactGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAlertContactGroupWithOptions(request, runtime);
}

CreateDispatchRuleResponse Alibabacloud_ARMS20190808::Client::createDispatchRuleWithOptions(shared_ptr<CreateDispatchRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dispatchRule)) {
    query->insert(pair<string, string>("DispatchRule", *request->dispatchRule));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDispatchRule"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDispatchRuleResponse(callApi(params, req, runtime));
}

CreateDispatchRuleResponse Alibabacloud_ARMS20190808::Client::createDispatchRule(shared_ptr<CreateDispatchRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDispatchRuleWithOptions(request, runtime);
}

CreateEnvCustomJobResponse Alibabacloud_ARMS20190808::Client::createEnvCustomJobWithOptions(shared_ptr<CreateEnvCustomJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aliyunLang)) {
    query->insert(pair<string, string>("AliyunLang", *request->aliyunLang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->customJobName)) {
    query->insert(pair<string, string>("CustomJobName", *request->customJobName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->environmentId)) {
    query->insert(pair<string, string>("EnvironmentId", *request->environmentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->configYaml)) {
    body->insert(pair<string, string>("ConfigYaml", *request->configYaml));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateEnvCustomJob"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateEnvCustomJobResponse(callApi(params, req, runtime));
}

CreateEnvCustomJobResponse Alibabacloud_ARMS20190808::Client::createEnvCustomJob(shared_ptr<CreateEnvCustomJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createEnvCustomJobWithOptions(request, runtime);
}

CreateEnvPodMonitorResponse Alibabacloud_ARMS20190808::Client::createEnvPodMonitorWithOptions(shared_ptr<CreateEnvPodMonitorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aliyunLang)) {
    query->insert(pair<string, string>("AliyunLang", *request->aliyunLang));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->environmentId)) {
    query->insert(pair<string, string>("EnvironmentId", *request->environmentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->configYaml)) {
    body->insert(pair<string, string>("ConfigYaml", *request->configYaml));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateEnvPodMonitor"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateEnvPodMonitorResponse(callApi(params, req, runtime));
}

CreateEnvPodMonitorResponse Alibabacloud_ARMS20190808::Client::createEnvPodMonitor(shared_ptr<CreateEnvPodMonitorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createEnvPodMonitorWithOptions(request, runtime);
}

CreateEnvServiceMonitorResponse Alibabacloud_ARMS20190808::Client::createEnvServiceMonitorWithOptions(shared_ptr<CreateEnvServiceMonitorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aliyunLang)) {
    query->insert(pair<string, string>("AliyunLang", *request->aliyunLang));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->environmentId)) {
    query->insert(pair<string, string>("EnvironmentId", *request->environmentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->configYaml)) {
    body->insert(pair<string, string>("ConfigYaml", *request->configYaml));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateEnvServiceMonitor"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateEnvServiceMonitorResponse(callApi(params, req, runtime));
}

CreateEnvServiceMonitorResponse Alibabacloud_ARMS20190808::Client::createEnvServiceMonitor(shared_ptr<CreateEnvServiceMonitorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createEnvServiceMonitorWithOptions(request, runtime);
}

CreateEnvironmentResponse Alibabacloud_ARMS20190808::Client::createEnvironmentWithOptions(shared_ptr<CreateEnvironmentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aliyunLang)) {
    query->insert(pair<string, string>("AliyunLang", *request->aliyunLang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bindResourceId)) {
    query->insert(pair<string, string>("BindResourceId", *request->bindResourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->environmentName)) {
    query->insert(pair<string, string>("EnvironmentName", *request->environmentName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->environmentSubType)) {
    query->insert(pair<string, string>("EnvironmentSubType", *request->environmentSubType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->environmentType)) {
    query->insert(pair<string, string>("EnvironmentType", *request->environmentType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->feePackage)) {
    query->insert(pair<string, string>("FeePackage", *request->feePackage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->grafanaWorkspaceId)) {
    query->insert(pair<string, string>("GrafanaWorkspaceId", *request->grafanaWorkspaceId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->initEnvironment)) {
    query->insert(pair<string, bool>("InitEnvironment", *request->initEnvironment));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->managedType)) {
    query->insert(pair<string, string>("ManagedType", *request->managedType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prometheusInstanceId)) {
    query->insert(pair<string, string>("PrometheusInstanceId", *request->prometheusInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateEnvironmentRequestTags>>(request->tags)) {
    query->insert(pair<string, vector<CreateEnvironmentRequestTags>>("Tags", *request->tags));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateEnvironment"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateEnvironmentResponse(callApi(params, req, runtime));
}

CreateEnvironmentResponse Alibabacloud_ARMS20190808::Client::createEnvironment(shared_ptr<CreateEnvironmentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createEnvironmentWithOptions(request, runtime);
}

CreateGrafanaWorkspaceResponse Alibabacloud_ARMS20190808::Client::createGrafanaWorkspaceWithOptions(shared_ptr<CreateGrafanaWorkspaceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateGrafanaWorkspaceShrinkRequest> request = make_shared<CreateGrafanaWorkspaceShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<CreateGrafanaWorkspaceRequestTags>>(tmpReq->tags)) {
    request->tagsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tags, make_shared<string>("Tags"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountNumber)) {
    query->insert(pair<string, string>("AccountNumber", *request->accountNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->aliyunLang)) {
    query->insert(pair<string, string>("AliyunLang", *request->aliyunLang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->autoRenew)) {
    query->insert(pair<string, string>("AutoRenew", *request->autoRenew));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->customAccountNumber)) {
    query->insert(pair<string, string>("CustomAccountNumber", *request->customAccountNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->duration)) {
    query->insert(pair<string, string>("Duration", *request->duration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->grafanaVersion)) {
    query->insert(pair<string, string>("GrafanaVersion", *request->grafanaVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->grafanaWorkspaceEdition)) {
    query->insert(pair<string, string>("GrafanaWorkspaceEdition", *request->grafanaWorkspaceEdition));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->grafanaWorkspaceName)) {
    query->insert(pair<string, string>("GrafanaWorkspaceName", *request->grafanaWorkspaceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->password)) {
    query->insert(pair<string, string>("Password", *request->password));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pricingCycle)) {
    query->insert(pair<string, string>("PricingCycle", *request->pricingCycle));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagsShrink)) {
    query->insert(pair<string, string>("Tags", *request->tagsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateGrafanaWorkspace"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateGrafanaWorkspaceResponse(callApi(params, req, runtime));
}

CreateGrafanaWorkspaceResponse Alibabacloud_ARMS20190808::Client::createGrafanaWorkspace(shared_ptr<CreateGrafanaWorkspaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createGrafanaWorkspaceWithOptions(request, runtime);
}

CreateIntegrationResponse Alibabacloud_ARMS20190808::Client::createIntegrationWithOptions(shared_ptr<CreateIntegrationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoRecover)) {
    body->insert(pair<string, bool>("AutoRecover", *request->autoRecover));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->integrationName)) {
    body->insert(pair<string, string>("IntegrationName", *request->integrationName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->integrationProductType)) {
    body->insert(pair<string, string>("IntegrationProductType", *request->integrationProductType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->recoverTime)) {
    body->insert(pair<string, long>("RecoverTime", *request->recoverTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateIntegration"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateIntegrationResponse(callApi(params, req, runtime));
}

CreateIntegrationResponse Alibabacloud_ARMS20190808::Client::createIntegration(shared_ptr<CreateIntegrationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createIntegrationWithOptions(request, runtime);
}

CreateOrUpdateAlertRuleResponse Alibabacloud_ARMS20190808::Client::createOrUpdateAlertRuleWithOptions(shared_ptr<CreateOrUpdateAlertRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->alertCheckType)) {
    body->insert(pair<string, string>("AlertCheckType", *request->alertCheckType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->alertGroup)) {
    body->insert(pair<string, long>("AlertGroup", *request->alertGroup));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->alertId)) {
    body->insert(pair<string, long>("AlertId", *request->alertId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->alertName)) {
    body->insert(pair<string, string>("AlertName", *request->alertName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->alertPiplines)) {
    body->insert(pair<string, string>("AlertPiplines", *request->alertPiplines));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->alertRuleContent)) {
    body->insert(pair<string, string>("AlertRuleContent", *request->alertRuleContent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->alertStatus)) {
    body->insert(pair<string, string>("AlertStatus", *request->alertStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->alertType)) {
    body->insert(pair<string, string>("AlertType", *request->alertType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->annotations)) {
    body->insert(pair<string, string>("Annotations", *request->annotations));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoAddNewApplication)) {
    body->insert(pair<string, bool>("AutoAddNewApplication", *request->autoAddNewApplication));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->autoAddTargetConfig)) {
    body->insert(pair<string, string>("AutoAddTargetConfig", *request->autoAddTargetConfig));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->checkCycle)) {
    body->insert(pair<string, long>("CheckCycle", *request->checkCycle));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    body->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataConfig)) {
    body->insert(pair<string, string>("DataConfig", *request->dataConfig));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->duration)) {
    body->insert(pair<string, long>("Duration", *request->duration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filters)) {
    body->insert(pair<string, string>("Filters", *request->filters));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->labels)) {
    body->insert(pair<string, string>("Labels", *request->labels));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->level)) {
    body->insert(pair<string, string>("Level", *request->level));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateOrUpdateAlertRuleRequestMarkTags>>(request->markTags)) {
    body->insert(pair<string, vector<CreateOrUpdateAlertRuleRequestMarkTags>>("MarkTags", *request->markTags));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->message)) {
    body->insert(pair<string, string>("Message", *request->message));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->metricsKey)) {
    body->insert(pair<string, string>("MetricsKey", *request->metricsKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->metricsType)) {
    body->insert(pair<string, string>("MetricsType", *request->metricsType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notice)) {
    body->insert(pair<string, string>("Notice", *request->notice));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notifyMode)) {
    body->insert(pair<string, string>("NotifyMode", *request->notifyMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notifyStrategy)) {
    body->insert(pair<string, string>("NotifyStrategy", *request->notifyStrategy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pids)) {
    body->insert(pair<string, string>("Pids", *request->pids));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->product)) {
    body->insert(pair<string, string>("Product", *request->product));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->promQL)) {
    body->insert(pair<string, string>("PromQL", *request->promQL));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateOrUpdateAlertRuleRequestTags>>(request->tags)) {
    body->insert(pair<string, vector<CreateOrUpdateAlertRuleRequestTags>>("Tags", *request->tags));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateOrUpdateAlertRule"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateOrUpdateAlertRuleResponse(callApi(params, req, runtime));
}

CreateOrUpdateAlertRuleResponse Alibabacloud_ARMS20190808::Client::createOrUpdateAlertRule(shared_ptr<CreateOrUpdateAlertRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createOrUpdateAlertRuleWithOptions(request, runtime);
}

CreateOrUpdateContactResponse Alibabacloud_ARMS20190808::Client::createOrUpdateContactWithOptions(shared_ptr<CreateOrUpdateContactRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dingRobotUrl)) {
    query->insert(pair<string, string>("DingRobotUrl", *request->dingRobotUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->contactId)) {
    body->insert(pair<string, long>("ContactId", *request->contactId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contactName)) {
    body->insert(pair<string, string>("ContactName", *request->contactName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->corpUserId)) {
    body->insert(pair<string, string>("CorpUserId", *request->corpUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->email)) {
    body->insert(pair<string, string>("Email", *request->email));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isEmailVerify)) {
    body->insert(pair<string, bool>("IsEmailVerify", *request->isEmailVerify));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phone)) {
    body->insert(pair<string, string>("Phone", *request->phone));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->reissueSendNotice)) {
    body->insert(pair<string, long>("ReissueSendNotice", *request->reissueSendNotice));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateOrUpdateContact"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateOrUpdateContactResponse(callApi(params, req, runtime));
}

CreateOrUpdateContactResponse Alibabacloud_ARMS20190808::Client::createOrUpdateContact(shared_ptr<CreateOrUpdateContactRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createOrUpdateContactWithOptions(request, runtime);
}

CreateOrUpdateContactGroupResponse Alibabacloud_ARMS20190808::Client::createOrUpdateContactGroupWithOptions(shared_ptr<CreateOrUpdateContactGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->contactGroupId)) {
    body->insert(pair<string, long>("ContactGroupId", *request->contactGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contactGroupName)) {
    body->insert(pair<string, string>("ContactGroupName", *request->contactGroupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contactIds)) {
    body->insert(pair<string, string>("ContactIds", *request->contactIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateOrUpdateContactGroup"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateOrUpdateContactGroupResponse(callApi(params, req, runtime));
}

CreateOrUpdateContactGroupResponse Alibabacloud_ARMS20190808::Client::createOrUpdateContactGroup(shared_ptr<CreateOrUpdateContactGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createOrUpdateContactGroupWithOptions(request, runtime);
}

CreateOrUpdateEventBridgeIntegrationResponse Alibabacloud_ARMS20190808::Client::createOrUpdateEventBridgeIntegrationWithOptions(shared_ptr<CreateOrUpdateEventBridgeIntegrationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessKey)) {
    body->insert(pair<string, string>("AccessKey", *request->accessKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->accessSecret)) {
    body->insert(pair<string, string>("AccessSecret", *request->accessSecret));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endpoint)) {
    body->insert(pair<string, string>("Endpoint", *request->endpoint));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventBusName)) {
    body->insert(pair<string, string>("EventBusName", *request->eventBusName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventBusRegionId)) {
    body->insert(pair<string, string>("EventBusRegionId", *request->eventBusRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    body->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    body->insert(pair<string, string>("Source", *request->source));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateOrUpdateEventBridgeIntegration"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateOrUpdateEventBridgeIntegrationResponse(callApi(params, req, runtime));
}

CreateOrUpdateEventBridgeIntegrationResponse Alibabacloud_ARMS20190808::Client::createOrUpdateEventBridgeIntegration(shared_ptr<CreateOrUpdateEventBridgeIntegrationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createOrUpdateEventBridgeIntegrationWithOptions(request, runtime);
}

CreateOrUpdateIMRobotResponse Alibabacloud_ARMS20190808::Client::createOrUpdateIMRobotWithOptions(shared_ptr<CreateOrUpdateIMRobotRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cardTemplate)) {
    body->insert(pair<string, string>("CardTemplate", *request->cardTemplate));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dailyNoc)) {
    body->insert(pair<string, bool>("DailyNoc", *request->dailyNoc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dailyNocTime)) {
    body->insert(pair<string, string>("DailyNocTime", *request->dailyNocTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dingSignKey)) {
    body->insert(pair<string, string>("DingSignKey", *request->dingSignKey));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableOutgoing)) {
    body->insert(pair<string, bool>("EnableOutgoing", *request->enableOutgoing));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->robotAddress)) {
    body->insert(pair<string, string>("RobotAddress", *request->robotAddress));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->robotId)) {
    body->insert(pair<string, long>("RobotId", *request->robotId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->robotName)) {
    body->insert(pair<string, string>("RobotName", *request->robotName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->token)) {
    body->insert(pair<string, string>("Token", *request->token));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    body->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateOrUpdateIMRobot"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateOrUpdateIMRobotResponse(callApi(params, req, runtime));
}

CreateOrUpdateIMRobotResponse Alibabacloud_ARMS20190808::Client::createOrUpdateIMRobot(shared_ptr<CreateOrUpdateIMRobotRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createOrUpdateIMRobotWithOptions(request, runtime);
}

CreateOrUpdateNotificationPolicyResponse Alibabacloud_ARMS20190808::Client::createOrUpdateNotificationPolicyWithOptions(shared_ptr<CreateOrUpdateNotificationPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->directedMode)) {
    body->insert(pair<string, bool>("DirectedMode", *request->directedMode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->escalationPolicyId)) {
    body->insert(pair<string, long>("EscalationPolicyId", *request->escalationPolicyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupRule)) {
    body->insert(pair<string, string>("GroupRule", *request->groupRule));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    body->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->integrationId)) {
    body->insert(pair<string, long>("IntegrationId", *request->integrationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->matchingRules)) {
    body->insert(pair<string, string>("MatchingRules", *request->matchingRules));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notifyRule)) {
    body->insert(pair<string, string>("NotifyRule", *request->notifyRule));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notifyTemplate)) {
    body->insert(pair<string, string>("NotifyTemplate", *request->notifyTemplate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->repeat)) {
    body->insert(pair<string, bool>("Repeat", *request->repeat));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->repeatInterval)) {
    body->insert(pair<string, long>("RepeatInterval", *request->repeatInterval));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->sendRecoverMessage)) {
    body->insert(pair<string, bool>("SendRecoverMessage", *request->sendRecoverMessage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->state)) {
    body->insert(pair<string, string>("State", *request->state));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateOrUpdateNotificationPolicy"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateOrUpdateNotificationPolicyResponse(callApi(params, req, runtime));
}

CreateOrUpdateNotificationPolicyResponse Alibabacloud_ARMS20190808::Client::createOrUpdateNotificationPolicy(shared_ptr<CreateOrUpdateNotificationPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createOrUpdateNotificationPolicyWithOptions(request, runtime);
}

CreateOrUpdateSilencePolicyResponse Alibabacloud_ARMS20190808::Client::createOrUpdateSilencePolicyWithOptions(shared_ptr<CreateOrUpdateSilencePolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->effectiveTimeType)) {
    query->insert(pair<string, string>("EffectiveTimeType", *request->effectiveTimeType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timePeriod)) {
    query->insert(pair<string, string>("TimePeriod", *request->timePeriod));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timeSlots)) {
    query->insert(pair<string, string>("TimeSlots", *request->timeSlots));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    body->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->matchingRules)) {
    body->insert(pair<string, string>("MatchingRules", *request->matchingRules));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->state)) {
    body->insert(pair<string, string>("State", *request->state));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateOrUpdateSilencePolicy"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateOrUpdateSilencePolicyResponse(callApi(params, req, runtime));
}

CreateOrUpdateSilencePolicyResponse Alibabacloud_ARMS20190808::Client::createOrUpdateSilencePolicy(shared_ptr<CreateOrUpdateSilencePolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createOrUpdateSilencePolicyWithOptions(request, runtime);
}

CreateOrUpdateWebhookContactResponse Alibabacloud_ARMS20190808::Client::createOrUpdateWebhookContactWithOptions(shared_ptr<CreateOrUpdateWebhookContactRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizHeaders)) {
    body->insert(pair<string, string>("BizHeaders", *request->bizHeaders));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizParams)) {
    body->insert(pair<string, string>("BizParams", *request->bizParams));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->body)) {
    body->insert(pair<string, string>("Body", *request->body));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->method)) {
    body->insert(pair<string, string>("Method", *request->method));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->recoverBody)) {
    body->insert(pair<string, string>("RecoverBody", *request->recoverBody));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    body->insert(pair<string, string>("Url", *request->url));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->webhookId)) {
    body->insert(pair<string, long>("WebhookId", *request->webhookId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->webhookName)) {
    body->insert(pair<string, string>("WebhookName", *request->webhookName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateOrUpdateWebhookContact"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateOrUpdateWebhookContactResponse(callApi(params, req, runtime));
}

CreateOrUpdateWebhookContactResponse Alibabacloud_ARMS20190808::Client::createOrUpdateWebhookContact(shared_ptr<CreateOrUpdateWebhookContactRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createOrUpdateWebhookContactWithOptions(request, runtime);
}

CreatePrometheusAlertRuleResponse Alibabacloud_ARMS20190808::Client::createPrometheusAlertRuleWithOptions(shared_ptr<CreatePrometheusAlertRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->alertName)) {
    query->insert(pair<string, string>("AlertName", *request->alertName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->annotations)) {
    query->insert(pair<string, string>("Annotations", *request->annotations));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->dispatchRuleId)) {
    query->insert(pair<string, long>("DispatchRuleId", *request->dispatchRuleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->duration)) {
    query->insert(pair<string, string>("Duration", *request->duration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->expression)) {
    query->insert(pair<string, string>("Expression", *request->expression));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->labels)) {
    query->insert(pair<string, string>("Labels", *request->labels));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->message)) {
    query->insert(pair<string, string>("Message", *request->message));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notifyType)) {
    query->insert(pair<string, string>("NotifyType", *request->notifyType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreatePrometheusAlertRuleRequestTags>>(request->tags)) {
    query->insert(pair<string, vector<CreatePrometheusAlertRuleRequestTags>>("Tags", *request->tags));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreatePrometheusAlertRule"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreatePrometheusAlertRuleResponse(callApi(params, req, runtime));
}

CreatePrometheusAlertRuleResponse Alibabacloud_ARMS20190808::Client::createPrometheusAlertRule(shared_ptr<CreatePrometheusAlertRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createPrometheusAlertRuleWithOptions(request, runtime);
}

CreatePrometheusInstanceResponse Alibabacloud_ARMS20190808::Client::createPrometheusInstanceWithOptions(shared_ptr<CreatePrometheusInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->allSubClustersSuccess)) {
    query->insert(pair<string, bool>("AllSubClustersSuccess", *request->allSubClustersSuccess));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->archiveDuration)) {
    query->insert(pair<string, long>("ArchiveDuration", *request->archiveDuration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterName)) {
    query->insert(pair<string, string>("ClusterName", *request->clusterName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterType)) {
    query->insert(pair<string, string>("ClusterType", *request->clusterType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->duration)) {
    query->insert(pair<string, long>("Duration", *request->duration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->grafanaInstanceId)) {
    query->insert(pair<string, string>("GrafanaInstanceId", *request->grafanaInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->paymentType)) {
    query->insert(pair<string, string>("PaymentType", *request->paymentType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityGroupId)) {
    query->insert(pair<string, string>("SecurityGroupId", *request->securityGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subClustersJson)) {
    query->insert(pair<string, string>("SubClustersJson", *request->subClustersJson));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreatePrometheusInstanceRequestTags>>(request->tags)) {
    query->insert(pair<string, vector<CreatePrometheusInstanceRequestTags>>("Tags", *request->tags));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vSwitchId)) {
    query->insert(pair<string, string>("VSwitchId", *request->vSwitchId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcId)) {
    query->insert(pair<string, string>("VpcId", *request->vpcId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreatePrometheusInstance"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreatePrometheusInstanceResponse(callApi(params, req, runtime));
}

CreatePrometheusInstanceResponse Alibabacloud_ARMS20190808::Client::createPrometheusInstance(shared_ptr<CreatePrometheusInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createPrometheusInstanceWithOptions(request, runtime);
}

CreatePrometheusMonitoringResponse Alibabacloud_ARMS20190808::Client::createPrometheusMonitoringWithOptions(shared_ptr<CreatePrometheusMonitoringRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->configYaml)) {
    body->insert(pair<string, string>("ConfigYaml", *request->configYaml));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreatePrometheusMonitoring"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreatePrometheusMonitoringResponse(callApi(params, req, runtime));
}

CreatePrometheusMonitoringResponse Alibabacloud_ARMS20190808::Client::createPrometheusMonitoring(shared_ptr<CreatePrometheusMonitoringRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createPrometheusMonitoringWithOptions(request, runtime);
}

CreateRetcodeAppResponse Alibabacloud_ARMS20190808::Client::createRetcodeAppWithOptions(shared_ptr<CreateRetcodeAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->retcodeAppName)) {
    query->insert(pair<string, string>("RetcodeAppName", *request->retcodeAppName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->retcodeAppType)) {
    query->insert(pair<string, string>("RetcodeAppType", *request->retcodeAppType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateRetcodeAppRequestTags>>(request->tags)) {
    query->insert(pair<string, vector<CreateRetcodeAppRequestTags>>("Tags", *request->tags));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateRetcodeApp"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateRetcodeAppResponse(callApi(params, req, runtime));
}

CreateRetcodeAppResponse Alibabacloud_ARMS20190808::Client::createRetcodeApp(shared_ptr<CreateRetcodeAppRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createRetcodeAppWithOptions(request, runtime);
}

CreateRumAppResponse Alibabacloud_ARMS20190808::Client::createRumAppWithOptions(shared_ptr<CreateRumAppRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateRumAppShrinkRequest> request = make_shared<CreateRumAppShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<CreateRumAppRequestTag>>(tmpReq->tag)) {
    request->tagShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tag, make_shared<string>("Tag"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appGroup)) {
    query->insert(pair<string, string>("AppGroup", *request->appGroup));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    query->insert(pair<string, string>("Language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nickName)) {
    query->insert(pair<string, string>("NickName", *request->nickName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->packageName)) {
    query->insert(pair<string, string>("PackageName", *request->packageName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->realRegionId)) {
    query->insert(pair<string, string>("RealRegionId", *request->realRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->siteType)) {
    query->insert(pair<string, string>("SiteType", *request->siteType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    query->insert(pair<string, string>("Source", *request->source));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagShrink)) {
    query->insert(pair<string, string>("Tag", *request->tagShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateRumApp"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateRumAppResponse(callApi(params, req, runtime));
}

CreateRumAppResponse Alibabacloud_ARMS20190808::Client::createRumApp(shared_ptr<CreateRumAppRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createRumAppWithOptions(request, runtime);
}

CreateRumUploadFileUrlResponse Alibabacloud_ARMS20190808::Client::createRumUploadFileUrlWithOptions(shared_ptr<CreateRumUploadFileUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contentType)) {
    query->insert(pair<string, string>("ContentType", *request->contentType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileName)) {
    query->insert(pair<string, string>("FileName", *request->fileName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pid)) {
    query->insert(pair<string, string>("Pid", *request->pid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourcemapType)) {
    query->insert(pair<string, string>("SourcemapType", *request->sourcemapType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uuid)) {
    query->insert(pair<string, string>("Uuid", *request->uuid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->versionId)) {
    query->insert(pair<string, string>("VersionId", *request->versionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateRumUploadFileUrl"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateRumUploadFileUrlResponse(callApi(params, req, runtime));
}

CreateRumUploadFileUrlResponse Alibabacloud_ARMS20190808::Client::createRumUploadFileUrl(shared_ptr<CreateRumUploadFileUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createRumUploadFileUrlWithOptions(request, runtime);
}

CreateSyntheticTaskResponse Alibabacloud_ARMS20190808::Client::createSyntheticTaskWithOptions(shared_ptr<CreateSyntheticTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateSyntheticTaskShrinkRequest> request = make_shared<CreateSyntheticTaskShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CreateSyntheticTaskRequestCommonParam>(tmpReq->commonParam)) {
    request->commonParamShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->commonParam, make_shared<string>("CommonParam"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateSyntheticTaskRequestDownload>(tmpReq->download)) {
    request->downloadShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->download, make_shared<string>("Download"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateSyntheticTaskRequestExtendInterval>(tmpReq->extendInterval)) {
    request->extendIntervalShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->extendInterval, make_shared<string>("ExtendInterval"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateSyntheticTaskRequestMonitorList>>(tmpReq->monitorList)) {
    request->monitorListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->monitorList, make_shared<string>("MonitorList"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateSyntheticTaskRequestNavigation>(tmpReq->navigation)) {
    request->navigationShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->navigation, make_shared<string>("Navigation"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateSyntheticTaskRequestNet>(tmpReq->net)) {
    request->netShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->net, make_shared<string>("Net"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateSyntheticTaskRequestProtocol>(tmpReq->protocol)) {
    request->protocolShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->protocol, make_shared<string>("Protocol"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->commonParamShrink)) {
    query->insert(pair<string, string>("CommonParam", *request->commonParamShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->downloadShrink)) {
    query->insert(pair<string, string>("Download", *request->downloadShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extendIntervalShrink)) {
    query->insert(pair<string, string>("ExtendInterval", *request->extendIntervalShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->intervalTime)) {
    query->insert(pair<string, string>("IntervalTime", *request->intervalTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->intervalType)) {
    query->insert(pair<string, string>("IntervalType", *request->intervalType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ipType)) {
    query->insert(pair<string, long>("IpType", *request->ipType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->monitorListShrink)) {
    query->insert(pair<string, string>("MonitorList", *request->monitorListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->navigationShrink)) {
    query->insert(pair<string, string>("Navigation", *request->navigationShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->netShrink)) {
    query->insert(pair<string, string>("Net", *request->netShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->protocolShrink)) {
    query->insert(pair<string, string>("Protocol", *request->protocolShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskName)) {
    query->insert(pair<string, string>("TaskName", *request->taskName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->taskType)) {
    query->insert(pair<string, long>("TaskType", *request->taskType));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->updateTask)) {
    query->insert(pair<string, bool>("UpdateTask", *request->updateTask));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    query->insert(pair<string, string>("Url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSyntheticTask"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateSyntheticTaskResponse(callApi(params, req, runtime));
}

CreateSyntheticTaskResponse Alibabacloud_ARMS20190808::Client::createSyntheticTask(shared_ptr<CreateSyntheticTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSyntheticTaskWithOptions(request, runtime);
}

CreateTimingSyntheticTaskResponse Alibabacloud_ARMS20190808::Client::createTimingSyntheticTaskWithOptions(shared_ptr<CreateTimingSyntheticTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateTimingSyntheticTaskShrinkRequest> request = make_shared<CreateTimingSyntheticTaskShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<CreateTimingSyntheticTaskRequestAvailableAssertions>>(tmpReq->availableAssertions)) {
    request->availableAssertionsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->availableAssertions, make_shared<string>("AvailableAssertions"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateTimingSyntheticTaskRequestCommonSetting>(tmpReq->commonSetting)) {
    request->commonSettingShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->commonSetting, make_shared<string>("CommonSetting"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateTimingSyntheticTaskRequestCustomPeriod>(tmpReq->customPeriod)) {
    request->customPeriodShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->customPeriod, make_shared<string>("CustomPeriod"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateTimingSyntheticTaskRequestMonitorConf>(tmpReq->monitorConf)) {
    request->monitorConfShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->monitorConf, make_shared<string>("MonitorConf"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateTimingSyntheticTaskRequestMonitors>>(tmpReq->monitors)) {
    request->monitorsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->monitors, make_shared<string>("Monitors"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateTimingSyntheticTaskRequestTags>>(tmpReq->tags)) {
    request->tagsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tags, make_shared<string>("Tags"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->availableAssertionsShrink)) {
    query->insert(pair<string, string>("AvailableAssertions", *request->availableAssertionsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->commonSettingShrink)) {
    query->insert(pair<string, string>("CommonSetting", *request->commonSettingShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->customPeriodShrink)) {
    query->insert(pair<string, string>("CustomPeriod", *request->customPeriodShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->frequency)) {
    query->insert(pair<string, string>("Frequency", *request->frequency));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->monitorCategory)) {
    query->insert(pair<string, long>("MonitorCategory", *request->monitorCategory));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->monitorConfShrink)) {
    query->insert(pair<string, string>("MonitorConf", *request->monitorConfShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->monitorsShrink)) {
    query->insert(pair<string, string>("Monitors", *request->monitorsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagsShrink)) {
    query->insert(pair<string, string>("Tags", *request->tagsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->taskType)) {
    query->insert(pair<string, long>("TaskType", *request->taskType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateTimingSyntheticTask"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateTimingSyntheticTaskResponse(callApi(params, req, runtime));
}

CreateTimingSyntheticTaskResponse Alibabacloud_ARMS20190808::Client::createTimingSyntheticTask(shared_ptr<CreateTimingSyntheticTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createTimingSyntheticTaskWithOptions(request, runtime);
}

CreateWebhookResponse Alibabacloud_ARMS20190808::Client::createWebhookWithOptions(shared_ptr<CreateWebhookRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->body)) {
    query->insert(pair<string, string>("Body", *request->body));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contactName)) {
    query->insert(pair<string, string>("ContactName", *request->contactName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->httpHeaders)) {
    query->insert(pair<string, string>("HttpHeaders", *request->httpHeaders));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->httpParams)) {
    query->insert(pair<string, string>("HttpParams", *request->httpParams));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->method)) {
    query->insert(pair<string, string>("Method", *request->method));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->recoverBody)) {
    query->insert(pair<string, string>("RecoverBody", *request->recoverBody));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    query->insert(pair<string, string>("Url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateWebhook"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateWebhookResponse(callApi(params, req, runtime));
}

CreateWebhookResponse Alibabacloud_ARMS20190808::Client::createWebhook(shared_ptr<CreateWebhookRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createWebhookWithOptions(request, runtime);
}

DelAuthTokenResponse Alibabacloud_ARMS20190808::Client::delAuthTokenWithOptions(shared_ptr<DelAuthTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DelAuthToken"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DelAuthTokenResponse(callApi(params, req, runtime));
}

DelAuthTokenResponse Alibabacloud_ARMS20190808::Client::delAuthToken(shared_ptr<DelAuthTokenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return delAuthTokenWithOptions(request, runtime);
}

DeleteAddonReleaseResponse Alibabacloud_ARMS20190808::Client::deleteAddonReleaseWithOptions(shared_ptr<DeleteAddonReleaseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->addonName)) {
    query->insert(pair<string, string>("AddonName", *request->addonName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->environmentId)) {
    query->insert(pair<string, string>("EnvironmentId", *request->environmentId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->force)) {
    query->insert(pair<string, bool>("Force", *request->force));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->releaseName)) {
    query->insert(pair<string, string>("ReleaseName", *request->releaseName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteAddonRelease"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteAddonReleaseResponse(callApi(params, req, runtime));
}

DeleteAddonReleaseResponse Alibabacloud_ARMS20190808::Client::deleteAddonRelease(shared_ptr<DeleteAddonReleaseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAddonReleaseWithOptions(request, runtime);
}

DeleteAlertContactResponse Alibabacloud_ARMS20190808::Client::deleteAlertContactWithOptions(shared_ptr<DeleteAlertContactRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->contactId)) {
    query->insert(pair<string, long>("ContactId", *request->contactId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteAlertContact"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteAlertContactResponse(callApi(params, req, runtime));
}

DeleteAlertContactResponse Alibabacloud_ARMS20190808::Client::deleteAlertContact(shared_ptr<DeleteAlertContactRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAlertContactWithOptions(request, runtime);
}

DeleteAlertContactGroupResponse Alibabacloud_ARMS20190808::Client::deleteAlertContactGroupWithOptions(shared_ptr<DeleteAlertContactGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->contactGroupId)) {
    query->insert(pair<string, long>("ContactGroupId", *request->contactGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteAlertContactGroup"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteAlertContactGroupResponse(callApi(params, req, runtime));
}

DeleteAlertContactGroupResponse Alibabacloud_ARMS20190808::Client::deleteAlertContactGroup(shared_ptr<DeleteAlertContactGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAlertContactGroupWithOptions(request, runtime);
}

DeleteAlertRuleResponse Alibabacloud_ARMS20190808::Client::deleteAlertRuleWithOptions(shared_ptr<DeleteAlertRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->alertId)) {
    query->insert(pair<string, long>("AlertId", *request->alertId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteAlertRule"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteAlertRuleResponse(callApi(params, req, runtime));
}

DeleteAlertRuleResponse Alibabacloud_ARMS20190808::Client::deleteAlertRule(shared_ptr<DeleteAlertRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAlertRuleWithOptions(request, runtime);
}

DeleteAlertRulesResponse Alibabacloud_ARMS20190808::Client::deleteAlertRulesWithOptions(shared_ptr<DeleteAlertRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->alertIds)) {
    query->insert(pair<string, string>("AlertIds", *request->alertIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteAlertRules"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteAlertRulesResponse(callApi(params, req, runtime));
}

DeleteAlertRulesResponse Alibabacloud_ARMS20190808::Client::deleteAlertRules(shared_ptr<DeleteAlertRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAlertRulesWithOptions(request, runtime);
}

DeleteAppListResponse Alibabacloud_ARMS20190808::Client::deleteAppListWithOptions(shared_ptr<DeleteAppListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->pids)) {
    query->insert(pair<string, vector<string>>("Pids", *request->pids));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteAppList"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteAppListResponse(callApi(params, req, runtime));
}

DeleteAppListResponse Alibabacloud_ARMS20190808::Client::deleteAppList(shared_ptr<DeleteAppListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAppListWithOptions(request, runtime);
}

DeleteCmsExporterResponse Alibabacloud_ARMS20190808::Client::deleteCmsExporterWithOptions(shared_ptr<DeleteCmsExporterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteCmsExporter"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteCmsExporterResponse(callApi(params, req, runtime));
}

DeleteCmsExporterResponse Alibabacloud_ARMS20190808::Client::deleteCmsExporter(shared_ptr<DeleteCmsExporterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteCmsExporterWithOptions(request, runtime);
}

DeleteContactResponse Alibabacloud_ARMS20190808::Client::deleteContactWithOptions(shared_ptr<DeleteContactRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->contactId)) {
    query->insert(pair<string, long>("ContactId", *request->contactId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteContact"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteContactResponse(callApi(params, req, runtime));
}

DeleteContactResponse Alibabacloud_ARMS20190808::Client::deleteContact(shared_ptr<DeleteContactRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteContactWithOptions(request, runtime);
}

DeleteContactGroupResponse Alibabacloud_ARMS20190808::Client::deleteContactGroupWithOptions(shared_ptr<DeleteContactGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->contactGroupId)) {
    query->insert(pair<string, long>("ContactGroupId", *request->contactGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteContactGroup"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteContactGroupResponse(callApi(params, req, runtime));
}

DeleteContactGroupResponse Alibabacloud_ARMS20190808::Client::deleteContactGroup(shared_ptr<DeleteContactGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteContactGroupWithOptions(request, runtime);
}

DeleteDispatchRuleResponse Alibabacloud_ARMS20190808::Client::deleteDispatchRuleWithOptions(shared_ptr<DeleteDispatchRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    query->insert(pair<string, string>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDispatchRule"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDispatchRuleResponse(callApi(params, req, runtime));
}

DeleteDispatchRuleResponse Alibabacloud_ARMS20190808::Client::deleteDispatchRule(shared_ptr<DeleteDispatchRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDispatchRuleWithOptions(request, runtime);
}

DeleteEnvCustomJobResponse Alibabacloud_ARMS20190808::Client::deleteEnvCustomJobWithOptions(shared_ptr<DeleteEnvCustomJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->customJobName)) {
    query->insert(pair<string, string>("CustomJobName", *request->customJobName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->environmentId)) {
    query->insert(pair<string, string>("EnvironmentId", *request->environmentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteEnvCustomJob"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteEnvCustomJobResponse(callApi(params, req, runtime));
}

DeleteEnvCustomJobResponse Alibabacloud_ARMS20190808::Client::deleteEnvCustomJob(shared_ptr<DeleteEnvCustomJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteEnvCustomJobWithOptions(request, runtime);
}

DeleteEnvPodMonitorResponse Alibabacloud_ARMS20190808::Client::deleteEnvPodMonitorWithOptions(shared_ptr<DeleteEnvPodMonitorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->environmentId)) {
    query->insert(pair<string, string>("EnvironmentId", *request->environmentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->podMonitorName)) {
    query->insert(pair<string, string>("PodMonitorName", *request->podMonitorName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteEnvPodMonitor"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteEnvPodMonitorResponse(callApi(params, req, runtime));
}

DeleteEnvPodMonitorResponse Alibabacloud_ARMS20190808::Client::deleteEnvPodMonitor(shared_ptr<DeleteEnvPodMonitorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteEnvPodMonitorWithOptions(request, runtime);
}

DeleteEnvServiceMonitorResponse Alibabacloud_ARMS20190808::Client::deleteEnvServiceMonitorWithOptions(shared_ptr<DeleteEnvServiceMonitorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->environmentId)) {
    query->insert(pair<string, string>("EnvironmentId", *request->environmentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceMonitorName)) {
    query->insert(pair<string, string>("ServiceMonitorName", *request->serviceMonitorName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteEnvServiceMonitor"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteEnvServiceMonitorResponse(callApi(params, req, runtime));
}

DeleteEnvServiceMonitorResponse Alibabacloud_ARMS20190808::Client::deleteEnvServiceMonitor(shared_ptr<DeleteEnvServiceMonitorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteEnvServiceMonitorWithOptions(request, runtime);
}

DeleteEnvironmentResponse Alibabacloud_ARMS20190808::Client::deleteEnvironmentWithOptions(shared_ptr<DeleteEnvironmentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->deletePromInstance)) {
    query->insert(pair<string, bool>("DeletePromInstance", *request->deletePromInstance));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->environmentId)) {
    query->insert(pair<string, string>("EnvironmentId", *request->environmentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteEnvironment"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteEnvironmentResponse(callApi(params, req, runtime));
}

DeleteEnvironmentResponse Alibabacloud_ARMS20190808::Client::deleteEnvironment(shared_ptr<DeleteEnvironmentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteEnvironmentWithOptions(request, runtime);
}

DeleteEnvironmentFeatureResponse Alibabacloud_ARMS20190808::Client::deleteEnvironmentFeatureWithOptions(shared_ptr<DeleteEnvironmentFeatureRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->environmentId)) {
    query->insert(pair<string, string>("EnvironmentId", *request->environmentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->featureName)) {
    query->insert(pair<string, string>("FeatureName", *request->featureName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteEnvironmentFeature"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteEnvironmentFeatureResponse(callApi(params, req, runtime));
}

DeleteEnvironmentFeatureResponse Alibabacloud_ARMS20190808::Client::deleteEnvironmentFeature(shared_ptr<DeleteEnvironmentFeatureRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteEnvironmentFeatureWithOptions(request, runtime);
}

DeleteEventBridgeIntegrationResponse Alibabacloud_ARMS20190808::Client::deleteEventBridgeIntegrationWithOptions(shared_ptr<DeleteEventBridgeIntegrationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    body->insert(pair<string, long>("Id", *request->id));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteEventBridgeIntegration"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteEventBridgeIntegrationResponse(callApi(params, req, runtime));
}

DeleteEventBridgeIntegrationResponse Alibabacloud_ARMS20190808::Client::deleteEventBridgeIntegration(shared_ptr<DeleteEventBridgeIntegrationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteEventBridgeIntegrationWithOptions(request, runtime);
}

DeleteGrafanaResourceResponse Alibabacloud_ARMS20190808::Client::deleteGrafanaResourceWithOptions(shared_ptr<DeleteGrafanaResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    body->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterName)) {
    body->insert(pair<string, string>("ClusterName", *request->clusterName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteGrafanaResource"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteGrafanaResourceResponse(callApi(params, req, runtime));
}

DeleteGrafanaResourceResponse Alibabacloud_ARMS20190808::Client::deleteGrafanaResource(shared_ptr<DeleteGrafanaResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteGrafanaResourceWithOptions(request, runtime);
}

DeleteGrafanaWorkspaceResponse Alibabacloud_ARMS20190808::Client::deleteGrafanaWorkspaceWithOptions(shared_ptr<DeleteGrafanaWorkspaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->grafanaWorkspaceId)) {
    query->insert(pair<string, string>("GrafanaWorkspaceId", *request->grafanaWorkspaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteGrafanaWorkspace"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteGrafanaWorkspaceResponse(callApi(params, req, runtime));
}

DeleteGrafanaWorkspaceResponse Alibabacloud_ARMS20190808::Client::deleteGrafanaWorkspace(shared_ptr<DeleteGrafanaWorkspaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteGrafanaWorkspaceWithOptions(request, runtime);
}

DeleteIMRobotResponse Alibabacloud_ARMS20190808::Client::deleteIMRobotWithOptions(shared_ptr<DeleteIMRobotRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->robotId)) {
    query->insert(pair<string, long>("RobotId", *request->robotId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteIMRobot"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteIMRobotResponse(callApi(params, req, runtime));
}

DeleteIMRobotResponse Alibabacloud_ARMS20190808::Client::deleteIMRobot(shared_ptr<DeleteIMRobotRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteIMRobotWithOptions(request, runtime);
}

DeleteIntegrationResponse Alibabacloud_ARMS20190808::Client::deleteIntegrationWithOptions(shared_ptr<DeleteIntegrationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->integration)) {
    query->insert(pair<string, string>("Integration", *request->integration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteIntegration"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteIntegrationResponse(callApi(params, req, runtime));
}

DeleteIntegrationResponse Alibabacloud_ARMS20190808::Client::deleteIntegration(shared_ptr<DeleteIntegrationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteIntegrationWithOptions(request, runtime);
}

DeleteIntegrationsResponse Alibabacloud_ARMS20190808::Client::deleteIntegrationsWithOptions(shared_ptr<DeleteIntegrationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteIntegrations"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteIntegrationsResponse(callApi(params, req, runtime));
}

DeleteIntegrationsResponse Alibabacloud_ARMS20190808::Client::deleteIntegrations(shared_ptr<DeleteIntegrationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteIntegrationsWithOptions(request, runtime);
}

DeleteNotificationPolicyResponse Alibabacloud_ARMS20190808::Client::deleteNotificationPolicyWithOptions(shared_ptr<DeleteNotificationPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteNotificationPolicy"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteNotificationPolicyResponse(callApi(params, req, runtime));
}

DeleteNotificationPolicyResponse Alibabacloud_ARMS20190808::Client::deleteNotificationPolicy(shared_ptr<DeleteNotificationPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteNotificationPolicyWithOptions(request, runtime);
}

DeletePrometheusAlertRuleResponse Alibabacloud_ARMS20190808::Client::deletePrometheusAlertRuleWithOptions(shared_ptr<DeletePrometheusAlertRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->alertId)) {
    query->insert(pair<string, long>("AlertId", *request->alertId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeletePrometheusAlertRule"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeletePrometheusAlertRuleResponse(callApi(params, req, runtime));
}

DeletePrometheusAlertRuleResponse Alibabacloud_ARMS20190808::Client::deletePrometheusAlertRule(shared_ptr<DeletePrometheusAlertRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deletePrometheusAlertRuleWithOptions(request, runtime);
}

DeletePrometheusGlobalViewResponse Alibabacloud_ARMS20190808::Client::deletePrometheusGlobalViewWithOptions(shared_ptr<DeletePrometheusGlobalViewRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->globalViewClusterId)) {
    query->insert(pair<string, string>("GlobalViewClusterId", *request->globalViewClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeletePrometheusGlobalView"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeletePrometheusGlobalViewResponse(callApi(params, req, runtime));
}

DeletePrometheusGlobalViewResponse Alibabacloud_ARMS20190808::Client::deletePrometheusGlobalView(shared_ptr<DeletePrometheusGlobalViewRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deletePrometheusGlobalViewWithOptions(request, runtime);
}

DeletePrometheusIntegrationResponse Alibabacloud_ARMS20190808::Client::deletePrometheusIntegrationWithOptions(shared_ptr<DeletePrometheusIntegrationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->instanceId)) {
    query->insert(pair<string, long>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->integrationType)) {
    query->insert(pair<string, string>("IntegrationType", *request->integrationType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeletePrometheusIntegration"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeletePrometheusIntegrationResponse(callApi(params, req, runtime));
}

DeletePrometheusIntegrationResponse Alibabacloud_ARMS20190808::Client::deletePrometheusIntegration(shared_ptr<DeletePrometheusIntegrationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deletePrometheusIntegrationWithOptions(request, runtime);
}

DeletePrometheusMonitoringResponse Alibabacloud_ARMS20190808::Client::deletePrometheusMonitoringWithOptions(shared_ptr<DeletePrometheusMonitoringRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->monitoringName)) {
    query->insert(pair<string, string>("MonitoringName", *request->monitoringName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeletePrometheusMonitoring"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeletePrometheusMonitoringResponse(callApi(params, req, runtime));
}

DeletePrometheusMonitoringResponse Alibabacloud_ARMS20190808::Client::deletePrometheusMonitoring(shared_ptr<DeletePrometheusMonitoringRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deletePrometheusMonitoringWithOptions(request, runtime);
}

DeleteRetcodeAppResponse Alibabacloud_ARMS20190808::Client::deleteRetcodeAppWithOptions(shared_ptr<DeleteRetcodeAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pid)) {
    query->insert(pair<string, string>("Pid", *request->pid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteRetcodeApp"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteRetcodeAppResponse(callApi(params, req, runtime));
}

DeleteRetcodeAppResponse Alibabacloud_ARMS20190808::Client::deleteRetcodeApp(shared_ptr<DeleteRetcodeAppRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteRetcodeAppWithOptions(request, runtime);
}

DeleteRumAppResponse Alibabacloud_ARMS20190808::Client::deleteRumAppWithOptions(shared_ptr<DeleteRumAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appGroup)) {
    query->insert(pair<string, string>("AppGroup", *request->appGroup));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->realRegionId)) {
    query->insert(pair<string, string>("RealRegionId", *request->realRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteRumApp"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteRumAppResponse(callApi(params, req, runtime));
}

DeleteRumAppResponse Alibabacloud_ARMS20190808::Client::deleteRumApp(shared_ptr<DeleteRumAppRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteRumAppWithOptions(request, runtime);
}

DeleteRumUploadFileResponse Alibabacloud_ARMS20190808::Client::deleteRumUploadFileWithOptions(shared_ptr<DeleteRumUploadFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->batchItems)) {
    query->insert(pair<string, string>("BatchItems", *request->batchItems));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileName)) {
    query->insert(pair<string, string>("FileName", *request->fileName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pid)) {
    query->insert(pair<string, string>("Pid", *request->pid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uuid)) {
    query->insert(pair<string, string>("Uuid", *request->uuid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->versionId)) {
    query->insert(pair<string, string>("VersionId", *request->versionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteRumUploadFile"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteRumUploadFileResponse(callApi(params, req, runtime));
}

DeleteRumUploadFileResponse Alibabacloud_ARMS20190808::Client::deleteRumUploadFile(shared_ptr<DeleteRumUploadFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteRumUploadFileWithOptions(request, runtime);
}

DeleteScenarioResponse Alibabacloud_ARMS20190808::Client::deleteScenarioWithOptions(shared_ptr<DeleteScenarioRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->scenarioId)) {
    query->insert(pair<string, long>("ScenarioId", *request->scenarioId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteScenario"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteScenarioResponse(callApi(params, req, runtime));
}

DeleteScenarioResponse Alibabacloud_ARMS20190808::Client::deleteScenario(shared_ptr<DeleteScenarioRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteScenarioWithOptions(request, runtime);
}

DeleteSilencePolicyResponse Alibabacloud_ARMS20190808::Client::deleteSilencePolicyWithOptions(shared_ptr<DeleteSilencePolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteSilencePolicy"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteSilencePolicyResponse(callApi(params, req, runtime));
}

DeleteSilencePolicyResponse Alibabacloud_ARMS20190808::Client::deleteSilencePolicy(shared_ptr<DeleteSilencePolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSilencePolicyWithOptions(request, runtime);
}

DeleteSourceMapResponse Alibabacloud_ARMS20190808::Client::deleteSourceMapWithOptions(shared_ptr<DeleteSourceMapRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DeleteSourceMapShrinkRequest> request = make_shared<DeleteSourceMapShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->fidList)) {
    request->fidListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->fidList, make_shared<string>("FidList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->fidListShrink)) {
    query->insert(pair<string, string>("FidList", *request->fidListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pid)) {
    query->insert(pair<string, string>("Pid", *request->pid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteSourceMap"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteSourceMapResponse(callApi(params, req, runtime));
}

DeleteSourceMapResponse Alibabacloud_ARMS20190808::Client::deleteSourceMap(shared_ptr<DeleteSourceMapRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSourceMapWithOptions(request, runtime);
}

DeleteSyntheticTaskResponse Alibabacloud_ARMS20190808::Client::deleteSyntheticTaskWithOptions(shared_ptr<DeleteSyntheticTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->taskIds)) {
    query->insert(pair<string, vector<string>>("TaskIds", *request->taskIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteSyntheticTask"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteSyntheticTaskResponse(callApi(params, req, runtime));
}

DeleteSyntheticTaskResponse Alibabacloud_ARMS20190808::Client::deleteSyntheticTask(shared_ptr<DeleteSyntheticTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSyntheticTaskWithOptions(request, runtime);
}

DeleteTimingSyntheticTaskResponse Alibabacloud_ARMS20190808::Client::deleteTimingSyntheticTaskWithOptions(shared_ptr<DeleteTimingSyntheticTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteTimingSyntheticTask"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteTimingSyntheticTaskResponse(callApi(params, req, runtime));
}

DeleteTimingSyntheticTaskResponse Alibabacloud_ARMS20190808::Client::deleteTimingSyntheticTask(shared_ptr<DeleteTimingSyntheticTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteTimingSyntheticTaskWithOptions(request, runtime);
}

DeleteTraceAppResponse Alibabacloud_ARMS20190808::Client::deleteTraceAppWithOptions(shared_ptr<DeleteTraceAppRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DeleteTraceAppShrinkRequest> request = make_shared<DeleteTraceAppShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<DeleteTraceAppRequestDeleteReason>(tmpReq->deleteReason)) {
    request->deleteReasonShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->deleteReason, make_shared<string>("DeleteReason"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deleteReasonShrink)) {
    query->insert(pair<string, string>("DeleteReason", *request->deleteReasonShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pid)) {
    query->insert(pair<string, string>("Pid", *request->pid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteTraceApp"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteTraceAppResponse(callApi(params, req, runtime));
}

DeleteTraceAppResponse Alibabacloud_ARMS20190808::Client::deleteTraceApp(shared_ptr<DeleteTraceAppRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteTraceAppWithOptions(request, runtime);
}

DeleteWebhookContactResponse Alibabacloud_ARMS20190808::Client::deleteWebhookContactWithOptions(shared_ptr<DeleteWebhookContactRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->webhookId)) {
    query->insert(pair<string, long>("WebhookId", *request->webhookId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteWebhookContact"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteWebhookContactResponse(callApi(params, req, runtime));
}

DeleteWebhookContactResponse Alibabacloud_ARMS20190808::Client::deleteWebhookContact(shared_ptr<DeleteWebhookContactRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteWebhookContactWithOptions(request, runtime);
}

DescribeAddonMetricsResponse Alibabacloud_ARMS20190808::Client::describeAddonMetricsWithOptions(shared_ptr<DescribeAddonMetricsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->addonVersion)) {
    query->insert(pair<string, string>("AddonVersion", *request->addonVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->aliyunLang)) {
    query->insert(pair<string, string>("AliyunLang", *request->aliyunLang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->environmentType)) {
    query->insert(pair<string, string>("EnvironmentType", *request->environmentType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAddonMetrics"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAddonMetricsResponse(callApi(params, req, runtime));
}

DescribeAddonMetricsResponse Alibabacloud_ARMS20190808::Client::describeAddonMetrics(shared_ptr<DescribeAddonMetricsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAddonMetricsWithOptions(request, runtime);
}

DescribeAddonReleaseResponse Alibabacloud_ARMS20190808::Client::describeAddonReleaseWithOptions(shared_ptr<DescribeAddonReleaseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->environmentId)) {
    query->insert(pair<string, string>("EnvironmentId", *request->environmentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->releaseName)) {
    query->insert(pair<string, string>("ReleaseName", *request->releaseName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAddonRelease"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAddonReleaseResponse(callApi(params, req, runtime));
}

DescribeAddonReleaseResponse Alibabacloud_ARMS20190808::Client::describeAddonRelease(shared_ptr<DescribeAddonReleaseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAddonReleaseWithOptions(request, runtime);
}

DescribeContactGroupsResponse Alibabacloud_ARMS20190808::Client::describeContactGroupsWithOptions(shared_ptr<DescribeContactGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->contactGroupName)) {
    query->insert(pair<string, string>("ContactGroupName", *request->contactGroupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupIds)) {
    query->insert(pair<string, string>("GroupIds", *request->groupIds));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isDetail)) {
    query->insert(pair<string, bool>("IsDetail", *request->isDetail));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    query->insert(pair<string, long>("Page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    query->insert(pair<string, long>("Size", *request->size));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeContactGroups"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeContactGroupsResponse(callApi(params, req, runtime));
}

DescribeContactGroupsResponse Alibabacloud_ARMS20190808::Client::describeContactGroups(shared_ptr<DescribeContactGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeContactGroupsWithOptions(request, runtime);
}

DescribeContactsResponse Alibabacloud_ARMS20190808::Client::describeContactsWithOptions(shared_ptr<DescribeContactsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->contactIds)) {
    query->insert(pair<string, string>("ContactIds", *request->contactIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contactName)) {
    query->insert(pair<string, string>("ContactName", *request->contactName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->email)) {
    query->insert(pair<string, string>("Email", *request->email));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    query->insert(pair<string, long>("Page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phone)) {
    query->insert(pair<string, string>("Phone", *request->phone));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    query->insert(pair<string, long>("Size", *request->size));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->verbose)) {
    query->insert(pair<string, string>("Verbose", *request->verbose));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeContacts"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeContactsResponse(callApi(params, req, runtime));
}

DescribeContactsResponse Alibabacloud_ARMS20190808::Client::describeContacts(shared_ptr<DescribeContactsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeContactsWithOptions(request, runtime);
}

DescribeDispatchRuleResponse Alibabacloud_ARMS20190808::Client::describeDispatchRuleWithOptions(shared_ptr<DescribeDispatchRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    query->insert(pair<string, string>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDispatchRule"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDispatchRuleResponse(callApi(params, req, runtime));
}

DescribeDispatchRuleResponse Alibabacloud_ARMS20190808::Client::describeDispatchRule(shared_ptr<DescribeDispatchRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDispatchRuleWithOptions(request, runtime);
}

DescribeEnvCustomJobResponse Alibabacloud_ARMS20190808::Client::describeEnvCustomJobWithOptions(shared_ptr<DescribeEnvCustomJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->customJobName)) {
    query->insert(pair<string, string>("CustomJobName", *request->customJobName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->encryptYaml)) {
    query->insert(pair<string, bool>("EncryptYaml", *request->encryptYaml));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->environmentId)) {
    query->insert(pair<string, string>("EnvironmentId", *request->environmentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeEnvCustomJob"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeEnvCustomJobResponse(callApi(params, req, runtime));
}

DescribeEnvCustomJobResponse Alibabacloud_ARMS20190808::Client::describeEnvCustomJob(shared_ptr<DescribeEnvCustomJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEnvCustomJobWithOptions(request, runtime);
}

DescribeEnvDropMetricsRuleResponse Alibabacloud_ARMS20190808::Client::describeEnvDropMetricsRuleWithOptions(shared_ptr<DescribeEnvDropMetricsRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->environmentId)) {
    query->insert(pair<string, string>("EnvironmentId", *request->environmentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeEnvDropMetricsRule"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeEnvDropMetricsRuleResponse(callApi(params, req, runtime));
}

DescribeEnvDropMetricsRuleResponse Alibabacloud_ARMS20190808::Client::describeEnvDropMetricsRule(shared_ptr<DescribeEnvDropMetricsRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEnvDropMetricsRuleWithOptions(request, runtime);
}

DescribeEnvPodMonitorResponse Alibabacloud_ARMS20190808::Client::describeEnvPodMonitorWithOptions(shared_ptr<DescribeEnvPodMonitorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->environmentId)) {
    query->insert(pair<string, string>("EnvironmentId", *request->environmentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->podMonitorName)) {
    query->insert(pair<string, string>("PodMonitorName", *request->podMonitorName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeEnvPodMonitor"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeEnvPodMonitorResponse(callApi(params, req, runtime));
}

DescribeEnvPodMonitorResponse Alibabacloud_ARMS20190808::Client::describeEnvPodMonitor(shared_ptr<DescribeEnvPodMonitorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEnvPodMonitorWithOptions(request, runtime);
}

DescribeEnvServiceMonitorResponse Alibabacloud_ARMS20190808::Client::describeEnvServiceMonitorWithOptions(shared_ptr<DescribeEnvServiceMonitorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->environmentId)) {
    query->insert(pair<string, string>("EnvironmentId", *request->environmentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceMonitorName)) {
    query->insert(pair<string, string>("ServiceMonitorName", *request->serviceMonitorName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeEnvServiceMonitor"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeEnvServiceMonitorResponse(callApi(params, req, runtime));
}

DescribeEnvServiceMonitorResponse Alibabacloud_ARMS20190808::Client::describeEnvServiceMonitor(shared_ptr<DescribeEnvServiceMonitorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEnvServiceMonitorWithOptions(request, runtime);
}

DescribeEnvironmentResponse Alibabacloud_ARMS20190808::Client::describeEnvironmentWithOptions(shared_ptr<DescribeEnvironmentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->environmentId)) {
    query->insert(pair<string, string>("EnvironmentId", *request->environmentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeEnvironment"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeEnvironmentResponse(callApi(params, req, runtime));
}

DescribeEnvironmentResponse Alibabacloud_ARMS20190808::Client::describeEnvironment(shared_ptr<DescribeEnvironmentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEnvironmentWithOptions(request, runtime);
}

DescribeEnvironmentFeatureResponse Alibabacloud_ARMS20190808::Client::describeEnvironmentFeatureWithOptions(shared_ptr<DescribeEnvironmentFeatureRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aliyunLang)) {
    query->insert(pair<string, string>("AliyunLang", *request->aliyunLang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->environmentId)) {
    query->insert(pair<string, string>("EnvironmentId", *request->environmentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->featureName)) {
    query->insert(pair<string, string>("FeatureName", *request->featureName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeEnvironmentFeature"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeEnvironmentFeatureResponse(callApi(params, req, runtime));
}

DescribeEnvironmentFeatureResponse Alibabacloud_ARMS20190808::Client::describeEnvironmentFeature(shared_ptr<DescribeEnvironmentFeatureRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEnvironmentFeatureWithOptions(request, runtime);
}

DescribeIMRobotsResponse Alibabacloud_ARMS20190808::Client::describeIMRobotsWithOptions(shared_ptr<DescribeIMRobotsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    query->insert(pair<string, long>("Page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->robotIds)) {
    query->insert(pair<string, string>("RobotIds", *request->robotIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->robotName)) {
    query->insert(pair<string, string>("RobotName", *request->robotName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    query->insert(pair<string, long>("Size", *request->size));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeIMRobots"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeIMRobotsResponse(callApi(params, req, runtime));
}

DescribeIMRobotsResponse Alibabacloud_ARMS20190808::Client::describeIMRobots(shared_ptr<DescribeIMRobotsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeIMRobotsWithOptions(request, runtime);
}

DescribePrometheusAlertRuleResponse Alibabacloud_ARMS20190808::Client::describePrometheusAlertRuleWithOptions(shared_ptr<DescribePrometheusAlertRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->alertId)) {
    query->insert(pair<string, long>("AlertId", *request->alertId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePrometheusAlertRule"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePrometheusAlertRuleResponse(callApi(params, req, runtime));
}

DescribePrometheusAlertRuleResponse Alibabacloud_ARMS20190808::Client::describePrometheusAlertRule(shared_ptr<DescribePrometheusAlertRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePrometheusAlertRuleWithOptions(request, runtime);
}

DescribeTraceLicenseKeyResponse Alibabacloud_ARMS20190808::Client::describeTraceLicenseKeyWithOptions(shared_ptr<DescribeTraceLicenseKeyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeTraceLicenseKey"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeTraceLicenseKeyResponse(callApi(params, req, runtime));
}

DescribeTraceLicenseKeyResponse Alibabacloud_ARMS20190808::Client::describeTraceLicenseKey(shared_ptr<DescribeTraceLicenseKeyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTraceLicenseKeyWithOptions(request, runtime);
}

DescribeWebhookContactsResponse Alibabacloud_ARMS20190808::Client::describeWebhookContactsWithOptions(shared_ptr<DescribeWebhookContactsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeWebhookContacts"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeWebhookContactsResponse(callApi(params, req, runtime));
}

DescribeWebhookContactsResponse Alibabacloud_ARMS20190808::Client::describeWebhookContacts(shared_ptr<DescribeWebhookContactsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeWebhookContactsWithOptions(request, runtime);
}

DoInsightsActionResponse Alibabacloud_ARMS20190808::Client::doInsightsActionWithOptions(shared_ptr<DoInsightsActionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->data)) {
    body->insert(pair<string, string>("Data", *request->data));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->module)) {
    body->insert(pair<string, string>("Module", *request->module));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DoInsightsAction"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DoInsightsActionResponse(callApi(params, req, runtime));
}

DoInsightsActionResponse Alibabacloud_ARMS20190808::Client::doInsightsAction(shared_ptr<DoInsightsActionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return doInsightsActionWithOptions(request, runtime);
}

EnableMetricResponse Alibabacloud_ARMS20190808::Client::enableMetricWithOptions(shared_ptr<EnableMetricRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dropMetric)) {
    query->insert(pair<string, string>("DropMetric", *request->dropMetric));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EnableMetric"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EnableMetricResponse(callApi(params, req, runtime));
}

EnableMetricResponse Alibabacloud_ARMS20190808::Client::enableMetric(shared_ptr<EnableMetricRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enableMetricWithOptions(request, runtime);
}

GetAgentDownloadUrlResponse Alibabacloud_ARMS20190808::Client::getAgentDownloadUrlWithOptions(shared_ptr<GetAgentDownloadUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAgentDownloadUrl"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAgentDownloadUrlResponse(callApi(params, req, runtime));
}

GetAgentDownloadUrlResponse Alibabacloud_ARMS20190808::Client::getAgentDownloadUrl(shared_ptr<GetAgentDownloadUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAgentDownloadUrlWithOptions(request, runtime);
}

GetAgentDownloadUrlV2Response Alibabacloud_ARMS20190808::Client::getAgentDownloadUrlV2WithOptions(shared_ptr<GetAgentDownloadUrlV2Request> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentType)) {
    query->insert(pair<string, string>("AgentType", *request->agentType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->archType)) {
    query->insert(pair<string, string>("ArchType", *request->archType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->osType)) {
    query->insert(pair<string, string>("OsType", *request->osType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAgentDownloadUrlV2"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAgentDownloadUrlV2Response(callApi(params, req, runtime));
}

GetAgentDownloadUrlV2Response Alibabacloud_ARMS20190808::Client::getAgentDownloadUrlV2(shared_ptr<GetAgentDownloadUrlV2Request> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAgentDownloadUrlV2WithOptions(request, runtime);
}

GetAlertRulesResponse Alibabacloud_ARMS20190808::Client::getAlertRulesWithOptions(shared_ptr<GetAlertRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->alertIds)) {
    query->insert(pair<string, string>("AlertIds", *request->alertIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->alertNames)) {
    query->insert(pair<string, string>("AlertNames", *request->alertNames));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->alertStatus)) {
    query->insert(pair<string, string>("AlertStatus", *request->alertStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->alertType)) {
    query->insert(pair<string, string>("AlertType", *request->alertType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizRegionId)) {
    query->insert(pair<string, string>("BizRegionId", *request->bizRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    query->insert(pair<string, long>("Page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    query->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    query->insert(pair<string, long>("Size", *request->size));
  }
  if (!Darabonba_Util::Client::isUnset<vector<GetAlertRulesRequestTags>>(request->tags)) {
    query->insert(pair<string, vector<GetAlertRulesRequestTags>>("Tags", *request->tags));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAlertRules"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAlertRulesResponse(callApi(params, req, runtime));
}

GetAlertRulesResponse Alibabacloud_ARMS20190808::Client::getAlertRules(shared_ptr<GetAlertRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAlertRulesWithOptions(request, runtime);
}

GetAppApiByPageResponse Alibabacloud_ARMS20190808::Client::getAppApiByPageWithOptions(shared_ptr<GetAppApiByPageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->intervalMills)) {
    query->insert(pair<string, long>("IntervalMills", *request->intervalMills));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->PId)) {
    query->insert(pair<string, string>("PId", *request->PId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    query->insert(pair<string, long>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAppApiByPage"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAppApiByPageResponse(callApi(params, req, runtime));
}

GetAppApiByPageResponse Alibabacloud_ARMS20190808::Client::getAppApiByPage(shared_ptr<GetAppApiByPageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAppApiByPageWithOptions(request, runtime);
}

GetAppJVMConfigResponse Alibabacloud_ARMS20190808::Client::getAppJVMConfigWithOptions(shared_ptr<GetAppJVMConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAppJVMConfig"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAppJVMConfigResponse(callApi(params, req, runtime));
}

GetAppJVMConfigResponse Alibabacloud_ARMS20190808::Client::getAppJVMConfig(shared_ptr<GetAppJVMConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAppJVMConfigWithOptions(request, runtime);
}

GetAuthTokenResponse Alibabacloud_ARMS20190808::Client::getAuthTokenWithOptions(shared_ptr<GetAuthTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAuthToken"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAuthTokenResponse(callApi(params, req, runtime));
}

GetAuthTokenResponse Alibabacloud_ARMS20190808::Client::getAuthToken(shared_ptr<GetAuthTokenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAuthTokenWithOptions(request, runtime);
}

GetCloudClusterAllUrlResponse Alibabacloud_ARMS20190808::Client::getCloudClusterAllUrlWithOptions(shared_ptr<GetCloudClusterAllUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCloudClusterAllUrl"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetCloudClusterAllUrlResponse(callApi(params, req, runtime));
}

GetCloudClusterAllUrlResponse Alibabacloud_ARMS20190808::Client::getCloudClusterAllUrl(shared_ptr<GetCloudClusterAllUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCloudClusterAllUrlWithOptions(request, runtime);
}

GetClusterAllUrlResponse Alibabacloud_ARMS20190808::Client::getClusterAllUrlWithOptions(shared_ptr<GetClusterAllUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetClusterAllUrl"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetClusterAllUrlResponse(callApi(params, req, runtime));
}

GetClusterAllUrlResponse Alibabacloud_ARMS20190808::Client::getClusterAllUrl(shared_ptr<GetClusterAllUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getClusterAllUrlWithOptions(request, runtime);
}

GetCommercialStatusResponse Alibabacloud_ARMS20190808::Client::getCommercialStatusWithOptions(shared_ptr<GetCommercialStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->commodityCode)) {
    query->insert(pair<string, string>("CommodityCode", *request->commodityCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCommercialStatus"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetCommercialStatusResponse(callApi(params, req, runtime));
}

GetCommercialStatusResponse Alibabacloud_ARMS20190808::Client::getCommercialStatus(shared_ptr<GetCommercialStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCommercialStatusWithOptions(request, runtime);
}

GetExploreUrlResponse Alibabacloud_ARMS20190808::Client::getExploreUrlWithOptions(shared_ptr<GetExploreUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->expression)) {
    query->insert(pair<string, string>("Expression", *request->expression));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetExploreUrl"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetExploreUrlResponse(callApi(params, req, runtime));
}

GetExploreUrlResponse Alibabacloud_ARMS20190808::Client::getExploreUrl(shared_ptr<GetExploreUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getExploreUrlWithOptions(request, runtime);
}

GetGrafanaWorkspaceResponse Alibabacloud_ARMS20190808::Client::getGrafanaWorkspaceWithOptions(shared_ptr<GetGrafanaWorkspaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aliyunLang)) {
    query->insert(pair<string, string>("AliyunLang", *request->aliyunLang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->grafanaWorkspaceId)) {
    query->insert(pair<string, string>("GrafanaWorkspaceId", *request->grafanaWorkspaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetGrafanaWorkspace"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetGrafanaWorkspaceResponse(callApi(params, req, runtime));
}

GetGrafanaWorkspaceResponse Alibabacloud_ARMS20190808::Client::getGrafanaWorkspace(shared_ptr<GetGrafanaWorkspaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getGrafanaWorkspaceWithOptions(request, runtime);
}

GetIntegrationStateResponse Alibabacloud_ARMS20190808::Client::getIntegrationStateWithOptions(shared_ptr<GetIntegrationStateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->integration)) {
    query->insert(pair<string, string>("Integration", *request->integration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetIntegrationState"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetIntegrationStateResponse(callApi(params, req, runtime));
}

GetIntegrationStateResponse Alibabacloud_ARMS20190808::Client::getIntegrationState(shared_ptr<GetIntegrationStateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getIntegrationStateWithOptions(request, runtime);
}

GetManagedPrometheusStatusResponse Alibabacloud_ARMS20190808::Client::getManagedPrometheusStatusWithOptions(shared_ptr<GetManagedPrometheusStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterType)) {
    query->insert(pair<string, string>("ClusterType", *request->clusterType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcId)) {
    query->insert(pair<string, string>("VpcId", *request->vpcId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetManagedPrometheusStatus"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetManagedPrometheusStatusResponse(callApi(params, req, runtime));
}

GetManagedPrometheusStatusResponse Alibabacloud_ARMS20190808::Client::getManagedPrometheusStatus(shared_ptr<GetManagedPrometheusStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getManagedPrometheusStatusWithOptions(request, runtime);
}

GetMultipleTraceResponse Alibabacloud_ARMS20190808::Client::getMultipleTraceWithOptions(shared_ptr<GetMultipleTraceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
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
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    query->insert(pair<string, long>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->traceIDs)) {
    query->insert(pair<string, vector<string>>("TraceIDs", *request->traceIDs));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMultipleTrace"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMultipleTraceResponse(callApi(params, req, runtime));
}

GetMultipleTraceResponse Alibabacloud_ARMS20190808::Client::getMultipleTrace(shared_ptr<GetMultipleTraceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMultipleTraceWithOptions(request, runtime);
}

GetOnCallSchedulesDetailResponse Alibabacloud_ARMS20190808::Client::getOnCallSchedulesDetailWithOptions(shared_ptr<GetOnCallSchedulesDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetOnCallSchedulesDetail"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetOnCallSchedulesDetailResponse(callApi(params, req, runtime));
}

GetOnCallSchedulesDetailResponse Alibabacloud_ARMS20190808::Client::getOnCallSchedulesDetail(shared_ptr<GetOnCallSchedulesDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getOnCallSchedulesDetailWithOptions(request, runtime);
}

GetPrometheusApiTokenResponse Alibabacloud_ARMS20190808::Client::getPrometheusApiTokenWithOptions(shared_ptr<GetPrometheusApiTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPrometheusApiToken"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetPrometheusApiTokenResponse(callApi(params, req, runtime));
}

GetPrometheusApiTokenResponse Alibabacloud_ARMS20190808::Client::getPrometheusApiToken(shared_ptr<GetPrometheusApiTokenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPrometheusApiTokenWithOptions(request, runtime);
}

GetPrometheusGlobalViewResponse Alibabacloud_ARMS20190808::Client::getPrometheusGlobalViewWithOptions(shared_ptr<GetPrometheusGlobalViewRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->globalViewClusterId)) {
    query->insert(pair<string, string>("GlobalViewClusterId", *request->globalViewClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPrometheusGlobalView"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetPrometheusGlobalViewResponse(callApi(params, req, runtime));
}

GetPrometheusGlobalViewResponse Alibabacloud_ARMS20190808::Client::getPrometheusGlobalView(shared_ptr<GetPrometheusGlobalViewRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPrometheusGlobalViewWithOptions(request, runtime);
}

GetPrometheusInstanceResponse Alibabacloud_ARMS20190808::Client::getPrometheusInstanceWithOptions(shared_ptr<GetPrometheusInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPrometheusInstance"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetPrometheusInstanceResponse(callApi(params, req, runtime));
}

GetPrometheusInstanceResponse Alibabacloud_ARMS20190808::Client::getPrometheusInstance(shared_ptr<GetPrometheusInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPrometheusInstanceWithOptions(request, runtime);
}

GetPrometheusIntegrationResponse Alibabacloud_ARMS20190808::Client::getPrometheusIntegrationWithOptions(shared_ptr<GetPrometheusIntegrationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->instanceId)) {
    query->insert(pair<string, long>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->integrationType)) {
    query->insert(pair<string, string>("IntegrationType", *request->integrationType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPrometheusIntegration"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetPrometheusIntegrationResponse(callApi(params, req, runtime));
}

GetPrometheusIntegrationResponse Alibabacloud_ARMS20190808::Client::getPrometheusIntegration(shared_ptr<GetPrometheusIntegrationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPrometheusIntegrationWithOptions(request, runtime);
}

GetPrometheusMonitoringResponse Alibabacloud_ARMS20190808::Client::getPrometheusMonitoringWithOptions(shared_ptr<GetPrometheusMonitoringRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->monitoringName)) {
    query->insert(pair<string, string>("MonitoringName", *request->monitoringName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPrometheusMonitoring"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetPrometheusMonitoringResponse(callApi(params, req, runtime));
}

GetPrometheusMonitoringResponse Alibabacloud_ARMS20190808::Client::getPrometheusMonitoring(shared_ptr<GetPrometheusMonitoringRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPrometheusMonitoringWithOptions(request, runtime);
}

GetRecordingRuleResponse Alibabacloud_ARMS20190808::Client::getRecordingRuleWithOptions(shared_ptr<GetRecordingRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRecordingRule"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetRecordingRuleResponse(callApi(params, req, runtime));
}

GetRecordingRuleResponse Alibabacloud_ARMS20190808::Client::getRecordingRule(shared_ptr<GetRecordingRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRecordingRuleWithOptions(request, runtime);
}

GetRetcodeAppByPidResponse Alibabacloud_ARMS20190808::Client::getRetcodeAppByPidWithOptions(shared_ptr<GetRetcodeAppByPidRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRetcodeAppByPid"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetRetcodeAppByPidResponse(callApi(params, req, runtime));
}

GetRetcodeAppByPidResponse Alibabacloud_ARMS20190808::Client::getRetcodeAppByPid(shared_ptr<GetRetcodeAppByPidRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRetcodeAppByPidWithOptions(request, runtime);
}

GetRetcodeDataByQueryResponse Alibabacloud_ARMS20190808::Client::getRetcodeDataByQueryWithOptions(shared_ptr<GetRetcodeDataByQueryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->from)) {
    query->insert(pair<string, long>("From", *request->from));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pid)) {
    query->insert(pair<string, string>("Pid", *request->pid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->query)) {
    query->insert(pair<string, string>("Query", *request->query));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->to)) {
    query->insert(pair<string, long>("To", *request->to));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRetcodeDataByQuery"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetRetcodeDataByQueryResponse(callApi(params, req, runtime));
}

GetRetcodeDataByQueryResponse Alibabacloud_ARMS20190808::Client::getRetcodeDataByQuery(shared_ptr<GetRetcodeDataByQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRetcodeDataByQueryWithOptions(request, runtime);
}

GetRetcodeLogstoreResponse Alibabacloud_ARMS20190808::Client::getRetcodeLogstoreWithOptions(shared_ptr<GetRetcodeLogstoreRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->pid)) {
    query->insert(pair<string, string>("Pid", *request->pid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRetcodeLogstore"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetRetcodeLogstoreResponse(callApi(params, req, runtime));
}

GetRetcodeLogstoreResponse Alibabacloud_ARMS20190808::Client::getRetcodeLogstore(shared_ptr<GetRetcodeLogstoreRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRetcodeLogstoreWithOptions(request, runtime);
}

GetRetcodeShareUrlResponse Alibabacloud_ARMS20190808::Client::getRetcodeShareUrlWithOptions(shared_ptr<GetRetcodeShareUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->pid)) {
    query->insert(pair<string, string>("Pid", *request->pid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRetcodeShareUrl"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetRetcodeShareUrlResponse(callApi(params, req, runtime));
}

GetRetcodeShareUrlResponse Alibabacloud_ARMS20190808::Client::getRetcodeShareUrl(shared_ptr<GetRetcodeShareUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRetcodeShareUrlWithOptions(request, runtime);
}

GetRumAppInfoResponse Alibabacloud_ARMS20190808::Client::getRumAppInfoWithOptions(shared_ptr<GetRumAppInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appGroup)) {
    query->insert(pair<string, string>("AppGroup", *request->appGroup));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pid)) {
    query->insert(pair<string, string>("Pid", *request->pid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRumAppInfo"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetRumAppInfoResponse(callApi(params, req, runtime));
}

GetRumAppInfoResponse Alibabacloud_ARMS20190808::Client::getRumAppInfo(shared_ptr<GetRumAppInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRumAppInfoWithOptions(request, runtime);
}

GetRumAppsResponse Alibabacloud_ARMS20190808::Client::getRumAppsWithOptions(shared_ptr<GetRumAppsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetRumAppsShrinkRequest> request = make_shared<GetRumAppsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<GetRumAppsRequestTags>>(tmpReq->tags)) {
    request->tagsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tags, make_shared<string>("Tags"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appGroup)) {
    query->insert(pair<string, string>("AppGroup", *request->appGroup));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appType)) {
    query->insert(pair<string, string>("AppType", *request->appType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagsShrink)) {
    query->insert(pair<string, string>("Tags", *request->tagsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRumApps"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetRumAppsResponse(callApi(params, req, runtime));
}

GetRumAppsResponse Alibabacloud_ARMS20190808::Client::getRumApps(shared_ptr<GetRumAppsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRumAppsWithOptions(request, runtime);
}

GetRumDataForPageResponse Alibabacloud_ARMS20190808::Client::getRumDataForPageWithOptions(shared_ptr<GetRumDataForPageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appGroup)) {
    query->insert(pair<string, string>("AppGroup", *request->appGroup));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->pid)) {
    query->insert(pair<string, string>("Pid", *request->pid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->query)) {
    query->insert(pair<string, string>("Query", *request->query));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    query->insert(pair<string, long>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRumDataForPage"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetRumDataForPageResponse(callApi(params, req, runtime));
}

GetRumDataForPageResponse Alibabacloud_ARMS20190808::Client::getRumDataForPage(shared_ptr<GetRumDataForPageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRumDataForPageWithOptions(request, runtime);
}

GetRumExceptionStackResponse Alibabacloud_ARMS20190808::Client::getRumExceptionStackWithOptions(shared_ptr<GetRumExceptionStackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->exceptionBinaryImages)) {
    query->insert(pair<string, string>("ExceptionBinaryImages", *request->exceptionBinaryImages));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->exceptionStack)) {
    query->insert(pair<string, string>("ExceptionStack", *request->exceptionStack));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->exceptionThreadId)) {
    query->insert(pair<string, string>("ExceptionThreadId", *request->exceptionThreadId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extraInfo)) {
    query->insert(pair<string, string>("ExtraInfo", *request->extraInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pid)) {
    query->insert(pair<string, string>("Pid", *request->pid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourcemapType)) {
    query->insert(pair<string, string>("SourcemapType", *request->sourcemapType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRumExceptionStack"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetRumExceptionStackResponse(callApi(params, req, runtime));
}

GetRumExceptionStackResponse Alibabacloud_ARMS20190808::Client::getRumExceptionStack(shared_ptr<GetRumExceptionStackRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRumExceptionStackWithOptions(request, runtime);
}

GetRumOcuStatisticDataResponse Alibabacloud_ARMS20190808::Client::getRumOcuStatisticDataWithOptions(shared_ptr<GetRumOcuStatisticDataRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetRumOcuStatisticDataShrinkRequest> request = make_shared<GetRumOcuStatisticDataShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<GetRumOcuStatisticDataRequestFilter>>(tmpReq->filter)) {
    request->filterShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->filter, make_shared<string>("Filter"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->group)) {
    request->groupShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->group, make_shared<string>("Group"), make_shared<string>("json")));
  }
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRumOcuStatisticData"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetRumOcuStatisticDataResponse(callApi(params, req, runtime));
}

GetRumOcuStatisticDataResponse Alibabacloud_ARMS20190808::Client::getRumOcuStatisticData(shared_ptr<GetRumOcuStatisticDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRumOcuStatisticDataWithOptions(request, runtime);
}

GetRumUploadFilesResponse Alibabacloud_ARMS20190808::Client::getRumUploadFilesWithOptions(shared_ptr<GetRumUploadFilesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appType)) {
    query->insert(pair<string, string>("AppType", *request->appType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pid)) {
    query->insert(pair<string, string>("Pid", *request->pid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->versionId)) {
    query->insert(pair<string, string>("VersionId", *request->versionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRumUploadFiles"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetRumUploadFilesResponse(callApi(params, req, runtime));
}

GetRumUploadFilesResponse Alibabacloud_ARMS20190808::Client::getRumUploadFiles(shared_ptr<GetRumUploadFilesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRumUploadFilesWithOptions(request, runtime);
}

GetSourceMapInfoResponse Alibabacloud_ARMS20190808::Client::getSourceMapInfoWithOptions(shared_ptr<GetSourceMapInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->ascendingSequence)) {
    query->insert(pair<string, bool>("AscendingSequence", *request->ascendingSequence));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->edition)) {
    query->insert(pair<string, string>("Edition", *request->edition));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ID)) {
    query->insert(pair<string, string>("ID", *request->ID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    query->insert(pair<string, string>("Keyword", *request->keyword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderField)) {
    query->insert(pair<string, string>("OrderField", *request->orderField));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSourceMapInfo"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSourceMapInfoResponse(callApi(params, req, runtime));
}

GetSourceMapInfoResponse Alibabacloud_ARMS20190808::Client::getSourceMapInfo(shared_ptr<GetSourceMapInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSourceMapInfoWithOptions(request, runtime);
}

GetStackResponse Alibabacloud_ARMS20190808::Client::getStackWithOptions(shared_ptr<GetStackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pid)) {
    query->insert(pair<string, string>("Pid", *request->pid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rpcID)) {
    query->insert(pair<string, string>("RpcID", *request->rpcID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spanID)) {
    query->insert(pair<string, string>("SpanID", *request->spanID));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    query->insert(pair<string, long>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->traceID)) {
    query->insert(pair<string, string>("TraceID", *request->traceID));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetStack"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetStackResponse(callApi(params, req, runtime));
}

GetStackResponse Alibabacloud_ARMS20190808::Client::getStack(shared_ptr<GetStackRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getStackWithOptions(request, runtime);
}

GetSyntheticMonitorsResponse Alibabacloud_ARMS20190808::Client::getSyntheticMonitorsWithOptions(shared_ptr<GetSyntheticMonitorsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetSyntheticMonitorsShrinkRequest> request = make_shared<GetSyntheticMonitorsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<GetSyntheticMonitorsRequestFilter>(tmpReq->filter)) {
    request->filterShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->filter, make_shared<string>("Filter"), make_shared<string>("json")));
  }
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSyntheticMonitors"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSyntheticMonitorsResponse(callApi(params, req, runtime));
}

GetSyntheticMonitorsResponse Alibabacloud_ARMS20190808::Client::getSyntheticMonitors(shared_ptr<GetSyntheticMonitorsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSyntheticMonitorsWithOptions(request, runtime);
}

GetSyntheticTaskDetailResponse Alibabacloud_ARMS20190808::Client::getSyntheticTaskDetailWithOptions(shared_ptr<GetSyntheticTaskDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSyntheticTaskDetail"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSyntheticTaskDetailResponse(callApi(params, req, runtime));
}

GetSyntheticTaskDetailResponse Alibabacloud_ARMS20190808::Client::getSyntheticTaskDetail(shared_ptr<GetSyntheticTaskDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSyntheticTaskDetailWithOptions(request, runtime);
}

GetSyntheticTaskListResponse Alibabacloud_ARMS20190808::Client::getSyntheticTaskListWithOptions(shared_ptr<GetSyntheticTaskListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->direction)) {
    query->insert(pair<string, string>("Direction", *request->direction));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->order)) {
    query->insert(pair<string, string>("Order", *request->order));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskName)) {
    query->insert(pair<string, string>("TaskName", *request->taskName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskStatus)) {
    query->insert(pair<string, string>("TaskStatus", *request->taskStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskType)) {
    query->insert(pair<string, string>("TaskType", *request->taskType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    query->insert(pair<string, string>("Url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSyntheticTaskList"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSyntheticTaskListResponse(callApi(params, req, runtime));
}

GetSyntheticTaskListResponse Alibabacloud_ARMS20190808::Client::getSyntheticTaskList(shared_ptr<GetSyntheticTaskListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSyntheticTaskListWithOptions(request, runtime);
}

GetSyntheticTaskMonitorsResponse Alibabacloud_ARMS20190808::Client::getSyntheticTaskMonitorsWithOptions(shared_ptr<GetSyntheticTaskMonitorsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSyntheticTaskMonitors"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSyntheticTaskMonitorsResponse(callApi(params, req, runtime));
}

GetSyntheticTaskMonitorsResponse Alibabacloud_ARMS20190808::Client::getSyntheticTaskMonitors(shared_ptr<GetSyntheticTaskMonitorsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSyntheticTaskMonitorsWithOptions(request, runtime);
}

GetTimingSyntheticTaskResponse Alibabacloud_ARMS20190808::Client::getTimingSyntheticTaskWithOptions(shared_ptr<GetTimingSyntheticTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTimingSyntheticTask"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTimingSyntheticTaskResponse(callApi(params, req, runtime));
}

GetTimingSyntheticTaskResponse Alibabacloud_ARMS20190808::Client::getTimingSyntheticTask(shared_ptr<GetTimingSyntheticTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTimingSyntheticTaskWithOptions(request, runtime);
}

GetTraceResponse Alibabacloud_ARMS20190808::Client::getTraceWithOptions(shared_ptr<GetTraceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
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
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    query->insert(pair<string, long>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->traceID)) {
    query->insert(pair<string, string>("TraceID", *request->traceID));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTrace"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTraceResponse(callApi(params, req, runtime));
}

GetTraceResponse Alibabacloud_ARMS20190808::Client::getTrace(shared_ptr<GetTraceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTraceWithOptions(request, runtime);
}

GetTraceAppResponse Alibabacloud_ARMS20190808::Client::getTraceAppWithOptions(shared_ptr<GetTraceAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->pid)) {
    query->insert(pair<string, string>("Pid", *request->pid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<GetTraceAppRequestTags>>(request->tags)) {
    query->insert(pair<string, vector<GetTraceAppRequestTags>>("Tags", *request->tags));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTraceApp"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTraceAppResponse(callApi(params, req, runtime));
}

GetTraceAppResponse Alibabacloud_ARMS20190808::Client::getTraceApp(shared_ptr<GetTraceAppRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTraceAppWithOptions(request, runtime);
}

GetTraceAppConfigResponse Alibabacloud_ARMS20190808::Client::getTraceAppConfigWithOptions(shared_ptr<GetTraceAppConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->pid)) {
    query->insert(pair<string, string>("Pid", *request->pid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTraceAppConfig"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTraceAppConfigResponse(callApi(params, req, runtime));
}

GetTraceAppConfigResponse Alibabacloud_ARMS20190808::Client::getTraceAppConfig(shared_ptr<GetTraceAppConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTraceAppConfigWithOptions(request, runtime);
}

ImportAppAlertRulesResponse Alibabacloud_ARMS20190808::Client::importAppAlertRulesWithOptions(shared_ptr<ImportAppAlertRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->contactGroupIds)) {
    query->insert(pair<string, string>("ContactGroupIds", *request->contactGroupIds));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isAutoStart)) {
    query->insert(pair<string, bool>("IsAutoStart", *request->isAutoStart));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pids)) {
    query->insert(pair<string, string>("Pids", *request->pids));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ImportAppAlertRulesRequestTags>>(request->tags)) {
    query->insert(pair<string, vector<ImportAppAlertRulesRequestTags>>("Tags", *request->tags));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templageAlertConfig)) {
    query->insert(pair<string, string>("TemplageAlertConfig", *request->templageAlertConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateAlertId)) {
    query->insert(pair<string, string>("TemplateAlertId", *request->templateAlertId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ImportAppAlertRules"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ImportAppAlertRulesResponse(callApi(params, req, runtime));
}

ImportAppAlertRulesResponse Alibabacloud_ARMS20190808::Client::importAppAlertRules(shared_ptr<ImportAppAlertRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return importAppAlertRulesWithOptions(request, runtime);
}

InitEnvironmentResponse Alibabacloud_ARMS20190808::Client::initEnvironmentWithOptions(shared_ptr<InitEnvironmentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aliyunLang)) {
    query->insert(pair<string, string>("AliyunLang", *request->aliyunLang));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->createAuthToken)) {
    query->insert(pair<string, bool>("CreateAuthToken", *request->createAuthToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->environmentId)) {
    query->insert(pair<string, string>("EnvironmentId", *request->environmentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->managedType)) {
    query->insert(pair<string, string>("ManagedType", *request->managedType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InitEnvironment"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InitEnvironmentResponse(callApi(params, req, runtime));
}

InitEnvironmentResponse Alibabacloud_ARMS20190808::Client::initEnvironment(shared_ptr<InitEnvironmentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return initEnvironmentWithOptions(request, runtime);
}

InstallAddonResponse Alibabacloud_ARMS20190808::Client::installAddonWithOptions(shared_ptr<InstallAddonRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->addonVersion)) {
    query->insert(pair<string, string>("AddonVersion", *request->addonVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->aliyunLang)) {
    query->insert(pair<string, string>("AliyunLang", *request->aliyunLang));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->environmentId)) {
    query->insert(pair<string, string>("EnvironmentId", *request->environmentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->releaseName)) {
    query->insert(pair<string, string>("ReleaseName", *request->releaseName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->values)) {
    query->insert(pair<string, string>("Values", *request->values));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InstallAddon"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InstallAddonResponse(callApi(params, req, runtime));
}

InstallAddonResponse Alibabacloud_ARMS20190808::Client::installAddon(shared_ptr<InstallAddonRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return installAddonWithOptions(request, runtime);
}

InstallCmsExporterResponse Alibabacloud_ARMS20190808::Client::installCmsExporterWithOptions(shared_ptr<InstallCmsExporterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cmsArgs)) {
    query->insert(pair<string, string>("CmsArgs", *request->cmsArgs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->directArgs)) {
    query->insert(pair<string, string>("DirectArgs", *request->directArgs));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableTag)) {
    query->insert(pair<string, bool>("EnableTag", *request->enableTag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InstallCmsExporter"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InstallCmsExporterResponse(callApi(params, req, runtime));
}

InstallCmsExporterResponse Alibabacloud_ARMS20190808::Client::installCmsExporter(shared_ptr<InstallCmsExporterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return installCmsExporterWithOptions(request, runtime);
}

InstallEnvironmentFeatureResponse Alibabacloud_ARMS20190808::Client::installEnvironmentFeatureWithOptions(shared_ptr<InstallEnvironmentFeatureRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aliyunLang)) {
    query->insert(pair<string, string>("AliyunLang", *request->aliyunLang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->config)) {
    query->insert(pair<string, string>("Config", *request->config));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->environmentId)) {
    query->insert(pair<string, string>("EnvironmentId", *request->environmentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->featureName)) {
    query->insert(pair<string, string>("FeatureName", *request->featureName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->featureVersion)) {
    query->insert(pair<string, string>("FeatureVersion", *request->featureVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InstallEnvironmentFeature"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InstallEnvironmentFeatureResponse(callApi(params, req, runtime));
}

InstallEnvironmentFeatureResponse Alibabacloud_ARMS20190808::Client::installEnvironmentFeature(shared_ptr<InstallEnvironmentFeatureRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return installEnvironmentFeatureWithOptions(request, runtime);
}

InstallManagedPrometheusResponse Alibabacloud_ARMS20190808::Client::installManagedPrometheusWithOptions(shared_ptr<InstallManagedPrometheusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterName)) {
    query->insert(pair<string, string>("ClusterName", *request->clusterName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterType)) {
    query->insert(pair<string, string>("ClusterType", *request->clusterType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->grafanaInstanceId)) {
    query->insert(pair<string, string>("GrafanaInstanceId", *request->grafanaInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->kubeConfig)) {
    query->insert(pair<string, string>("KubeConfig", *request->kubeConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityGroupId)) {
    query->insert(pair<string, string>("SecurityGroupId", *request->securityGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vSwitchId)) {
    query->insert(pair<string, string>("VSwitchId", *request->vSwitchId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vcExtraInfo)) {
    query->insert(pair<string, string>("VcExtraInfo", *request->vcExtraInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcId)) {
    query->insert(pair<string, string>("VpcId", *request->vpcId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InstallManagedPrometheus"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InstallManagedPrometheusResponse(callApi(params, req, runtime));
}

InstallManagedPrometheusResponse Alibabacloud_ARMS20190808::Client::installManagedPrometheus(shared_ptr<InstallManagedPrometheusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return installManagedPrometheusWithOptions(request, runtime);
}

ListActivatedAlertsResponse Alibabacloud_ARMS20190808::Client::listActivatedAlertsWithOptions(shared_ptr<ListActivatedAlertsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filter)) {
    query->insert(pair<string, string>("Filter", *request->filter));
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
    {"action", boost::any(string("ListActivatedAlerts"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListActivatedAlertsResponse(callApi(params, req, runtime));
}

ListActivatedAlertsResponse Alibabacloud_ARMS20190808::Client::listActivatedAlerts(shared_ptr<ListActivatedAlertsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listActivatedAlertsWithOptions(request, runtime);
}

ListAddonReleasesResponse Alibabacloud_ARMS20190808::Client::listAddonReleasesWithOptions(shared_ptr<ListAddonReleasesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->addonName)) {
    query->insert(pair<string, string>("AddonName", *request->addonName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->environmentId)) {
    query->insert(pair<string, string>("EnvironmentId", *request->environmentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAddonReleases"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAddonReleasesResponse(callApi(params, req, runtime));
}

ListAddonReleasesResponse Alibabacloud_ARMS20190808::Client::listAddonReleases(shared_ptr<ListAddonReleasesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAddonReleasesWithOptions(request, runtime);
}

ListAddonsResponse Alibabacloud_ARMS20190808::Client::listAddonsWithOptions(shared_ptr<ListAddonsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aliyunLang)) {
    query->insert(pair<string, string>("AliyunLang", *request->aliyunLang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->category)) {
    query->insert(pair<string, string>("Category", *request->category));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->regexp)) {
    query->insert(pair<string, bool>("Regexp", *request->regexp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->search)) {
    query->insert(pair<string, string>("Search", *request->search));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAddons"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAddonsResponse(callApi(params, req, runtime));
}

ListAddonsResponse Alibabacloud_ARMS20190808::Client::listAddons(shared_ptr<ListAddonsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAddonsWithOptions(request, runtime);
}

ListAlertEventsResponse Alibabacloud_ARMS20190808::Client::listAlertEventsWithOptions(shared_ptr<ListAlertEventsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->alertName)) {
    query->insert(pair<string, string>("AlertName", *request->alertName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->matchingConditions)) {
    query->insert(pair<string, string>("MatchingConditions", *request->matchingConditions));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    query->insert(pair<string, long>("Page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->showNotificationPolicies)) {
    query->insert(pair<string, bool>("ShowNotificationPolicies", *request->showNotificationPolicies));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    query->insert(pair<string, long>("Size", *request->size));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAlertEvents"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAlertEventsResponse(callApi(params, req, runtime));
}

ListAlertEventsResponse Alibabacloud_ARMS20190808::Client::listAlertEvents(shared_ptr<ListAlertEventsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAlertEventsWithOptions(request, runtime);
}

ListAlertsResponse Alibabacloud_ARMS20190808::Client::listAlertsWithOptions(shared_ptr<ListAlertsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->alertName)) {
    query->insert(pair<string, string>("AlertName", *request->alertName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->dispatchRuleId)) {
    query->insert(pair<string, long>("DispatchRuleId", *request->dispatchRuleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->integrationType)) {
    query->insert(pair<string, string>("IntegrationType", *request->integrationType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->owner)) {
    query->insert(pair<string, string>("Owner", *request->owner));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    query->insert(pair<string, long>("Page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->severity)) {
    query->insert(pair<string, string>("Severity", *request->severity));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->showActivities)) {
    query->insert(pair<string, bool>("ShowActivities", *request->showActivities));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->showEvents)) {
    query->insert(pair<string, bool>("ShowEvents", *request->showEvents));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    query->insert(pair<string, long>("Size", *request->size));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->state)) {
    query->insert(pair<string, long>("State", *request->state));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAlerts"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAlertsResponse(callApi(params, req, runtime));
}

ListAlertsResponse Alibabacloud_ARMS20190808::Client::listAlerts(shared_ptr<ListAlertsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAlertsWithOptions(request, runtime);
}

ListClusterFromGrafanaResponse Alibabacloud_ARMS20190808::Client::listClusterFromGrafanaWithOptions(shared_ptr<ListClusterFromGrafanaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListClusterFromGrafana"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListClusterFromGrafanaResponse(callApi(params, req, runtime));
}

ListClusterFromGrafanaResponse Alibabacloud_ARMS20190808::Client::listClusterFromGrafana(shared_ptr<ListClusterFromGrafanaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listClusterFromGrafanaWithOptions(request, runtime);
}

ListCmsInstancesResponse Alibabacloud_ARMS20190808::Client::listCmsInstancesWithOptions(shared_ptr<ListCmsInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->typeFilter)) {
    query->insert(pair<string, string>("TypeFilter", *request->typeFilter));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListCmsInstances"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListCmsInstancesResponse(callApi(params, req, runtime));
}

ListCmsInstancesResponse Alibabacloud_ARMS20190808::Client::listCmsInstances(shared_ptr<ListCmsInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listCmsInstancesWithOptions(request, runtime);
}

ListDashboardsResponse Alibabacloud_ARMS20190808::Client::listDashboardsWithOptions(shared_ptr<ListDashboardsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterType)) {
    query->insert(pair<string, string>("ClusterType", *request->clusterType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dashboardName)) {
    query->insert(pair<string, string>("DashboardName", *request->dashboardName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    query->insert(pair<string, string>("Language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->product)) {
    query->insert(pair<string, string>("Product", *request->product));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->recreateSwitch)) {
    query->insert(pair<string, bool>("RecreateSwitch", *request->recreateSwitch));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    query->insert(pair<string, string>("Title", *request->title));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDashboards"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDashboardsResponse(callApi(params, req, runtime));
}

ListDashboardsResponse Alibabacloud_ARMS20190808::Client::listDashboards(shared_ptr<ListDashboardsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDashboardsWithOptions(request, runtime);
}

ListDashboardsByNameResponse Alibabacloud_ARMS20190808::Client::listDashboardsByNameWithOptions(shared_ptr<ListDashboardsByNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterType)) {
    query->insert(pair<string, string>("ClusterType", *request->clusterType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dashBoardName)) {
    query->insert(pair<string, string>("DashBoardName", *request->dashBoardName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dashBoardVersion)) {
    query->insert(pair<string, string>("DashBoardVersion", *request->dashBoardVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSourceType)) {
    query->insert(pair<string, string>("DataSourceType", *request->dataSourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    query->insert(pair<string, string>("GroupName", *request->groupName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->onlyQuery)) {
    query->insert(pair<string, bool>("OnlyQuery", *request->onlyQuery));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    query->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDashboardsByName"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDashboardsByNameResponse(callApi(params, req, runtime));
}

ListDashboardsByNameResponse Alibabacloud_ARMS20190808::Client::listDashboardsByName(shared_ptr<ListDashboardsByNameRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDashboardsByNameWithOptions(request, runtime);
}

ListDispatchRuleResponse Alibabacloud_ARMS20190808::Client::listDispatchRuleWithOptions(shared_ptr<ListDispatchRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->system)) {
    query->insert(pair<string, bool>("System", *request->system));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDispatchRule"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDispatchRuleResponse(callApi(params, req, runtime));
}

ListDispatchRuleResponse Alibabacloud_ARMS20190808::Client::listDispatchRule(shared_ptr<ListDispatchRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDispatchRuleWithOptions(request, runtime);
}

ListEnvCustomJobsResponse Alibabacloud_ARMS20190808::Client::listEnvCustomJobsWithOptions(shared_ptr<ListEnvCustomJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->encryptYaml)) {
    query->insert(pair<string, bool>("EncryptYaml", *request->encryptYaml));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->environmentId)) {
    query->insert(pair<string, string>("EnvironmentId", *request->environmentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListEnvCustomJobs"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListEnvCustomJobsResponse(callApi(params, req, runtime));
}

ListEnvCustomJobsResponse Alibabacloud_ARMS20190808::Client::listEnvCustomJobs(shared_ptr<ListEnvCustomJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listEnvCustomJobsWithOptions(request, runtime);
}

ListEnvPodMonitorsResponse Alibabacloud_ARMS20190808::Client::listEnvPodMonitorsWithOptions(shared_ptr<ListEnvPodMonitorsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->environmentId)) {
    query->insert(pair<string, string>("EnvironmentId", *request->environmentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListEnvPodMonitors"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListEnvPodMonitorsResponse(callApi(params, req, runtime));
}

ListEnvPodMonitorsResponse Alibabacloud_ARMS20190808::Client::listEnvPodMonitors(shared_ptr<ListEnvPodMonitorsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listEnvPodMonitorsWithOptions(request, runtime);
}

ListEnvServiceMonitorsResponse Alibabacloud_ARMS20190808::Client::listEnvServiceMonitorsWithOptions(shared_ptr<ListEnvServiceMonitorsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->environmentId)) {
    query->insert(pair<string, string>("EnvironmentId", *request->environmentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListEnvServiceMonitors"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListEnvServiceMonitorsResponse(callApi(params, req, runtime));
}

ListEnvServiceMonitorsResponse Alibabacloud_ARMS20190808::Client::listEnvServiceMonitors(shared_ptr<ListEnvServiceMonitorsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listEnvServiceMonitorsWithOptions(request, runtime);
}

ListEnvironmentAddonsResponse Alibabacloud_ARMS20190808::Client::listEnvironmentAddonsWithOptions(shared_ptr<ListEnvironmentAddonsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->environmentId)) {
    query->insert(pair<string, string>("EnvironmentId", *request->environmentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListEnvironmentAddons"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListEnvironmentAddonsResponse(callApi(params, req, runtime));
}

ListEnvironmentAddonsResponse Alibabacloud_ARMS20190808::Client::listEnvironmentAddons(shared_ptr<ListEnvironmentAddonsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listEnvironmentAddonsWithOptions(request, runtime);
}

ListEnvironmentAlertRulesResponse Alibabacloud_ARMS20190808::Client::listEnvironmentAlertRulesWithOptions(shared_ptr<ListEnvironmentAlertRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->addonName)) {
    query->insert(pair<string, string>("AddonName", *request->addonName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->environmentId)) {
    query->insert(pair<string, string>("EnvironmentId", *request->environmentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scene)) {
    query->insert(pair<string, string>("Scene", *request->scene));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListEnvironmentAlertRules"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListEnvironmentAlertRulesResponse(callApi(params, req, runtime));
}

ListEnvironmentAlertRulesResponse Alibabacloud_ARMS20190808::Client::listEnvironmentAlertRules(shared_ptr<ListEnvironmentAlertRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listEnvironmentAlertRulesWithOptions(request, runtime);
}

ListEnvironmentDashboardsResponse Alibabacloud_ARMS20190808::Client::listEnvironmentDashboardsWithOptions(shared_ptr<ListEnvironmentDashboardsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->addonName)) {
    query->insert(pair<string, string>("AddonName", *request->addonName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->environmentId)) {
    query->insert(pair<string, string>("EnvironmentId", *request->environmentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scene)) {
    query->insert(pair<string, string>("Scene", *request->scene));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListEnvironmentDashboards"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListEnvironmentDashboardsResponse(callApi(params, req, runtime));
}

ListEnvironmentDashboardsResponse Alibabacloud_ARMS20190808::Client::listEnvironmentDashboards(shared_ptr<ListEnvironmentDashboardsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listEnvironmentDashboardsWithOptions(request, runtime);
}

ListEnvironmentFeaturesResponse Alibabacloud_ARMS20190808::Client::listEnvironmentFeaturesWithOptions(shared_ptr<ListEnvironmentFeaturesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aliyunLang)) {
    query->insert(pair<string, string>("AliyunLang", *request->aliyunLang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->environmentId)) {
    query->insert(pair<string, string>("EnvironmentId", *request->environmentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListEnvironmentFeatures"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListEnvironmentFeaturesResponse(callApi(params, req, runtime));
}

ListEnvironmentFeaturesResponse Alibabacloud_ARMS20190808::Client::listEnvironmentFeatures(shared_ptr<ListEnvironmentFeaturesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listEnvironmentFeaturesWithOptions(request, runtime);
}

ListEnvironmentKubeResourcesResponse Alibabacloud_ARMS20190808::Client::listEnvironmentKubeResourcesWithOptions(shared_ptr<ListEnvironmentKubeResourcesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListEnvironmentKubeResourcesShrinkRequest> request = make_shared<ListEnvironmentKubeResourcesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(tmpReq->labelSelectors)) {
    request->labelSelectorsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->labelSelectors, make_shared<string>("LabelSelectors"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->environmentId)) {
    query->insert(pair<string, string>("EnvironmentId", *request->environmentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->kind)) {
    query->insert(pair<string, string>("Kind", *request->kind));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->labelSelectorsShrink)) {
    query->insert(pair<string, string>("LabelSelectors", *request->labelSelectorsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListEnvironmentKubeResources"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListEnvironmentKubeResourcesResponse(callApi(params, req, runtime));
}

ListEnvironmentKubeResourcesResponse Alibabacloud_ARMS20190808::Client::listEnvironmentKubeResources(shared_ptr<ListEnvironmentKubeResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listEnvironmentKubeResourcesWithOptions(request, runtime);
}

ListEnvironmentMetricTargetsResponse Alibabacloud_ARMS20190808::Client::listEnvironmentMetricTargetsWithOptions(shared_ptr<ListEnvironmentMetricTargetsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->environmentId)) {
    query->insert(pair<string, string>("EnvironmentId", *request->environmentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobName)) {
    query->insert(pair<string, string>("JobName", *request->jobName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListEnvironmentMetricTargets"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListEnvironmentMetricTargetsResponse(callApi(params, req, runtime));
}

ListEnvironmentMetricTargetsResponse Alibabacloud_ARMS20190808::Client::listEnvironmentMetricTargets(shared_ptr<ListEnvironmentMetricTargetsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listEnvironmentMetricTargetsWithOptions(request, runtime);
}

ListEnvironmentsResponse Alibabacloud_ARMS20190808::Client::listEnvironmentsWithOptions(shared_ptr<ListEnvironmentsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListEnvironmentsShrinkRequest> request = make_shared<ListEnvironmentsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<ListEnvironmentsRequestTag>>(tmpReq->tag)) {
    request->tagShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tag, make_shared<string>("Tag"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->addonName)) {
    query->insert(pair<string, string>("AddonName", *request->addonName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bindResourceId)) {
    query->insert(pair<string, string>("BindResourceId", *request->bindResourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->environmentType)) {
    query->insert(pair<string, string>("EnvironmentType", *request->environmentType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->feePackage)) {
    query->insert(pair<string, string>("FeePackage", *request->feePackage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filterRegionIds)) {
    query->insert(pair<string, string>("FilterRegionIds", *request->filterRegionIds));
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
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListEnvironments"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListEnvironmentsResponse(callApi(params, req, runtime));
}

ListEnvironmentsResponse Alibabacloud_ARMS20190808::Client::listEnvironments(shared_ptr<ListEnvironmentsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listEnvironmentsWithOptions(request, runtime);
}

ListEscalationPoliciesResponse Alibabacloud_ARMS20190808::Client::listEscalationPoliciesWithOptions(shared_ptr<ListEscalationPoliciesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListEscalationPolicies"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListEscalationPoliciesResponse(callApi(params, req, runtime));
}

ListEscalationPoliciesResponse Alibabacloud_ARMS20190808::Client::listEscalationPolicies(shared_ptr<ListEscalationPoliciesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listEscalationPoliciesWithOptions(request, runtime);
}

ListEventBridgeIntegrationsResponse Alibabacloud_ARMS20190808::Client::listEventBridgeIntegrationsWithOptions(shared_ptr<ListEventBridgeIntegrationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListEventBridgeIntegrations"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListEventBridgeIntegrationsResponse(callApi(params, req, runtime));
}

ListEventBridgeIntegrationsResponse Alibabacloud_ARMS20190808::Client::listEventBridgeIntegrations(shared_ptr<ListEventBridgeIntegrationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listEventBridgeIntegrationsWithOptions(request, runtime);
}

ListGrafanaWorkspaceResponse Alibabacloud_ARMS20190808::Client::listGrafanaWorkspaceWithOptions(shared_ptr<ListGrafanaWorkspaceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListGrafanaWorkspaceShrinkRequest> request = make_shared<ListGrafanaWorkspaceShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<ListGrafanaWorkspaceRequestTags>>(tmpReq->tags)) {
    request->tagsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tags, make_shared<string>("Tags"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aliyunLang)) {
    query->insert(pair<string, string>("AliyunLang", *request->aliyunLang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagsShrink)) {
    query->insert(pair<string, string>("Tags", *request->tagsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListGrafanaWorkspace"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListGrafanaWorkspaceResponse(callApi(params, req, runtime));
}

ListGrafanaWorkspaceResponse Alibabacloud_ARMS20190808::Client::listGrafanaWorkspace(shared_ptr<ListGrafanaWorkspaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listGrafanaWorkspaceWithOptions(request, runtime);
}

ListInsightsEventsResponse Alibabacloud_ARMS20190808::Client::listInsightsEventsWithOptions(shared_ptr<ListInsightsEventsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->insightsTypes)) {
    query->insert(pair<string, string>("InsightsTypes", *request->insightsTypes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pid)) {
    query->insert(pair<string, string>("Pid", *request->pid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListInsightsEvents"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListInsightsEventsResponse(callApi(params, req, runtime));
}

ListInsightsEventsResponse Alibabacloud_ARMS20190808::Client::listInsightsEvents(shared_ptr<ListInsightsEventsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listInsightsEventsWithOptions(request, runtime);
}

ListIntegrationResponse Alibabacloud_ARMS20190808::Client::listIntegrationWithOptions(shared_ptr<ListIntegrationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListIntegration"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListIntegrationResponse(callApi(params, req, runtime));
}

ListIntegrationResponse Alibabacloud_ARMS20190808::Client::listIntegration(shared_ptr<ListIntegrationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listIntegrationWithOptions(request, runtime);
}

ListNotificationPoliciesResponse Alibabacloud_ARMS20190808::Client::listNotificationPoliciesWithOptions(shared_ptr<ListNotificationPoliciesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->directedMode)) {
    query->insert(pair<string, bool>("DirectedMode", *request->directedMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ids)) {
    query->insert(pair<string, string>("Ids", *request->ids));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isDetail)) {
    query->insert(pair<string, bool>("IsDetail", *request->isDetail));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    query->insert(pair<string, long>("Page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    query->insert(pair<string, long>("Size", *request->size));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListNotificationPolicies"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListNotificationPoliciesResponse(callApi(params, req, runtime));
}

ListNotificationPoliciesResponse Alibabacloud_ARMS20190808::Client::listNotificationPolicies(shared_ptr<ListNotificationPoliciesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listNotificationPoliciesWithOptions(request, runtime);
}

ListOnCallSchedulesResponse Alibabacloud_ARMS20190808::Client::listOnCallSchedulesWithOptions(shared_ptr<ListOnCallSchedulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListOnCallSchedules"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListOnCallSchedulesResponse(callApi(params, req, runtime));
}

ListOnCallSchedulesResponse Alibabacloud_ARMS20190808::Client::listOnCallSchedules(shared_ptr<ListOnCallSchedulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listOnCallSchedulesWithOptions(request, runtime);
}

ListPrometheusAlertRulesResponse Alibabacloud_ARMS20190808::Client::listPrometheusAlertRulesWithOptions(shared_ptr<ListPrometheusAlertRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->matchExpressions)) {
    query->insert(pair<string, string>("MatchExpressions", *request->matchExpressions));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    query->insert(pair<string, long>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ListPrometheusAlertRulesRequestTags>>(request->tags)) {
    query->insert(pair<string, vector<ListPrometheusAlertRulesRequestTags>>("Tags", *request->tags));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListPrometheusAlertRules"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListPrometheusAlertRulesResponse(callApi(params, req, runtime));
}

ListPrometheusAlertRulesResponse Alibabacloud_ARMS20190808::Client::listPrometheusAlertRules(shared_ptr<ListPrometheusAlertRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listPrometheusAlertRulesWithOptions(request, runtime);
}

ListPrometheusAlertTemplatesResponse Alibabacloud_ARMS20190808::Client::listPrometheusAlertTemplatesWithOptions(shared_ptr<ListPrometheusAlertTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListPrometheusAlertTemplates"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListPrometheusAlertTemplatesResponse(callApi(params, req, runtime));
}

ListPrometheusAlertTemplatesResponse Alibabacloud_ARMS20190808::Client::listPrometheusAlertTemplates(shared_ptr<ListPrometheusAlertTemplatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listPrometheusAlertTemplatesWithOptions(request, runtime);
}

ListPrometheusGlobalViewResponse Alibabacloud_ARMS20190808::Client::listPrometheusGlobalViewWithOptions(shared_ptr<ListPrometheusGlobalViewRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListPrometheusGlobalView"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListPrometheusGlobalViewResponse(callApi(params, req, runtime));
}

ListPrometheusGlobalViewResponse Alibabacloud_ARMS20190808::Client::listPrometheusGlobalView(shared_ptr<ListPrometheusGlobalViewRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listPrometheusGlobalViewWithOptions(request, runtime);
}

ListPrometheusInstanceByTagAndResourceGroupIdResponse Alibabacloud_ARMS20190808::Client::listPrometheusInstanceByTagAndResourceGroupIdWithOptions(shared_ptr<ListPrometheusInstanceByTagAndResourceGroupIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ListPrometheusInstanceByTagAndResourceGroupIdRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<ListPrometheusInstanceByTagAndResourceGroupIdRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListPrometheusInstanceByTagAndResourceGroupId"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListPrometheusInstanceByTagAndResourceGroupIdResponse(callApi(params, req, runtime));
}

ListPrometheusInstanceByTagAndResourceGroupIdResponse Alibabacloud_ARMS20190808::Client::listPrometheusInstanceByTagAndResourceGroupId(shared_ptr<ListPrometheusInstanceByTagAndResourceGroupIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listPrometheusInstanceByTagAndResourceGroupIdWithOptions(request, runtime);
}

ListPrometheusInstancesResponse Alibabacloud_ARMS20190808::Client::listPrometheusInstancesWithOptions(shared_ptr<ListPrometheusInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterType)) {
    query->insert(pair<string, string>("ClusterType", *request->clusterType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->showGlobalView)) {
    query->insert(pair<string, bool>("ShowGlobalView", *request->showGlobalView));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListPrometheusInstances"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListPrometheusInstancesResponse(callApi(params, req, runtime));
}

ListPrometheusInstancesResponse Alibabacloud_ARMS20190808::Client::listPrometheusInstances(shared_ptr<ListPrometheusInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listPrometheusInstancesWithOptions(request, runtime);
}

ListPrometheusIntegrationResponse Alibabacloud_ARMS20190808::Client::listPrometheusIntegrationWithOptions(shared_ptr<ListPrometheusIntegrationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->integrationType)) {
    query->insert(pair<string, string>("IntegrationType", *request->integrationType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListPrometheusIntegration"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListPrometheusIntegrationResponse(callApi(params, req, runtime));
}

ListPrometheusIntegrationResponse Alibabacloud_ARMS20190808::Client::listPrometheusIntegration(shared_ptr<ListPrometheusIntegrationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listPrometheusIntegrationWithOptions(request, runtime);
}

ListPrometheusMonitoringResponse Alibabacloud_ARMS20190808::Client::listPrometheusMonitoringWithOptions(shared_ptr<ListPrometheusMonitoringRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListPrometheusMonitoring"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListPrometheusMonitoringResponse(callApi(params, req, runtime));
}

ListPrometheusMonitoringResponse Alibabacloud_ARMS20190808::Client::listPrometheusMonitoring(shared_ptr<ListPrometheusMonitoringRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listPrometheusMonitoringWithOptions(request, runtime);
}

ListRetcodeAppsResponse Alibabacloud_ARMS20190808::Client::listRetcodeAppsWithOptions(shared_ptr<ListRetcodeAppsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ListRetcodeAppsRequestTags>>(request->tags)) {
    query->insert(pair<string, vector<ListRetcodeAppsRequestTags>>("Tags", *request->tags));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListRetcodeApps"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListRetcodeAppsResponse(callApi(params, req, runtime));
}

ListRetcodeAppsResponse Alibabacloud_ARMS20190808::Client::listRetcodeApps(shared_ptr<ListRetcodeAppsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listRetcodeAppsWithOptions(request, runtime);
}

ListScenarioResponse Alibabacloud_ARMS20190808::Client::listScenarioWithOptions(shared_ptr<ListScenarioRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scenario)) {
    query->insert(pair<string, string>("Scenario", *request->scenario));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sign)) {
    query->insert(pair<string, string>("Sign", *request->sign));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListScenario"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListScenarioResponse(callApi(params, req, runtime));
}

ListScenarioResponse Alibabacloud_ARMS20190808::Client::listScenario(shared_ptr<ListScenarioRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listScenarioWithOptions(request, runtime);
}

ListSilencePoliciesResponse Alibabacloud_ARMS20190808::Client::listSilencePoliciesWithOptions(shared_ptr<ListSilencePoliciesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->isDetail)) {
    query->insert(pair<string, bool>("IsDetail", *request->isDetail));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    query->insert(pair<string, long>("Page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    query->insert(pair<string, long>("Size", *request->size));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSilencePolicies"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSilencePoliciesResponse(callApi(params, req, runtime));
}

ListSilencePoliciesResponse Alibabacloud_ARMS20190808::Client::listSilencePolicies(shared_ptr<ListSilencePoliciesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSilencePoliciesWithOptions(request, runtime);
}

ListSyntheticDetailResponse Alibabacloud_ARMS20190808::Client::listSyntheticDetailWithOptions(shared_ptr<ListSyntheticDetailRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListSyntheticDetailShrinkRequest> request = make_shared<ListSyntheticDetailShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<ListSyntheticDetailRequestAdvancedFilters>>(tmpReq->advancedFilters)) {
    request->advancedFiltersShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->advancedFilters, make_shared<string>("AdvancedFilters"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ListSyntheticDetailRequestExactFilters>>(tmpReq->exactFilters)) {
    request->exactFiltersShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->exactFilters, make_shared<string>("ExactFilters"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(tmpReq->filters)) {
    request->filtersShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->filters, make_shared<string>("Filters"), make_shared<string>("json")));
  }
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSyntheticDetail"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSyntheticDetailResponse(callApi(params, req, runtime));
}

ListSyntheticDetailResponse Alibabacloud_ARMS20190808::Client::listSyntheticDetail(shared_ptr<ListSyntheticDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSyntheticDetailWithOptions(request, runtime);
}

ListTimingSyntheticTasksResponse Alibabacloud_ARMS20190808::Client::listTimingSyntheticTasksWithOptions(shared_ptr<ListTimingSyntheticTasksRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListTimingSyntheticTasksShrinkRequest> request = make_shared<ListTimingSyntheticTasksShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ListTimingSyntheticTasksRequestSearch>(tmpReq->search)) {
    request->searchShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->search, make_shared<string>("Search"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ListTimingSyntheticTasksRequestTags>>(tmpReq->tags)) {
    request->tagsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tags, make_shared<string>("Tags"), make_shared<string>("json")));
  }
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTimingSyntheticTasks"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTimingSyntheticTasksResponse(callApi(params, req, runtime));
}

ListTimingSyntheticTasksResponse Alibabacloud_ARMS20190808::Client::listTimingSyntheticTasks(shared_ptr<ListTimingSyntheticTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTimingSyntheticTasksWithOptions(request, runtime);
}

ListTraceAppsResponse Alibabacloud_ARMS20190808::Client::listTraceAppsWithOptions(shared_ptr<ListTraceAppsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appType)) {
    query->insert(pair<string, string>("AppType", *request->appType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ListTraceAppsRequestTags>>(request->tags)) {
    query->insert(pair<string, vector<ListTraceAppsRequestTags>>("Tags", *request->tags));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTraceApps"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTraceAppsResponse(callApi(params, req, runtime));
}

ListTraceAppsResponse Alibabacloud_ARMS20190808::Client::listTraceApps(shared_ptr<ListTraceAppsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTraceAppsWithOptions(request, runtime);
}

OpenArmsDefaultSLRResponse Alibabacloud_ARMS20190808::Client::openArmsDefaultSLRWithOptions(shared_ptr<OpenArmsDefaultSLRRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("OpenArmsDefaultSLR"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return OpenArmsDefaultSLRResponse(callApi(params, req, runtime));
}

OpenArmsDefaultSLRResponse Alibabacloud_ARMS20190808::Client::openArmsDefaultSLR(shared_ptr<OpenArmsDefaultSLRRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return openArmsDefaultSLRWithOptions(request, runtime);
}

OpenArmsServiceSecondVersionResponse Alibabacloud_ARMS20190808::Client::openArmsServiceSecondVersionWithOptions(shared_ptr<OpenArmsServiceSecondVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("OpenArmsServiceSecondVersion"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return OpenArmsServiceSecondVersionResponse(callApi(params, req, runtime));
}

OpenArmsServiceSecondVersionResponse Alibabacloud_ARMS20190808::Client::openArmsServiceSecondVersion(shared_ptr<OpenArmsServiceSecondVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return openArmsServiceSecondVersionWithOptions(request, runtime);
}

OpenVClusterResponse Alibabacloud_ARMS20190808::Client::openVClusterWithOptions(shared_ptr<OpenVClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterType)) {
    query->insert(pair<string, string>("ClusterType", *request->clusterType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->length)) {
    query->insert(pair<string, long>("Length", *request->length));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->product)) {
    query->insert(pair<string, string>("Product", *request->product));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->recreateSwitch)) {
    query->insert(pair<string, bool>("RecreateSwitch", *request->recreateSwitch));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("OpenVCluster"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return OpenVClusterResponse(callApi(params, req, runtime));
}

OpenVClusterResponse Alibabacloud_ARMS20190808::Client::openVCluster(shared_ptr<OpenVClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return openVClusterWithOptions(request, runtime);
}

OpenXtraceDefaultSLRResponse Alibabacloud_ARMS20190808::Client::openXtraceDefaultSLRWithOptions(shared_ptr<OpenXtraceDefaultSLRRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("OpenXtraceDefaultSLR"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return OpenXtraceDefaultSLRResponse(callApi(params, req, runtime));
}

OpenXtraceDefaultSLRResponse Alibabacloud_ARMS20190808::Client::openXtraceDefaultSLR(shared_ptr<OpenXtraceDefaultSLRRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return openXtraceDefaultSLRWithOptions(request, runtime);
}

QueryAppMetadataResponse Alibabacloud_ARMS20190808::Client::queryAppMetadataWithOptions(shared_ptr<QueryAppMetadataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryAppMetadata"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryAppMetadataResponse(callApi(params, req, runtime));
}

QueryAppMetadataResponse Alibabacloud_ARMS20190808::Client::queryAppMetadata(shared_ptr<QueryAppMetadataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryAppMetadataWithOptions(request, runtime);
}

QueryAppTopologyResponse Alibabacloud_ARMS20190808::Client::queryAppTopologyWithOptions(shared_ptr<QueryAppTopologyRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<QueryAppTopologyShrinkRequest> request = make_shared<QueryAppTopologyShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(tmpReq->filters)) {
    request->filtersShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->filters, make_shared<string>("Filters"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appType)) {
    query->insert(pair<string, string>("AppType", *request->appType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->db)) {
    query->insert(pair<string, string>("Db", *request->db));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dbName)) {
    query->insert(pair<string, string>("DbName", *request->dbName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filtersShrink)) {
    query->insert(pair<string, string>("Filters", *request->filtersShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pid)) {
    query->insert(pair<string, string>("Pid", *request->pid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rpc)) {
    query->insert(pair<string, string>("Rpc", *request->rpc));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    query->insert(pair<string, long>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryAppTopology"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryAppTopologyResponse(callApi(params, req, runtime));
}

QueryAppTopologyResponse Alibabacloud_ARMS20190808::Client::queryAppTopology(shared_ptr<QueryAppTopologyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryAppTopologyWithOptions(request, runtime);
}

QueryCommercialUsageResponse Alibabacloud_ARMS20190808::Client::queryCommercialUsageWithOptions(shared_ptr<QueryCommercialUsageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<QueryCommercialUsageRequestAdvancedFilters>>(request->advancedFilters)) {
    query->insert(pair<string, vector<QueryCommercialUsageRequestAdvancedFilters>>("AdvancedFilters", *request->advancedFilters));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->dimensions)) {
    query->insert(pair<string, vector<string>>("Dimensions", *request->dimensions));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->intervalInSec)) {
    query->insert(pair<string, long>("IntervalInSec", *request->intervalInSec));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->measures)) {
    query->insert(pair<string, vector<string>>("Measures", *request->measures));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->metric)) {
    query->insert(pair<string, string>("Metric", *request->metric));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->order)) {
    query->insert(pair<string, string>("Order", *request->order));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderBy)) {
    query->insert(pair<string, string>("OrderBy", *request->orderBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queryType)) {
    query->insert(pair<string, string>("QueryType", *request->queryType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    query->insert(pair<string, long>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryCommercialUsage"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryCommercialUsageResponse(callApi(params, req, runtime));
}

QueryCommercialUsageResponse Alibabacloud_ARMS20190808::Client::queryCommercialUsage(shared_ptr<QueryCommercialUsageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryCommercialUsageWithOptions(request, runtime);
}

QueryMetricByPageResponse Alibabacloud_ARMS20190808::Client::queryMetricByPageWithOptions(shared_ptr<QueryMetricByPageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->customFilters)) {
    query->insert(pair<string, vector<string>>("CustomFilters", *request->customFilters));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->dimensions)) {
    query->insert(pair<string, vector<string>>("Dimensions", *request->dimensions));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<vector<QueryMetricByPageRequestFilters>>(request->filters)) {
    query->insert(pair<string, vector<QueryMetricByPageRequestFilters>>("Filters", *request->filters));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->intervalInSec)) {
    query->insert(pair<string, long>("IntervalInSec", *request->intervalInSec));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->measures)) {
    query->insert(pair<string, vector<string>>("Measures", *request->measures));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->metric)) {
    query->insert(pair<string, string>("Metric", *request->metric));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->order)) {
    query->insert(pair<string, string>("Order", *request->order));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderBy)) {
    query->insert(pair<string, string>("OrderBy", *request->orderBy));
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
    {"action", boost::any(string("QueryMetricByPage"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryMetricByPageResponse(callApi(params, req, runtime));
}

QueryMetricByPageResponse Alibabacloud_ARMS20190808::Client::queryMetricByPage(shared_ptr<QueryMetricByPageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryMetricByPageWithOptions(request, runtime);
}

QueryPromInstallStatusResponse Alibabacloud_ARMS20190808::Client::queryPromInstallStatusWithOptions(shared_ptr<QueryPromInstallStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryPromInstallStatus"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryPromInstallStatusResponse(callApi(params, req, runtime));
}

QueryPromInstallStatusResponse Alibabacloud_ARMS20190808::Client::queryPromInstallStatus(shared_ptr<QueryPromInstallStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryPromInstallStatusWithOptions(request, runtime);
}

QueryReleaseMetricResponse Alibabacloud_ARMS20190808::Client::queryReleaseMetricWithOptions(shared_ptr<QueryReleaseMetricRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->changeOrderId)) {
    query->insert(pair<string, string>("ChangeOrderId", *request->changeOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->createTime)) {
    query->insert(pair<string, long>("CreateTime", *request->createTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->metricType)) {
    query->insert(pair<string, string>("MetricType", *request->metricType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pid)) {
    query->insert(pair<string, string>("Pid", *request->pid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->proxyUserId)) {
    query->insert(pair<string, string>("ProxyUserId", *request->proxyUserId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->releaseEndTime)) {
    query->insert(pair<string, long>("ReleaseEndTime", *request->releaseEndTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->releaseStartTime)) {
    query->insert(pair<string, long>("ReleaseStartTime", *request->releaseStartTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->service)) {
    query->insert(pair<string, string>("Service", *request->service));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryReleaseMetric"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryReleaseMetricResponse(callApi(params, req, runtime));
}

QueryReleaseMetricResponse Alibabacloud_ARMS20190808::Client::queryReleaseMetric(shared_ptr<QueryReleaseMetricRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryReleaseMetricWithOptions(request, runtime);
}

RemoveAliClusterIdsFromPrometheusGlobalViewResponse Alibabacloud_ARMS20190808::Client::removeAliClusterIdsFromPrometheusGlobalViewWithOptions(shared_ptr<RemoveAliClusterIdsFromPrometheusGlobalViewRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterIds)) {
    query->insert(pair<string, string>("ClusterIds", *request->clusterIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->globalViewClusterId)) {
    query->insert(pair<string, string>("GlobalViewClusterId", *request->globalViewClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    query->insert(pair<string, string>("GroupName", *request->groupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveAliClusterIdsFromPrometheusGlobalView"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveAliClusterIdsFromPrometheusGlobalViewResponse(callApi(params, req, runtime));
}

RemoveAliClusterIdsFromPrometheusGlobalViewResponse Alibabacloud_ARMS20190808::Client::removeAliClusterIdsFromPrometheusGlobalView(shared_ptr<RemoveAliClusterIdsFromPrometheusGlobalViewRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeAliClusterIdsFromPrometheusGlobalViewWithOptions(request, runtime);
}

RemoveSourcesFromPrometheusGlobalViewResponse Alibabacloud_ARMS20190808::Client::removeSourcesFromPrometheusGlobalViewWithOptions(shared_ptr<RemoveSourcesFromPrometheusGlobalViewRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->globalViewClusterId)) {
    query->insert(pair<string, string>("GlobalViewClusterId", *request->globalViewClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    query->insert(pair<string, string>("GroupName", *request->groupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceNames)) {
    query->insert(pair<string, string>("SourceNames", *request->sourceNames));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveSourcesFromPrometheusGlobalView"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveSourcesFromPrometheusGlobalViewResponse(callApi(params, req, runtime));
}

RemoveSourcesFromPrometheusGlobalViewResponse Alibabacloud_ARMS20190808::Client::removeSourcesFromPrometheusGlobalView(shared_ptr<RemoveSourcesFromPrometheusGlobalViewRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeSourcesFromPrometheusGlobalViewWithOptions(request, runtime);
}

RestartEnvironmentFeatureResponse Alibabacloud_ARMS20190808::Client::restartEnvironmentFeatureWithOptions(shared_ptr<RestartEnvironmentFeatureRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->environmentId)) {
    query->insert(pair<string, string>("EnvironmentId", *request->environmentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->featureName)) {
    query->insert(pair<string, string>("FeatureName", *request->featureName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RestartEnvironmentFeature"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RestartEnvironmentFeatureResponse(callApi(params, req, runtime));
}

RestartEnvironmentFeatureResponse Alibabacloud_ARMS20190808::Client::restartEnvironmentFeature(shared_ptr<RestartEnvironmentFeatureRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return restartEnvironmentFeatureWithOptions(request, runtime);
}

SaveTraceAppConfigResponse Alibabacloud_ARMS20190808::Client::saveTraceAppConfigWithOptions(shared_ptr<SaveTraceAppConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->pid)) {
    query->insert(pair<string, string>("Pid", *request->pid));
  }
  if (!Darabonba_Util::Client::isUnset<vector<SaveTraceAppConfigRequestSettings>>(request->settings)) {
    query->insert(pair<string, vector<SaveTraceAppConfigRequestSettings>>("Settings", *request->settings));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveTraceAppConfig"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SaveTraceAppConfigResponse(callApi(params, req, runtime));
}

SaveTraceAppConfigResponse Alibabacloud_ARMS20190808::Client::saveTraceAppConfig(shared_ptr<SaveTraceAppConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveTraceAppConfigWithOptions(request, runtime);
}

SearchAlertContactResponse Alibabacloud_ARMS20190808::Client::searchAlertContactWithOptions(shared_ptr<SearchAlertContactRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->contactIds)) {
    query->insert(pair<string, string>("ContactIds", *request->contactIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contactName)) {
    query->insert(pair<string, string>("ContactName", *request->contactName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->currentPage)) {
    query->insert(pair<string, string>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->email)) {
    query->insert(pair<string, string>("Email", *request->email));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phone)) {
    query->insert(pair<string, string>("Phone", *request->phone));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SearchAlertContact"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SearchAlertContactResponse(callApi(params, req, runtime));
}

SearchAlertContactResponse Alibabacloud_ARMS20190808::Client::searchAlertContact(shared_ptr<SearchAlertContactRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return searchAlertContactWithOptions(request, runtime);
}

SearchAlertContactGroupResponse Alibabacloud_ARMS20190808::Client::searchAlertContactGroupWithOptions(shared_ptr<SearchAlertContactGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->contactGroupIds)) {
    query->insert(pair<string, string>("ContactGroupIds", *request->contactGroupIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contactGroupName)) {
    query->insert(pair<string, string>("ContactGroupName", *request->contactGroupName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->contactId)) {
    query->insert(pair<string, long>("ContactId", *request->contactId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contactName)) {
    query->insert(pair<string, string>("ContactName", *request->contactName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isDetail)) {
    query->insert(pair<string, bool>("IsDetail", *request->isDetail));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SearchAlertContactGroup"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SearchAlertContactGroupResponse(callApi(params, req, runtime));
}

SearchAlertContactGroupResponse Alibabacloud_ARMS20190808::Client::searchAlertContactGroup(shared_ptr<SearchAlertContactGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return searchAlertContactGroupWithOptions(request, runtime);
}

SearchAlertHistoriesResponse Alibabacloud_ARMS20190808::Client::searchAlertHistoriesWithOptions(shared_ptr<SearchAlertHistoriesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->alertId)) {
    query->insert(pair<string, long>("AlertId", *request->alertId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->alertType)) {
    query->insert(pair<string, long>("AlertType", *request->alertType));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    query->insert(pair<string, long>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SearchAlertHistories"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SearchAlertHistoriesResponse(callApi(params, req, runtime));
}

SearchAlertHistoriesResponse Alibabacloud_ARMS20190808::Client::searchAlertHistories(shared_ptr<SearchAlertHistoriesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return searchAlertHistoriesWithOptions(request, runtime);
}

SearchAlertRulesResponse Alibabacloud_ARMS20190808::Client::searchAlertRulesWithOptions(shared_ptr<SearchAlertRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->alertRuleId)) {
    query->insert(pair<string, string>("AlertRuleId", *request->alertRuleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appType)) {
    query->insert(pair<string, string>("AppType", *request->appType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pid)) {
    query->insert(pair<string, string>("Pid", *request->pid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->systemRegionId)) {
    query->insert(pair<string, string>("SystemRegionId", *request->systemRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<SearchAlertRulesRequestTags>>(request->tags)) {
    query->insert(pair<string, vector<SearchAlertRulesRequestTags>>("Tags", *request->tags));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    query->insert(pair<string, string>("Title", *request->title));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SearchAlertRules"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SearchAlertRulesResponse(callApi(params, req, runtime));
}

SearchAlertRulesResponse Alibabacloud_ARMS20190808::Client::searchAlertRules(shared_ptr<SearchAlertRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return searchAlertRulesWithOptions(request, runtime);
}

SearchEventsResponse Alibabacloud_ARMS20190808::Client::searchEventsWithOptions(shared_ptr<SearchEventsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->alertId)) {
    query->insert(pair<string, long>("AlertId", *request->alertId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->alertType)) {
    query->insert(pair<string, long>("AlertType", *request->alertType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appType)) {
    query->insert(pair<string, string>("AppType", *request->appType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->isTrigger)) {
    query->insert(pair<string, long>("IsTrigger", *request->isTrigger));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pid)) {
    query->insert(pair<string, string>("Pid", *request->pid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    query->insert(pair<string, long>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SearchEvents"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SearchEventsResponse(callApi(params, req, runtime));
}

SearchEventsResponse Alibabacloud_ARMS20190808::Client::searchEvents(shared_ptr<SearchEventsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return searchEventsWithOptions(request, runtime);
}

SearchRetcodeAppByPageResponse Alibabacloud_ARMS20190808::Client::searchRetcodeAppByPageWithOptions(shared_ptr<SearchRetcodeAppByPageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
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
  if (!Darabonba_Util::Client::isUnset<string>(request->retcodeAppId)) {
    query->insert(pair<string, string>("RetcodeAppId", *request->retcodeAppId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->retcodeAppName)) {
    query->insert(pair<string, string>("RetcodeAppName", *request->retcodeAppName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<SearchRetcodeAppByPageRequestTags>>(request->tags)) {
    query->insert(pair<string, vector<SearchRetcodeAppByPageRequestTags>>("Tags", *request->tags));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SearchRetcodeAppByPage"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SearchRetcodeAppByPageResponse(callApi(params, req, runtime));
}

SearchRetcodeAppByPageResponse Alibabacloud_ARMS20190808::Client::searchRetcodeAppByPage(shared_ptr<SearchRetcodeAppByPageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return searchRetcodeAppByPageWithOptions(request, runtime);
}

SearchTraceAppByNameResponse Alibabacloud_ARMS20190808::Client::searchTraceAppByNameWithOptions(shared_ptr<SearchTraceAppByNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<SearchTraceAppByNameRequestTags>>(request->tags)) {
    query->insert(pair<string, vector<SearchTraceAppByNameRequestTags>>("Tags", *request->tags));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->traceAppName)) {
    query->insert(pair<string, string>("TraceAppName", *request->traceAppName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SearchTraceAppByName"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SearchTraceAppByNameResponse(callApi(params, req, runtime));
}

SearchTraceAppByNameResponse Alibabacloud_ARMS20190808::Client::searchTraceAppByName(shared_ptr<SearchTraceAppByNameRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return searchTraceAppByNameWithOptions(request, runtime);
}

SearchTraceAppByPageResponse Alibabacloud_ARMS20190808::Client::searchTraceAppByPageWithOptions(shared_ptr<SearchTraceAppByPageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
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
  if (!Darabonba_Util::Client::isUnset<vector<SearchTraceAppByPageRequestTags>>(request->tags)) {
    query->insert(pair<string, vector<SearchTraceAppByPageRequestTags>>("Tags", *request->tags));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->traceAppName)) {
    query->insert(pair<string, string>("TraceAppName", *request->traceAppName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SearchTraceAppByPage"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SearchTraceAppByPageResponse(callApi(params, req, runtime));
}

SearchTraceAppByPageResponse Alibabacloud_ARMS20190808::Client::searchTraceAppByPage(shared_ptr<SearchTraceAppByPageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return searchTraceAppByPageWithOptions(request, runtime);
}

SearchTracesResponse Alibabacloud_ARMS20190808::Client::searchTracesWithOptions(shared_ptr<SearchTracesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<vector<SearchTracesRequestExclusionFilters>>(request->exclusionFilters)) {
    query->insert(pair<string, vector<SearchTracesRequestExclusionFilters>>("ExclusionFilters", *request->exclusionFilters));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->minDuration)) {
    query->insert(pair<string, long>("MinDuration", *request->minDuration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operationName)) {
    query->insert(pair<string, string>("OperationName", *request->operationName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pid)) {
    query->insert(pair<string, string>("Pid", *request->pid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->reverse)) {
    query->insert(pair<string, bool>("Reverse", *request->reverse));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceIp)) {
    query->insert(pair<string, string>("ServiceIp", *request->serviceIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceName)) {
    query->insert(pair<string, string>("ServiceName", *request->serviceName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    query->insert(pair<string, long>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<vector<SearchTracesRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<SearchTracesRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SearchTraces"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SearchTracesResponse(callApi(params, req, runtime));
}

SearchTracesResponse Alibabacloud_ARMS20190808::Client::searchTraces(shared_ptr<SearchTracesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return searchTracesWithOptions(request, runtime);
}

SearchTracesByPageResponse Alibabacloud_ARMS20190808::Client::searchTracesByPageWithOptions(shared_ptr<SearchTracesByPageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<vector<SearchTracesByPageRequestExclusionFilters>>(request->exclusionFilters)) {
    query->insert(pair<string, vector<SearchTracesByPageRequestExclusionFilters>>("ExclusionFilters", *request->exclusionFilters));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isError)) {
    query->insert(pair<string, bool>("IsError", *request->isError));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->minDuration)) {
    query->insert(pair<string, long>("MinDuration", *request->minDuration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operationName)) {
    query->insert(pair<string, string>("OperationName", *request->operationName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pid)) {
    query->insert(pair<string, string>("Pid", *request->pid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->reverse)) {
    query->insert(pair<string, bool>("Reverse", *request->reverse));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceIp)) {
    query->insert(pair<string, string>("ServiceIp", *request->serviceIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceName)) {
    query->insert(pair<string, string>("ServiceName", *request->serviceName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    query->insert(pair<string, long>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<vector<SearchTracesByPageRequestTags>>(request->tags)) {
    query->insert(pair<string, vector<SearchTracesByPageRequestTags>>("Tags", *request->tags));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SearchTracesByPage"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SearchTracesByPageResponse(callApi(params, req, runtime));
}

SearchTracesByPageResponse Alibabacloud_ARMS20190808::Client::searchTracesByPage(shared_ptr<SearchTracesByPageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return searchTracesByPageWithOptions(request, runtime);
}

SendTTSVerifyLinkResponse Alibabacloud_ARMS20190808::Client::sendTTSVerifyLinkWithOptions(shared_ptr<SendTTSVerifyLinkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->contactId)) {
    body->insert(pair<string, long>("ContactId", *request->contactId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phone)) {
    body->insert(pair<string, string>("Phone", *request->phone));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SendTTSVerifyLink"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SendTTSVerifyLinkResponse(callApi(params, req, runtime));
}

SendTTSVerifyLinkResponse Alibabacloud_ARMS20190808::Client::sendTTSVerifyLink(shared_ptr<SendTTSVerifyLinkRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return sendTTSVerifyLinkWithOptions(request, runtime);
}

SetRetcodeShareStatusResponse Alibabacloud_ARMS20190808::Client::setRetcodeShareStatusWithOptions(shared_ptr<SetRetcodeShareStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pid)) {
    query->insert(pair<string, string>("Pid", *request->pid));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->status)) {
    query->insert(pair<string, bool>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetRetcodeShareStatus"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetRetcodeShareStatusResponse(callApi(params, req, runtime));
}

SetRetcodeShareStatusResponse Alibabacloud_ARMS20190808::Client::setRetcodeShareStatus(shared_ptr<SetRetcodeShareStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setRetcodeShareStatusWithOptions(request, runtime);
}

StartAlertResponse Alibabacloud_ARMS20190808::Client::startAlertWithOptions(shared_ptr<StartAlertRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->alertId)) {
    query->insert(pair<string, string>("AlertId", *request->alertId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartAlert"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartAlertResponse(callApi(params, req, runtime));
}

StartAlertResponse Alibabacloud_ARMS20190808::Client::startAlert(shared_ptr<StartAlertRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startAlertWithOptions(request, runtime);
}

StartTimingSyntheticTaskResponse Alibabacloud_ARMS20190808::Client::startTimingSyntheticTaskWithOptions(shared_ptr<StartTimingSyntheticTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<StartTimingSyntheticTaskShrinkRequest> request = make_shared<StartTimingSyntheticTaskShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->taskIds)) {
    request->taskIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->taskIds, make_shared<string>("TaskIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskIdsShrink)) {
    query->insert(pair<string, string>("TaskIds", *request->taskIdsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartTimingSyntheticTask"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartTimingSyntheticTaskResponse(callApi(params, req, runtime));
}

StartTimingSyntheticTaskResponse Alibabacloud_ARMS20190808::Client::startTimingSyntheticTask(shared_ptr<StartTimingSyntheticTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startTimingSyntheticTaskWithOptions(request, runtime);
}

StopAlertResponse Alibabacloud_ARMS20190808::Client::stopAlertWithOptions(shared_ptr<StopAlertRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->alertId)) {
    query->insert(pair<string, string>("AlertId", *request->alertId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopAlert"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopAlertResponse(callApi(params, req, runtime));
}

StopAlertResponse Alibabacloud_ARMS20190808::Client::stopAlert(shared_ptr<StopAlertRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopAlertWithOptions(request, runtime);
}

StopTimingSyntheticTaskResponse Alibabacloud_ARMS20190808::Client::stopTimingSyntheticTaskWithOptions(shared_ptr<StopTimingSyntheticTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<StopTimingSyntheticTaskShrinkRequest> request = make_shared<StopTimingSyntheticTaskShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->taskIds)) {
    request->taskIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->taskIds, make_shared<string>("TaskIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskIdsShrink)) {
    query->insert(pair<string, string>("TaskIds", *request->taskIdsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopTimingSyntheticTask"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopTimingSyntheticTaskResponse(callApi(params, req, runtime));
}

StopTimingSyntheticTaskResponse Alibabacloud_ARMS20190808::Client::stopTimingSyntheticTask(shared_ptr<StopTimingSyntheticTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopTimingSyntheticTaskWithOptions(request, runtime);
}

SwitchSyntheticTaskStatusResponse Alibabacloud_ARMS20190808::Client::switchSyntheticTaskStatusWithOptions(shared_ptr<SwitchSyntheticTaskStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->switchStatus)) {
    query->insert(pair<string, long>("SwitchStatus", *request->switchStatus));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->taskIds)) {
    query->insert(pair<string, vector<long>>("TaskIds", *request->taskIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SwitchSyntheticTaskStatus"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SwitchSyntheticTaskStatusResponse(callApi(params, req, runtime));
}

SwitchSyntheticTaskStatusResponse Alibabacloud_ARMS20190808::Client::switchSyntheticTaskStatus(shared_ptr<SwitchSyntheticTaskStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return switchSyntheticTaskStatusWithOptions(request, runtime);
}

SyncRecordingRulesResponse Alibabacloud_ARMS20190808::Client::syncRecordingRulesWithOptions(shared_ptr<SyncRecordingRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetClusters)) {
    query->insert(pair<string, string>("TargetClusters", *request->targetClusters));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SyncRecordingRules"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SyncRecordingRulesResponse(callApi(params, req, runtime));
}

SyncRecordingRulesResponse Alibabacloud_ARMS20190808::Client::syncRecordingRules(shared_ptr<SyncRecordingRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return syncRecordingRulesWithOptions(request, runtime);
}

TagResourcesResponse Alibabacloud_ARMS20190808::Client::tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceId)) {
    query->insert(pair<string, vector<string>>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<TagResourcesRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<TagResourcesRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TagResources"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TagResourcesResponse(callApi(params, req, runtime));
}

TagResourcesResponse Alibabacloud_ARMS20190808::Client::tagResources(shared_ptr<TagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return tagResourcesWithOptions(request, runtime);
}

UninstallManagedPrometheusResponse Alibabacloud_ARMS20190808::Client::uninstallManagedPrometheusWithOptions(shared_ptr<UninstallManagedPrometheusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterType)) {
    query->insert(pair<string, string>("ClusterType", *request->clusterType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcId)) {
    query->insert(pair<string, string>("VpcId", *request->vpcId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UninstallManagedPrometheus"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UninstallManagedPrometheusResponse(callApi(params, req, runtime));
}

UninstallManagedPrometheusResponse Alibabacloud_ARMS20190808::Client::uninstallManagedPrometheus(shared_ptr<UninstallManagedPrometheusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return uninstallManagedPrometheusWithOptions(request, runtime);
}

UninstallPromClusterResponse Alibabacloud_ARMS20190808::Client::uninstallPromClusterWithOptions(shared_ptr<UninstallPromClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aliyunLang)) {
    query->insert(pair<string, string>("AliyunLang", *request->aliyunLang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UninstallPromCluster"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UninstallPromClusterResponse(callApi(params, req, runtime));
}

UninstallPromClusterResponse Alibabacloud_ARMS20190808::Client::uninstallPromCluster(shared_ptr<UninstallPromClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return uninstallPromClusterWithOptions(request, runtime);
}

UntagResourcesResponse Alibabacloud_ARMS20190808::Client::untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->all)) {
    query->insert(pair<string, bool>("All", *request->all));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceId)) {
    query->insert(pair<string, vector<string>>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->tagKey)) {
    query->insert(pair<string, vector<string>>("TagKey", *request->tagKey));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UntagResourcesRequestTags>>(request->tags)) {
    query->insert(pair<string, vector<UntagResourcesRequestTags>>("Tags", *request->tags));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UntagResources"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UntagResourcesResponse(callApi(params, req, runtime));
}

UntagResourcesResponse Alibabacloud_ARMS20190808::Client::untagResources(shared_ptr<UntagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return untagResourcesWithOptions(request, runtime);
}

UpdateAlertContactResponse Alibabacloud_ARMS20190808::Client::updateAlertContactWithOptions(shared_ptr<UpdateAlertContactRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->contactId)) {
    query->insert(pair<string, long>("ContactId", *request->contactId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contactName)) {
    query->insert(pair<string, string>("ContactName", *request->contactName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dingRobotWebhookUrl)) {
    query->insert(pair<string, string>("DingRobotWebhookUrl", *request->dingRobotWebhookUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->email)) {
    query->insert(pair<string, string>("Email", *request->email));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phoneNum)) {
    query->insert(pair<string, string>("PhoneNum", *request->phoneNum));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->systemNoc)) {
    query->insert(pair<string, bool>("SystemNoc", *request->systemNoc));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateAlertContact"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateAlertContactResponse(callApi(params, req, runtime));
}

UpdateAlertContactResponse Alibabacloud_ARMS20190808::Client::updateAlertContact(shared_ptr<UpdateAlertContactRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAlertContactWithOptions(request, runtime);
}

UpdateAlertContactGroupResponse Alibabacloud_ARMS20190808::Client::updateAlertContactGroupWithOptions(shared_ptr<UpdateAlertContactGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->contactGroupId)) {
    query->insert(pair<string, long>("ContactGroupId", *request->contactGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contactGroupName)) {
    query->insert(pair<string, string>("ContactGroupName", *request->contactGroupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contactIds)) {
    query->insert(pair<string, string>("ContactIds", *request->contactIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateAlertContactGroup"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateAlertContactGroupResponse(callApi(params, req, runtime));
}

UpdateAlertContactGroupResponse Alibabacloud_ARMS20190808::Client::updateAlertContactGroup(shared_ptr<UpdateAlertContactGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAlertContactGroupWithOptions(request, runtime);
}

UpdateAlertRuleResponse Alibabacloud_ARMS20190808::Client::updateAlertRuleWithOptions(shared_ptr<UpdateAlertRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->alertId)) {
    query->insert(pair<string, long>("AlertId", *request->alertId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contactGroupIds)) {
    query->insert(pair<string, string>("ContactGroupIds", *request->contactGroupIds));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isAutoStart)) {
    query->insert(pair<string, bool>("IsAutoStart", *request->isAutoStart));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templageAlertConfig)) {
    query->insert(pair<string, string>("TemplageAlertConfig", *request->templageAlertConfig));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateAlertRule"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateAlertRuleResponse(callApi(params, req, runtime));
}

UpdateAlertRuleResponse Alibabacloud_ARMS20190808::Client::updateAlertRule(shared_ptr<UpdateAlertRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAlertRuleWithOptions(request, runtime);
}

UpdateDispatchRuleResponse Alibabacloud_ARMS20190808::Client::updateDispatchRuleWithOptions(shared_ptr<UpdateDispatchRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dispatchRule)) {
    query->insert(pair<string, string>("DispatchRule", *request->dispatchRule));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateDispatchRule"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateDispatchRuleResponse(callApi(params, req, runtime));
}

UpdateDispatchRuleResponse Alibabacloud_ARMS20190808::Client::updateDispatchRule(shared_ptr<UpdateDispatchRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateDispatchRuleWithOptions(request, runtime);
}

UpdateEnvCustomJobResponse Alibabacloud_ARMS20190808::Client::updateEnvCustomJobWithOptions(shared_ptr<UpdateEnvCustomJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aliyunLang)) {
    query->insert(pair<string, string>("AliyunLang", *request->aliyunLang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->customJobName)) {
    query->insert(pair<string, string>("CustomJobName", *request->customJobName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->environmentId)) {
    query->insert(pair<string, string>("EnvironmentId", *request->environmentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->configYaml)) {
    body->insert(pair<string, string>("ConfigYaml", *request->configYaml));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateEnvCustomJob"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateEnvCustomJobResponse(callApi(params, req, runtime));
}

UpdateEnvCustomJobResponse Alibabacloud_ARMS20190808::Client::updateEnvCustomJob(shared_ptr<UpdateEnvCustomJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateEnvCustomJobWithOptions(request, runtime);
}

UpdateEnvDropMetricsRuleResponse Alibabacloud_ARMS20190808::Client::updateEnvDropMetricsRuleWithOptions(shared_ptr<UpdateEnvDropMetricsRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aliyunLang)) {
    query->insert(pair<string, string>("AliyunLang", *request->aliyunLang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->environmentId)) {
    query->insert(pair<string, string>("EnvironmentId", *request->environmentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dropMetrics)) {
    body->insert(pair<string, string>("DropMetrics", *request->dropMetrics));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateEnvDropMetricsRule"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateEnvDropMetricsRuleResponse(callApi(params, req, runtime));
}

UpdateEnvDropMetricsRuleResponse Alibabacloud_ARMS20190808::Client::updateEnvDropMetricsRule(shared_ptr<UpdateEnvDropMetricsRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateEnvDropMetricsRuleWithOptions(request, runtime);
}

UpdateEnvPodMonitorResponse Alibabacloud_ARMS20190808::Client::updateEnvPodMonitorWithOptions(shared_ptr<UpdateEnvPodMonitorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aliyunLang)) {
    query->insert(pair<string, string>("AliyunLang", *request->aliyunLang));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->environmentId)) {
    query->insert(pair<string, string>("EnvironmentId", *request->environmentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->podMonitorName)) {
    query->insert(pair<string, string>("PodMonitorName", *request->podMonitorName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->configYaml)) {
    body->insert(pair<string, string>("ConfigYaml", *request->configYaml));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateEnvPodMonitor"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateEnvPodMonitorResponse(callApi(params, req, runtime));
}

UpdateEnvPodMonitorResponse Alibabacloud_ARMS20190808::Client::updateEnvPodMonitor(shared_ptr<UpdateEnvPodMonitorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateEnvPodMonitorWithOptions(request, runtime);
}

UpdateEnvServiceMonitorResponse Alibabacloud_ARMS20190808::Client::updateEnvServiceMonitorWithOptions(shared_ptr<UpdateEnvServiceMonitorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aliyunLang)) {
    query->insert(pair<string, string>("AliyunLang", *request->aliyunLang));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->environmentId)) {
    query->insert(pair<string, string>("EnvironmentId", *request->environmentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceMonitorName)) {
    query->insert(pair<string, string>("ServiceMonitorName", *request->serviceMonitorName));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->configYaml)) {
    body->insert(pair<string, string>("ConfigYaml", *request->configYaml));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateEnvServiceMonitor"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateEnvServiceMonitorResponse(callApi(params, req, runtime));
}

UpdateEnvServiceMonitorResponse Alibabacloud_ARMS20190808::Client::updateEnvServiceMonitor(shared_ptr<UpdateEnvServiceMonitorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateEnvServiceMonitorWithOptions(request, runtime);
}

UpdateEnvironmentResponse Alibabacloud_ARMS20190808::Client::updateEnvironmentWithOptions(shared_ptr<UpdateEnvironmentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aliyunLang)) {
    query->insert(pair<string, string>("AliyunLang", *request->aliyunLang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->environmentId)) {
    query->insert(pair<string, string>("EnvironmentId", *request->environmentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->environmentName)) {
    query->insert(pair<string, string>("EnvironmentName", *request->environmentName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->feePackage)) {
    query->insert(pair<string, string>("FeePackage", *request->feePackage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateEnvironment"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateEnvironmentResponse(callApi(params, req, runtime));
}

UpdateEnvironmentResponse Alibabacloud_ARMS20190808::Client::updateEnvironment(shared_ptr<UpdateEnvironmentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateEnvironmentWithOptions(request, runtime);
}

UpdateGrafanaWorkspaceResponse Alibabacloud_ARMS20190808::Client::updateGrafanaWorkspaceWithOptions(shared_ptr<UpdateGrafanaWorkspaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aliyunLang)) {
    query->insert(pair<string, string>("AliyunLang", *request->aliyunLang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->grafanaWorkspaceId)) {
    query->insert(pair<string, string>("GrafanaWorkspaceId", *request->grafanaWorkspaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->grafanaWorkspaceName)) {
    query->insert(pair<string, string>("GrafanaWorkspaceName", *request->grafanaWorkspaceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateGrafanaWorkspace"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateGrafanaWorkspaceResponse(callApi(params, req, runtime));
}

UpdateGrafanaWorkspaceResponse Alibabacloud_ARMS20190808::Client::updateGrafanaWorkspace(shared_ptr<UpdateGrafanaWorkspaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateGrafanaWorkspaceWithOptions(request, runtime);
}

UpdateGrafanaWorkspaceVersionResponse Alibabacloud_ARMS20190808::Client::updateGrafanaWorkspaceVersionWithOptions(shared_ptr<UpdateGrafanaWorkspaceVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aliyunLang)) {
    query->insert(pair<string, string>("AliyunLang", *request->aliyunLang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->grafanaVersion)) {
    query->insert(pair<string, string>("GrafanaVersion", *request->grafanaVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->grafanaWorkspaceId)) {
    query->insert(pair<string, string>("GrafanaWorkspaceId", *request->grafanaWorkspaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateGrafanaWorkspaceVersion"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateGrafanaWorkspaceVersionResponse(callApi(params, req, runtime));
}

UpdateGrafanaWorkspaceVersionResponse Alibabacloud_ARMS20190808::Client::updateGrafanaWorkspaceVersion(shared_ptr<UpdateGrafanaWorkspaceVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateGrafanaWorkspaceVersionWithOptions(request, runtime);
}

UpdateIntegrationResponse Alibabacloud_ARMS20190808::Client::updateIntegrationWithOptions(shared_ptr<UpdateIntegrationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoRecover)) {
    body->insert(pair<string, bool>("AutoRecover", *request->autoRecover));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->duplicateKey)) {
    body->insert(pair<string, string>("DuplicateKey", *request->duplicateKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extendedFieldRedefineRules)) {
    body->insert(pair<string, string>("ExtendedFieldRedefineRules", *request->extendedFieldRedefineRules));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fieldRedefineRules)) {
    body->insert(pair<string, string>("FieldRedefineRules", *request->fieldRedefineRules));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->initiativeRecoverField)) {
    body->insert(pair<string, string>("InitiativeRecoverField", *request->initiativeRecoverField));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->initiativeRecoverValue)) {
    body->insert(pair<string, string>("InitiativeRecoverValue", *request->initiativeRecoverValue));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->integrationId)) {
    body->insert(pair<string, long>("IntegrationId", *request->integrationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->integrationName)) {
    body->insert(pair<string, string>("IntegrationName", *request->integrationName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->integrationProductType)) {
    body->insert(pair<string, string>("IntegrationProductType", *request->integrationProductType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->liveness)) {
    body->insert(pair<string, string>("Liveness", *request->liveness));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->recoverTime)) {
    body->insert(pair<string, long>("RecoverTime", *request->recoverTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stat)) {
    body->insert(pair<string, string>("Stat", *request->stat));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->state)) {
    body->insert(pair<string, bool>("State", *request->state));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateIntegration"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateIntegrationResponse(callApi(params, req, runtime));
}

UpdateIntegrationResponse Alibabacloud_ARMS20190808::Client::updateIntegration(shared_ptr<UpdateIntegrationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateIntegrationWithOptions(request, runtime);
}

UpdateMetricDropResponse Alibabacloud_ARMS20190808::Client::updateMetricDropWithOptions(shared_ptr<UpdateMetricDropRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->metricDrop)) {
    query->insert(pair<string, string>("MetricDrop", *request->metricDrop));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateMetricDrop"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateMetricDropResponse(callApi(params, req, runtime));
}

UpdateMetricDropResponse Alibabacloud_ARMS20190808::Client::updateMetricDrop(shared_ptr<UpdateMetricDropRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateMetricDropWithOptions(request, runtime);
}

UpdatePrometheusAlertRuleResponse Alibabacloud_ARMS20190808::Client::updatePrometheusAlertRuleWithOptions(shared_ptr<UpdatePrometheusAlertRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->alertId)) {
    query->insert(pair<string, long>("AlertId", *request->alertId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->alertName)) {
    query->insert(pair<string, string>("AlertName", *request->alertName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->annotations)) {
    query->insert(pair<string, string>("Annotations", *request->annotations));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->dispatchRuleId)) {
    query->insert(pair<string, long>("DispatchRuleId", *request->dispatchRuleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->duration)) {
    query->insert(pair<string, string>("Duration", *request->duration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->expression)) {
    query->insert(pair<string, string>("Expression", *request->expression));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->labels)) {
    query->insert(pair<string, string>("Labels", *request->labels));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->message)) {
    query->insert(pair<string, string>("Message", *request->message));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notifyType)) {
    query->insert(pair<string, string>("NotifyType", *request->notifyType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdatePrometheusAlertRuleRequestTags>>(request->tags)) {
    query->insert(pair<string, vector<UpdatePrometheusAlertRuleRequestTags>>("Tags", *request->tags));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdatePrometheusAlertRule"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdatePrometheusAlertRuleResponse(callApi(params, req, runtime));
}

UpdatePrometheusAlertRuleResponse Alibabacloud_ARMS20190808::Client::updatePrometheusAlertRule(shared_ptr<UpdatePrometheusAlertRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updatePrometheusAlertRuleWithOptions(request, runtime);
}

UpdatePrometheusGlobalViewResponse Alibabacloud_ARMS20190808::Client::updatePrometheusGlobalViewWithOptions(shared_ptr<UpdatePrometheusGlobalViewRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->allSubClustersSuccess)) {
    query->insert(pair<string, bool>("AllSubClustersSuccess", *request->allSubClustersSuccess));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    query->insert(pair<string, string>("GroupName", *request->groupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mostRegionId)) {
    query->insert(pair<string, string>("MostRegionId", *request->mostRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subClustersJson)) {
    query->insert(pair<string, string>("SubClustersJson", *request->subClustersJson));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdatePrometheusGlobalView"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdatePrometheusGlobalViewResponse(callApi(params, req, runtime));
}

UpdatePrometheusGlobalViewResponse Alibabacloud_ARMS20190808::Client::updatePrometheusGlobalView(shared_ptr<UpdatePrometheusGlobalViewRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updatePrometheusGlobalViewWithOptions(request, runtime);
}

UpdatePrometheusInstanceResponse Alibabacloud_ARMS20190808::Client::updatePrometheusInstanceWithOptions(shared_ptr<UpdatePrometheusInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->archiveDuration)) {
    query->insert(pair<string, long>("ArchiveDuration", *request->archiveDuration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->authFreeReadPolicy)) {
    query->insert(pair<string, string>("AuthFreeReadPolicy", *request->authFreeReadPolicy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->authFreeWritePolicy)) {
    query->insert(pair<string, string>("AuthFreeWritePolicy", *request->authFreeWritePolicy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableAuthFreeRead)) {
    query->insert(pair<string, bool>("EnableAuthFreeRead", *request->enableAuthFreeRead));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableAuthFreeWrite)) {
    query->insert(pair<string, bool>("EnableAuthFreeWrite", *request->enableAuthFreeWrite));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableAuthToken)) {
    query->insert(pair<string, bool>("EnableAuthToken", *request->enableAuthToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->paymentType)) {
    query->insert(pair<string, string>("PaymentType", *request->paymentType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->storageDuration)) {
    query->insert(pair<string, long>("StorageDuration", *request->storageDuration));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdatePrometheusInstance"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdatePrometheusInstanceResponse(callApi(params, req, runtime));
}

UpdatePrometheusInstanceResponse Alibabacloud_ARMS20190808::Client::updatePrometheusInstance(shared_ptr<UpdatePrometheusInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updatePrometheusInstanceWithOptions(request, runtime);
}

UpdatePrometheusIntegrationResponse Alibabacloud_ARMS20190808::Client::updatePrometheusIntegrationWithOptions(shared_ptr<UpdatePrometheusIntegrationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->instanceId)) {
    query->insert(pair<string, long>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->integrationType)) {
    query->insert(pair<string, string>("IntegrationType", *request->integrationType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->param)) {
    query->insert(pair<string, string>("Param", *request->param));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdatePrometheusIntegration"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdatePrometheusIntegrationResponse(callApi(params, req, runtime));
}

UpdatePrometheusIntegrationResponse Alibabacloud_ARMS20190808::Client::updatePrometheusIntegration(shared_ptr<UpdatePrometheusIntegrationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updatePrometheusIntegrationWithOptions(request, runtime);
}

UpdatePrometheusMonitoringResponse Alibabacloud_ARMS20190808::Client::updatePrometheusMonitoringWithOptions(shared_ptr<UpdatePrometheusMonitoringRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->monitoringName)) {
    query->insert(pair<string, string>("MonitoringName", *request->monitoringName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->configYaml)) {
    body->insert(pair<string, string>("ConfigYaml", *request->configYaml));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdatePrometheusMonitoring"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdatePrometheusMonitoringResponse(callApi(params, req, runtime));
}

UpdatePrometheusMonitoringResponse Alibabacloud_ARMS20190808::Client::updatePrometheusMonitoring(shared_ptr<UpdatePrometheusMonitoringRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updatePrometheusMonitoringWithOptions(request, runtime);
}

UpdatePrometheusMonitoringStatusResponse Alibabacloud_ARMS20190808::Client::updatePrometheusMonitoringStatusWithOptions(shared_ptr<UpdatePrometheusMonitoringStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->monitoringName)) {
    query->insert(pair<string, string>("MonitoringName", *request->monitoringName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdatePrometheusMonitoringStatus"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdatePrometheusMonitoringStatusResponse(callApi(params, req, runtime));
}

UpdatePrometheusMonitoringStatusResponse Alibabacloud_ARMS20190808::Client::updatePrometheusMonitoringStatus(shared_ptr<UpdatePrometheusMonitoringStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updatePrometheusMonitoringStatusWithOptions(request, runtime);
}

UpdateRumAppResponse Alibabacloud_ARMS20190808::Client::updateRumAppWithOptions(shared_ptr<UpdateRumAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appConfig)) {
    query->insert(pair<string, string>("AppConfig", *request->appConfig));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoRestart)) {
    query->insert(pair<string, bool>("AutoRestart", *request->autoRestart));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->backendServiceTraceRegion)) {
    query->insert(pair<string, string>("BackendServiceTraceRegion", *request->backendServiceTraceRegion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bonreeSDKConfigJson)) {
    query->insert(pair<string, string>("BonreeSDKConfigJson", *request->bonreeSDKConfigJson));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isSubscribe)) {
    query->insert(pair<string, bool>("IsSubscribe", *request->isSubscribe));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nickname)) {
    query->insert(pair<string, string>("Nickname", *request->nickname));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pid)) {
    query->insert(pair<string, string>("Pid", *request->pid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->realRegionId)) {
    query->insert(pair<string, string>("RealRegionId", *request->realRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->restart)) {
    query->insert(pair<string, bool>("Restart", *request->restart));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceDomainOperationJson)) {
    query->insert(pair<string, string>("ServiceDomainOperationJson", *request->serviceDomainOperationJson));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->stop)) {
    query->insert(pair<string, bool>("Stop", *request->stop));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateRumApp"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateRumAppResponse(callApi(params, req, runtime));
}

UpdateRumAppResponse Alibabacloud_ARMS20190808::Client::updateRumApp(shared_ptr<UpdateRumAppRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateRumAppWithOptions(request, runtime);
}

UpdateRumFileStatusResponse Alibabacloud_ARMS20190808::Client::updateRumFileStatusWithOptions(shared_ptr<UpdateRumFileStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->fileName)) {
    query->insert(pair<string, string>("FileName", *request->fileName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pid)) {
    query->insert(pair<string, string>("Pid", *request->pid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->size)) {
    query->insert(pair<string, string>("Size", *request->size));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uuid)) {
    query->insert(pair<string, string>("Uuid", *request->uuid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->versionId)) {
    query->insert(pair<string, string>("VersionId", *request->versionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateRumFileStatus"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateRumFileStatusResponse(callApi(params, req, runtime));
}

UpdateRumFileStatusResponse Alibabacloud_ARMS20190808::Client::updateRumFileStatus(shared_ptr<UpdateRumFileStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateRumFileStatusWithOptions(request, runtime);
}

UpdateTimingSyntheticTaskResponse Alibabacloud_ARMS20190808::Client::updateTimingSyntheticTaskWithOptions(shared_ptr<UpdateTimingSyntheticTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateTimingSyntheticTaskShrinkRequest> request = make_shared<UpdateTimingSyntheticTaskShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<UpdateTimingSyntheticTaskRequestAvailableAssertions>>(tmpReq->availableAssertions)) {
    request->availableAssertionsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->availableAssertions, make_shared<string>("AvailableAssertions"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateTimingSyntheticTaskRequestCommonSetting>(tmpReq->commonSetting)) {
    request->commonSettingShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->commonSetting, make_shared<string>("CommonSetting"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateTimingSyntheticTaskRequestCustomPeriod>(tmpReq->customPeriod)) {
    request->customPeriodShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->customPeriod, make_shared<string>("CustomPeriod"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateTimingSyntheticTaskRequestMonitorConf>(tmpReq->monitorConf)) {
    request->monitorConfShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->monitorConf, make_shared<string>("MonitorConf"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateTimingSyntheticTaskRequestMonitors>>(tmpReq->monitors)) {
    request->monitorsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->monitors, make_shared<string>("Monitors"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateTimingSyntheticTaskRequestTags>>(tmpReq->tags)) {
    request->tagsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tags, make_shared<string>("Tags"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->availableAssertionsShrink)) {
    query->insert(pair<string, string>("AvailableAssertions", *request->availableAssertionsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->commonSettingShrink)) {
    query->insert(pair<string, string>("CommonSetting", *request->commonSettingShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->customPeriodShrink)) {
    query->insert(pair<string, string>("CustomPeriod", *request->customPeriodShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->frequency)) {
    query->insert(pair<string, string>("Frequency", *request->frequency));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->monitorConfShrink)) {
    query->insert(pair<string, string>("MonitorConf", *request->monitorConfShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->monitorsShrink)) {
    query->insert(pair<string, string>("Monitors", *request->monitorsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagsShrink)) {
    query->insert(pair<string, string>("Tags", *request->tagsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateTimingSyntheticTask"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateTimingSyntheticTaskResponse(callApi(params, req, runtime));
}

UpdateTimingSyntheticTaskResponse Alibabacloud_ARMS20190808::Client::updateTimingSyntheticTask(shared_ptr<UpdateTimingSyntheticTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateTimingSyntheticTaskWithOptions(request, runtime);
}

UpdateWebhookResponse Alibabacloud_ARMS20190808::Client::updateWebhookWithOptions(shared_ptr<UpdateWebhookRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->body)) {
    query->insert(pair<string, string>("Body", *request->body));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->contactId)) {
    query->insert(pair<string, long>("ContactId", *request->contactId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contactName)) {
    query->insert(pair<string, string>("ContactName", *request->contactName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->httpHeaders)) {
    query->insert(pair<string, string>("HttpHeaders", *request->httpHeaders));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->httpParams)) {
    query->insert(pair<string, string>("HttpParams", *request->httpParams));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->method)) {
    query->insert(pair<string, string>("Method", *request->method));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->recoverBody)) {
    query->insert(pair<string, string>("RecoverBody", *request->recoverBody));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    query->insert(pair<string, string>("Url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateWebhook"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateWebhookResponse(callApi(params, req, runtime));
}

UpdateWebhookResponse Alibabacloud_ARMS20190808::Client::updateWebhook(shared_ptr<UpdateWebhookRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateWebhookWithOptions(request, runtime);
}

UpgradeAddonReleaseResponse Alibabacloud_ARMS20190808::Client::upgradeAddonReleaseWithOptions(shared_ptr<UpgradeAddonReleaseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->addonVersion)) {
    query->insert(pair<string, string>("AddonVersion", *request->addonVersion));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->environmentId)) {
    query->insert(pair<string, string>("EnvironmentId", *request->environmentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->releaseName)) {
    query->insert(pair<string, string>("ReleaseName", *request->releaseName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->values)) {
    query->insert(pair<string, string>("Values", *request->values));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpgradeAddonRelease"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpgradeAddonReleaseResponse(callApi(params, req, runtime));
}

UpgradeAddonReleaseResponse Alibabacloud_ARMS20190808::Client::upgradeAddonRelease(shared_ptr<UpgradeAddonReleaseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return upgradeAddonReleaseWithOptions(request, runtime);
}

UpgradeEnvironmentFeatureResponse Alibabacloud_ARMS20190808::Client::upgradeEnvironmentFeatureWithOptions(shared_ptr<UpgradeEnvironmentFeatureRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aliyunLang)) {
    query->insert(pair<string, string>("AliyunLang", *request->aliyunLang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->environmentId)) {
    query->insert(pair<string, string>("EnvironmentId", *request->environmentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->featureName)) {
    query->insert(pair<string, string>("FeatureName", *request->featureName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->featureVersion)) {
    query->insert(pair<string, string>("FeatureVersion", *request->featureVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->values)) {
    query->insert(pair<string, string>("Values", *request->values));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpgradeEnvironmentFeature"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpgradeEnvironmentFeatureResponse(callApi(params, req, runtime));
}

UpgradeEnvironmentFeatureResponse Alibabacloud_ARMS20190808::Client::upgradeEnvironmentFeature(shared_ptr<UpgradeEnvironmentFeatureRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return upgradeEnvironmentFeatureWithOptions(request, runtime);
}

UploadResponse Alibabacloud_ARMS20190808::Client::uploadWithOptions(shared_ptr<UploadRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->edition)) {
    query->insert(pair<string, string>("Edition", *request->edition));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileName)) {
    query->insert(pair<string, string>("FileName", *request->fileName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pid)) {
    query->insert(pair<string, string>("Pid", *request->pid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->version)) {
    query->insert(pair<string, string>("Version", *request->version));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->file)) {
    body->insert(pair<string, string>("File", *request->file));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("Upload"))},
    {"version", boost::any(string("2019-08-08"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UploadResponse(callApi(params, req, runtime));
}

UploadResponse Alibabacloud_ARMS20190808::Client::upload(shared_ptr<UploadRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return uploadWithOptions(request, runtime);
}

