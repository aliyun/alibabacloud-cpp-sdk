#include <darabonba/Core.hpp>
#include <alibabacloud/ARMS20190808.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::ARMS20190808::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace ARMS20190808
{

AlibabaCloud::ARMS20190808::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"ap-northeast-2-pop" , "arms.aliyuncs.com"},
    {"cn-beijing-finance-1" , "arms.aliyuncs.com"},
    {"cn-beijing-finance-pop" , "arms.aliyuncs.com"},
    {"cn-beijing-gov-1" , "arms.aliyuncs.com"},
    {"cn-beijing-nu16-b01" , "arms.aliyuncs.com"},
    {"cn-edge-1" , "arms.aliyuncs.com"},
    {"cn-fujian" , "arms.aliyuncs.com"},
    {"cn-haidian-cm12-c01" , "arms.aliyuncs.com"},
    {"cn-hangzhou-bj-b01" , "arms.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1" , "arms.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1" , "arms.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2" , "arms.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3" , "arms.aliyuncs.com"},
    {"cn-hangzhou-test-306" , "arms.aliyuncs.com"},
    {"cn-hongkong-finance-pop" , "arms.aliyuncs.com"},
    {"cn-huhehaote-nebula-1" , "arms.aliyuncs.com"},
    {"cn-qingdao-nebula" , "arms.aliyuncs.com"},
    {"cn-shanghai-et15-b01" , "arms.aliyuncs.com"},
    {"cn-shanghai-et2-b01" , "arms.aliyuncs.com"},
    {"cn-shanghai-inner" , "arms.aliyuncs.com"},
    {"cn-shanghai-internal-test-1" , "arms.aliyuncs.com"},
    {"cn-shenzhen-inner" , "arms.aliyuncs.com"},
    {"cn-shenzhen-st4-d01" , "arms.aliyuncs.com"},
    {"cn-shenzhen-su18-b01" , "arms.aliyuncs.com"},
    {"cn-wuhan" , "arms.aliyuncs.com"},
    {"cn-yushanfang" , "arms.aliyuncs.com"},
    {"cn-zhangbei" , "arms.aliyuncs.com"},
    {"cn-zhangbei-na61-b01" , "arms.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01" , "arms.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1" , "arms.aliyuncs.com"},
    {"eu-west-1-oxs" , "arms.aliyuncs.com"},
    {"me-east-1" , "arms.aliyuncs.com"},
    {"rus-west-1-pop" , "arms.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("arms", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
}


string Client::getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint) {
  if (!Darabonba::isNull(endpoint)) {
    return endpoint;
  }

  if (!Darabonba::isNull(endpointMap) && !Darabonba::isNull(endpointMap.at(regionId))) {
    return endpointMap.at(regionId);
  }

  return Utils::Utils::getEndpointRules(productId, regionId, endpointRule, network, suffix);
}

/**
 * @deprecated OpenAPI AddAliClusterIdsToPrometheusGlobalView is deprecated
 *
 * @summary Adds a global aggregation instance as a data source in Managed Service for Prometheus.
 *
 * @param request AddAliClusterIdsToPrometheusGlobalViewRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddAliClusterIdsToPrometheusGlobalViewResponse
 */
AddAliClusterIdsToPrometheusGlobalViewResponse Client::addAliClusterIdsToPrometheusGlobalViewWithOptions(const AddAliClusterIdsToPrometheusGlobalViewRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterIds()) {
    query["ClusterIds"] = request.clusterIds();
  }

  if (!!request.hasGlobalViewClusterId()) {
    query["GlobalViewClusterId"] = request.globalViewClusterId();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.groupName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddAliClusterIdsToPrometheusGlobalView"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddAliClusterIdsToPrometheusGlobalViewResponse>();
}

/**
 * @deprecated OpenAPI AddAliClusterIdsToPrometheusGlobalView is deprecated
 *
 * @summary Adds a global aggregation instance as a data source in Managed Service for Prometheus.
 *
 * @param request AddAliClusterIdsToPrometheusGlobalViewRequest
 * @return AddAliClusterIdsToPrometheusGlobalViewResponse
 */
AddAliClusterIdsToPrometheusGlobalViewResponse Client::addAliClusterIdsToPrometheusGlobalView(const AddAliClusterIdsToPrometheusGlobalViewRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addAliClusterIdsToPrometheusGlobalViewWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI AddGrafana is deprecated
 *
 * @summary Integrates the dashboard of Prometheus Service.
 *
 * @param request AddGrafanaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddGrafanaResponse
 */
AddGrafanaResponse Client::addGrafanaWithOptions(const AddGrafanaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasIntegration()) {
    query["Integration"] = request.integration();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddGrafana"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddGrafanaResponse>();
}

/**
 * @deprecated OpenAPI AddGrafana is deprecated
 *
 * @summary Integrates the dashboard of Prometheus Service.
 *
 * @param request AddGrafanaRequest
 * @return AddGrafanaResponse
 */
AddGrafanaResponse Client::addGrafana(const AddGrafanaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addGrafanaWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI AddIntegration is deprecated, please use ARMS::2019-08-08::InstallAddon instead.
 *
 * @summary Integrates the dashboard and collection rules of Prometheus Service.
 *
 * @param request AddIntegrationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddIntegrationResponse
 */
AddIntegrationResponse Client::addIntegrationWithOptions(const AddIntegrationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasIntegration()) {
    query["Integration"] = request.integration();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddIntegration"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddIntegrationResponse>();
}

/**
 * @deprecated OpenAPI AddIntegration is deprecated, please use ARMS::2019-08-08::InstallAddon instead.
 *
 * @summary Integrates the dashboard and collection rules of Prometheus Service.
 *
 * @param request AddIntegrationRequest
 * @return AddIntegrationResponse
 */
AddIntegrationResponse Client::addIntegration(const AddIntegrationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addIntegrationWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI AddPrometheusGlobalView is deprecated
 *
 * @summary Adds a global aggregation instance in Prometheus Service.
 *
 * @param request AddPrometheusGlobalViewRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddPrometheusGlobalViewResponse
 */
AddPrometheusGlobalViewResponse Client::addPrometheusGlobalViewWithOptions(const AddPrometheusGlobalViewRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusters()) {
    query["Clusters"] = request.clusters();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.groupName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddPrometheusGlobalView"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddPrometheusGlobalViewResponse>();
}

/**
 * @deprecated OpenAPI AddPrometheusGlobalView is deprecated
 *
 * @summary Adds a global aggregation instance in Prometheus Service.
 *
 * @param request AddPrometheusGlobalViewRequest
 * @return AddPrometheusGlobalViewResponse
 */
AddPrometheusGlobalViewResponse Client::addPrometheusGlobalView(const AddPrometheusGlobalViewRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addPrometheusGlobalViewWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI AddPrometheusGlobalViewByAliClusterIds is deprecated
 *
 * @summary Adds a global aggregation instance in Managed Service for Prometheus.
 *
 * @param request AddPrometheusGlobalViewByAliClusterIdsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddPrometheusGlobalViewByAliClusterIdsResponse
 */
AddPrometheusGlobalViewByAliClusterIdsResponse Client::addPrometheusGlobalViewByAliClusterIdsWithOptions(const AddPrometheusGlobalViewByAliClusterIdsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterIds()) {
    query["ClusterIds"] = request.clusterIds();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.groupName();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.productCode();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddPrometheusGlobalViewByAliClusterIds"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddPrometheusGlobalViewByAliClusterIdsResponse>();
}

/**
 * @deprecated OpenAPI AddPrometheusGlobalViewByAliClusterIds is deprecated
 *
 * @summary Adds a global aggregation instance in Managed Service for Prometheus.
 *
 * @param request AddPrometheusGlobalViewByAliClusterIdsRequest
 * @return AddPrometheusGlobalViewByAliClusterIdsResponse
 */
AddPrometheusGlobalViewByAliClusterIdsResponse Client::addPrometheusGlobalViewByAliClusterIds(const AddPrometheusGlobalViewByAliClusterIdsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addPrometheusGlobalViewByAliClusterIdsWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI AddPrometheusInstance is deprecated, please use ARMS::2019-08-08::CreatePrometheusInstance instead.
 *
 * @summary Creates a Prometheus instance for Remote Write.
 *
 * @param request AddPrometheusInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddPrometheusInstanceResponse
 */
AddPrometheusInstanceResponse Client::addPrometheusInstanceWithOptions(const AddPrometheusInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddPrometheusInstance"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddPrometheusInstanceResponse>();
}

/**
 * @deprecated OpenAPI AddPrometheusInstance is deprecated, please use ARMS::2019-08-08::CreatePrometheusInstance instead.
 *
 * @summary Creates a Prometheus instance for Remote Write.
 *
 * @param request AddPrometheusInstanceRequest
 * @return AddPrometheusInstanceResponse
 */
AddPrometheusInstanceResponse Client::addPrometheusInstance(const AddPrometheusInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addPrometheusInstanceWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI AddPrometheusIntegration is deprecated
 *
 * @summary Adds an exporter to a Prometheus instance for Container Service or a Prometheus instance for ECS.
 *
 * @param request AddPrometheusIntegrationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddPrometheusIntegrationResponse
 */
AddPrometheusIntegrationResponse Client::addPrometheusIntegrationWithOptions(const AddPrometheusIntegrationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasIntegrationType()) {
    query["IntegrationType"] = request.integrationType();
  }

  if (!!request.hasParam()) {
    query["Param"] = request.param();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddPrometheusIntegration"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddPrometheusIntegrationResponse>();
}

/**
 * @deprecated OpenAPI AddPrometheusIntegration is deprecated
 *
 * @summary Adds an exporter to a Prometheus instance for Container Service or a Prometheus instance for ECS.
 *
 * @param request AddPrometheusIntegrationRequest
 * @return AddPrometheusIntegrationResponse
 */
AddPrometheusIntegrationResponse Client::addPrometheusIntegration(const AddPrometheusIntegrationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addPrometheusIntegrationWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI AddRecordingRule is deprecated
 *
 * @summary Creates or updates a recording rule of Managed Service for Prometheus.
 *
 * @param request AddRecordingRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddRecordingRuleResponse
 */
AddRecordingRuleResponse Client::addRecordingRuleWithOptions(const AddRecordingRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRuleYaml()) {
    query["RuleYaml"] = request.ruleYaml();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddRecordingRule"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddRecordingRuleResponse>();
}

/**
 * @deprecated OpenAPI AddRecordingRule is deprecated
 *
 * @summary Creates or updates a recording rule of Managed Service for Prometheus.
 *
 * @param request AddRecordingRuleRequest
 * @return AddRecordingRuleResponse
 */
AddRecordingRuleResponse Client::addRecordingRule(const AddRecordingRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addRecordingRuleWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI AddTagToFlinkCluster is deprecated
 *
 * @summary Attaches the workspace ID and workspace name tags to the Prometheus instance corresponding to a Flink workspace.
 *
 * @param request AddTagToFlinkClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddTagToFlinkClusterResponse
 */
AddTagToFlinkClusterResponse Client::addTagToFlinkClusterWithOptions(const AddTagToFlinkClusterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasFlinkWorkSpaceId()) {
    query["FlinkWorkSpaceId"] = request.flinkWorkSpaceId();
  }

  if (!!request.hasFlinkWorkSpaceName()) {
    query["FlinkWorkSpaceName"] = request.flinkWorkSpaceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasTargetUserId()) {
    query["TargetUserId"] = request.targetUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddTagToFlinkCluster"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddTagToFlinkClusterResponse>();
}

/**
 * @deprecated OpenAPI AddTagToFlinkCluster is deprecated
 *
 * @summary Attaches the workspace ID and workspace name tags to the Prometheus instance corresponding to a Flink workspace.
 *
 * @param request AddTagToFlinkClusterRequest
 * @return AddTagToFlinkClusterResponse
 */
AddTagToFlinkClusterResponse Client::addTagToFlinkCluster(const AddTagToFlinkClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addTagToFlinkClusterWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI AppendInstancesToPrometheusGlobalView is deprecated
 *
 * @summary Adds a data source to a global aggregation instance.
 *
 * @param request AppendInstancesToPrometheusGlobalViewRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AppendInstancesToPrometheusGlobalViewResponse
 */
AppendInstancesToPrometheusGlobalViewResponse Client::appendInstancesToPrometheusGlobalViewWithOptions(const AppendInstancesToPrometheusGlobalViewRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusters()) {
    query["Clusters"] = request.clusters();
  }

  if (!!request.hasGlobalViewClusterId()) {
    query["GlobalViewClusterId"] = request.globalViewClusterId();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.groupName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AppendInstancesToPrometheusGlobalView"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AppendInstancesToPrometheusGlobalViewResponse>();
}

/**
 * @deprecated OpenAPI AppendInstancesToPrometheusGlobalView is deprecated
 *
 * @summary Adds a data source to a global aggregation instance.
 *
 * @param request AppendInstancesToPrometheusGlobalViewRequest
 * @return AppendInstancesToPrometheusGlobalViewResponse
 */
AppendInstancesToPrometheusGlobalViewResponse Client::appendInstancesToPrometheusGlobalView(const AppendInstancesToPrometheusGlobalViewRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return appendInstancesToPrometheusGlobalViewWithOptions(request, runtime);
}

/**
 * @param tmpReq ApplyScenarioRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ApplyScenarioResponse
 */
ApplyScenarioResponse Client::applyScenarioWithOptions(const ApplyScenarioRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ApplyScenarioShrinkRequest request = ApplyScenarioShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasConfig()) {
    request.setConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.config(), "Config", "json"));
  }

  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasConfigShrink()) {
    query["Config"] = request.configShrink();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasScenario()) {
    query["Scenario"] = request.scenario();
  }

  if (!!request.hasSign()) {
    query["Sign"] = request.sign();
  }

  if (!!request.hasSnDump()) {
    query["SnDump"] = request.snDump();
  }

  if (!!request.hasSnForce()) {
    query["SnForce"] = request.snForce();
  }

  if (!!request.hasSnStat()) {
    query["SnStat"] = request.snStat();
  }

  if (!!request.hasSnTransfer()) {
    query["SnTransfer"] = request.snTransfer();
  }

  if (!!request.hasUpdateOption()) {
    query["UpdateOption"] = request.updateOption();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ApplyScenario"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ApplyScenarioResponse>();
}

/**
 * @param request ApplyScenarioRequest
 * @return ApplyScenarioResponse
 */
ApplyScenarioResponse Client::applyScenario(const ApplyScenarioRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return applyScenarioWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI BindPrometheusGrafanaInstance is deprecated
 *
 * @summary Binds a Grafana workspace to a Prometheus instance.
 *
 * @param request BindPrometheusGrafanaInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BindPrometheusGrafanaInstanceResponse
 */
BindPrometheusGrafanaInstanceResponse Client::bindPrometheusGrafanaInstanceWithOptions(const BindPrometheusGrafanaInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasGrafanaInstanceId()) {
    query["GrafanaInstanceId"] = request.grafanaInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BindPrometheusGrafanaInstance"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BindPrometheusGrafanaInstanceResponse>();
}

/**
 * @deprecated OpenAPI BindPrometheusGrafanaInstance is deprecated
 *
 * @summary Binds a Grafana workspace to a Prometheus instance.
 *
 * @param request BindPrometheusGrafanaInstanceRequest
 * @return BindPrometheusGrafanaInstanceResponse
 */
BindPrometheusGrafanaInstanceResponse Client::bindPrometheusGrafanaInstance(const BindPrometheusGrafanaInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return bindPrometheusGrafanaInstanceWithOptions(request, runtime);
}

/**
 * @summary Blocks alert notifications in a time period.
 *
 * @param request BlockAlarmNotificationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BlockAlarmNotificationResponse
 */
BlockAlarmNotificationResponse Client::blockAlarmNotificationWithOptions(const BlockAlarmNotificationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlarmId()) {
    query["AlarmId"] = request.alarmId();
  }

  if (!!request.hasHandlerId()) {
    query["HandlerId"] = request.handlerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasTimeout()) {
    query["Timeout"] = request.timeout();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BlockAlarmNotification"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BlockAlarmNotificationResponse>();
}

/**
 * @summary Blocks alert notifications in a time period.
 *
 * @param request BlockAlarmNotificationRequest
 * @return BlockAlarmNotificationResponse
 */
BlockAlarmNotificationResponse Client::blockAlarmNotification(const BlockAlarmNotificationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return blockAlarmNotificationWithOptions(request, runtime);
}

/**
 * @summary Modifies the severity level of an alert.
 *
 * @param request ChangeAlarmSeverityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChangeAlarmSeverityResponse
 */
ChangeAlarmSeverityResponse Client::changeAlarmSeverityWithOptions(const ChangeAlarmSeverityRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlarmId()) {
    query["AlarmId"] = request.alarmId();
  }

  if (!!request.hasHandlerId()) {
    query["HandlerId"] = request.handlerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSeverity()) {
    query["Severity"] = request.severity();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ChangeAlarmSeverity"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChangeAlarmSeverityResponse>();
}

/**
 * @summary Modifies the severity level of an alert.
 *
 * @param request ChangeAlarmSeverityRequest
 * @return ChangeAlarmSeverityResponse
 */
ChangeAlarmSeverityResponse Client::changeAlarmSeverity(const ChangeAlarmSeverityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return changeAlarmSeverityWithOptions(request, runtime);
}

/**
 * @summary Moves a resource to a specific resource group.
 *
 * @param request ChangeResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChangeResourceGroupResponse
 */
ChangeResourceGroupResponse Client::changeResourceGroupWithOptions(const ChangeResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNewResourceGroupId()) {
    query["NewResourceGroupId"] = request.newResourceGroupId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ChangeResourceGroup"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChangeResourceGroupResponse>();
}

/**
 * @summary Moves a resource to a specific resource group.
 *
 * @param request ChangeResourceGroupRequest
 * @return ChangeResourceGroupResponse
 */
ChangeResourceGroupResponse Client::changeResourceGroup(const ChangeResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return changeResourceGroupWithOptions(request, runtime);
}

/**
 * @summary Checks whether Application Real-Time Monitoring Service (ARMS) is available for commercial use in a region.
 *
 * @description You can call this operation to check whether ARMS is available for commercial use in a region.
 *
 * @param request CheckCommercialStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckCommercialStatusResponse
 */
CheckCommercialStatusResponse Client::checkCommercialStatusWithOptions(const CheckCommercialStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckCommercialStatus"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckCommercialStatusResponse>();
}

/**
 * @summary Checks whether Application Real-Time Monitoring Service (ARMS) is available for commercial use in a region.
 *
 * @description You can call this operation to check whether ARMS is available for commercial use in a region.
 *
 * @param request CheckCommercialStatusRequest
 * @return CheckCommercialStatusResponse
 */
CheckCommercialStatusResponse Client::checkCommercialStatus(const CheckCommercialStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkCommercialStatusWithOptions(request, runtime);
}

/**
 * @summary Checks the status of a service in the current cluster, such as whether the service is activated and whether the payment is overdue.
 *
 * @param request CheckServiceStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckServiceStatusResponse
 */
CheckServiceStatusResponse Client::checkServiceStatusWithOptions(const CheckServiceStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSvcCode()) {
    query["SvcCode"] = request.svcCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckServiceStatus"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckServiceStatusResponse>();
}

/**
 * @summary Checks the status of a service in the current cluster, such as whether the service is activated and whether the payment is overdue.
 *
 * @param request CheckServiceStatusRequest
 * @return CheckServiceStatusResponse
 */
CheckServiceStatusResponse Client::checkServiceStatus(const CheckServiceStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkServiceStatusWithOptions(request, runtime);
}

/**
 * @summary Claims an alert. This operation can be used together with escalation policies. When multiple handlers are involved in alert management, each handler can call this operation to claim alerts. After an alert is claimed, the alert enters the Being Processed state.
 *
 * @param request ClaimAlarmRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ClaimAlarmResponse
 */
ClaimAlarmResponse Client::claimAlarmWithOptions(const ClaimAlarmRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlarmId()) {
    query["AlarmId"] = request.alarmId();
  }

  if (!!request.hasHandlerId()) {
    query["HandlerId"] = request.handlerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ClaimAlarm"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ClaimAlarmResponse>();
}

/**
 * @summary Claims an alert. This operation can be used together with escalation policies. When multiple handlers are involved in alert management, each handler can call this operation to claim alerts. After an alert is claimed, the alert enters the Being Processed state.
 *
 * @param request ClaimAlarmRequest
 * @return ClaimAlarmResponse
 */
ClaimAlarmResponse Client::claimAlarm(const ClaimAlarmRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return claimAlarmWithOptions(request, runtime);
}

/**
 * @summary Disables an alert. Make sure that the alert is resolved before you disable the alert. If an alert is not resolved, new alerts can be triggered even after the alert is disabled.
 *
 * @param request CloseAlarmRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloseAlarmResponse
 */
CloseAlarmResponse Client::closeAlarmWithOptions(const CloseAlarmRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlarmId()) {
    query["AlarmId"] = request.alarmId();
  }

  if (!!request.hasHandlerId()) {
    query["HandlerId"] = request.handlerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSolution()) {
    query["Solution"] = request.solution();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloseAlarm"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloseAlarmResponse>();
}

/**
 * @summary Disables an alert. Make sure that the alert is resolved before you disable the alert. If an alert is not resolved, new alerts can be triggered even after the alert is disabled.
 *
 * @param request CloseAlarmRequest
 * @return CloseAlarmResponse
 */
CloseAlarmResponse Client::closeAlarm(const CloseAlarmRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return closeAlarmWithOptions(request, runtime);
}

/**
 * @summary Turns on or off the main switch of an ARMS agent, or queries the status of the main switch.
 *
 * @description ****
 *
 * @param request ConfigAppRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfigAppResponse
 */
ConfigAppResponse Client::configAppWithOptions(const ConfigAppRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppIds()) {
    query["AppIds"] = request.appIds();
  }

  if (!!request.hasEnable()) {
    query["Enable"] = request.enable();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ConfigApp"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ConfigAppResponse>();
}

/**
 * @summary Turns on or off the main switch of an ARMS agent, or queries the status of the main switch.
 *
 * @description ****
 *
 * @param request ConfigAppRequest
 * @return ConfigAppResponse
 */
ConfigAppResponse Client::configApp(const ConfigAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return configAppWithOptions(request, runtime);
}

/**
 * @summary Creates an alert contact.
 *
 * @description This operation is no longer maintained. To create or modify an alert contact, call the CreateOrUpdateContact operation provided by the new version of the Alert Management module.
 *
 * @param request CreateAlertContactRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAlertContactResponse
 */
CreateAlertContactResponse Client::createAlertContactWithOptions(const CreateAlertContactRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactName()) {
    query["ContactName"] = request.contactName();
  }

  if (!!request.hasDingRobotWebhookUrl()) {
    query["DingRobotWebhookUrl"] = request.dingRobotWebhookUrl();
  }

  if (!!request.hasEmail()) {
    query["Email"] = request.email();
  }

  if (!!request.hasPhoneNum()) {
    query["PhoneNum"] = request.phoneNum();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSystemNoc()) {
    query["SystemNoc"] = request.systemNoc();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAlertContact"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAlertContactResponse>();
}

/**
 * @summary Creates an alert contact.
 *
 * @description This operation is no longer maintained. To create or modify an alert contact, call the CreateOrUpdateContact operation provided by the new version of the Alert Management module.
 *
 * @param request CreateAlertContactRequest
 * @return CreateAlertContactResponse
 */
CreateAlertContactResponse Client::createAlertContact(const CreateAlertContactRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAlertContactWithOptions(request, runtime);
}

/**
 * @summary Creates an alert contact group.
 *
 * @description The current API operation is no longer maintained. Call the CreateOrUpdateContactGroup operation of the new Alert Management module to create or modify alert contact groups.
 *
 * @param request CreateAlertContactGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAlertContactGroupResponse
 */
CreateAlertContactGroupResponse Client::createAlertContactGroupWithOptions(const CreateAlertContactGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactGroupName()) {
    query["ContactGroupName"] = request.contactGroupName();
  }

  if (!!request.hasContactIds()) {
    query["ContactIds"] = request.contactIds();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAlertContactGroup"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAlertContactGroupResponse>();
}

/**
 * @summary Creates an alert contact group.
 *
 * @description The current API operation is no longer maintained. Call the CreateOrUpdateContactGroup operation of the new Alert Management module to create or modify alert contact groups.
 *
 * @param request CreateAlertContactGroupRequest
 * @return CreateAlertContactGroupResponse
 */
CreateAlertContactGroupResponse Client::createAlertContactGroup(const CreateAlertContactGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAlertContactGroupWithOptions(request, runtime);
}

/**
 * @summary Creates a dispatch policy.
 *
 * @param request CreateDispatchRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDispatchRuleResponse
 */
CreateDispatchRuleResponse Client::createDispatchRuleWithOptions(const CreateDispatchRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDispatchRule()) {
    query["DispatchRule"] = request.dispatchRule();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDispatchRule"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDispatchRuleResponse>();
}

/**
 * @summary Creates a dispatch policy.
 *
 * @param request CreateDispatchRuleRequest
 * @return CreateDispatchRuleResponse
 */
CreateDispatchRuleResponse Client::createDispatchRule(const CreateDispatchRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDispatchRuleWithOptions(request, runtime);
}

/**
 * @summary Creates a custom job for an environment.
 *
 * @param request CreateEnvCustomJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateEnvCustomJobResponse
 */
CreateEnvCustomJobResponse Client::createEnvCustomJobWithOptions(const CreateEnvCustomJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAliyunLang()) {
    query["AliyunLang"] = request.aliyunLang();
  }

  if (!!request.hasCustomJobName()) {
    query["CustomJobName"] = request.customJobName();
  }

  if (!!request.hasEnvironmentId()) {
    query["EnvironmentId"] = request.environmentId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  json body = {};
  if (!!request.hasConfigYaml()) {
    body["ConfigYaml"] = request.configYaml();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateEnvCustomJob"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateEnvCustomJobResponse>();
}

/**
 * @summary Creates a custom job for an environment.
 *
 * @param request CreateEnvCustomJobRequest
 * @return CreateEnvCustomJobResponse
 */
CreateEnvCustomJobResponse Client::createEnvCustomJob(const CreateEnvCustomJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createEnvCustomJobWithOptions(request, runtime);
}

/**
 * @summary Creates a PodMonitor for an environment.
 *
 * @param request CreateEnvPodMonitorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateEnvPodMonitorResponse
 */
CreateEnvPodMonitorResponse Client::createEnvPodMonitorWithOptions(const CreateEnvPodMonitorRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAliyunLang()) {
    query["AliyunLang"] = request.aliyunLang();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasEnvironmentId()) {
    query["EnvironmentId"] = request.environmentId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  json body = {};
  if (!!request.hasConfigYaml()) {
    body["ConfigYaml"] = request.configYaml();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateEnvPodMonitor"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateEnvPodMonitorResponse>();
}

/**
 * @summary Creates a PodMonitor for an environment.
 *
 * @param request CreateEnvPodMonitorRequest
 * @return CreateEnvPodMonitorResponse
 */
CreateEnvPodMonitorResponse Client::createEnvPodMonitor(const CreateEnvPodMonitorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createEnvPodMonitorWithOptions(request, runtime);
}

/**
 * @summary Creates a ServiceMonitor for an environment.
 *
 * @param request CreateEnvServiceMonitorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateEnvServiceMonitorResponse
 */
CreateEnvServiceMonitorResponse Client::createEnvServiceMonitorWithOptions(const CreateEnvServiceMonitorRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAliyunLang()) {
    query["AliyunLang"] = request.aliyunLang();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasEnvironmentId()) {
    query["EnvironmentId"] = request.environmentId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  json body = {};
  if (!!request.hasConfigYaml()) {
    body["ConfigYaml"] = request.configYaml();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateEnvServiceMonitor"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateEnvServiceMonitorResponse>();
}

/**
 * @summary Creates a ServiceMonitor for an environment.
 *
 * @param request CreateEnvServiceMonitorRequest
 * @return CreateEnvServiceMonitorResponse
 */
CreateEnvServiceMonitorResponse Client::createEnvServiceMonitor(const CreateEnvServiceMonitorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createEnvServiceMonitorWithOptions(request, runtime);
}

/**
 * @summary Creates an environment instance.
 *
 * @param request CreateEnvironmentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateEnvironmentResponse
 */
CreateEnvironmentResponse Client::createEnvironmentWithOptions(const CreateEnvironmentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAliyunLang()) {
    query["AliyunLang"] = request.aliyunLang();
  }

  if (!!request.hasBindResourceId()) {
    query["BindResourceId"] = request.bindResourceId();
  }

  if (!!request.hasEnvironmentName()) {
    query["EnvironmentName"] = request.environmentName();
  }

  if (!!request.hasEnvironmentSubType()) {
    query["EnvironmentSubType"] = request.environmentSubType();
  }

  if (!!request.hasEnvironmentType()) {
    query["EnvironmentType"] = request.environmentType();
  }

  if (!!request.hasFeePackage()) {
    query["FeePackage"] = request.feePackage();
  }

  if (!!request.hasGrafanaWorkspaceId()) {
    query["GrafanaWorkspaceId"] = request.grafanaWorkspaceId();
  }

  if (!!request.hasInitEnvironment()) {
    query["InitEnvironment"] = request.initEnvironment();
  }

  if (!!request.hasManagedType()) {
    query["ManagedType"] = request.managedType();
  }

  if (!!request.hasPrometheusInstanceId()) {
    query["PrometheusInstanceId"] = request.prometheusInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.tags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateEnvironment"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateEnvironmentResponse>();
}

/**
 * @summary Creates an environment instance.
 *
 * @param request CreateEnvironmentRequest
 * @return CreateEnvironmentResponse
 */
CreateEnvironmentResponse Client::createEnvironment(const CreateEnvironmentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createEnvironmentWithOptions(request, runtime);
}

/**
 * @summary Creates a workspace in Managed Service for Grafana.
 *
 * @description Before you call the operation, make sure that you have learned about the billing methods and [pricing](https://www.alibabacloud.com/help/zh/grafana/product-overview/billing-4?spm=a2c4g.11186623.0.0.14c2d253B3SDbt) of Managed Service for Grafana.
 * > 
 * *   To create workspaces, you must complete real-name verification.
 * *   Regular users can create workspaces only in Managed Service for Grafana Developer Edition, Pro Edition, and Advanced Edition. `These editions charge fees.`
 * *   Internal users can create workspaces only in Managed Service for Grafana Beta Edition and Standard Edition. `These editions do not charge fees.`
 *
 * @param tmpReq CreateGrafanaWorkspaceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateGrafanaWorkspaceResponse
 */
CreateGrafanaWorkspaceResponse Client::createGrafanaWorkspaceWithOptions(const CreateGrafanaWorkspaceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateGrafanaWorkspaceShrinkRequest request = CreateGrafanaWorkspaceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tags(), "Tags", "json"));
  }

  json query = {};
  if (!!request.hasAccountNumber()) {
    query["AccountNumber"] = request.accountNumber();
  }

  if (!!request.hasAliyunLang()) {
    query["AliyunLang"] = request.aliyunLang();
  }

  if (!!request.hasAutoRenew()) {
    query["AutoRenew"] = request.autoRenew();
  }

  if (!!request.hasCustomAccountNumber()) {
    query["CustomAccountNumber"] = request.customAccountNumber();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasDuration()) {
    query["Duration"] = request.duration();
  }

  if (!!request.hasGrafanaVersion()) {
    query["GrafanaVersion"] = request.grafanaVersion();
  }

  if (!!request.hasGrafanaWorkspaceEdition()) {
    query["GrafanaWorkspaceEdition"] = request.grafanaWorkspaceEdition();
  }

  if (!!request.hasGrafanaWorkspaceName()) {
    query["GrafanaWorkspaceName"] = request.grafanaWorkspaceName();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.password();
  }

  if (!!request.hasPricingCycle()) {
    query["PricingCycle"] = request.pricingCycle();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasTagsShrink()) {
    query["Tags"] = request.tagsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateGrafanaWorkspace"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateGrafanaWorkspaceResponse>();
}

/**
 * @summary Creates a workspace in Managed Service for Grafana.
 *
 * @description Before you call the operation, make sure that you have learned about the billing methods and [pricing](https://www.alibabacloud.com/help/zh/grafana/product-overview/billing-4?spm=a2c4g.11186623.0.0.14c2d253B3SDbt) of Managed Service for Grafana.
 * > 
 * *   To create workspaces, you must complete real-name verification.
 * *   Regular users can create workspaces only in Managed Service for Grafana Developer Edition, Pro Edition, and Advanced Edition. `These editions charge fees.`
 * *   Internal users can create workspaces only in Managed Service for Grafana Beta Edition and Standard Edition. `These editions do not charge fees.`
 *
 * @param request CreateGrafanaWorkspaceRequest
 * @return CreateGrafanaWorkspaceResponse
 */
CreateGrafanaWorkspaceResponse Client::createGrafanaWorkspace(const CreateGrafanaWorkspaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createGrafanaWorkspaceWithOptions(request, runtime);
}

/**
 * @summary Creates an alert integration.
 *
 * @param request CreateIntegrationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateIntegrationResponse
 */
CreateIntegrationResponse Client::createIntegrationWithOptions(const CreateIntegrationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  json body = {};
  if (!!request.hasAutoRecover()) {
    body["AutoRecover"] = request.autoRecover();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasIntegrationName()) {
    body["IntegrationName"] = request.integrationName();
  }

  if (!!request.hasIntegrationProductType()) {
    body["IntegrationProductType"] = request.integrationProductType();
  }

  if (!!request.hasRecoverTime()) {
    body["RecoverTime"] = request.recoverTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateIntegration"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateIntegrationResponse>();
}

/**
 * @summary Creates an alert integration.
 *
 * @param request CreateIntegrationRequest
 * @return CreateIntegrationResponse
 */
CreateIntegrationResponse Client::createIntegration(const CreateIntegrationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createIntegrationWithOptions(request, runtime);
}

/**
 * @summary Creates or modifies an alert rule.
 *
 * @param request CreateOrUpdateAlertRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateOrUpdateAlertRuleResponse
 */
CreateOrUpdateAlertRuleResponse Client::createOrUpdateAlertRuleWithOptions(const CreateOrUpdateAlertRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAlertCheckType()) {
    body["AlertCheckType"] = request.alertCheckType();
  }

  if (!!request.hasAlertGroup()) {
    body["AlertGroup"] = request.alertGroup();
  }

  if (!!request.hasAlertId()) {
    body["AlertId"] = request.alertId();
  }

  if (!!request.hasAlertName()) {
    body["AlertName"] = request.alertName();
  }

  if (!!request.hasAlertPiplines()) {
    body["AlertPiplines"] = request.alertPiplines();
  }

  if (!!request.hasAlertRuleContent()) {
    body["AlertRuleContent"] = request.alertRuleContent();
  }

  if (!!request.hasAlertStatus()) {
    body["AlertStatus"] = request.alertStatus();
  }

  if (!!request.hasAlertType()) {
    body["AlertType"] = request.alertType();
  }

  if (!!request.hasAnnotations()) {
    body["Annotations"] = request.annotations();
  }

  if (!!request.hasAutoAddNewApplication()) {
    body["AutoAddNewApplication"] = request.autoAddNewApplication();
  }

  if (!!request.hasAutoAddTargetConfig()) {
    body["AutoAddTargetConfig"] = request.autoAddTargetConfig();
  }

  if (!!request.hasCheckCycle()) {
    body["CheckCycle"] = request.checkCycle();
  }

  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.clusterId();
  }

  if (!!request.hasDataConfig()) {
    body["DataConfig"] = request.dataConfig();
  }

  if (!!request.hasDuration()) {
    body["Duration"] = request.duration();
  }

  if (!!request.hasFilters()) {
    body["Filters"] = request.filters();
  }

  if (!!request.hasLabels()) {
    body["Labels"] = request.labels();
  }

  if (!!request.hasLevel()) {
    body["Level"] = request.level();
  }

  if (!!request.hasMarkTags()) {
    body["MarkTags"] = request.markTags();
  }

  if (!!request.hasMessage()) {
    body["Message"] = request.message();
  }

  if (!!request.hasMetricsKey()) {
    body["MetricsKey"] = request.metricsKey();
  }

  if (!!request.hasMetricsType()) {
    body["MetricsType"] = request.metricsType();
  }

  if (!!request.hasNotice()) {
    body["Notice"] = request.notice();
  }

  if (!!request.hasNotifyMode()) {
    body["NotifyMode"] = request.notifyMode();
  }

  if (!!request.hasNotifyStrategy()) {
    body["NotifyStrategy"] = request.notifyStrategy();
  }

  if (!!request.hasPids()) {
    body["Pids"] = request.pids();
  }

  if (!!request.hasProduct()) {
    body["Product"] = request.product();
  }

  if (!!request.hasPromQL()) {
    body["PromQL"] = request.promQL();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasTags()) {
    body["Tags"] = request.tags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateOrUpdateAlertRule"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateOrUpdateAlertRuleResponse>();
}

/**
 * @summary Creates or modifies an alert rule.
 *
 * @param request CreateOrUpdateAlertRuleRequest
 * @return CreateOrUpdateAlertRuleResponse
 */
CreateOrUpdateAlertRuleResponse Client::createOrUpdateAlertRule(const CreateOrUpdateAlertRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createOrUpdateAlertRuleWithOptions(request, runtime);
}

/**
 * @summary Creates or modifies an alert contact.
 *
 * @param request CreateOrUpdateContactRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateOrUpdateContactResponse
 */
CreateOrUpdateContactResponse Client::createOrUpdateContactWithOptions(const CreateOrUpdateContactRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDingRobotUrl()) {
    query["DingRobotUrl"] = request.dingRobotUrl();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  json body = {};
  if (!!request.hasContactId()) {
    body["ContactId"] = request.contactId();
  }

  if (!!request.hasContactName()) {
    body["ContactName"] = request.contactName();
  }

  if (!!request.hasCorpUserId()) {
    body["CorpUserId"] = request.corpUserId();
  }

  if (!!request.hasEmail()) {
    body["Email"] = request.email();
  }

  if (!!request.hasIsEmailVerify()) {
    body["IsEmailVerify"] = request.isEmailVerify();
  }

  if (!!request.hasPhone()) {
    body["Phone"] = request.phone();
  }

  if (!!request.hasReissueSendNotice()) {
    body["ReissueSendNotice"] = request.reissueSendNotice();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateOrUpdateContact"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateOrUpdateContactResponse>();
}

/**
 * @summary Creates or modifies an alert contact.
 *
 * @param request CreateOrUpdateContactRequest
 * @return CreateOrUpdateContactResponse
 */
CreateOrUpdateContactResponse Client::createOrUpdateContact(const CreateOrUpdateContactRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createOrUpdateContactWithOptions(request, runtime);
}

/**
 * @summary Creates or modifies an alert contact group.
 *
 * @param request CreateOrUpdateContactGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateOrUpdateContactGroupResponse
 */
CreateOrUpdateContactGroupResponse Client::createOrUpdateContactGroupWithOptions(const CreateOrUpdateContactGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasContactGroupId()) {
    body["ContactGroupId"] = request.contactGroupId();
  }

  if (!!request.hasContactGroupName()) {
    body["ContactGroupName"] = request.contactGroupName();
  }

  if (!!request.hasContactIds()) {
    body["ContactIds"] = request.contactIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateOrUpdateContactGroup"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateOrUpdateContactGroupResponse>();
}

/**
 * @summary Creates or modifies an alert contact group.
 *
 * @param request CreateOrUpdateContactGroupRequest
 * @return CreateOrUpdateContactGroupResponse
 */
CreateOrUpdateContactGroupResponse Client::createOrUpdateContactGroup(const CreateOrUpdateContactGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createOrUpdateContactGroupWithOptions(request, runtime);
}

/**
 * @summary Creates or modifies an EventBridge integration.
 *
 * @param request CreateOrUpdateEventBridgeIntegrationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateOrUpdateEventBridgeIntegrationResponse
 */
CreateOrUpdateEventBridgeIntegrationResponse Client::createOrUpdateEventBridgeIntegrationWithOptions(const CreateOrUpdateEventBridgeIntegrationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccessKey()) {
    body["AccessKey"] = request.accessKey();
  }

  if (!!request.hasAccessSecret()) {
    body["AccessSecret"] = request.accessSecret();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasEndpoint()) {
    body["Endpoint"] = request.endpoint();
  }

  if (!!request.hasEventBusName()) {
    body["EventBusName"] = request.eventBusName();
  }

  if (!!request.hasEventBusRegionId()) {
    body["EventBusRegionId"] = request.eventBusRegionId();
  }

  if (!!request.hasId()) {
    body["Id"] = request.id();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasSource()) {
    body["Source"] = request.source();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateOrUpdateEventBridgeIntegration"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateOrUpdateEventBridgeIntegrationResponse>();
}

/**
 * @summary Creates or modifies an EventBridge integration.
 *
 * @param request CreateOrUpdateEventBridgeIntegrationRequest
 * @return CreateOrUpdateEventBridgeIntegrationResponse
 */
CreateOrUpdateEventBridgeIntegrationResponse Client::createOrUpdateEventBridgeIntegration(const CreateOrUpdateEventBridgeIntegrationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createOrUpdateEventBridgeIntegrationWithOptions(request, runtime);
}

/**
 * @summary Creates or updates an IM chatbot.
 *
 * @param request CreateOrUpdateIMRobotRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateOrUpdateIMRobotResponse
 */
CreateOrUpdateIMRobotResponse Client::createOrUpdateIMRobotWithOptions(const CreateOrUpdateIMRobotRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCardTemplate()) {
    body["CardTemplate"] = request.cardTemplate();
  }

  if (!!request.hasDailyNoc()) {
    body["DailyNoc"] = request.dailyNoc();
  }

  if (!!request.hasDailyNocTime()) {
    body["DailyNocTime"] = request.dailyNocTime();
  }

  if (!!request.hasDingSignKey()) {
    body["DingSignKey"] = request.dingSignKey();
  }

  if (!!request.hasEnableOutgoing()) {
    body["EnableOutgoing"] = request.enableOutgoing();
  }

  if (!!request.hasRobotAddress()) {
    body["RobotAddress"] = request.robotAddress();
  }

  if (!!request.hasRobotId()) {
    body["RobotId"] = request.robotId();
  }

  if (!!request.hasRobotName()) {
    body["RobotName"] = request.robotName();
  }

  if (!!request.hasToken()) {
    body["Token"] = request.token();
  }

  if (!!request.hasType()) {
    body["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateOrUpdateIMRobot"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateOrUpdateIMRobotResponse>();
}

/**
 * @summary Creates or updates an IM chatbot.
 *
 * @param request CreateOrUpdateIMRobotRequest
 * @return CreateOrUpdateIMRobotResponse
 */
CreateOrUpdateIMRobotResponse Client::createOrUpdateIMRobot(const CreateOrUpdateIMRobotRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createOrUpdateIMRobotWithOptions(request, runtime);
}

/**
 * @summary Creates or modifies a notification policy.
 *
 * @param request CreateOrUpdateNotificationPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateOrUpdateNotificationPolicyResponse
 */
CreateOrUpdateNotificationPolicyResponse Client::createOrUpdateNotificationPolicyWithOptions(const CreateOrUpdateNotificationPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDirectedMode()) {
    body["DirectedMode"] = request.directedMode();
  }

  if (!!request.hasEscalationPolicyId()) {
    body["EscalationPolicyId"] = request.escalationPolicyId();
  }

  if (!!request.hasGroupRule()) {
    body["GroupRule"] = request.groupRule();
  }

  if (!!request.hasId()) {
    body["Id"] = request.id();
  }

  if (!!request.hasIntegrationId()) {
    body["IntegrationId"] = request.integrationId();
  }

  if (!!request.hasMatchingRules()) {
    body["MatchingRules"] = request.matchingRules();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasNotifyRule()) {
    body["NotifyRule"] = request.notifyRule();
  }

  if (!!request.hasNotifyTemplate()) {
    body["NotifyTemplate"] = request.notifyTemplate();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasRepeat()) {
    body["Repeat"] = request.repeat();
  }

  if (!!request.hasRepeatInterval()) {
    body["RepeatInterval"] = request.repeatInterval();
  }

  if (!!request.hasSendRecoverMessage()) {
    body["SendRecoverMessage"] = request.sendRecoverMessage();
  }

  if (!!request.hasState()) {
    body["State"] = request.state();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateOrUpdateNotificationPolicy"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateOrUpdateNotificationPolicyResponse>();
}

/**
 * @summary Creates or modifies a notification policy.
 *
 * @param request CreateOrUpdateNotificationPolicyRequest
 * @return CreateOrUpdateNotificationPolicyResponse
 */
CreateOrUpdateNotificationPolicyResponse Client::createOrUpdateNotificationPolicy(const CreateOrUpdateNotificationPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createOrUpdateNotificationPolicyWithOptions(request, runtime);
}

/**
 * @summary Creates or modifies a silence policy.
 *
 * @param request CreateOrUpdateSilencePolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateOrUpdateSilencePolicyResponse
 */
CreateOrUpdateSilencePolicyResponse Client::createOrUpdateSilencePolicyWithOptions(const CreateOrUpdateSilencePolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEffectiveTimeType()) {
    query["EffectiveTimeType"] = request.effectiveTimeType();
  }

  if (!!request.hasTimePeriod()) {
    query["TimePeriod"] = request.timePeriod();
  }

  if (!!request.hasTimeSlots()) {
    query["TimeSlots"] = request.timeSlots();
  }

  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.id();
  }

  if (!!request.hasMatchingRules()) {
    body["MatchingRules"] = request.matchingRules();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasState()) {
    body["State"] = request.state();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateOrUpdateSilencePolicy"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateOrUpdateSilencePolicyResponse>();
}

/**
 * @summary Creates or modifies a silence policy.
 *
 * @param request CreateOrUpdateSilencePolicyRequest
 * @return CreateOrUpdateSilencePolicyResponse
 */
CreateOrUpdateSilencePolicyResponse Client::createOrUpdateSilencePolicy(const CreateOrUpdateSilencePolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createOrUpdateSilencePolicyWithOptions(request, runtime);
}

/**
 * @summary Creates or modifies a webhook alert contact.
 *
 * @param request CreateOrUpdateWebhookContactRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateOrUpdateWebhookContactResponse
 */
CreateOrUpdateWebhookContactResponse Client::createOrUpdateWebhookContactWithOptions(const CreateOrUpdateWebhookContactRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBizHeaders()) {
    body["BizHeaders"] = request.bizHeaders();
  }

  if (!!request.hasBizParams()) {
    body["BizParams"] = request.bizParams();
  }

  if (!!request.hasBody()) {
    body["Body"] = request.body();
  }

  if (!!request.hasMethod()) {
    body["Method"] = request.method();
  }

  if (!!request.hasRecoverBody()) {
    body["RecoverBody"] = request.recoverBody();
  }

  if (!!request.hasUrl()) {
    body["Url"] = request.url();
  }

  if (!!request.hasWebhookId()) {
    body["WebhookId"] = request.webhookId();
  }

  if (!!request.hasWebhookName()) {
    body["WebhookName"] = request.webhookName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateOrUpdateWebhookContact"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateOrUpdateWebhookContactResponse>();
}

/**
 * @summary Creates or modifies a webhook alert contact.
 *
 * @param request CreateOrUpdateWebhookContactRequest
 * @return CreateOrUpdateWebhookContactResponse
 */
CreateOrUpdateWebhookContactResponse Client::createOrUpdateWebhookContact(const CreateOrUpdateWebhookContactRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createOrUpdateWebhookContactWithOptions(request, runtime);
}

/**
 * @summary Creates an alert rule.
 *
 * @param request CreatePrometheusAlertRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePrometheusAlertRuleResponse
 */
CreatePrometheusAlertRuleResponse Client::createPrometheusAlertRuleWithOptions(const CreatePrometheusAlertRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlertName()) {
    query["AlertName"] = request.alertName();
  }

  if (!!request.hasAnnotations()) {
    query["Annotations"] = request.annotations();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasDispatchRuleId()) {
    query["DispatchRuleId"] = request.dispatchRuleId();
  }

  if (!!request.hasDuration()) {
    query["Duration"] = request.duration();
  }

  if (!!request.hasExpression()) {
    query["Expression"] = request.expression();
  }

  if (!!request.hasLabels()) {
    query["Labels"] = request.labels();
  }

  if (!!request.hasMessage()) {
    query["Message"] = request.message();
  }

  if (!!request.hasNotifyType()) {
    query["NotifyType"] = request.notifyType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.tags();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreatePrometheusAlertRule"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePrometheusAlertRuleResponse>();
}

/**
 * @summary Creates an alert rule.
 *
 * @param request CreatePrometheusAlertRuleRequest
 * @return CreatePrometheusAlertRuleResponse
 */
CreatePrometheusAlertRuleResponse Client::createPrometheusAlertRule(const CreatePrometheusAlertRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPrometheusAlertRuleWithOptions(request, runtime);
}

/**
 * @summary Creates a Prometheus instance.
 *
 * @param request CreatePrometheusInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePrometheusInstanceResponse
 */
CreatePrometheusInstanceResponse Client::createPrometheusInstanceWithOptions(const CreatePrometheusInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAllSubClustersSuccess()) {
    query["AllSubClustersSuccess"] = request.allSubClustersSuccess();
  }

  if (!!request.hasArchiveDuration()) {
    query["ArchiveDuration"] = request.archiveDuration();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasClusterName()) {
    query["ClusterName"] = request.clusterName();
  }

  if (!!request.hasClusterType()) {
    query["ClusterType"] = request.clusterType();
  }

  if (!!request.hasDuration()) {
    query["Duration"] = request.duration();
  }

  if (!!request.hasGrafanaInstanceId()) {
    query["GrafanaInstanceId"] = request.grafanaInstanceId();
  }

  if (!!request.hasPaymentType()) {
    query["PaymentType"] = request.paymentType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSecurityGroupId()) {
    query["SecurityGroupId"] = request.securityGroupId();
  }

  if (!!request.hasSubClustersJson()) {
    query["SubClustersJson"] = request.subClustersJson();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.tags();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.vSwitchId();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.vpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreatePrometheusInstance"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePrometheusInstanceResponse>();
}

/**
 * @summary Creates a Prometheus instance.
 *
 * @param request CreatePrometheusInstanceRequest
 * @return CreatePrometheusInstanceResponse
 */
CreatePrometheusInstanceResponse Client::createPrometheusInstance(const CreatePrometheusInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPrometheusInstanceWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI CreatePrometheusMonitoring is deprecated
 *
 * @summary Creates a monitoring configuration for a Prometheus instance.
 *
 * @param request CreatePrometheusMonitoringRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePrometheusMonitoringResponse
 */
CreatePrometheusMonitoringResponse Client::createPrometheusMonitoringWithOptions(const CreatePrometheusMonitoringRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  json body = {};
  if (!!request.hasConfigYaml()) {
    body["ConfigYaml"] = request.configYaml();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreatePrometheusMonitoring"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePrometheusMonitoringResponse>();
}

/**
 * @deprecated OpenAPI CreatePrometheusMonitoring is deprecated
 *
 * @summary Creates a monitoring configuration for a Prometheus instance.
 *
 * @param request CreatePrometheusMonitoringRequest
 * @return CreatePrometheusMonitoringResponse
 */
CreatePrometheusMonitoringResponse Client::createPrometheusMonitoring(const CreatePrometheusMonitoringRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPrometheusMonitoringWithOptions(request, runtime);
}

/**
 * @summary Creates a Browser Monitoring task for an application.
 *
 * @param request CreateRetcodeAppRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRetcodeAppResponse
 */
CreateRetcodeAppResponse Client::createRetcodeAppWithOptions(const CreateRetcodeAppRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasRetcodeAppName()) {
    query["RetcodeAppName"] = request.retcodeAppName();
  }

  if (!!request.hasRetcodeAppType()) {
    query["RetcodeAppType"] = request.retcodeAppType();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.tags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateRetcodeApp"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRetcodeAppResponse>();
}

/**
 * @summary Creates a Browser Monitoring task for an application.
 *
 * @param request CreateRetcodeAppRequest
 * @return CreateRetcodeAppResponse
 */
CreateRetcodeAppResponse Client::createRetcodeApp(const CreateRetcodeAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRetcodeAppWithOptions(request, runtime);
}

/**
 * @summary Create a Real User Monitoring (RUM) application.
 *
 * @param tmpReq CreateRumAppRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRumAppResponse
 */
CreateRumAppResponse Client::createRumAppWithOptions(const CreateRumAppRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateRumAppShrinkRequest request = CreateRumAppShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTag()) {
    request.setTagShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tag(), "Tag", "json"));
  }

  json query = {};
  if (!!request.hasAppGroup()) {
    query["AppGroup"] = request.appGroup();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.appName();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasLanguage()) {
    query["Language"] = request.language();
  }

  if (!!request.hasNickName()) {
    query["NickName"] = request.nickName();
  }

  if (!!request.hasPackageName()) {
    query["PackageName"] = request.packageName();
  }

  if (!!request.hasRealRegionId()) {
    query["RealRegionId"] = request.realRegionId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSiteType()) {
    query["SiteType"] = request.siteType();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.source();
  }

  if (!!request.hasTagShrink()) {
    query["Tag"] = request.tagShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateRumApp"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRumAppResponse>();
}

/**
 * @summary Create a Real User Monitoring (RUM) application.
 *
 * @param request CreateRumAppRequest
 * @return CreateRumAppResponse
 */
CreateRumAppResponse Client::createRumApp(const CreateRumAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRumAppWithOptions(request, runtime);
}

/**
 * @summary Creates a file upload URL to upload SourceMap files, symbol table files, or dSYM files.
 *
 * @description This operation returns a URL. You can upload files to the URL. For more information, see [Upload local files with signed URLs](https://help.aliyun.com/document_detail/2579659.html).
 *
 * @param request CreateRumUploadFileUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRumUploadFileUrlResponse
 */
CreateRumUploadFileUrlResponse Client::createRumUploadFileUrlWithOptions(const CreateRumUploadFileUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppName()) {
    query["AppName"] = request.appName();
  }

  if (!!request.hasContentType()) {
    query["ContentType"] = request.contentType();
  }

  if (!!request.hasFileName()) {
    query["FileName"] = request.fileName();
  }

  if (!!request.hasPid()) {
    query["Pid"] = request.pid();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasServiceId()) {
    query["ServiceId"] = request.serviceId();
  }

  if (!!request.hasSourcemapType()) {
    query["SourcemapType"] = request.sourcemapType();
  }

  if (!!request.hasUuid()) {
    query["Uuid"] = request.uuid();
  }

  if (!!request.hasVersionId()) {
    query["VersionId"] = request.versionId();
  }

  if (!!request.hasWorkspace()) {
    query["Workspace"] = request.workspace();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateRumUploadFileUrl"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRumUploadFileUrlResponse>();
}

/**
 * @summary Creates a file upload URL to upload SourceMap files, symbol table files, or dSYM files.
 *
 * @description This operation returns a URL. You can upload files to the URL. For more information, see [Upload local files with signed URLs](https://help.aliyun.com/document_detail/2579659.html).
 *
 * @param request CreateRumUploadFileUrlRequest
 * @return CreateRumUploadFileUrlResponse
 */
CreateRumUploadFileUrlResponse Client::createRumUploadFileUrl(const CreateRumUploadFileUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRumUploadFileUrlWithOptions(request, runtime);
}

/**
 * @summary Creates or updates a synthetic monitoring task.
 *
 * @param tmpReq CreateSyntheticTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSyntheticTaskResponse
 */
CreateSyntheticTaskResponse Client::createSyntheticTaskWithOptions(const CreateSyntheticTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateSyntheticTaskShrinkRequest request = CreateSyntheticTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCommonParam()) {
    request.setCommonParamShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.commonParam(), "CommonParam", "json"));
  }

  if (!!tmpReq.hasDownload()) {
    request.setDownloadShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.download(), "Download", "json"));
  }

  if (!!tmpReq.hasExtendInterval()) {
    request.setExtendIntervalShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.extendInterval(), "ExtendInterval", "json"));
  }

  if (!!tmpReq.hasMonitorList()) {
    request.setMonitorListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.monitorList(), "MonitorList", "json"));
  }

  if (!!tmpReq.hasNavigation()) {
    request.setNavigationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.navigation(), "Navigation", "json"));
  }

  if (!!tmpReq.hasNet()) {
    request.setNetShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.net(), "Net", "json"));
  }

  if (!!tmpReq.hasProtocol()) {
    request.setProtocolShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.protocol(), "Protocol", "json"));
  }

  json query = {};
  if (!!request.hasCommonParamShrink()) {
    query["CommonParam"] = request.commonParamShrink();
  }

  if (!!request.hasDownloadShrink()) {
    query["Download"] = request.downloadShrink();
  }

  if (!!request.hasExtendIntervalShrink()) {
    query["ExtendInterval"] = request.extendIntervalShrink();
  }

  if (!!request.hasIntervalTime()) {
    query["IntervalTime"] = request.intervalTime();
  }

  if (!!request.hasIntervalType()) {
    query["IntervalType"] = request.intervalType();
  }

  if (!!request.hasIpType()) {
    query["IpType"] = request.ipType();
  }

  if (!!request.hasMonitorListShrink()) {
    query["MonitorList"] = request.monitorListShrink();
  }

  if (!!request.hasNavigationShrink()) {
    query["Navigation"] = request.navigationShrink();
  }

  if (!!request.hasNetShrink()) {
    query["Net"] = request.netShrink();
  }

  if (!!request.hasProtocolShrink()) {
    query["Protocol"] = request.protocolShrink();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasTaskName()) {
    query["TaskName"] = request.taskName();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.taskType();
  }

  if (!!request.hasUpdateTask()) {
    query["UpdateTask"] = request.updateTask();
  }

  if (!!request.hasUrl()) {
    query["Url"] = request.url();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateSyntheticTask"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSyntheticTaskResponse>();
}

/**
 * @summary Creates or updates a synthetic monitoring task.
 *
 * @param request CreateSyntheticTaskRequest
 * @return CreateSyntheticTaskResponse
 */
CreateSyntheticTaskResponse Client::createSyntheticTask(const CreateSyntheticTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSyntheticTaskWithOptions(request, runtime);
}

/**
 * @summary Creates a scheduled synthetic test task.
 *
 * @param tmpReq CreateTimingSyntheticTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTimingSyntheticTaskResponse
 */
CreateTimingSyntheticTaskResponse Client::createTimingSyntheticTaskWithOptions(const CreateTimingSyntheticTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateTimingSyntheticTaskShrinkRequest request = CreateTimingSyntheticTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAvailableAssertions()) {
    request.setAvailableAssertionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.availableAssertions(), "AvailableAssertions", "json"));
  }

  if (!!tmpReq.hasCommonSetting()) {
    request.setCommonSettingShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.commonSetting(), "CommonSetting", "json"));
  }

  if (!!tmpReq.hasCustomPeriod()) {
    request.setCustomPeriodShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.customPeriod(), "CustomPeriod", "json"));
  }

  if (!!tmpReq.hasMonitorConf()) {
    request.setMonitorConfShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.monitorConf(), "MonitorConf", "json"));
  }

  if (!!tmpReq.hasMonitors()) {
    request.setMonitorsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.monitors(), "Monitors", "json"));
  }

  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tags(), "Tags", "json"));
  }

  json query = {};
  if (!!request.hasAvailableAssertionsShrink()) {
    query["AvailableAssertions"] = request.availableAssertionsShrink();
  }

  if (!!request.hasCommonSettingShrink()) {
    query["CommonSetting"] = request.commonSettingShrink();
  }

  if (!!request.hasCustomPeriodShrink()) {
    query["CustomPeriod"] = request.customPeriodShrink();
  }

  if (!!request.hasFrequency()) {
    query["Frequency"] = request.frequency();
  }

  if (!!request.hasMonitorCategory()) {
    query["MonitorCategory"] = request.monitorCategory();
  }

  if (!!request.hasMonitorConfShrink()) {
    query["MonitorConf"] = request.monitorConfShrink();
  }

  if (!!request.hasMonitorsShrink()) {
    query["Monitors"] = request.monitorsShrink();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasTagsShrink()) {
    query["Tags"] = request.tagsShrink();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.taskType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateTimingSyntheticTask"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTimingSyntheticTaskResponse>();
}

/**
 * @summary Creates a scheduled synthetic test task.
 *
 * @param request CreateTimingSyntheticTaskRequest
 * @return CreateTimingSyntheticTaskResponse
 */
CreateTimingSyntheticTaskResponse Client::createTimingSyntheticTask(const CreateTimingSyntheticTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTimingSyntheticTaskWithOptions(request, runtime);
}

/**
 * @summary Adds a contact for webhook alerts.
 *
 * @param request CreateWebhookRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateWebhookResponse
 */
CreateWebhookResponse Client::createWebhookWithOptions(const CreateWebhookRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBody()) {
    query["Body"] = request.body();
  }

  if (!!request.hasContactName()) {
    query["ContactName"] = request.contactName();
  }

  if (!!request.hasHttpHeaders()) {
    query["HttpHeaders"] = request.httpHeaders();
  }

  if (!!request.hasHttpParams()) {
    query["HttpParams"] = request.httpParams();
  }

  if (!!request.hasMethod()) {
    query["Method"] = request.method();
  }

  if (!!request.hasRecoverBody()) {
    query["RecoverBody"] = request.recoverBody();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasUrl()) {
    query["Url"] = request.url();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateWebhook"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateWebhookResponse>();
}

/**
 * @summary Adds a contact for webhook alerts.
 *
 * @param request CreateWebhookRequest
 * @return CreateWebhookResponse
 */
CreateWebhookResponse Client::createWebhook(const CreateWebhookRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createWebhookWithOptions(request, runtime);
}

/**
 * @summary Disables an authentication token.
 *
 * @param request DelAuthTokenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DelAuthTokenResponse
 */
DelAuthTokenResponse Client::delAuthTokenWithOptions(const DelAuthTokenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DelAuthToken"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DelAuthTokenResponse>();
}

/**
 * @summary Disables an authentication token.
 *
 * @param request DelAuthTokenRequest
 * @return DelAuthTokenResponse
 */
DelAuthTokenResponse Client::delAuthToken(const DelAuthTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return delAuthTokenWithOptions(request, runtime);
}

/**
 * @summary Delete AddonRelease data by AddonRelease name.
 *
 * @param request DeleteAddonReleaseRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAddonReleaseResponse
 */
DeleteAddonReleaseResponse Client::deleteAddonReleaseWithOptions(const DeleteAddonReleaseRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddonName()) {
    query["AddonName"] = request.addonName();
  }

  if (!!request.hasEnvironmentId()) {
    query["EnvironmentId"] = request.environmentId();
  }

  if (!!request.hasForce()) {
    query["Force"] = request.force();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasReleaseName()) {
    query["ReleaseName"] = request.releaseName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAddonRelease"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAddonReleaseResponse>();
}

/**
 * @summary Delete AddonRelease data by AddonRelease name.
 *
 * @param request DeleteAddonReleaseRequest
 * @return DeleteAddonReleaseResponse
 */
DeleteAddonReleaseResponse Client::deleteAddonRelease(const DeleteAddonReleaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAddonReleaseWithOptions(request, runtime);
}

/**
 * @summary Deletes an DeleteAlertContact contact.
 *
 * @description ********
 *
 * @param request DeleteAlertContactRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAlertContactResponse
 */
DeleteAlertContactResponse Client::deleteAlertContactWithOptions(const DeleteAlertContactRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactId()) {
    query["ContactId"] = request.contactId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAlertContact"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAlertContactResponse>();
}

/**
 * @summary Deletes an DeleteAlertContact contact.
 *
 * @description ********
 *
 * @param request DeleteAlertContactRequest
 * @return DeleteAlertContactResponse
 */
DeleteAlertContactResponse Client::deleteAlertContact(const DeleteAlertContactRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAlertContactWithOptions(request, runtime);
}

/**
 * @summary Deletes an DeleteAlertContactGroup contact group.
 *
 * @param request DeleteAlertContactGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAlertContactGroupResponse
 */
DeleteAlertContactGroupResponse Client::deleteAlertContactGroupWithOptions(const DeleteAlertContactGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactGroupId()) {
    query["ContactGroupId"] = request.contactGroupId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAlertContactGroup"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAlertContactGroupResponse>();
}

/**
 * @summary Deletes an DeleteAlertContactGroup contact group.
 *
 * @param request DeleteAlertContactGroupRequest
 * @return DeleteAlertContactGroupResponse
 */
DeleteAlertContactGroupResponse Client::deleteAlertContactGroup(const DeleteAlertContactGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAlertContactGroupWithOptions(request, runtime);
}

/**
 * @summary Deletes an alert rule.
 *
 * @param request DeleteAlertRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAlertRuleResponse
 */
DeleteAlertRuleResponse Client::deleteAlertRuleWithOptions(const DeleteAlertRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlertId()) {
    query["AlertId"] = request.alertId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAlertRule"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAlertRuleResponse>();
}

/**
 * @summary Deletes an alert rule.
 *
 * @param request DeleteAlertRuleRequest
 * @return DeleteAlertRuleResponse
 */
DeleteAlertRuleResponse Client::deleteAlertRule(const DeleteAlertRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAlertRuleWithOptions(request, runtime);
}

/**
 * @summary Deletes alert rules.
 *
 * @description The current operation is no longer maintained. Call the DeleteAlertRule operation of Alert Management (New) to delete alert rules.
 *
 * @param request DeleteAlertRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAlertRulesResponse
 */
DeleteAlertRulesResponse Client::deleteAlertRulesWithOptions(const DeleteAlertRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlertIds()) {
    query["AlertIds"] = request.alertIds();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAlertRules"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAlertRulesResponse>();
}

/**
 * @summary Deletes alert rules.
 *
 * @description The current operation is no longer maintained. Call the DeleteAlertRule operation of Alert Management (New) to delete alert rules.
 *
 * @param request DeleteAlertRulesRequest
 * @return DeleteAlertRulesResponse
 */
DeleteAlertRulesResponse Client::deleteAlertRules(const DeleteAlertRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAlertRulesWithOptions(request, runtime);
}

/**
 * @summary Deletes multiple applications at a time based on the process IDs (PIDs).
 *
 * @param request DeleteAppListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAppListResponse
 */
DeleteAppListResponse Client::deleteAppListWithOptions(const DeleteAppListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPids()) {
    query["Pids"] = request.pids();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAppList"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAppListResponse>();
}

/**
 * @summary Deletes multiple applications at a time based on the process IDs (PIDs).
 *
 * @param request DeleteAppListRequest
 * @return DeleteAppListResponse
 */
DeleteAppListResponse Client::deleteAppList(const DeleteAppListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAppListWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI DeleteCmsExporter is deprecated, please use ARMS::2019-08-08::DeleteAddonRelease instead.
 *
 * @summary Releases a Prometheus instance for Alibaba Cloud services.
 *
 * @param request DeleteCmsExporterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCmsExporterResponse
 */
DeleteCmsExporterResponse Client::deleteCmsExporterWithOptions(const DeleteCmsExporterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCmsExporter"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCmsExporterResponse>();
}

/**
 * @deprecated OpenAPI DeleteCmsExporter is deprecated, please use ARMS::2019-08-08::DeleteAddonRelease instead.
 *
 * @summary Releases a Prometheus instance for Alibaba Cloud services.
 *
 * @param request DeleteCmsExporterRequest
 * @return DeleteCmsExporterResponse
 */
DeleteCmsExporterResponse Client::deleteCmsExporter(const DeleteCmsExporterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCmsExporterWithOptions(request, runtime);
}

/**
 * @summary Deletes alert contacts.
 *
 * @param request DeleteContactRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteContactResponse
 */
DeleteContactResponse Client::deleteContactWithOptions(const DeleteContactRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactId()) {
    query["ContactId"] = request.contactId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteContact"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteContactResponse>();
}

/**
 * @summary Deletes alert contacts.
 *
 * @param request DeleteContactRequest
 * @return DeleteContactResponse
 */
DeleteContactResponse Client::deleteContact(const DeleteContactRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteContactWithOptions(request, runtime);
}

/**
 * @summary Deletes an alert contact group.
 *
 * @param request DeleteContactGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteContactGroupResponse
 */
DeleteContactGroupResponse Client::deleteContactGroupWithOptions(const DeleteContactGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactGroupId()) {
    query["ContactGroupId"] = request.contactGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteContactGroup"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteContactGroupResponse>();
}

/**
 * @summary Deletes an alert contact group.
 *
 * @param request DeleteContactGroupRequest
 * @return DeleteContactGroupResponse
 */
DeleteContactGroupResponse Client::deleteContactGroup(const DeleteContactGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteContactGroupWithOptions(request, runtime);
}

/**
 * @summary Deletes the dispatch policy of a specified ID.
 *
 * @param request DeleteDispatchRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDispatchRuleResponse
 */
DeleteDispatchRuleResponse Client::deleteDispatchRuleWithOptions(const DeleteDispatchRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDispatchRule"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDispatchRuleResponse>();
}

/**
 * @summary Deletes the dispatch policy of a specified ID.
 *
 * @param request DeleteDispatchRuleRequest
 * @return DeleteDispatchRuleResponse
 */
DeleteDispatchRuleResponse Client::deleteDispatchRule(const DeleteDispatchRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDispatchRuleWithOptions(request, runtime);
}

/**
 * @summary Deletes a custom job for an environment.
 *
 * @param request DeleteEnvCustomJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteEnvCustomJobResponse
 */
DeleteEnvCustomJobResponse Client::deleteEnvCustomJobWithOptions(const DeleteEnvCustomJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustomJobName()) {
    query["CustomJobName"] = request.customJobName();
  }

  if (!!request.hasEnvironmentId()) {
    query["EnvironmentId"] = request.environmentId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteEnvCustomJob"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteEnvCustomJobResponse>();
}

/**
 * @summary Deletes a custom job for an environment.
 *
 * @param request DeleteEnvCustomJobRequest
 * @return DeleteEnvCustomJobResponse
 */
DeleteEnvCustomJobResponse Client::deleteEnvCustomJob(const DeleteEnvCustomJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteEnvCustomJobWithOptions(request, runtime);
}

/**
 * @summary Deletes the PodMonitor of an environment.
 *
 * @param request DeleteEnvPodMonitorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteEnvPodMonitorResponse
 */
DeleteEnvPodMonitorResponse Client::deleteEnvPodMonitorWithOptions(const DeleteEnvPodMonitorRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnvironmentId()) {
    query["EnvironmentId"] = request.environmentId();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasPodMonitorName()) {
    query["PodMonitorName"] = request.podMonitorName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteEnvPodMonitor"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteEnvPodMonitorResponse>();
}

/**
 * @summary Deletes the PodMonitor of an environment.
 *
 * @param request DeleteEnvPodMonitorRequest
 * @return DeleteEnvPodMonitorResponse
 */
DeleteEnvPodMonitorResponse Client::deleteEnvPodMonitor(const DeleteEnvPodMonitorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteEnvPodMonitorWithOptions(request, runtime);
}

/**
 * @summary Deletes the ServiceMonitor of an environment.
 *
 * @param request DeleteEnvServiceMonitorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteEnvServiceMonitorResponse
 */
DeleteEnvServiceMonitorResponse Client::deleteEnvServiceMonitorWithOptions(const DeleteEnvServiceMonitorRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnvironmentId()) {
    query["EnvironmentId"] = request.environmentId();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasServiceMonitorName()) {
    query["ServiceMonitorName"] = request.serviceMonitorName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteEnvServiceMonitor"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteEnvServiceMonitorResponse>();
}

/**
 * @summary Deletes the ServiceMonitor of an environment.
 *
 * @param request DeleteEnvServiceMonitorRequest
 * @return DeleteEnvServiceMonitorResponse
 */
DeleteEnvServiceMonitorResponse Client::deleteEnvServiceMonitor(const DeleteEnvServiceMonitorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteEnvServiceMonitorWithOptions(request, runtime);
}

/**
 * @summary Deletes an environment instance.
 *
 * @param request DeleteEnvironmentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteEnvironmentResponse
 */
DeleteEnvironmentResponse Client::deleteEnvironmentWithOptions(const DeleteEnvironmentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeletePromInstance()) {
    query["DeletePromInstance"] = request.deletePromInstance();
  }

  if (!!request.hasEnvironmentId()) {
    query["EnvironmentId"] = request.environmentId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteEnvironment"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteEnvironmentResponse>();
}

/**
 * @summary Deletes an environment instance.
 *
 * @param request DeleteEnvironmentRequest
 * @return DeleteEnvironmentResponse
 */
DeleteEnvironmentResponse Client::deleteEnvironment(const DeleteEnvironmentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteEnvironmentWithOptions(request, runtime);
}

/**
 * @summary Deletes a feature.
 *
 * @param request DeleteEnvironmentFeatureRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteEnvironmentFeatureResponse
 */
DeleteEnvironmentFeatureResponse Client::deleteEnvironmentFeatureWithOptions(const DeleteEnvironmentFeatureRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnvironmentId()) {
    query["EnvironmentId"] = request.environmentId();
  }

  if (!!request.hasFeatureName()) {
    query["FeatureName"] = request.featureName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteEnvironmentFeature"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteEnvironmentFeatureResponse>();
}

/**
 * @summary Deletes a feature.
 *
 * @param request DeleteEnvironmentFeatureRequest
 * @return DeleteEnvironmentFeatureResponse
 */
DeleteEnvironmentFeatureResponse Client::deleteEnvironmentFeature(const DeleteEnvironmentFeatureRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteEnvironmentFeatureWithOptions(request, runtime);
}

/**
 * @summary Deletes an EventBridge integration.
 *
 * @param request DeleteEventBridgeIntegrationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteEventBridgeIntegrationResponse
 */
DeleteEventBridgeIntegrationResponse Client::deleteEventBridgeIntegrationWithOptions(const DeleteEventBridgeIntegrationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.id();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteEventBridgeIntegration"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteEventBridgeIntegrationResponse>();
}

/**
 * @summary Deletes an EventBridge integration.
 *
 * @param request DeleteEventBridgeIntegrationRequest
 * @return DeleteEventBridgeIntegrationResponse
 */
DeleteEventBridgeIntegrationResponse Client::deleteEventBridgeIntegration(const DeleteEventBridgeIntegrationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteEventBridgeIntegrationWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI DeleteGrafanaResource is deprecated
 *
 * @summary Deletes Grafana dashboard resources from a Managed Service for Prometheus instance.
 *
 * @param request DeleteGrafanaResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteGrafanaResourceResponse
 */
DeleteGrafanaResourceResponse Client::deleteGrafanaResourceWithOptions(const DeleteGrafanaResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  json body = {};
  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.clusterId();
  }

  if (!!request.hasClusterName()) {
    body["ClusterName"] = request.clusterName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteGrafanaResource"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteGrafanaResourceResponse>();
}

/**
 * @deprecated OpenAPI DeleteGrafanaResource is deprecated
 *
 * @summary Deletes Grafana dashboard resources from a Managed Service for Prometheus instance.
 *
 * @param request DeleteGrafanaResourceRequest
 * @return DeleteGrafanaResourceResponse
 */
DeleteGrafanaResourceResponse Client::deleteGrafanaResource(const DeleteGrafanaResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteGrafanaResourceWithOptions(request, runtime);
}

/**
 * @summary Deletes a Managed Service for Prometheus workspace.
 *
 * @description *   You can delete workspaces only in Managed Service for Prometheus Beta Edition, which is `free of charge`.
 * *   You cannot delete workspaces in Managed Service for Prometheus Developer Edition, Pro Edition, and Advanced Edition. You can go to the [User Center](https://usercenter2.aliyun.com/refund/refund) to unsubscribe from workspaces.
 *
 * @param request DeleteGrafanaWorkspaceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteGrafanaWorkspaceResponse
 */
DeleteGrafanaWorkspaceResponse Client::deleteGrafanaWorkspaceWithOptions(const DeleteGrafanaWorkspaceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGrafanaWorkspaceId()) {
    query["GrafanaWorkspaceId"] = request.grafanaWorkspaceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteGrafanaWorkspace"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteGrafanaWorkspaceResponse>();
}

/**
 * @summary Deletes a Managed Service for Prometheus workspace.
 *
 * @description *   You can delete workspaces only in Managed Service for Prometheus Beta Edition, which is `free of charge`.
 * *   You cannot delete workspaces in Managed Service for Prometheus Developer Edition, Pro Edition, and Advanced Edition. You can go to the [User Center](https://usercenter2.aliyun.com/refund/refund) to unsubscribe from workspaces.
 *
 * @param request DeleteGrafanaWorkspaceRequest
 * @return DeleteGrafanaWorkspaceResponse
 */
DeleteGrafanaWorkspaceResponse Client::deleteGrafanaWorkspace(const DeleteGrafanaWorkspaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteGrafanaWorkspaceWithOptions(request, runtime);
}

/**
 * @summary Deletes an instant messaging (IM) chatbot.
 *
 * @param request DeleteIMRobotRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteIMRobotResponse
 */
DeleteIMRobotResponse Client::deleteIMRobotWithOptions(const DeleteIMRobotRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRobotId()) {
    query["RobotId"] = request.robotId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteIMRobot"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteIMRobotResponse>();
}

/**
 * @summary Deletes an instant messaging (IM) chatbot.
 *
 * @param request DeleteIMRobotRequest
 * @return DeleteIMRobotResponse
 */
DeleteIMRobotResponse Client::deleteIMRobot(const DeleteIMRobotRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteIMRobotWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI DeleteIntegration is deprecated, please use ARMS::2019-08-08::DeleteAddonRelease instead.
 *
 * @summary Deletes collection rules from an integration.
 *
 * @param request DeleteIntegrationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteIntegrationResponse
 */
DeleteIntegrationResponse Client::deleteIntegrationWithOptions(const DeleteIntegrationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasIntegration()) {
    query["Integration"] = request.integration();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteIntegration"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteIntegrationResponse>();
}

/**
 * @deprecated OpenAPI DeleteIntegration is deprecated, please use ARMS::2019-08-08::DeleteAddonRelease instead.
 *
 * @summary Deletes collection rules from an integration.
 *
 * @param request DeleteIntegrationRequest
 * @return DeleteIntegrationResponse
 */
DeleteIntegrationResponse Client::deleteIntegration(const DeleteIntegrationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteIntegrationWithOptions(request, runtime);
}

/**
 * @summary Deletes an alert integration.
 *
 * @param request DeleteIntegrationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteIntegrationsResponse
 */
DeleteIntegrationsResponse Client::deleteIntegrationsWithOptions(const DeleteIntegrationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteIntegrations"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteIntegrationsResponse>();
}

/**
 * @summary Deletes an alert integration.
 *
 * @param request DeleteIntegrationsRequest
 * @return DeleteIntegrationsResponse
 */
DeleteIntegrationsResponse Client::deleteIntegrations(const DeleteIntegrationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteIntegrationsWithOptions(request, runtime);
}

/**
 * @summary Deletes a notification policy based on its ID.
 *
 * @param request DeleteNotificationPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteNotificationPolicyResponse
 */
DeleteNotificationPolicyResponse Client::deleteNotificationPolicyWithOptions(const DeleteNotificationPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteNotificationPolicy"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteNotificationPolicyResponse>();
}

/**
 * @summary Deletes a notification policy based on its ID.
 *
 * @param request DeleteNotificationPolicyRequest
 * @return DeleteNotificationPolicyResponse
 */
DeleteNotificationPolicyResponse Client::deleteNotificationPolicy(const DeleteNotificationPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteNotificationPolicyWithOptions(request, runtime);
}

/**
 * @summary Deletes an alert rule of Prometheus Service.
 *
 * @param request DeletePrometheusAlertRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePrometheusAlertRuleResponse
 */
DeletePrometheusAlertRuleResponse Client::deletePrometheusAlertRuleWithOptions(const DeletePrometheusAlertRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlertId()) {
    query["AlertId"] = request.alertId();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeletePrometheusAlertRule"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeletePrometheusAlertRuleResponse>();
}

/**
 * @summary Deletes an alert rule of Prometheus Service.
 *
 * @param request DeletePrometheusAlertRuleRequest
 * @return DeletePrometheusAlertRuleResponse
 */
DeletePrometheusAlertRuleResponse Client::deletePrometheusAlertRule(const DeletePrometheusAlertRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deletePrometheusAlertRuleWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI DeletePrometheusGlobalView is deprecated
 *
 * @summary Deletes a global aggregation instance from Prometheus Service.
 *
 * @param request DeletePrometheusGlobalViewRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePrometheusGlobalViewResponse
 */
DeletePrometheusGlobalViewResponse Client::deletePrometheusGlobalViewWithOptions(const DeletePrometheusGlobalViewRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGlobalViewClusterId()) {
    query["GlobalViewClusterId"] = request.globalViewClusterId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeletePrometheusGlobalView"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeletePrometheusGlobalViewResponse>();
}

/**
 * @deprecated OpenAPI DeletePrometheusGlobalView is deprecated
 *
 * @summary Deletes a global aggregation instance from Prometheus Service.
 *
 * @param request DeletePrometheusGlobalViewRequest
 * @return DeletePrometheusGlobalViewResponse
 */
DeletePrometheusGlobalViewResponse Client::deletePrometheusGlobalView(const DeletePrometheusGlobalViewRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deletePrometheusGlobalViewWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI DeletePrometheusIntegration is deprecated
 *
 * @summary Deletes an exporter from a Prometheus instance for Container Service or a Prometheus instance for ECS.
 *
 * @param request DeletePrometheusIntegrationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePrometheusIntegrationResponse
 */
DeletePrometheusIntegrationResponse Client::deletePrometheusIntegrationWithOptions(const DeletePrometheusIntegrationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasIntegrationType()) {
    query["IntegrationType"] = request.integrationType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeletePrometheusIntegration"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeletePrometheusIntegrationResponse>();
}

/**
 * @deprecated OpenAPI DeletePrometheusIntegration is deprecated
 *
 * @summary Deletes an exporter from a Prometheus instance for Container Service or a Prometheus instance for ECS.
 *
 * @param request DeletePrometheusIntegrationRequest
 * @return DeletePrometheusIntegrationResponse
 */
DeletePrometheusIntegrationResponse Client::deletePrometheusIntegration(const DeletePrometheusIntegrationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deletePrometheusIntegrationWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI DeletePrometheusMonitoring is deprecated
 *
 * @summary Deletes the monitoring configuration of a Prometheus instance.
 *
 * @param request DeletePrometheusMonitoringRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePrometheusMonitoringResponse
 */
DeletePrometheusMonitoringResponse Client::deletePrometheusMonitoringWithOptions(const DeletePrometheusMonitoringRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasMonitoringName()) {
    query["MonitoringName"] = request.monitoringName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeletePrometheusMonitoring"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeletePrometheusMonitoringResponse>();
}

/**
 * @deprecated OpenAPI DeletePrometheusMonitoring is deprecated
 *
 * @summary Deletes the monitoring configuration of a Prometheus instance.
 *
 * @param request DeletePrometheusMonitoringRequest
 * @return DeletePrometheusMonitoringResponse
 */
DeletePrometheusMonitoringResponse Client::deletePrometheusMonitoring(const DeletePrometheusMonitoringRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deletePrometheusMonitoringWithOptions(request, runtime);
}

/**
 * @summary Deletes a Browser Monitoring task.
 *
 * @param request DeleteRetcodeAppRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRetcodeAppResponse
 */
DeleteRetcodeAppResponse Client::deleteRetcodeAppWithOptions(const DeleteRetcodeAppRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.appName();
  }

  if (!!request.hasPid()) {
    query["Pid"] = request.pid();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteRetcodeApp"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRetcodeAppResponse>();
}

/**
 * @summary Deletes a Browser Monitoring task.
 *
 * @param request DeleteRetcodeAppRequest
 * @return DeleteRetcodeAppResponse
 */
DeleteRetcodeAppResponse Client::deleteRetcodeApp(const DeleteRetcodeAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteRetcodeAppWithOptions(request, runtime);
}

/**
 * @summary Deletes a RUM application.
 *
 * @param request DeleteRumAppRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRumAppResponse
 */
DeleteRumAppResponse Client::deleteRumAppWithOptions(const DeleteRumAppRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppGroup()) {
    query["AppGroup"] = request.appGroup();
  }

  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasRealRegionId()) {
    query["RealRegionId"] = request.realRegionId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteRumApp"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRumAppResponse>();
}

/**
 * @summary Deletes a RUM application.
 *
 * @param request DeleteRumAppRequest
 * @return DeleteRumAppResponse
 */
DeleteRumAppResponse Client::deleteRumApp(const DeleteRumAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteRumAppWithOptions(request, runtime);
}

/**
 * @summary Deletes a file such as a symbol table or SourceMap.
 *
 * @description Real User Monitoring (RUM) is available only in the China (Hangzhou), Singapore, and US (Silicon Valley) regions. Select the correct endpoint.
 *
 * @param request DeleteRumUploadFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRumUploadFileResponse
 */
DeleteRumUploadFileResponse Client::deleteRumUploadFileWithOptions(const DeleteRumUploadFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBatchItems()) {
    query["BatchItems"] = request.batchItems();
  }

  if (!!request.hasFileName()) {
    query["FileName"] = request.fileName();
  }

  if (!!request.hasPid()) {
    query["Pid"] = request.pid();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasServiceId()) {
    query["ServiceId"] = request.serviceId();
  }

  if (!!request.hasUuid()) {
    query["Uuid"] = request.uuid();
  }

  if (!!request.hasVersionId()) {
    query["VersionId"] = request.versionId();
  }

  if (!!request.hasWorkspace()) {
    query["Workspace"] = request.workspace();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteRumUploadFile"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRumUploadFileResponse>();
}

/**
 * @summary Deletes a file such as a symbol table or SourceMap.
 *
 * @description Real User Monitoring (RUM) is available only in the China (Hangzhou), Singapore, and US (Silicon Valley) regions. Select the correct endpoint.
 *
 * @param request DeleteRumUploadFileRequest
 * @return DeleteRumUploadFileResponse
 */
DeleteRumUploadFileResponse Client::deleteRumUploadFile(const DeleteRumUploadFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteRumUploadFileWithOptions(request, runtime);
}

/**
 * @param request DeleteScenarioRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteScenarioResponse
 */
DeleteScenarioResponse Client::deleteScenarioWithOptions(const DeleteScenarioRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasScenarioId()) {
    query["ScenarioId"] = request.scenarioId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteScenario"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteScenarioResponse>();
}

/**
 * @param request DeleteScenarioRequest
 * @return DeleteScenarioResponse
 */
DeleteScenarioResponse Client::deleteScenario(const DeleteScenarioRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteScenarioWithOptions(request, runtime);
}

/**
 * @summary The ID of the silence policy.
 *
 * @param request DeleteSilencePolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSilencePolicyResponse
 */
DeleteSilencePolicyResponse Client::deleteSilencePolicyWithOptions(const DeleteSilencePolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSilencePolicy"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSilencePolicyResponse>();
}

/**
 * @summary The ID of the silence policy.
 *
 * @param request DeleteSilencePolicyRequest
 * @return DeleteSilencePolicyResponse
 */
DeleteSilencePolicyResponse Client::deleteSilencePolicy(const DeleteSilencePolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSilencePolicyWithOptions(request, runtime);
}

/**
 * @summary Deletes the SourceMap files uploaded in Browser Monitoring.
 *
 * @param tmpReq DeleteSourceMapRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSourceMapResponse
 */
DeleteSourceMapResponse Client::deleteSourceMapWithOptions(const DeleteSourceMapRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteSourceMapShrinkRequest request = DeleteSourceMapShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFidList()) {
    request.setFidListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.fidList(), "FidList", "json"));
  }

  json query = {};
  if (!!request.hasFidListShrink()) {
    query["FidList"] = request.fidListShrink();
  }

  if (!!request.hasPid()) {
    query["Pid"] = request.pid();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSourceMap"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSourceMapResponse>();
}

/**
 * @summary Deletes the SourceMap files uploaded in Browser Monitoring.
 *
 * @param request DeleteSourceMapRequest
 * @return DeleteSourceMapResponse
 */
DeleteSourceMapResponse Client::deleteSourceMap(const DeleteSourceMapRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSourceMapWithOptions(request, runtime);
}

/**
 * @summary Deletes scheduled synthetic monitoring tasks.
 *
 * @param request DeleteSyntheticTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSyntheticTaskResponse
 */
DeleteSyntheticTaskResponse Client::deleteSyntheticTaskWithOptions(const DeleteSyntheticTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasTaskIds()) {
    query["TaskIds"] = request.taskIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSyntheticTask"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSyntheticTaskResponse>();
}

/**
 * @summary Deletes scheduled synthetic monitoring tasks.
 *
 * @param request DeleteSyntheticTaskRequest
 * @return DeleteSyntheticTaskResponse
 */
DeleteSyntheticTaskResponse Client::deleteSyntheticTask(const DeleteSyntheticTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSyntheticTaskWithOptions(request, runtime);
}

/**
 * @summary Deletes a scheduled synthetic monitoring task.
 *
 * @param request DeleteTimingSyntheticTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteTimingSyntheticTaskResponse
 */
DeleteTimingSyntheticTaskResponse Client::deleteTimingSyntheticTaskWithOptions(const DeleteTimingSyntheticTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteTimingSyntheticTask"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteTimingSyntheticTaskResponse>();
}

/**
 * @summary Deletes a scheduled synthetic monitoring task.
 *
 * @param request DeleteTimingSyntheticTaskRequest
 * @return DeleteTimingSyntheticTaskResponse
 */
DeleteTimingSyntheticTaskResponse Client::deleteTimingSyntheticTask(const DeleteTimingSyntheticTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteTimingSyntheticTaskWithOptions(request, runtime);
}

/**
 * @summary Deletes an application based on a specified process identifier (PID) and application type.
 *
 * @param tmpReq DeleteTraceAppRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteTraceAppResponse
 */
DeleteTraceAppResponse Client::deleteTraceAppWithOptions(const DeleteTraceAppRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteTraceAppShrinkRequest request = DeleteTraceAppShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDeleteReason()) {
    request.setDeleteReasonShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.deleteReason(), "DeleteReason", "json"));
  }

  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasDeleteReasonShrink()) {
    query["DeleteReason"] = request.deleteReasonShrink();
  }

  if (!!request.hasPid()) {
    query["Pid"] = request.pid();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteTraceApp"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteTraceAppResponse>();
}

/**
 * @summary Deletes an application based on a specified process identifier (PID) and application type.
 *
 * @param request DeleteTraceAppRequest
 * @return DeleteTraceAppResponse
 */
DeleteTraceAppResponse Client::deleteTraceApp(const DeleteTraceAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteTraceAppWithOptions(request, runtime);
}

/**
 * @summary Deletes a webhook alert contact.
 *
 * @param request DeleteWebhookContactRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteWebhookContactResponse
 */
DeleteWebhookContactResponse Client::deleteWebhookContactWithOptions(const DeleteWebhookContactRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasWebhookId()) {
    query["WebhookId"] = request.webhookId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteWebhookContact"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteWebhookContactResponse>();
}

/**
 * @summary Deletes a webhook alert contact.
 *
 * @param request DeleteWebhookContactRequest
 * @return DeleteWebhookContactResponse
 */
DeleteWebhookContactResponse Client::deleteWebhookContact(const DeleteWebhookContactRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteWebhookContactWithOptions(request, runtime);
}

/**
 * @summary Queries the metric details of a component.
 *
 * @param request DescribeAddonMetricsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAddonMetricsResponse
 */
DescribeAddonMetricsResponse Client::describeAddonMetricsWithOptions(const DescribeAddonMetricsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddonVersion()) {
    query["AddonVersion"] = request.addonVersion();
  }

  if (!!request.hasAliyunLang()) {
    query["AliyunLang"] = request.aliyunLang();
  }

  if (!!request.hasEnvironmentType()) {
    query["EnvironmentType"] = request.environmentType();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAddonMetrics"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAddonMetricsResponse>();
}

/**
 * @summary Queries the metric details of a component.
 *
 * @param request DescribeAddonMetricsRequest
 * @return DescribeAddonMetricsResponse
 */
DescribeAddonMetricsResponse Client::describeAddonMetrics(const DescribeAddonMetricsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAddonMetricsWithOptions(request, runtime);
}

/**
 * @summary Queries the release information of an add-on by name.
 *
 * @param request DescribeAddonReleaseRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAddonReleaseResponse
 */
DescribeAddonReleaseResponse Client::describeAddonReleaseWithOptions(const DescribeAddonReleaseRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnvironmentId()) {
    query["EnvironmentId"] = request.environmentId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasReleaseName()) {
    query["ReleaseName"] = request.releaseName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAddonRelease"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAddonReleaseResponse>();
}

/**
 * @summary Queries the release information of an add-on by name.
 *
 * @param request DescribeAddonReleaseRequest
 * @return DescribeAddonReleaseResponse
 */
DescribeAddonReleaseResponse Client::describeAddonRelease(const DescribeAddonReleaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAddonReleaseWithOptions(request, runtime);
}

/**
 * @summary Queries an alert contact group.
 *
 * @param request DescribeContactGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeContactGroupsResponse
 */
DescribeContactGroupsResponse Client::describeContactGroupsWithOptions(const DescribeContactGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactGroupName()) {
    query["ContactGroupName"] = request.contactGroupName();
  }

  if (!!request.hasGroupIds()) {
    query["GroupIds"] = request.groupIds();
  }

  if (!!request.hasIsDetail()) {
    query["IsDetail"] = request.isDetail();
  }

  if (!!request.hasPage()) {
    query["Page"] = request.page();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSize()) {
    query["Size"] = request.size();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeContactGroups"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeContactGroupsResponse>();
}

/**
 * @summary Queries an alert contact group.
 *
 * @param request DescribeContactGroupsRequest
 * @return DescribeContactGroupsResponse
 */
DescribeContactGroupsResponse Client::describeContactGroups(const DescribeContactGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeContactGroupsWithOptions(request, runtime);
}

/**
 * @summary Queries alert contacts.
 *
 * @param request DescribeContactsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeContactsResponse
 */
DescribeContactsResponse Client::describeContactsWithOptions(const DescribeContactsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactIds()) {
    query["ContactIds"] = request.contactIds();
  }

  if (!!request.hasContactName()) {
    query["ContactName"] = request.contactName();
  }

  if (!!request.hasEmail()) {
    query["Email"] = request.email();
  }

  if (!!request.hasPage()) {
    query["Page"] = request.page();
  }

  if (!!request.hasPhone()) {
    query["Phone"] = request.phone();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSize()) {
    query["Size"] = request.size();
  }

  if (!!request.hasVerbose()) {
    query["Verbose"] = request.verbose();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeContacts"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeContactsResponse>();
}

/**
 * @summary Queries alert contacts.
 *
 * @param request DescribeContactsRequest
 * @return DescribeContactsResponse
 */
DescribeContactsResponse Client::describeContacts(const DescribeContactsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeContactsWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a dispatch policy.
 *
 * @param request DescribeDispatchRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDispatchRuleResponse
 */
DescribeDispatchRuleResponse Client::describeDispatchRuleWithOptions(const DescribeDispatchRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDispatchRule"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDispatchRuleResponse>();
}

/**
 * @summary Queries the information about a dispatch policy.
 *
 * @param request DescribeDispatchRuleRequest
 * @return DescribeDispatchRuleResponse
 */
DescribeDispatchRuleResponse Client::describeDispatchRule(const DescribeDispatchRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDispatchRuleWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a custom job for an environment.
 *
 * @param request DescribeEnvCustomJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEnvCustomJobResponse
 */
DescribeEnvCustomJobResponse Client::describeEnvCustomJobWithOptions(const DescribeEnvCustomJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustomJobName()) {
    query["CustomJobName"] = request.customJobName();
  }

  if (!!request.hasEncryptYaml()) {
    query["EncryptYaml"] = request.encryptYaml();
  }

  if (!!request.hasEnvironmentId()) {
    query["EnvironmentId"] = request.environmentId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeEnvCustomJob"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEnvCustomJobResponse>();
}

/**
 * @summary Queries the details of a custom job for an environment.
 *
 * @param request DescribeEnvCustomJobRequest
 * @return DescribeEnvCustomJobResponse
 */
DescribeEnvCustomJobResponse Client::describeEnvCustomJob(const DescribeEnvCustomJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEnvCustomJobWithOptions(request, runtime);
}

/**
 * @summary 查询指定环境实例的废弃指标列表
 *
 * @param request DescribeEnvDropMetricsRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEnvDropMetricsRuleResponse
 */
DescribeEnvDropMetricsRuleResponse Client::describeEnvDropMetricsRuleWithOptions(const DescribeEnvDropMetricsRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnvironmentId()) {
    query["EnvironmentId"] = request.environmentId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeEnvDropMetricsRule"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEnvDropMetricsRuleResponse>();
}

/**
 * @summary 查询指定环境实例的废弃指标列表
 *
 * @param request DescribeEnvDropMetricsRuleRequest
 * @return DescribeEnvDropMetricsRuleResponse
 */
DescribeEnvDropMetricsRuleResponse Client::describeEnvDropMetricsRule(const DescribeEnvDropMetricsRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEnvDropMetricsRuleWithOptions(request, runtime);
}

/**
 * @summary Queries the PodMonitor details of an environment.
 *
 * @param request DescribeEnvPodMonitorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEnvPodMonitorResponse
 */
DescribeEnvPodMonitorResponse Client::describeEnvPodMonitorWithOptions(const DescribeEnvPodMonitorRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnvironmentId()) {
    query["EnvironmentId"] = request.environmentId();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasPodMonitorName()) {
    query["PodMonitorName"] = request.podMonitorName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeEnvPodMonitor"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEnvPodMonitorResponse>();
}

/**
 * @summary Queries the PodMonitor details of an environment.
 *
 * @param request DescribeEnvPodMonitorRequest
 * @return DescribeEnvPodMonitorResponse
 */
DescribeEnvPodMonitorResponse Client::describeEnvPodMonitor(const DescribeEnvPodMonitorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEnvPodMonitorWithOptions(request, runtime);
}

/**
 * @summary Queries the ServiceMonitor details of an environment.
 *
 * @param request DescribeEnvServiceMonitorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEnvServiceMonitorResponse
 */
DescribeEnvServiceMonitorResponse Client::describeEnvServiceMonitorWithOptions(const DescribeEnvServiceMonitorRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnvironmentId()) {
    query["EnvironmentId"] = request.environmentId();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasServiceMonitorName()) {
    query["ServiceMonitorName"] = request.serviceMonitorName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeEnvServiceMonitor"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEnvServiceMonitorResponse>();
}

/**
 * @summary Queries the ServiceMonitor details of an environment.
 *
 * @param request DescribeEnvServiceMonitorRequest
 * @return DescribeEnvServiceMonitorResponse
 */
DescribeEnvServiceMonitorResponse Client::describeEnvServiceMonitor(const DescribeEnvServiceMonitorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEnvServiceMonitorWithOptions(request, runtime);
}

/**
 * @summary Queries the details of an environment.
 *
 * @param request DescribeEnvironmentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEnvironmentResponse
 */
DescribeEnvironmentResponse Client::describeEnvironmentWithOptions(const DescribeEnvironmentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnvironmentId()) {
    query["EnvironmentId"] = request.environmentId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeEnvironment"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEnvironmentResponse>();
}

/**
 * @summary Queries the details of an environment.
 *
 * @param request DescribeEnvironmentRequest
 * @return DescribeEnvironmentResponse
 */
DescribeEnvironmentResponse Client::describeEnvironment(const DescribeEnvironmentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEnvironmentWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a feature.
 *
 * @param request DescribeEnvironmentFeatureRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEnvironmentFeatureResponse
 */
DescribeEnvironmentFeatureResponse Client::describeEnvironmentFeatureWithOptions(const DescribeEnvironmentFeatureRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAliyunLang()) {
    query["AliyunLang"] = request.aliyunLang();
  }

  if (!!request.hasEnvironmentId()) {
    query["EnvironmentId"] = request.environmentId();
  }

  if (!!request.hasFeatureName()) {
    query["FeatureName"] = request.featureName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeEnvironmentFeature"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEnvironmentFeatureResponse>();
}

/**
 * @summary Queries the details of a feature.
 *
 * @param request DescribeEnvironmentFeatureRequest
 * @return DescribeEnvironmentFeatureResponse
 */
DescribeEnvironmentFeatureResponse Client::describeEnvironmentFeature(const DescribeEnvironmentFeatureRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEnvironmentFeatureWithOptions(request, runtime);
}

/**
 * @summary Queries instant messaging (IM) chatbots.
 *
 * @param request DescribeIMRobotsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeIMRobotsResponse
 */
DescribeIMRobotsResponse Client::describeIMRobotsWithOptions(const DescribeIMRobotsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPage()) {
    query["Page"] = request.page();
  }

  if (!!request.hasRobotIds()) {
    query["RobotIds"] = request.robotIds();
  }

  if (!!request.hasRobotName()) {
    query["RobotName"] = request.robotName();
  }

  if (!!request.hasSize()) {
    query["Size"] = request.size();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeIMRobots"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeIMRobotsResponse>();
}

/**
 * @summary Queries instant messaging (IM) chatbots.
 *
 * @param request DescribeIMRobotsRequest
 * @return DescribeIMRobotsResponse
 */
DescribeIMRobotsResponse Client::describeIMRobots(const DescribeIMRobotsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeIMRobotsWithOptions(request, runtime);
}

/**
 * @summary Queries the details about an alert rule for a Prometheus instance.
 *
 * @param request DescribePrometheusAlertRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePrometheusAlertRuleResponse
 */
DescribePrometheusAlertRuleResponse Client::describePrometheusAlertRuleWithOptions(const DescribePrometheusAlertRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlertId()) {
    query["AlertId"] = request.alertId();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePrometheusAlertRule"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePrometheusAlertRuleResponse>();
}

/**
 * @summary Queries the details about an alert rule for a Prometheus instance.
 *
 * @param request DescribePrometheusAlertRuleRequest
 * @return DescribePrometheusAlertRuleResponse
 */
DescribePrometheusAlertRuleResponse Client::describePrometheusAlertRule(const DescribePrometheusAlertRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePrometheusAlertRuleWithOptions(request, runtime);
}

/**
 * @summary Queries the license key.
 *
 * @param request DescribeTraceLicenseKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTraceLicenseKeyResponse
 */
DescribeTraceLicenseKeyResponse Client::describeTraceLicenseKeyWithOptions(const DescribeTraceLicenseKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTraceLicenseKey"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTraceLicenseKeyResponse>();
}

/**
 * @summary Queries the license key.
 *
 * @param request DescribeTraceLicenseKeyRequest
 * @return DescribeTraceLicenseKeyResponse
 */
DescribeTraceLicenseKeyResponse Client::describeTraceLicenseKey(const DescribeTraceLicenseKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTraceLicenseKeyWithOptions(request, runtime);
}

/**
 * @summary Queries the list of webhook alert contacts.
 *
 * @param request DescribeWebhookContactsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeWebhookContactsResponse
 */
DescribeWebhookContactsResponse Client::describeWebhookContactsWithOptions(const DescribeWebhookContactsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeWebhookContacts"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeWebhookContactsResponse>();
}

/**
 * @summary Queries the list of webhook alert contacts.
 *
 * @param request DescribeWebhookContactsRequest
 * @return DescribeWebhookContactsResponse
 */
DescribeWebhookContactsResponse Client::describeWebhookContacts(const DescribeWebhookContactsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeWebhookContactsWithOptions(request, runtime);
}

/**
 * @summary Performs actions based on the specified module type.
 *
 * @param request DoInsightsActionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DoInsightsActionResponse
 */
DoInsightsActionResponse Client::doInsightsActionWithOptions(const DoInsightsActionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  json body = {};
  if (!!request.hasData()) {
    body["Data"] = request.data();
  }

  if (!!request.hasModule()) {
    body["Module"] = request.module();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DoInsightsAction"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DoInsightsActionResponse>();
}

/**
 * @summary Performs actions based on the specified module type.
 *
 * @param request DoInsightsActionRequest
 * @return DoInsightsActionResponse
 */
DoInsightsActionResponse Client::doInsightsAction(const DoInsightsActionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return doInsightsActionWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI EnableMetric is deprecated
 *
 * @summary Enables a discarded metric.
 *
 * @param request EnableMetricRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableMetricResponse
 */
EnableMetricResponse Client::enableMetricWithOptions(const EnableMetricRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasDropMetric()) {
    query["DropMetric"] = request.dropMetric();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableMetric"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableMetricResponse>();
}

/**
 * @deprecated OpenAPI EnableMetric is deprecated
 *
 * @summary Enables a discarded metric.
 *
 * @param request EnableMetricRequest
 * @return EnableMetricResponse
 */
EnableMetricResponse Client::enableMetric(const EnableMetricRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableMetricWithOptions(request, runtime);
}

/**
 * @summary Obtains the URL for downloading an agent.
 *
 * @param request GetAgentDownloadUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAgentDownloadUrlResponse
 */
GetAgentDownloadUrlResponse Client::getAgentDownloadUrlWithOptions(const GetAgentDownloadUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAgentDownloadUrl"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAgentDownloadUrlResponse>();
}

/**
 * @summary Obtains the URL for downloading an agent.
 *
 * @param request GetAgentDownloadUrlRequest
 * @return GetAgentDownloadUrlResponse
 */
GetAgentDownloadUrlResponse Client::getAgentDownloadUrl(const GetAgentDownloadUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAgentDownloadUrlWithOptions(request, runtime);
}

/**
 * @summary Obtains the URL for downloading an agent.
 *
 * @param request GetAgentDownloadUrlV2Request
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAgentDownloadUrlV2Response
 */
GetAgentDownloadUrlV2Response Client::getAgentDownloadUrlV2WithOptions(const GetAgentDownloadUrlV2Request &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentType()) {
    query["AgentType"] = request.agentType();
  }

  if (!!request.hasArchType()) {
    query["ArchType"] = request.archType();
  }

  if (!!request.hasOsType()) {
    query["OsType"] = request.osType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAgentDownloadUrlV2"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAgentDownloadUrlV2Response>();
}

/**
 * @summary Obtains the URL for downloading an agent.
 *
 * @param request GetAgentDownloadUrlV2Request
 * @return GetAgentDownloadUrlV2Response
 */
GetAgentDownloadUrlV2Response Client::getAgentDownloadUrlV2(const GetAgentDownloadUrlV2Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAgentDownloadUrlV2WithOptions(request, runtime);
}

/**
 * @summary Queries alert rules.
 *
 * @param request GetAlertRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAlertRulesResponse
 */
GetAlertRulesResponse Client::getAlertRulesWithOptions(const GetAlertRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlertIds()) {
    query["AlertIds"] = request.alertIds();
  }

  if (!!request.hasAlertNames()) {
    query["AlertNames"] = request.alertNames();
  }

  if (!!request.hasAlertStatus()) {
    query["AlertStatus"] = request.alertStatus();
  }

  if (!!request.hasAlertType()) {
    query["AlertType"] = request.alertType();
  }

  if (!!request.hasBizRegionId()) {
    query["BizRegionId"] = request.bizRegionId();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasPage()) {
    query["Page"] = request.page();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.productCode();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSize()) {
    query["Size"] = request.size();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.tags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAlertRules"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAlertRulesResponse>();
}

/**
 * @summary Queries alert rules.
 *
 * @param request GetAlertRulesRequest
 * @return GetAlertRulesResponse
 */
GetAlertRulesResponse Client::getAlertRules(const GetAlertRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAlertRulesWithOptions(request, runtime);
}

/**
 * @summary Queries the API operations of application monitoring by page.
 *
 * @param request GetAppApiByPageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAppApiByPageResponse
 */
GetAppApiByPageResponse Client::getAppApiByPageWithOptions(const GetAppApiByPageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasIntervalMills()) {
    query["IntervalMills"] = request.intervalMills();
  }

  if (!!request.hasPId()) {
    query["PId"] = request.PId();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAppApiByPage"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAppApiByPageResponse>();
}

/**
 * @summary Queries the API operations of application monitoring by page.
 *
 * @param request GetAppApiByPageRequest
 * @return GetAppApiByPageResponse
 */
GetAppApiByPageResponse Client::getAppApiByPage(const GetAppApiByPageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAppApiByPageWithOptions(request, runtime);
}

/**
 * @summary Obtain the JVM configuration information of each instance of the application
 *
 * @param request GetAppJVMConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAppJVMConfigResponse
 */
GetAppJVMConfigResponse Client::getAppJVMConfigWithOptions(const GetAppJVMConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAppJVMConfig"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAppJVMConfigResponse>();
}

/**
 * @summary Obtain the JVM configuration information of each instance of the application
 *
 * @param request GetAppJVMConfigRequest
 * @return GetAppJVMConfigResponse
 */
GetAppJVMConfigResponse Client::getAppJVMConfig(const GetAppJVMConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAppJVMConfigWithOptions(request, runtime);
}

/**
 * @summary Obtains an authentication token. When you connect a Container Service for Kubernetes (ACK) cluster to Prometheus Service over the Internet, you must use a token for authentication.
 *
 * @param request GetAuthTokenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAuthTokenResponse
 */
GetAuthTokenResponse Client::getAuthTokenWithOptions(const GetAuthTokenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAuthToken"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAuthTokenResponse>();
}

/**
 * @summary Obtains an authentication token. When you connect a Container Service for Kubernetes (ACK) cluster to Prometheus Service over the Internet, you must use a token for authentication.
 *
 * @param request GetAuthTokenRequest
 * @return GetAuthTokenResponse
 */
GetAuthTokenResponse Client::getAuthToken(const GetAuthTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAuthTokenWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI GetCloudClusterAllUrl is deprecated, please use ARMS::2019-08-08::GetRemoteWriteUrl instead.
 *
 * @summary Queries the read and write URLs of a CloudMonitor instance, such as Pushgateway and Grafana URLs.
 *
 * @param request GetCloudClusterAllUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCloudClusterAllUrlResponse
 */
GetCloudClusterAllUrlResponse Client::getCloudClusterAllUrlWithOptions(const GetCloudClusterAllUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCloudClusterAllUrl"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCloudClusterAllUrlResponse>();
}

/**
 * @deprecated OpenAPI GetCloudClusterAllUrl is deprecated, please use ARMS::2019-08-08::GetRemoteWriteUrl instead.
 *
 * @summary Queries the read and write URLs of a CloudMonitor instance, such as Pushgateway and Grafana URLs.
 *
 * @param request GetCloudClusterAllUrlRequest
 * @return GetCloudClusterAllUrlResponse
 */
GetCloudClusterAllUrlResponse Client::getCloudClusterAllUrl(const GetCloudClusterAllUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCloudClusterAllUrlWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI GetClusterAllUrl is deprecated, please use ARMS::2019-08-08::GetPrometheusInstance instead.
 *
 * @summary Obtains all the URLs of a cluster, including remote read and write URLs, Pushgateway URLs, and Grafana URLs.
 *
 * @param request GetClusterAllUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetClusterAllUrlResponse
 */
GetClusterAllUrlResponse Client::getClusterAllUrlWithOptions(const GetClusterAllUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetClusterAllUrl"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetClusterAllUrlResponse>();
}

/**
 * @deprecated OpenAPI GetClusterAllUrl is deprecated, please use ARMS::2019-08-08::GetPrometheusInstance instead.
 *
 * @summary Obtains all the URLs of a cluster, including remote read and write URLs, Pushgateway URLs, and Grafana URLs.
 *
 * @param request GetClusterAllUrlRequest
 * @return GetClusterAllUrlResponse
 */
GetClusterAllUrlResponse Client::getClusterAllUrl(const GetClusterAllUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getClusterAllUrlWithOptions(request, runtime);
}

/**
 * @summary Queries whether the current account has activated the commercial edition of a service.
 *
 * @param request GetCommercialStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCommercialStatusResponse
 */
GetCommercialStatusResponse Client::getCommercialStatusWithOptions(const GetCommercialStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCommodityCode()) {
    query["CommodityCode"] = request.commodityCode();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCommercialStatus"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCommercialStatusResponse>();
}

/**
 * @summary Queries whether the current account has activated the commercial edition of a service.
 *
 * @param request GetCommercialStatusRequest
 * @return GetCommercialStatusResponse
 */
GetCommercialStatusResponse Client::getCommercialStatus(const GetCommercialStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCommercialStatusWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI GetExploreUrl is deprecated
 *
 * @summary Enables the Explore feature of Grafana.
 *
 * @param request GetExploreUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetExploreUrlResponse
 */
GetExploreUrlResponse Client::getExploreUrlWithOptions(const GetExploreUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasExpression()) {
    query["Expression"] = request.expression();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetExploreUrl"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetExploreUrlResponse>();
}

/**
 * @deprecated OpenAPI GetExploreUrl is deprecated
 *
 * @summary Enables the Explore feature of Grafana.
 *
 * @param request GetExploreUrlRequest
 * @return GetExploreUrlResponse
 */
GetExploreUrlResponse Client::getExploreUrl(const GetExploreUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getExploreUrlWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a Grafana workspace.
 *
 * @description Note: The list returned by this operation includes the workspaces of Developer Edition, Expert Edition, and Advanced Edition. The list does not include the workspaces of Shared Edition.
 *
 * @param request GetGrafanaWorkspaceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetGrafanaWorkspaceResponse
 */
GetGrafanaWorkspaceResponse Client::getGrafanaWorkspaceWithOptions(const GetGrafanaWorkspaceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAliyunLang()) {
    query["AliyunLang"] = request.aliyunLang();
  }

  if (!!request.hasGrafanaWorkspaceId()) {
    query["GrafanaWorkspaceId"] = request.grafanaWorkspaceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetGrafanaWorkspace"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetGrafanaWorkspaceResponse>();
}

/**
 * @summary Queries the information about a Grafana workspace.
 *
 * @description Note: The list returned by this operation includes the workspaces of Developer Edition, Expert Edition, and Advanced Edition. The list does not include the workspaces of Shared Edition.
 *
 * @param request GetGrafanaWorkspaceRequest
 * @return GetGrafanaWorkspaceResponse
 */
GetGrafanaWorkspaceResponse Client::getGrafanaWorkspace(const GetGrafanaWorkspaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getGrafanaWorkspaceWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI GetIntegrationState is deprecated, please use ARMS::2019-08-08::DescribeAddonRelease instead.
 *
 * @summary Queries the integration state of the dashboards and collection rules of Application Real-Time Monitoring Service (ARMS) Prometheus.
 *
 * @param request GetIntegrationStateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetIntegrationStateResponse
 */
GetIntegrationStateResponse Client::getIntegrationStateWithOptions(const GetIntegrationStateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasIntegration()) {
    query["Integration"] = request.integration();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetIntegrationState"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetIntegrationStateResponse>();
}

/**
 * @deprecated OpenAPI GetIntegrationState is deprecated, please use ARMS::2019-08-08::DescribeAddonRelease instead.
 *
 * @summary Queries the integration state of the dashboards and collection rules of Application Real-Time Monitoring Service (ARMS) Prometheus.
 *
 * @param request GetIntegrationStateRequest
 * @return GetIntegrationStateResponse
 */
GetIntegrationStateResponse Client::getIntegrationState(const GetIntegrationStateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getIntegrationStateWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI GetManagedPrometheusStatus is deprecated
 *
 * @summary Queries the installation status of a Prometheus agent in a serverless Kubernetes (ASK) cluster or an Elastic Compute Service (ECS) cluster.
 *
 * @param request GetManagedPrometheusStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetManagedPrometheusStatusResponse
 */
GetManagedPrometheusStatusResponse Client::getManagedPrometheusStatusWithOptions(const GetManagedPrometheusStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasClusterType()) {
    query["ClusterType"] = request.clusterType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.vpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetManagedPrometheusStatus"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetManagedPrometheusStatusResponse>();
}

/**
 * @deprecated OpenAPI GetManagedPrometheusStatus is deprecated
 *
 * @summary Queries the installation status of a Prometheus agent in a serverless Kubernetes (ASK) cluster or an Elastic Compute Service (ECS) cluster.
 *
 * @param request GetManagedPrometheusStatusRequest
 * @return GetManagedPrometheusStatusResponse
 */
GetManagedPrometheusStatusResponse Client::getManagedPrometheusStatus(const GetManagedPrometheusStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getManagedPrometheusStatusWithOptions(request, runtime);
}

/**
 * @summary Queries the details of one or more traces.
 *
 * @param request GetMultipleTraceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMultipleTraceResponse
 */
GetMultipleTraceResponse Client::getMultipleTraceWithOptions(const GetMultipleTraceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasTraceIDs()) {
    query["TraceIDs"] = request.traceIDs();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMultipleTrace"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMultipleTraceResponse>();
}

/**
 * @summary Queries the details of one or more traces.
 *
 * @param request GetMultipleTraceRequest
 * @return GetMultipleTraceResponse
 */
GetMultipleTraceResponse Client::getMultipleTrace(const GetMultipleTraceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMultipleTraceWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a scheduling policy.
 *
 * @param request GetOnCallSchedulesDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetOnCallSchedulesDetailResponse
 */
GetOnCallSchedulesDetailResponse Client::getOnCallSchedulesDetailWithOptions(const GetOnCallSchedulesDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetOnCallSchedulesDetail"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetOnCallSchedulesDetailResponse>();
}

/**
 * @summary Queries the information about a scheduling policy.
 *
 * @param request GetOnCallSchedulesDetailRequest
 * @return GetOnCallSchedulesDetailResponse
 */
GetOnCallSchedulesDetailResponse Client::getOnCallSchedulesDetail(const GetOnCallSchedulesDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getOnCallSchedulesDetailWithOptions(request, runtime);
}

/**
 * @summary Queries the token required for integrating Prometheus Service.
 *
 * @description None.
 *
 * @param request GetPrometheusApiTokenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPrometheusApiTokenResponse
 */
GetPrometheusApiTokenResponse Client::getPrometheusApiTokenWithOptions(const GetPrometheusApiTokenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPrometheusApiToken"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPrometheusApiTokenResponse>();
}

/**
 * @summary Queries the token required for integrating Prometheus Service.
 *
 * @description None.
 *
 * @param request GetPrometheusApiTokenRequest
 * @return GetPrometheusApiTokenResponse
 */
GetPrometheusApiTokenResponse Client::getPrometheusApiToken(const GetPrometheusApiTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPrometheusApiTokenWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a global aggregation instance.
 *
 * @param request GetPrometheusGlobalViewRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPrometheusGlobalViewResponse
 */
GetPrometheusGlobalViewResponse Client::getPrometheusGlobalViewWithOptions(const GetPrometheusGlobalViewRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGlobalViewClusterId()) {
    query["GlobalViewClusterId"] = request.globalViewClusterId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPrometheusGlobalView"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPrometheusGlobalViewResponse>();
}

/**
 * @summary Queries the information about a global aggregation instance.
 *
 * @param request GetPrometheusGlobalViewRequest
 * @return GetPrometheusGlobalViewResponse
 */
GetPrometheusGlobalViewResponse Client::getPrometheusGlobalView(const GetPrometheusGlobalViewRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPrometheusGlobalViewWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a Prometheus instance.
 *
 * @param request GetPrometheusInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPrometheusInstanceResponse
 */
GetPrometheusInstanceResponse Client::getPrometheusInstanceWithOptions(const GetPrometheusInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPrometheusInstance"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPrometheusInstanceResponse>();
}

/**
 * @summary Queries the information about a Prometheus instance.
 *
 * @param request GetPrometheusInstanceRequest
 * @return GetPrometheusInstanceResponse
 */
GetPrometheusInstanceResponse Client::getPrometheusInstance(const GetPrometheusInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPrometheusInstanceWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI GetPrometheusIntegration is deprecated
 *
 * @summary Queries the information about an exporter that is integrated into a Prometheus instance for Container Service or a Prometheus instance for ECS.
 *
 * @param request GetPrometheusIntegrationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPrometheusIntegrationResponse
 */
GetPrometheusIntegrationResponse Client::getPrometheusIntegrationWithOptions(const GetPrometheusIntegrationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasIntegrationType()) {
    query["IntegrationType"] = request.integrationType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPrometheusIntegration"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPrometheusIntegrationResponse>();
}

/**
 * @deprecated OpenAPI GetPrometheusIntegration is deprecated
 *
 * @summary Queries the information about an exporter that is integrated into a Prometheus instance for Container Service or a Prometheus instance for ECS.
 *
 * @param request GetPrometheusIntegrationRequest
 * @return GetPrometheusIntegrationResponse
 */
GetPrometheusIntegrationResponse Client::getPrometheusIntegration(const GetPrometheusIntegrationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPrometheusIntegrationWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI GetPrometheusMonitoring is deprecated
 *
 * @summary Queries the monitoring configuration of a Prometheus instance.
 *
 * @param request GetPrometheusMonitoringRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPrometheusMonitoringResponse
 */
GetPrometheusMonitoringResponse Client::getPrometheusMonitoringWithOptions(const GetPrometheusMonitoringRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasMonitoringName()) {
    query["MonitoringName"] = request.monitoringName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPrometheusMonitoring"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPrometheusMonitoringResponse>();
}

/**
 * @deprecated OpenAPI GetPrometheusMonitoring is deprecated
 *
 * @summary Queries the monitoring configuration of a Prometheus instance.
 *
 * @param request GetPrometheusMonitoringRequest
 * @return GetPrometheusMonitoringResponse
 */
GetPrometheusMonitoringResponse Client::getPrometheusMonitoring(const GetPrometheusMonitoringRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPrometheusMonitoringWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI GetRecordingRule is deprecated
 *
 * @summary Obtains the recording rule of a cluster.
 *
 * @param request GetRecordingRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRecordingRuleResponse
 */
GetRecordingRuleResponse Client::getRecordingRuleWithOptions(const GetRecordingRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRecordingRule"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRecordingRuleResponse>();
}

/**
 * @deprecated OpenAPI GetRecordingRule is deprecated
 *
 * @summary Obtains the recording rule of a cluster.
 *
 * @param request GetRecordingRuleRequest
 * @return GetRecordingRuleResponse
 */
GetRecordingRuleResponse Client::getRecordingRule(const GetRecordingRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRecordingRuleWithOptions(request, runtime);
}

/**
 * @summary Queries the objects of a Browser Monitoring application by process identifier (PID).
 *
 * @param request GetRetcodeAppByPidRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRetcodeAppByPidResponse
 */
GetRetcodeAppByPidResponse Client::getRetcodeAppByPidWithOptions(const GetRetcodeAppByPidRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRetcodeAppByPid"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRetcodeAppByPidResponse>();
}

/**
 * @summary Queries the objects of a Browser Monitoring application by process identifier (PID).
 *
 * @param request GetRetcodeAppByPidRequest
 * @return GetRetcodeAppByPidResponse
 */
GetRetcodeAppByPidResponse Client::getRetcodeAppByPid(const GetRetcodeAppByPidRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRetcodeAppByPidWithOptions(request, runtime);
}

/**
 * @summary Queries the Browser Monitoring data based on a query statement of Log Service.
 *
 * @param request GetRetcodeDataByQueryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRetcodeDataByQueryResponse
 */
GetRetcodeDataByQueryResponse Client::getRetcodeDataByQueryWithOptions(const GetRetcodeDataByQueryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFrom()) {
    query["From"] = request.from();
  }

  if (!!request.hasPid()) {
    query["Pid"] = request.pid();
  }

  if (!!request.hasQuery()) {
    query["Query"] = request.query();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasTo()) {
    query["To"] = request.to();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRetcodeDataByQuery"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRetcodeDataByQueryResponse>();
}

/**
 * @summary Queries the Browser Monitoring data based on a query statement of Log Service.
 *
 * @param request GetRetcodeDataByQueryRequest
 * @return GetRetcodeDataByQueryResponse
 */
GetRetcodeDataByQueryResponse Client::getRetcodeDataByQuery(const GetRetcodeDataByQueryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRetcodeDataByQueryWithOptions(request, runtime);
}

/**
 * @summary Queries the Log Service project and Logstore that correspond to an application of browser monitoring.
 *
 * @param request GetRetcodeLogstoreRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRetcodeLogstoreResponse
 */
GetRetcodeLogstoreResponse Client::getRetcodeLogstoreWithOptions(const GetRetcodeLogstoreRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPid()) {
    query["Pid"] = request.pid();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRetcodeLogstore"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRetcodeLogstoreResponse>();
}

/**
 * @summary Queries the Log Service project and Logstore that correspond to an application of browser monitoring.
 *
 * @param request GetRetcodeLogstoreRequest
 * @return GetRetcodeLogstoreResponse
 */
GetRetcodeLogstoreResponse Client::getRetcodeLogstore(const GetRetcodeLogstoreRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRetcodeLogstoreWithOptions(request, runtime);
}

/**
 * @summary Queries the share URL of an application monitored by Browser Monitoring.
 *
 * @param request GetRetcodeShareUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRetcodeShareUrlResponse
 */
GetRetcodeShareUrlResponse Client::getRetcodeShareUrlWithOptions(const GetRetcodeShareUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPid()) {
    query["Pid"] = request.pid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRetcodeShareUrl"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRetcodeShareUrlResponse>();
}

/**
 * @summary Queries the share URL of an application monitored by Browser Monitoring.
 *
 * @param request GetRetcodeShareUrlRequest
 * @return GetRetcodeShareUrlResponse
 */
GetRetcodeShareUrlResponse Client::getRetcodeShareUrl(const GetRetcodeShareUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRetcodeShareUrlWithOptions(request, runtime);
}

/**
 * @summary Obtains the information about a single application in Browser Monitoring.
 *
 * @description Real User Monitoring (RUM) is available only in the China (Hangzhou), Singapore, and US (Silicon Valley) regions. Select the correct endpoint.
 *
 * @param request GetRumAppInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRumAppInfoResponse
 */
GetRumAppInfoResponse Client::getRumAppInfoWithOptions(const GetRumAppInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppGroup()) {
    query["AppGroup"] = request.appGroup();
  }

  if (!!request.hasPid()) {
    query["Pid"] = request.pid();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRumAppInfo"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRumAppInfoResponse>();
}

/**
 * @summary Obtains the information about a single application in Browser Monitoring.
 *
 * @description Real User Monitoring (RUM) is available only in the China (Hangzhou), Singapore, and US (Silicon Valley) regions. Select the correct endpoint.
 *
 * @param request GetRumAppInfoRequest
 * @return GetRumAppInfoResponse
 */
GetRumAppInfoResponse Client::getRumAppInfo(const GetRumAppInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRumAppInfoWithOptions(request, runtime);
}

/**
 * @summary Queries a list of Real User Monitoring (RUM) applications.
 *
 * @description Real User Monitoring (RUM) is available only in the China (Hangzhou), Singapore, and US (Silicon Valley) regions. Select the correct endpoint.
 *
 * @param tmpReq GetRumAppsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRumAppsResponse
 */
GetRumAppsResponse Client::getRumAppsWithOptions(const GetRumAppsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetRumAppsShrinkRequest request = GetRumAppsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tags(), "Tags", "json"));
  }

  json query = {};
  if (!!request.hasAppGroup()) {
    query["AppGroup"] = request.appGroup();
  }

  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.appName();
  }

  if (!!request.hasAppType()) {
    query["AppType"] = request.appType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasTagsShrink()) {
    query["Tags"] = request.tagsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRumApps"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRumAppsResponse>();
}

/**
 * @summary Queries a list of Real User Monitoring (RUM) applications.
 *
 * @description Real User Monitoring (RUM) is available only in the China (Hangzhou), Singapore, and US (Silicon Valley) regions. Select the correct endpoint.
 *
 * @param request GetRumAppsRequest
 * @return GetRumAppsResponse
 */
GetRumAppsResponse Client::getRumApps(const GetRumAppsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRumAppsWithOptions(request, runtime);
}

/**
 * @summary Queries Real User Monitoring (RUM) data by page.
 *
 * @description Real User Monitoring (RUM) is available only in the China (Hangzhou), Singapore, and US (Silicon Valley) regions. Select the correct endpoint.
 *
 * @param request GetRumDataForPageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRumDataForPageResponse
 */
GetRumDataForPageResponse Client::getRumDataForPageWithOptions(const GetRumDataForPageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppGroup()) {
    query["AppGroup"] = request.appGroup();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasPid()) {
    query["Pid"] = request.pid();
  }

  if (!!request.hasQuery()) {
    query["Query"] = request.query();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRumDataForPage"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRumDataForPageResponse>();
}

/**
 * @summary Queries Real User Monitoring (RUM) data by page.
 *
 * @description Real User Monitoring (RUM) is available only in the China (Hangzhou), Singapore, and US (Silicon Valley) regions. Select the correct endpoint.
 *
 * @param request GetRumDataForPageRequest
 * @return GetRumDataForPageResponse
 */
GetRumDataForPageResponse Client::getRumDataForPage(const GetRumDataForPageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRumDataForPageWithOptions(request, runtime);
}

/**
 * @summary Queries the exception stack information of a Real User Monitoring (RUM) application.
 *
 * @description Real User Monitoring (RUM) is available only in the China (Hangzhou), Singapore, and US (Silicon Valley) regions. Select the correct endpoint.
 *
 * @param request GetRumExceptionStackRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRumExceptionStackResponse
 */
GetRumExceptionStackResponse Client::getRumExceptionStackWithOptions(const GetRumExceptionStackRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasExceptionBinaryImages()) {
    query["ExceptionBinaryImages"] = request.exceptionBinaryImages();
  }

  if (!!request.hasExceptionStack()) {
    query["ExceptionStack"] = request.exceptionStack();
  }

  if (!!request.hasExceptionThreadId()) {
    query["ExceptionThreadId"] = request.exceptionThreadId();
  }

  if (!!request.hasExtraInfo()) {
    query["ExtraInfo"] = request.extraInfo();
  }

  if (!!request.hasPid()) {
    query["Pid"] = request.pid();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasServiceId()) {
    query["ServiceId"] = request.serviceId();
  }

  if (!!request.hasSourcemapType()) {
    query["SourcemapType"] = request.sourcemapType();
  }

  if (!!request.hasWorkspace()) {
    query["Workspace"] = request.workspace();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRumExceptionStack"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRumExceptionStackResponse>();
}

/**
 * @summary Queries the exception stack information of a Real User Monitoring (RUM) application.
 *
 * @description Real User Monitoring (RUM) is available only in the China (Hangzhou), Singapore, and US (Silicon Valley) regions. Select the correct endpoint.
 *
 * @param request GetRumExceptionStackRequest
 * @return GetRumExceptionStackResponse
 */
GetRumExceptionStackResponse Client::getRumExceptionStack(const GetRumExceptionStackRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRumExceptionStackWithOptions(request, runtime);
}

/**
 * @summary Queries the observability capacity unit (OCU) usage data of Real User Monitoring (RUM).
 *
 * @description You can query the usage data for the current day at any time. You can query the usage data for the previous day only after 8:00 today.
 *
 * @param tmpReq GetRumOcuStatisticDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRumOcuStatisticDataResponse
 */
GetRumOcuStatisticDataResponse Client::getRumOcuStatisticDataWithOptions(const GetRumOcuStatisticDataRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetRumOcuStatisticDataShrinkRequest request = GetRumOcuStatisticDataShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFilter()) {
    request.setFilterShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.filter(), "Filter", "json"));
  }

  if (!!tmpReq.hasGroup()) {
    request.setGroupShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.group(), "Group", "json"));
  }

  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRumOcuStatisticData"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRumOcuStatisticDataResponse>();
}

/**
 * @summary Queries the observability capacity unit (OCU) usage data of Real User Monitoring (RUM).
 *
 * @description You can query the usage data for the current day at any time. You can query the usage data for the previous day only after 8:00 today.
 *
 * @param request GetRumOcuStatisticDataRequest
 * @return GetRumOcuStatisticDataResponse
 */
GetRumOcuStatisticDataResponse Client::getRumOcuStatisticData(const GetRumOcuStatisticDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRumOcuStatisticDataWithOptions(request, runtime);
}

/**
 * @summary Queries Real User Monitoring (RUM)-related files, such as symbol tables and SourceMap.
 *
 * @description Real User Monitoring (RUM) is available only in the China (Hangzhou), Singapore, and US (Silicon Valley) regions. Select the correct endpoint.
 *
 * @param request GetRumUploadFilesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRumUploadFilesResponse
 */
GetRumUploadFilesResponse Client::getRumUploadFilesWithOptions(const GetRumUploadFilesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppType()) {
    query["AppType"] = request.appType();
  }

  if (!!request.hasFileName()) {
    query["FileName"] = request.fileName();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasPid()) {
    query["Pid"] = request.pid();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasServiceId()) {
    query["ServiceId"] = request.serviceId();
  }

  if (!!request.hasVersionId()) {
    query["VersionId"] = request.versionId();
  }

  if (!!request.hasWorkspace()) {
    query["Workspace"] = request.workspace();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRumUploadFiles"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRumUploadFilesResponse>();
}

/**
 * @summary Queries Real User Monitoring (RUM)-related files, such as symbol tables and SourceMap.
 *
 * @description Real User Monitoring (RUM) is available only in the China (Hangzhou), Singapore, and US (Silicon Valley) regions. Select the correct endpoint.
 *
 * @param request GetRumUploadFilesRequest
 * @return GetRumUploadFilesResponse
 */
GetRumUploadFilesResponse Client::getRumUploadFiles(const GetRumUploadFilesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRumUploadFilesWithOptions(request, runtime);
}

/**
 * @summary Obtains the details of the SourceMap file uploaded in Browser Monitoring.
 *
 * @param request GetSourceMapInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSourceMapInfoResponse
 */
GetSourceMapInfoResponse Client::getSourceMapInfoWithOptions(const GetSourceMapInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAscendingSequence()) {
    query["AscendingSequence"] = request.ascendingSequence();
  }

  if (!!request.hasEdition()) {
    query["Edition"] = request.edition();
  }

  if (!!request.hasID()) {
    query["ID"] = request.ID();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.keyword();
  }

  if (!!request.hasOrderField()) {
    query["OrderField"] = request.orderField();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSourceMapInfo"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSourceMapInfoResponse>();
}

/**
 * @summary Obtains the details of the SourceMap file uploaded in Browser Monitoring.
 *
 * @param request GetSourceMapInfoRequest
 * @return GetSourceMapInfoResponse
 */
GetSourceMapInfoResponse Client::getSourceMapInfo(const GetSourceMapInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSourceMapInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the information of a method stack.
 *
 * @param request GetStackRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetStackResponse
 */
GetStackResponse Client::getStackWithOptions(const GetStackRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasPid()) {
    query["Pid"] = request.pid();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRpcID()) {
    query["RpcID"] = request.rpcID();
  }

  if (!!request.hasSpanID()) {
    query["SpanID"] = request.spanID();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasTraceID()) {
    query["TraceID"] = request.traceID();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetStack"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetStackResponse>();
}

/**
 * @summary Queries the information of a method stack.
 *
 * @param request GetStackRequest
 * @return GetStackResponse
 */
GetStackResponse Client::getStack(const GetStackRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getStackWithOptions(request, runtime);
}

/**
 * @summary Obtains detection points.
 *
 * @param tmpReq GetSyntheticMonitorsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSyntheticMonitorsResponse
 */
GetSyntheticMonitorsResponse Client::getSyntheticMonitorsWithOptions(const GetSyntheticMonitorsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetSyntheticMonitorsShrinkRequest request = GetSyntheticMonitorsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFilter()) {
    request.setFilterShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.filter(), "Filter", "json"));
  }

  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSyntheticMonitors"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSyntheticMonitorsResponse>();
}

/**
 * @summary Obtains detection points.
 *
 * @param request GetSyntheticMonitorsRequest
 * @return GetSyntheticMonitorsResponse
 */
GetSyntheticMonitorsResponse Client::getSyntheticMonitors(const GetSyntheticMonitorsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSyntheticMonitorsWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a scheduled synthetic monitoring task.
 *
 * @param request GetSyntheticTaskDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSyntheticTaskDetailResponse
 */
GetSyntheticTaskDetailResponse Client::getSyntheticTaskDetailWithOptions(const GetSyntheticTaskDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSyntheticTaskDetail"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSyntheticTaskDetailResponse>();
}

/**
 * @summary Queries the details of a scheduled synthetic monitoring task.
 *
 * @param request GetSyntheticTaskDetailRequest
 * @return GetSyntheticTaskDetailResponse
 */
GetSyntheticTaskDetailResponse Client::getSyntheticTaskDetail(const GetSyntheticTaskDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSyntheticTaskDetailWithOptions(request, runtime);
}

/**
 * @summary Queries a list of scheduled synthetic monitoring tasks.
 *
 * @param request GetSyntheticTaskListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSyntheticTaskListResponse
 */
GetSyntheticTaskListResponse Client::getSyntheticTaskListWithOptions(const GetSyntheticTaskListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirection()) {
    query["Direction"] = request.direction();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.order();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasTaskName()) {
    query["TaskName"] = request.taskName();
  }

  if (!!request.hasTaskStatus()) {
    query["TaskStatus"] = request.taskStatus();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.taskType();
  }

  if (!!request.hasUrl()) {
    query["Url"] = request.url();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSyntheticTaskList"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSyntheticTaskListResponse>();
}

/**
 * @summary Queries a list of scheduled synthetic monitoring tasks.
 *
 * @param request GetSyntheticTaskListRequest
 * @return GetSyntheticTaskListResponse
 */
GetSyntheticTaskListResponse Client::getSyntheticTaskList(const GetSyntheticTaskListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSyntheticTaskListWithOptions(request, runtime);
}

/**
 * @summary Obtains the information about synthetic monitoring points.
 *
 * @param request GetSyntheticTaskMonitorsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSyntheticTaskMonitorsResponse
 */
GetSyntheticTaskMonitorsResponse Client::getSyntheticTaskMonitorsWithOptions(const GetSyntheticTaskMonitorsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSyntheticTaskMonitors"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSyntheticTaskMonitorsResponse>();
}

/**
 * @summary Obtains the information about synthetic monitoring points.
 *
 * @param request GetSyntheticTaskMonitorsRequest
 * @return GetSyntheticTaskMonitorsResponse
 */
GetSyntheticTaskMonitorsResponse Client::getSyntheticTaskMonitors(const GetSyntheticTaskMonitorsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSyntheticTaskMonitorsWithOptions(request, runtime);
}

/**
 * @summary Obtains the details of a synthetic monitoring task.
 *
 * @param request GetTimingSyntheticTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTimingSyntheticTaskResponse
 */
GetTimingSyntheticTaskResponse Client::getTimingSyntheticTaskWithOptions(const GetTimingSyntheticTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTimingSyntheticTask"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTimingSyntheticTaskResponse>();
}

/**
 * @summary Obtains the details of a synthetic monitoring task.
 *
 * @param request GetTimingSyntheticTaskRequest
 * @return GetTimingSyntheticTaskResponse
 */
GetTimingSyntheticTaskResponse Client::getTimingSyntheticTask(const GetTimingSyntheticTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTimingSyntheticTaskWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a trace.
 *
 * @description > You must use Application Real-Time Monitoring Service (ARMS) SDK for Java V2.7.24.
 *
 * @param request GetTraceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTraceResponse
 */
GetTraceResponse Client::getTraceWithOptions(const GetTraceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasTraceID()) {
    query["TraceID"] = request.traceID();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTrace"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTraceResponse>();
}

/**
 * @summary Queries the details of a trace.
 *
 * @description > You must use Application Real-Time Monitoring Service (ARMS) SDK for Java V2.7.24.
 *
 * @param request GetTraceRequest
 * @return GetTraceResponse
 */
GetTraceResponse Client::getTrace(const GetTraceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTraceWithOptions(request, runtime);
}

/**
 * @summary Queries the details of an application monitoring task.
 *
 * @param request GetTraceAppRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTraceAppResponse
 */
GetTraceAppResponse Client::getTraceAppWithOptions(const GetTraceAppRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPid()) {
    query["Pid"] = request.pid();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.tags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTraceApp"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTraceAppResponse>();
}

/**
 * @summary Queries the details of an application monitoring task.
 *
 * @param request GetTraceAppRequest
 * @return GetTraceAppResponse
 */
GetTraceAppResponse Client::getTraceApp(const GetTraceAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTraceAppWithOptions(request, runtime);
}

/**
 * @summary Queries all custom settings of an application monitored by Application Monitoring, such as trace sampling settings and agent switches. This operation is applicable only to applications that are monitored by Application Monitoring. It is not applicable to applications that are monitored by Managed Service for OpenTelemetry.
 *
 * @param request GetTraceAppConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTraceAppConfigResponse
 */
GetTraceAppConfigResponse Client::getTraceAppConfigWithOptions(const GetTraceAppConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPid()) {
    query["Pid"] = request.pid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTraceAppConfig"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTraceAppConfigResponse>();
}

/**
 * @summary Queries all custom settings of an application monitored by Application Monitoring, such as trace sampling settings and agent switches. This operation is applicable only to applications that are monitored by Application Monitoring. It is not applicable to applications that are monitored by Managed Service for OpenTelemetry.
 *
 * @param request GetTraceAppConfigRequest
 * @return GetTraceAppConfigResponse
 */
GetTraceAppConfigResponse Client::getTraceAppConfig(const GetTraceAppConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTraceAppConfigWithOptions(request, runtime);
}

/**
 * @summary Creates an alert rule based on an alert template.
 *
 * @description >  You can call the **ImportAppAlertRules** operation to import only the alert rules that are generated by Application Real-Time Monitoring Service (ARMS) for application monitoring and browser monitoring. This operation cannot be used to import custom alert rules, alert rules for Prometheus monitoring, or default emergency alert rules.
 *
 * @param request ImportAppAlertRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ImportAppAlertRulesResponse
 */
ImportAppAlertRulesResponse Client::importAppAlertRulesWithOptions(const ImportAppAlertRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactGroupIds()) {
    query["ContactGroupIds"] = request.contactGroupIds();
  }

  if (!!request.hasIsAutoStart()) {
    query["IsAutoStart"] = request.isAutoStart();
  }

  if (!!request.hasPids()) {
    query["Pids"] = request.pids();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.tags();
  }

  if (!!request.hasTemplageAlertConfig()) {
    query["TemplageAlertConfig"] = request.templageAlertConfig();
  }

  if (!!request.hasTemplateAlertId()) {
    query["TemplateAlertId"] = request.templateAlertId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ImportAppAlertRules"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ImportAppAlertRulesResponse>();
}

/**
 * @summary Creates an alert rule based on an alert template.
 *
 * @description >  You can call the **ImportAppAlertRules** operation to import only the alert rules that are generated by Application Real-Time Monitoring Service (ARMS) for application monitoring and browser monitoring. This operation cannot be used to import custom alert rules, alert rules for Prometheus monitoring, or default emergency alert rules.
 *
 * @param request ImportAppAlertRulesRequest
 * @return ImportAppAlertRulesResponse
 */
ImportAppAlertRulesResponse Client::importAppAlertRules(const ImportAppAlertRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return importAppAlertRulesWithOptions(request, runtime);
}

/**
 * @summary Initializes an environment instance.
 *
 * @param request InitEnvironmentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return InitEnvironmentResponse
 */
InitEnvironmentResponse Client::initEnvironmentWithOptions(const InitEnvironmentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAliyunLang()) {
    query["AliyunLang"] = request.aliyunLang();
  }

  if (!!request.hasCreateAuthToken()) {
    query["CreateAuthToken"] = request.createAuthToken();
  }

  if (!!request.hasEnvironmentId()) {
    query["EnvironmentId"] = request.environmentId();
  }

  if (!!request.hasManagedType()) {
    query["ManagedType"] = request.managedType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "InitEnvironment"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InitEnvironmentResponse>();
}

/**
 * @summary Initializes an environment instance.
 *
 * @param request InitEnvironmentRequest
 * @return InitEnvironmentResponse
 */
InitEnvironmentResponse Client::initEnvironment(const InitEnvironmentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return initEnvironmentWithOptions(request, runtime);
}

/**
 * @summary Installs an add-on.
 *
 * @param request InstallAddonRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return InstallAddonResponse
 */
InstallAddonResponse Client::installAddonWithOptions(const InstallAddonRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddonVersion()) {
    query["AddonVersion"] = request.addonVersion();
  }

  if (!!request.hasAliyunLang()) {
    query["AliyunLang"] = request.aliyunLang();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasEnvironmentId()) {
    query["EnvironmentId"] = request.environmentId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasReleaseName()) {
    query["ReleaseName"] = request.releaseName();
  }

  if (!!request.hasValues()) {
    query["Values"] = request.values();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "InstallAddon"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InstallAddonResponse>();
}

/**
 * @summary Installs an add-on.
 *
 * @param request InstallAddonRequest
 * @return InstallAddonResponse
 */
InstallAddonResponse Client::installAddon(const InstallAddonRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return installAddonWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI InstallCmsExporter is deprecated, please use ARMS::2019-08-08::InstallAddon instead.
 *
 * @summary Installs the cms-exporter collector.
 *
 * @param request InstallCmsExporterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return InstallCmsExporterResponse
 */
InstallCmsExporterResponse Client::installCmsExporterWithOptions(const InstallCmsExporterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasCmsArgs()) {
    query["CmsArgs"] = request.cmsArgs();
  }

  if (!!request.hasDirectArgs()) {
    query["DirectArgs"] = request.directArgs();
  }

  if (!!request.hasEnableTag()) {
    query["EnableTag"] = request.enableTag();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "InstallCmsExporter"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InstallCmsExporterResponse>();
}

/**
 * @deprecated OpenAPI InstallCmsExporter is deprecated, please use ARMS::2019-08-08::InstallAddon instead.
 *
 * @summary Installs the cms-exporter collector.
 *
 * @param request InstallCmsExporterRequest
 * @return InstallCmsExporterResponse
 */
InstallCmsExporterResponse Client::installCmsExporter(const InstallCmsExporterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return installCmsExporterWithOptions(request, runtime);
}

/**
 * @summary Installs a feature.
 *
 * @param request InstallEnvironmentFeatureRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return InstallEnvironmentFeatureResponse
 */
InstallEnvironmentFeatureResponse Client::installEnvironmentFeatureWithOptions(const InstallEnvironmentFeatureRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAliyunLang()) {
    query["AliyunLang"] = request.aliyunLang();
  }

  if (!!request.hasConfig()) {
    query["Config"] = request.config();
  }

  if (!!request.hasEnvironmentId()) {
    query["EnvironmentId"] = request.environmentId();
  }

  if (!!request.hasFeatureName()) {
    query["FeatureName"] = request.featureName();
  }

  if (!!request.hasFeatureVersion()) {
    query["FeatureVersion"] = request.featureVersion();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.region();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "InstallEnvironmentFeature"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InstallEnvironmentFeatureResponse>();
}

/**
 * @summary Installs a feature.
 *
 * @param request InstallEnvironmentFeatureRequest
 * @return InstallEnvironmentFeatureResponse
 */
InstallEnvironmentFeatureResponse Client::installEnvironmentFeature(const InstallEnvironmentFeatureRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return installEnvironmentFeatureWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI InstallManagedPrometheus is deprecated
 *
 * @summary Installs a Prometheus agent for serverless Kubernetes (ASK) clusters or Elastic Compute Service (ECS) clusters.
 *
 * @description You can call this operation only if the following conditions are met: The resources that you want to monitor are ASK clusters or ECS clusters. No Prometheus agents are installed in the ASK or ECS clusters. Take note that Prometheus agents can be installed only on the cloud service side, not in user clusters.
 *
 * @param request InstallManagedPrometheusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return InstallManagedPrometheusResponse
 */
InstallManagedPrometheusResponse Client::installManagedPrometheusWithOptions(const InstallManagedPrometheusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasClusterName()) {
    query["ClusterName"] = request.clusterName();
  }

  if (!!request.hasClusterType()) {
    query["ClusterType"] = request.clusterType();
  }

  if (!!request.hasGrafanaInstanceId()) {
    query["GrafanaInstanceId"] = request.grafanaInstanceId();
  }

  if (!!request.hasKubeConfig()) {
    query["KubeConfig"] = request.kubeConfig();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSecurityGroupId()) {
    query["SecurityGroupId"] = request.securityGroupId();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.vSwitchId();
  }

  if (!!request.hasVcExtraInfo()) {
    query["VcExtraInfo"] = request.vcExtraInfo();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.vpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "InstallManagedPrometheus"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InstallManagedPrometheusResponse>();
}

/**
 * @deprecated OpenAPI InstallManagedPrometheus is deprecated
 *
 * @summary Installs a Prometheus agent for serverless Kubernetes (ASK) clusters or Elastic Compute Service (ECS) clusters.
 *
 * @description You can call this operation only if the following conditions are met: The resources that you want to monitor are ASK clusters or ECS clusters. No Prometheus agents are installed in the ASK or ECS clusters. Take note that Prometheus agents can be installed only on the cloud service side, not in user clusters.
 *
 * @param request InstallManagedPrometheusRequest
 * @return InstallManagedPrometheusResponse
 */
InstallManagedPrometheusResponse Client::installManagedPrometheus(const InstallManagedPrometheusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return installManagedPrometheusWithOptions(request, runtime);
}

/**
 * @summary Queries the alerts that have been triggered.
 *
 * @param request ListActivatedAlertsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListActivatedAlertsResponse
 */
ListActivatedAlertsResponse Client::listActivatedAlertsWithOptions(const ListActivatedAlertsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasFilter()) {
    query["Filter"] = request.filter();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListActivatedAlerts"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListActivatedAlertsResponse>();
}

/**
 * @summary Queries the alerts that have been triggered.
 *
 * @param request ListActivatedAlertsRequest
 * @return ListActivatedAlertsResponse
 */
ListActivatedAlertsResponse Client::listActivatedAlerts(const ListActivatedAlertsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listActivatedAlertsWithOptions(request, runtime);
}

/**
 * @summary Queries the add-ons installed in an environment.
 *
 * @param request ListAddonReleasesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAddonReleasesResponse
 */
ListAddonReleasesResponse Client::listAddonReleasesWithOptions(const ListAddonReleasesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddonName()) {
    query["AddonName"] = request.addonName();
  }

  if (!!request.hasEnvironmentId()) {
    query["EnvironmentId"] = request.environmentId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAddonReleases"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAddonReleasesResponse>();
}

/**
 * @summary Queries the add-ons installed in an environment.
 *
 * @param request ListAddonReleasesRequest
 * @return ListAddonReleasesResponse
 */
ListAddonReleasesResponse Client::listAddonReleases(const ListAddonReleasesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAddonReleasesWithOptions(request, runtime);
}

/**
 * @summary List of access center products.
 *
 * @param request ListAddonsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAddonsResponse
 */
ListAddonsResponse Client::listAddonsWithOptions(const ListAddonsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAliyunLang()) {
    query["AliyunLang"] = request.aliyunLang();
  }

  if (!!request.hasCategory()) {
    query["Category"] = request.category();
  }

  if (!!request.hasRegexp()) {
    query["Regexp"] = request.regexp();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSearch()) {
    query["Search"] = request.search();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAddons"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAddonsResponse>();
}

/**
 * @summary List of access center products.
 *
 * @param request ListAddonsRequest
 * @return ListAddonsResponse
 */
ListAddonsResponse Client::listAddons(const ListAddonsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAddonsWithOptions(request, runtime);
}

/**
 * @summary Queries historical alert events.
 *
 * @param request ListAlertEventsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAlertEventsResponse
 */
ListAlertEventsResponse Client::listAlertEventsWithOptions(const ListAlertEventsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlertName()) {
    query["AlertName"] = request.alertName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasMatchingConditions()) {
    query["MatchingConditions"] = request.matchingConditions();
  }

  if (!!request.hasPage()) {
    query["Page"] = request.page();
  }

  if (!!request.hasShowNotificationPolicies()) {
    query["ShowNotificationPolicies"] = request.showNotificationPolicies();
  }

  if (!!request.hasSize()) {
    query["Size"] = request.size();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAlertEvents"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAlertEventsResponse>();
}

/**
 * @summary Queries historical alert events.
 *
 * @param request ListAlertEventsRequest
 * @return ListAlertEventsResponse
 */
ListAlertEventsResponse Client::listAlertEvents(const ListAlertEventsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAlertEventsWithOptions(request, runtime);
}

/**
 * @summary Queries the alert sending history.
 *
 * @param request ListAlertsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAlertsResponse
 */
ListAlertsResponse Client::listAlertsWithOptions(const ListAlertsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlertName()) {
    query["AlertName"] = request.alertName();
  }

  if (!!request.hasDispatchRuleId()) {
    query["DispatchRuleId"] = request.dispatchRuleId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasIntegrationType()) {
    query["IntegrationType"] = request.integrationType();
  }

  if (!!request.hasOwner()) {
    query["Owner"] = request.owner();
  }

  if (!!request.hasPage()) {
    query["Page"] = request.page();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSeverity()) {
    query["Severity"] = request.severity();
  }

  if (!!request.hasShowActivities()) {
    query["ShowActivities"] = request.showActivities();
  }

  if (!!request.hasShowEvents()) {
    query["ShowEvents"] = request.showEvents();
  }

  if (!!request.hasSize()) {
    query["Size"] = request.size();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasState()) {
    query["State"] = request.state();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAlerts"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAlertsResponse>();
}

/**
 * @summary Queries the alert sending history.
 *
 * @param request ListAlertsRequest
 * @return ListAlertsResponse
 */
ListAlertsResponse Client::listAlerts(const ListAlertsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAlertsWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI ListClusterFromGrafana is deprecated
 *
 * @summary Queries all Grafana dashboards in a specified region.
 *
 * @param request ListClusterFromGrafanaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListClusterFromGrafanaResponse
 */
ListClusterFromGrafanaResponse Client::listClusterFromGrafanaWithOptions(const ListClusterFromGrafanaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListClusterFromGrafana"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListClusterFromGrafanaResponse>();
}

/**
 * @deprecated OpenAPI ListClusterFromGrafana is deprecated
 *
 * @summary Queries all Grafana dashboards in a specified region.
 *
 * @param request ListClusterFromGrafanaRequest
 * @return ListClusterFromGrafanaResponse
 */
ListClusterFromGrafanaResponse Client::listClusterFromGrafana(const ListClusterFromGrafanaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listClusterFromGrafanaWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI ListCmsInstances is deprecated
 *
 * @summary Queries the collection of cloud services.
 *
 * @param request ListCmsInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCmsInstancesResponse
 */
ListCmsInstancesResponse Client::listCmsInstancesWithOptions(const ListCmsInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasTypeFilter()) {
    query["TypeFilter"] = request.typeFilter();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCmsInstances"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCmsInstancesResponse>();
}

/**
 * @deprecated OpenAPI ListCmsInstances is deprecated
 *
 * @summary Queries the collection of cloud services.
 *
 * @param request ListCmsInstancesRequest
 * @return ListCmsInstancesResponse
 */
ListCmsInstancesResponse Client::listCmsInstances(const ListCmsInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCmsInstancesWithOptions(request, runtime);
}

/**
 * @summary Queries the Grafana dashboards of a Container Service for Kubernetes (ACK) cluster.
 *
 * @description None.
 *
 * @param request ListDashboardsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDashboardsResponse
 */
ListDashboardsResponse Client::listDashboardsWithOptions(const ListDashboardsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasClusterType()) {
    query["ClusterType"] = request.clusterType();
  }

  if (!!request.hasDashboardName()) {
    query["DashboardName"] = request.dashboardName();
  }

  if (!!request.hasLanguage()) {
    query["Language"] = request.language();
  }

  if (!!request.hasProduct()) {
    query["Product"] = request.product();
  }

  if (!!request.hasRecreateSwitch()) {
    query["RecreateSwitch"] = request.recreateSwitch();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasTitle()) {
    query["Title"] = request.title();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDashboards"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDashboardsResponse>();
}

/**
 * @summary Queries the Grafana dashboards of a Container Service for Kubernetes (ACK) cluster.
 *
 * @description None.
 *
 * @param request ListDashboardsRequest
 * @return ListDashboardsResponse
 */
ListDashboardsResponse Client::listDashboards(const ListDashboardsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDashboardsWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI ListDashboardsByName is deprecated
 *
 * @summary Uses Loki data sources and other data sources to create a Grafana dashboard in Managed Service for Prometheus.
 *
 * @param request ListDashboardsByNameRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDashboardsByNameResponse
 */
ListDashboardsByNameResponse Client::listDashboardsByNameWithOptions(const ListDashboardsByNameRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasClusterType()) {
    query["ClusterType"] = request.clusterType();
  }

  if (!!request.hasDashBoardName()) {
    query["DashBoardName"] = request.dashBoardName();
  }

  if (!!request.hasDashBoardVersion()) {
    query["DashBoardVersion"] = request.dashBoardVersion();
  }

  if (!!request.hasDataSourceType()) {
    query["DataSourceType"] = request.dataSourceType();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.groupName();
  }

  if (!!request.hasOnlyQuery()) {
    query["OnlyQuery"] = request.onlyQuery();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.productCode();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDashboardsByName"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDashboardsByNameResponse>();
}

/**
 * @deprecated OpenAPI ListDashboardsByName is deprecated
 *
 * @summary Uses Loki data sources and other data sources to create a Grafana dashboard in Managed Service for Prometheus.
 *
 * @param request ListDashboardsByNameRequest
 * @return ListDashboardsByNameResponse
 */
ListDashboardsByNameResponse Client::listDashboardsByName(const ListDashboardsByNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDashboardsByNameWithOptions(request, runtime);
}

/**
 * @summary Queries notification policies.
 *
 * @description The current API operation is no longer maintained. To query the notification policy information, call the ListNotificationPolicies operation instead.
 *
 * @param request ListDispatchRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDispatchRuleResponse
 */
ListDispatchRuleResponse Client::listDispatchRuleWithOptions(const ListDispatchRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSystem()) {
    query["System"] = request.system();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDispatchRule"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDispatchRuleResponse>();
}

/**
 * @summary Queries notification policies.
 *
 * @description The current API operation is no longer maintained. To query the notification policy information, call the ListNotificationPolicies operation instead.
 *
 * @param request ListDispatchRuleRequest
 * @return ListDispatchRuleResponse
 */
ListDispatchRuleResponse Client::listDispatchRule(const ListDispatchRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDispatchRuleWithOptions(request, runtime);
}

/**
 * @summary Queries the custom jobs of an environment.
 *
 * @param request ListEnvCustomJobsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListEnvCustomJobsResponse
 */
ListEnvCustomJobsResponse Client::listEnvCustomJobsWithOptions(const ListEnvCustomJobsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEncryptYaml()) {
    query["EncryptYaml"] = request.encryptYaml();
  }

  if (!!request.hasEnvironmentId()) {
    query["EnvironmentId"] = request.environmentId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListEnvCustomJobs"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListEnvCustomJobsResponse>();
}

/**
 * @summary Queries the custom jobs of an environment.
 *
 * @param request ListEnvCustomJobsRequest
 * @return ListEnvCustomJobsResponse
 */
ListEnvCustomJobsResponse Client::listEnvCustomJobs(const ListEnvCustomJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listEnvCustomJobsWithOptions(request, runtime);
}

/**
 * @summary Queries the PodMonitors of an environment.
 *
 * @param request ListEnvPodMonitorsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListEnvPodMonitorsResponse
 */
ListEnvPodMonitorsResponse Client::listEnvPodMonitorsWithOptions(const ListEnvPodMonitorsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnvironmentId()) {
    query["EnvironmentId"] = request.environmentId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListEnvPodMonitors"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListEnvPodMonitorsResponse>();
}

/**
 * @summary Queries the PodMonitors of an environment.
 *
 * @param request ListEnvPodMonitorsRequest
 * @return ListEnvPodMonitorsResponse
 */
ListEnvPodMonitorsResponse Client::listEnvPodMonitors(const ListEnvPodMonitorsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listEnvPodMonitorsWithOptions(request, runtime);
}

/**
 * @summary Queries the ServiceMonitors of an environment.
 *
 * @param request ListEnvServiceMonitorsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListEnvServiceMonitorsResponse
 */
ListEnvServiceMonitorsResponse Client::listEnvServiceMonitorsWithOptions(const ListEnvServiceMonitorsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnvironmentId()) {
    query["EnvironmentId"] = request.environmentId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListEnvServiceMonitors"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListEnvServiceMonitorsResponse>();
}

/**
 * @summary Queries the ServiceMonitors of an environment.
 *
 * @param request ListEnvServiceMonitorsRequest
 * @return ListEnvServiceMonitorsResponse
 */
ListEnvServiceMonitorsResponse Client::listEnvServiceMonitors(const ListEnvServiceMonitorsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listEnvServiceMonitorsWithOptions(request, runtime);
}

/**
 * @summary 环境addon列表
 *
 * @param request ListEnvironmentAddonsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListEnvironmentAddonsResponse
 */
ListEnvironmentAddonsResponse Client::listEnvironmentAddonsWithOptions(const ListEnvironmentAddonsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnvironmentId()) {
    query["EnvironmentId"] = request.environmentId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListEnvironmentAddons"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListEnvironmentAddonsResponse>();
}

/**
 * @summary 环境addon列表
 *
 * @param request ListEnvironmentAddonsRequest
 * @return ListEnvironmentAddonsResponse
 */
ListEnvironmentAddonsResponse Client::listEnvironmentAddons(const ListEnvironmentAddonsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listEnvironmentAddonsWithOptions(request, runtime);
}

/**
 * @summary Queries the alert groups of an environment instance.
 *
 * @param request ListEnvironmentAlertRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListEnvironmentAlertRulesResponse
 */
ListEnvironmentAlertRulesResponse Client::listEnvironmentAlertRulesWithOptions(const ListEnvironmentAlertRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddonName()) {
    query["AddonName"] = request.addonName();
  }

  if (!!request.hasEnvironmentId()) {
    query["EnvironmentId"] = request.environmentId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasScene()) {
    query["Scene"] = request.scene();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListEnvironmentAlertRules"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListEnvironmentAlertRulesResponse>();
}

/**
 * @summary Queries the alert groups of an environment instance.
 *
 * @param request ListEnvironmentAlertRulesRequest
 * @return ListEnvironmentAlertRulesResponse
 */
ListEnvironmentAlertRulesResponse Client::listEnvironmentAlertRules(const ListEnvironmentAlertRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listEnvironmentAlertRulesWithOptions(request, runtime);
}

/**
 * @summary Queries information about a dashboard of an environment instance.
 *
 * @param request ListEnvironmentDashboardsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListEnvironmentDashboardsResponse
 */
ListEnvironmentDashboardsResponse Client::listEnvironmentDashboardsWithOptions(const ListEnvironmentDashboardsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddonName()) {
    query["AddonName"] = request.addonName();
  }

  if (!!request.hasEnvironmentId()) {
    query["EnvironmentId"] = request.environmentId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasScene()) {
    query["Scene"] = request.scene();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListEnvironmentDashboards"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListEnvironmentDashboardsResponse>();
}

/**
 * @summary Queries information about a dashboard of an environment instance.
 *
 * @param request ListEnvironmentDashboardsRequest
 * @return ListEnvironmentDashboardsResponse
 */
ListEnvironmentDashboardsResponse Client::listEnvironmentDashboards(const ListEnvironmentDashboardsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listEnvironmentDashboardsWithOptions(request, runtime);
}

/**
 * @summary Queries the features in an environment.
 *
 * @param request ListEnvironmentFeaturesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListEnvironmentFeaturesResponse
 */
ListEnvironmentFeaturesResponse Client::listEnvironmentFeaturesWithOptions(const ListEnvironmentFeaturesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAliyunLang()) {
    query["AliyunLang"] = request.aliyunLang();
  }

  if (!!request.hasEnvironmentId()) {
    query["EnvironmentId"] = request.environmentId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListEnvironmentFeatures"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListEnvironmentFeaturesResponse>();
}

/**
 * @summary Queries the features in an environment.
 *
 * @param request ListEnvironmentFeaturesRequest
 * @return ListEnvironmentFeaturesResponse
 */
ListEnvironmentFeaturesResponse Client::listEnvironmentFeatures(const ListEnvironmentFeaturesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listEnvironmentFeaturesWithOptions(request, runtime);
}

/**
 * @summary Queries the Kubernetes resources of an environment.
 *
 * @param tmpReq ListEnvironmentKubeResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListEnvironmentKubeResourcesResponse
 */
ListEnvironmentKubeResourcesResponse Client::listEnvironmentKubeResourcesWithOptions(const ListEnvironmentKubeResourcesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListEnvironmentKubeResourcesShrinkRequest request = ListEnvironmentKubeResourcesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasLabelSelectors()) {
    request.setLabelSelectorsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.labelSelectors(), "LabelSelectors", "json"));
  }

  json query = {};
  if (!!request.hasEnvironmentId()) {
    query["EnvironmentId"] = request.environmentId();
  }

  if (!!request.hasKind()) {
    query["Kind"] = request.kind();
  }

  if (!!request.hasLabelSelectorsShrink()) {
    query["LabelSelectors"] = request.labelSelectorsShrink();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListEnvironmentKubeResources"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListEnvironmentKubeResourcesResponse>();
}

/**
 * @summary Queries the Kubernetes resources of an environment.
 *
 * @param request ListEnvironmentKubeResourcesRequest
 * @return ListEnvironmentKubeResourcesResponse
 */
ListEnvironmentKubeResourcesResponse Client::listEnvironmentKubeResources(const ListEnvironmentKubeResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listEnvironmentKubeResourcesWithOptions(request, runtime);
}

/**
 * @summary Queries the targets of an environment.
 *
 * @param request ListEnvironmentMetricTargetsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListEnvironmentMetricTargetsResponse
 */
ListEnvironmentMetricTargetsResponse Client::listEnvironmentMetricTargetsWithOptions(const ListEnvironmentMetricTargetsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnvironmentId()) {
    query["EnvironmentId"] = request.environmentId();
  }

  if (!!request.hasJobName()) {
    query["JobName"] = request.jobName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListEnvironmentMetricTargets"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListEnvironmentMetricTargetsResponse>();
}

/**
 * @summary Queries the targets of an environment.
 *
 * @param request ListEnvironmentMetricTargetsRequest
 * @return ListEnvironmentMetricTargetsResponse
 */
ListEnvironmentMetricTargetsResponse Client::listEnvironmentMetricTargets(const ListEnvironmentMetricTargetsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listEnvironmentMetricTargetsWithOptions(request, runtime);
}

/**
 * @summary Queries environments.
 *
 * @param tmpReq ListEnvironmentsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListEnvironmentsResponse
 */
ListEnvironmentsResponse Client::listEnvironmentsWithOptions(const ListEnvironmentsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListEnvironmentsShrinkRequest request = ListEnvironmentsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTag()) {
    request.setTagShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tag(), "Tag", "json"));
  }

  json query = {};
  if (!!request.hasAddonName()) {
    query["AddonName"] = request.addonName();
  }

  if (!!request.hasBindResourceId()) {
    query["BindResourceId"] = request.bindResourceId();
  }

  if (!!request.hasEnvironmentType()) {
    query["EnvironmentType"] = request.environmentType();
  }

  if (!!request.hasFeePackage()) {
    query["FeePackage"] = request.feePackage();
  }

  if (!!request.hasFilterRegionIds()) {
    query["FilterRegionIds"] = request.filterRegionIds();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasTagShrink()) {
    query["Tag"] = request.tagShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListEnvironments"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListEnvironmentsResponse>();
}

/**
 * @summary Queries environments.
 *
 * @param request ListEnvironmentsRequest
 * @return ListEnvironmentsResponse
 */
ListEnvironmentsResponse Client::listEnvironments(const ListEnvironmentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listEnvironmentsWithOptions(request, runtime);
}

/**
 * @summary Queries the information about an escalation policy.
 *
 * @param request ListEscalationPoliciesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListEscalationPoliciesResponse
 */
ListEscalationPoliciesResponse Client::listEscalationPoliciesWithOptions(const ListEscalationPoliciesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListEscalationPolicies"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListEscalationPoliciesResponse>();
}

/**
 * @summary Queries the information about an escalation policy.
 *
 * @param request ListEscalationPoliciesRequest
 * @return ListEscalationPoliciesResponse
 */
ListEscalationPoliciesResponse Client::listEscalationPolicies(const ListEscalationPoliciesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listEscalationPoliciesWithOptions(request, runtime);
}

/**
 * @summary Queries an EventBridge integration.
 *
 * @param request ListEventBridgeIntegrationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListEventBridgeIntegrationsResponse
 */
ListEventBridgeIntegrationsResponse Client::listEventBridgeIntegrationsWithOptions(const ListEventBridgeIntegrationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListEventBridgeIntegrations"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListEventBridgeIntegrationsResponse>();
}

/**
 * @summary Queries an EventBridge integration.
 *
 * @param request ListEventBridgeIntegrationsRequest
 * @return ListEventBridgeIntegrationsResponse
 */
ListEventBridgeIntegrationsResponse Client::listEventBridgeIntegrations(const ListEventBridgeIntegrationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listEventBridgeIntegrationsWithOptions(request, runtime);
}

/**
 * @summary Obtain Specified Workspace List
 *
 * @description >The list returned by this operation includes the workspaces of Developer Edition, Expert Edition, and Advanced Edition. The list does not include the workspaces of Shared Edition.
 *
 * @param tmpReq ListGrafanaWorkspaceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListGrafanaWorkspaceResponse
 */
ListGrafanaWorkspaceResponse Client::listGrafanaWorkspaceWithOptions(const ListGrafanaWorkspaceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListGrafanaWorkspaceShrinkRequest request = ListGrafanaWorkspaceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tags(), "Tags", "json"));
  }

  json query = {};
  if (!!request.hasAliyunLang()) {
    query["AliyunLang"] = request.aliyunLang();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasTagsShrink()) {
    query["Tags"] = request.tagsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListGrafanaWorkspace"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListGrafanaWorkspaceResponse>();
}

/**
 * @summary Obtain Specified Workspace List
 *
 * @description >The list returned by this operation includes the workspaces of Developer Edition, Expert Edition, and Advanced Edition. The list does not include the workspaces of Shared Edition.
 *
 * @param request ListGrafanaWorkspaceRequest
 * @return ListGrafanaWorkspaceResponse
 */
ListGrafanaWorkspaceResponse Client::listGrafanaWorkspace(const ListGrafanaWorkspaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listGrafanaWorkspaceWithOptions(request, runtime);
}

/**
 * @summary Queries the abnormal Insights events within a specified period of time.
 *
 * @param request ListInsightsEventsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInsightsEventsResponse
 */
ListInsightsEventsResponse Client::listInsightsEventsWithOptions(const ListInsightsEventsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInsightsTypes()) {
    query["InsightsTypes"] = request.insightsTypes();
  }

  if (!!request.hasPid()) {
    query["Pid"] = request.pid();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListInsightsEvents"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInsightsEventsResponse>();
}

/**
 * @summary Queries the abnormal Insights events within a specified period of time.
 *
 * @param request ListInsightsEventsRequest
 * @return ListInsightsEventsResponse
 */
ListInsightsEventsResponse Client::listInsightsEvents(const ListInsightsEventsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listInsightsEventsWithOptions(request, runtime);
}

/**
 * @summary Views a list of alert integrations.
 *
 * @param request ListIntegrationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListIntegrationResponse
 */
ListIntegrationResponse Client::listIntegrationWithOptions(const ListIntegrationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListIntegration"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListIntegrationResponse>();
}

/**
 * @summary Views a list of alert integrations.
 *
 * @param request ListIntegrationRequest
 * @return ListIntegrationResponse
 */
ListIntegrationResponse Client::listIntegration(const ListIntegrationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listIntegrationWithOptions(request, runtime);
}

/**
 * @summary Queries notification policies based on specified conditions.
 *
 * @param request ListNotificationPoliciesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListNotificationPoliciesResponse
 */
ListNotificationPoliciesResponse Client::listNotificationPoliciesWithOptions(const ListNotificationPoliciesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirectedMode()) {
    query["DirectedMode"] = request.directedMode();
  }

  if (!!request.hasIds()) {
    query["Ids"] = request.ids();
  }

  if (!!request.hasIsDetail()) {
    query["IsDetail"] = request.isDetail();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasPage()) {
    query["Page"] = request.page();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSize()) {
    query["Size"] = request.size();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListNotificationPolicies"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListNotificationPoliciesResponse>();
}

/**
 * @summary Queries notification policies based on specified conditions.
 *
 * @param request ListNotificationPoliciesRequest
 * @return ListNotificationPoliciesResponse
 */
ListNotificationPoliciesResponse Client::listNotificationPolicies(const ListNotificationPoliciesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listNotificationPoliciesWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a scheduling policy.
 *
 * @param request ListOnCallSchedulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListOnCallSchedulesResponse
 */
ListOnCallSchedulesResponse Client::listOnCallSchedulesWithOptions(const ListOnCallSchedulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListOnCallSchedules"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListOnCallSchedulesResponse>();
}

/**
 * @summary Queries the information about a scheduling policy.
 *
 * @param request ListOnCallSchedulesRequest
 * @return ListOnCallSchedulesResponse
 */
ListOnCallSchedulesResponse Client::listOnCallSchedules(const ListOnCallSchedulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listOnCallSchedulesWithOptions(request, runtime);
}

/**
 * @summary Queries the alert rules created for a Prometheus instance.
 *
 * @param request ListPrometheusAlertRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPrometheusAlertRulesResponse
 */
ListPrometheusAlertRulesResponse Client::listPrometheusAlertRulesWithOptions(const ListPrometheusAlertRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasMatchExpressions()) {
    query["MatchExpressions"] = request.matchExpressions();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.tags();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPrometheusAlertRules"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPrometheusAlertRulesResponse>();
}

/**
 * @summary Queries the alert rules created for a Prometheus instance.
 *
 * @param request ListPrometheusAlertRulesRequest
 * @return ListPrometheusAlertRulesResponse
 */
ListPrometheusAlertRulesResponse Client::listPrometheusAlertRules(const ListPrometheusAlertRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPrometheusAlertRulesWithOptions(request, runtime);
}

/**
 * @summary Queries the alert templates of Prometheus Service.
 *
 * @param request ListPrometheusAlertTemplatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPrometheusAlertTemplatesResponse
 */
ListPrometheusAlertTemplatesResponse Client::listPrometheusAlertTemplatesWithOptions(const ListPrometheusAlertTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPrometheusAlertTemplates"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPrometheusAlertTemplatesResponse>();
}

/**
 * @summary Queries the alert templates of Prometheus Service.
 *
 * @param request ListPrometheusAlertTemplatesRequest
 * @return ListPrometheusAlertTemplatesResponse
 */
ListPrometheusAlertTemplatesResponse Client::listPrometheusAlertTemplates(const ListPrometheusAlertTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPrometheusAlertTemplatesWithOptions(request, runtime);
}

/**
 * @summary Creates a global aggregation instance in Prometheus Service and obtains the list of global aggregation instances.
 *
 * @param request ListPrometheusGlobalViewRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPrometheusGlobalViewResponse
 */
ListPrometheusGlobalViewResponse Client::listPrometheusGlobalViewWithOptions(const ListPrometheusGlobalViewRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPrometheusGlobalView"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPrometheusGlobalViewResponse>();
}

/**
 * @summary Creates a global aggregation instance in Prometheus Service and obtains the list of global aggregation instances.
 *
 * @param request ListPrometheusGlobalViewRequest
 * @return ListPrometheusGlobalViewResponse
 */
ListPrometheusGlobalViewResponse Client::listPrometheusGlobalView(const ListPrometheusGlobalViewRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPrometheusGlobalViewWithOptions(request, runtime);
}

/**
 * @summary Queries Prometheus instances by tag and resource group.
 *
 * @param request ListPrometheusInstanceByTagAndResourceGroupIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPrometheusInstanceByTagAndResourceGroupIdResponse
 */
ListPrometheusInstanceByTagAndResourceGroupIdResponse Client::listPrometheusInstanceByTagAndResourceGroupIdWithOptions(const ListPrometheusInstanceByTagAndResourceGroupIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPrometheusInstanceByTagAndResourceGroupId"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPrometheusInstanceByTagAndResourceGroupIdResponse>();
}

/**
 * @summary Queries Prometheus instances by tag and resource group.
 *
 * @param request ListPrometheusInstanceByTagAndResourceGroupIdRequest
 * @return ListPrometheusInstanceByTagAndResourceGroupIdResponse
 */
ListPrometheusInstanceByTagAndResourceGroupIdResponse Client::listPrometheusInstanceByTagAndResourceGroupId(const ListPrometheusInstanceByTagAndResourceGroupIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPrometheusInstanceByTagAndResourceGroupIdWithOptions(request, runtime);
}

/**
 * @summary Obtains all Prometheus instances in a region.
 *
 * @param request ListPrometheusInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPrometheusInstancesResponse
 */
ListPrometheusInstancesResponse Client::listPrometheusInstancesWithOptions(const ListPrometheusInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterType()) {
    query["ClusterType"] = request.clusterType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasShowGlobalView()) {
    query["ShowGlobalView"] = request.showGlobalView();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPrometheusInstances"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPrometheusInstancesResponse>();
}

/**
 * @summary Obtains all Prometheus instances in a region.
 *
 * @param request ListPrometheusInstancesRequest
 * @return ListPrometheusInstancesResponse
 */
ListPrometheusInstancesResponse Client::listPrometheusInstances(const ListPrometheusInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPrometheusInstancesWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI ListPrometheusIntegration is deprecated
 *
 * @summary Queries a list of exporters that are integrated into a Prometheus instance. Only aliyun-cs and ecs instances are supported.
 *
 * @param request ListPrometheusIntegrationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPrometheusIntegrationResponse
 */
ListPrometheusIntegrationResponse Client::listPrometheusIntegrationWithOptions(const ListPrometheusIntegrationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasIntegrationType()) {
    query["IntegrationType"] = request.integrationType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPrometheusIntegration"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPrometheusIntegrationResponse>();
}

/**
 * @deprecated OpenAPI ListPrometheusIntegration is deprecated
 *
 * @summary Queries a list of exporters that are integrated into a Prometheus instance. Only aliyun-cs and ecs instances are supported.
 *
 * @param request ListPrometheusIntegrationRequest
 * @return ListPrometheusIntegrationResponse
 */
ListPrometheusIntegrationResponse Client::listPrometheusIntegration(const ListPrometheusIntegrationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPrometheusIntegrationWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI ListPrometheusMonitoring is deprecated
 *
 * @summary Queries the monitoring configuration of a Prometheus instance.
 *
 * @param request ListPrometheusMonitoringRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPrometheusMonitoringResponse
 */
ListPrometheusMonitoringResponse Client::listPrometheusMonitoringWithOptions(const ListPrometheusMonitoringRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPrometheusMonitoring"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPrometheusMonitoringResponse>();
}

/**
 * @deprecated OpenAPI ListPrometheusMonitoring is deprecated
 *
 * @summary Queries the monitoring configuration of a Prometheus instance.
 *
 * @param request ListPrometheusMonitoringRequest
 * @return ListPrometheusMonitoringResponse
 */
ListPrometheusMonitoringResponse Client::listPrometheusMonitoring(const ListPrometheusMonitoringRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPrometheusMonitoringWithOptions(request, runtime);
}

/**
 * @summary Queries the Browser Monitoring tasks in a region.
 *
 * @description ****
 *
 * @param request ListRetcodeAppsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRetcodeAppsResponse
 */
ListRetcodeAppsResponse Client::listRetcodeAppsWithOptions(const ListRetcodeAppsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.tags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRetcodeApps"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRetcodeAppsResponse>();
}

/**
 * @summary Queries the Browser Monitoring tasks in a region.
 *
 * @description ****
 *
 * @param request ListRetcodeAppsRequest
 * @return ListRetcodeAppsResponse
 */
ListRetcodeAppsResponse Client::listRetcodeApps(const ListRetcodeAppsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRetcodeAppsWithOptions(request, runtime);
}

/**
 * @param request ListScenarioRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListScenarioResponse
 */
ListScenarioResponse Client::listScenarioWithOptions(const ListScenarioRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasScenario()) {
    query["Scenario"] = request.scenario();
  }

  if (!!request.hasSign()) {
    query["Sign"] = request.sign();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListScenario"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListScenarioResponse>();
}

/**
 * @param request ListScenarioRequest
 * @return ListScenarioResponse
 */
ListScenarioResponse Client::listScenario(const ListScenarioRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listScenarioWithOptions(request, runtime);
}

/**
 * @summary Queries the information of a silence policy list.
 *
 * @param request ListSilencePoliciesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSilencePoliciesResponse
 */
ListSilencePoliciesResponse Client::listSilencePoliciesWithOptions(const ListSilencePoliciesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIsDetail()) {
    query["IsDetail"] = request.isDetail();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasPage()) {
    query["Page"] = request.page();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSize()) {
    query["Size"] = request.size();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSilencePolicies"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSilencePoliciesResponse>();
}

/**
 * @summary Queries the information of a silence policy list.
 *
 * @param request ListSilencePoliciesRequest
 * @return ListSilencePoliciesResponse
 */
ListSilencePoliciesResponse Client::listSilencePolicies(const ListSilencePoliciesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSilencePoliciesWithOptions(request, runtime);
}

/**
 * @summary Obtains the results of one or more synthetic tests.
 *
 * @param tmpReq ListSyntheticDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSyntheticDetailResponse
 */
ListSyntheticDetailResponse Client::listSyntheticDetailWithOptions(const ListSyntheticDetailRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListSyntheticDetailShrinkRequest request = ListSyntheticDetailShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAdvancedFilters()) {
    request.setAdvancedFiltersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.advancedFilters(), "AdvancedFilters", "json"));
  }

  if (!!tmpReq.hasExactFilters()) {
    request.setExactFiltersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.exactFilters(), "ExactFilters", "json"));
  }

  if (!!tmpReq.hasFilters()) {
    request.setFiltersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.filters(), "Filters", "json"));
  }

  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSyntheticDetail"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSyntheticDetailResponse>();
}

/**
 * @summary Obtains the results of one or more synthetic tests.
 *
 * @param request ListSyntheticDetailRequest
 * @return ListSyntheticDetailResponse
 */
ListSyntheticDetailResponse Client::listSyntheticDetail(const ListSyntheticDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSyntheticDetailWithOptions(request, runtime);
}

/**
 * @summary Queries scheduled synthetic monitoring tasks.
 *
 * @param tmpReq ListTimingSyntheticTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTimingSyntheticTasksResponse
 */
ListTimingSyntheticTasksResponse Client::listTimingSyntheticTasksWithOptions(const ListTimingSyntheticTasksRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListTimingSyntheticTasksShrinkRequest request = ListTimingSyntheticTasksShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSearch()) {
    request.setSearchShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.search(), "Search", "json"));
  }

  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tags(), "Tags", "json"));
  }

  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTimingSyntheticTasks"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTimingSyntheticTasksResponse>();
}

/**
 * @summary Queries scheduled synthetic monitoring tasks.
 *
 * @param request ListTimingSyntheticTasksRequest
 * @return ListTimingSyntheticTasksResponse
 */
ListTimingSyntheticTasksResponse Client::listTimingSyntheticTasks(const ListTimingSyntheticTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTimingSyntheticTasksWithOptions(request, runtime);
}

/**
 * @summary Queries all Application Monitoring tasks in a specified region.
 *
 * @param request ListTraceAppsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTraceAppsResponse
 */
ListTraceAppsResponse Client::listTraceAppsWithOptions(const ListTraceAppsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppType()) {
    query["AppType"] = request.appType();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.region();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.tags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTraceApps"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTraceAppsResponse>();
}

/**
 * @summary Queries all Application Monitoring tasks in a specified region.
 *
 * @param request ListTraceAppsRequest
 * @return ListTraceAppsResponse
 */
ListTraceAppsResponse Client::listTraceApps(const ListTraceAppsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTraceAppsWithOptions(request, runtime);
}

/**
 * @summary Activates the service-linked role AliyunServiceRoleForARMS for Application Real-Time Monitoring Service (ARMS).
 *
 * @param request OpenArmsDefaultSLRRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OpenArmsDefaultSLRResponse
 */
OpenArmsDefaultSLRResponse Client::openArmsDefaultSLRWithOptions(const OpenArmsDefaultSLRRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OpenArmsDefaultSLR"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OpenArmsDefaultSLRResponse>();
}

/**
 * @summary Activates the service-linked role AliyunServiceRoleForARMS for Application Real-Time Monitoring Service (ARMS).
 *
 * @param request OpenArmsDefaultSLRRequest
 * @return OpenArmsDefaultSLRResponse
 */
OpenArmsDefaultSLRResponse Client::openArmsDefaultSLR(const OpenArmsDefaultSLRRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return openArmsDefaultSLRWithOptions(request, runtime);
}

/**
 * @summary Activates a specified pay-as-you-go sub-service of Application Real-Time Monitoring Service (ARMS).
 *
 * @description The **OpenArmsServiceSecondVersion** operation supports the following sub-service editions:
 * *   Application Monitoring: Basic Edition
 * *   Browser Monitoring: Basic Edition
 * *   Synthetic Monitoring: Pro Edition (pay-as-you-go)
 * *   Prometheus Service: Pro Edition
 *
 * @param request OpenArmsServiceSecondVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OpenArmsServiceSecondVersionResponse
 */
OpenArmsServiceSecondVersionResponse Client::openArmsServiceSecondVersionWithOptions(const OpenArmsServiceSecondVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OpenArmsServiceSecondVersion"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OpenArmsServiceSecondVersionResponse>();
}

/**
 * @summary Activates a specified pay-as-you-go sub-service of Application Real-Time Monitoring Service (ARMS).
 *
 * @description The **OpenArmsServiceSecondVersion** operation supports the following sub-service editions:
 * *   Application Monitoring: Basic Edition
 * *   Browser Monitoring: Basic Edition
 * *   Synthetic Monitoring: Pro Edition (pay-as-you-go)
 * *   Prometheus Service: Pro Edition
 *
 * @param request OpenArmsServiceSecondVersionRequest
 * @return OpenArmsServiceSecondVersionResponse
 */
OpenArmsServiceSecondVersionResponse Client::openArmsServiceSecondVersion(const OpenArmsServiceSecondVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return openArmsServiceSecondVersionWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI OpenVCluster is deprecated
 *
 * @summary Activates a virtual cluster.
 *
 * @param request OpenVClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OpenVClusterResponse
 */
OpenVClusterResponse Client::openVClusterWithOptions(const OpenVClusterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterType()) {
    query["ClusterType"] = request.clusterType();
  }

  if (!!request.hasLength()) {
    query["Length"] = request.length();
  }

  if (!!request.hasProduct()) {
    query["Product"] = request.product();
  }

  if (!!request.hasRecreateSwitch()) {
    query["RecreateSwitch"] = request.recreateSwitch();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OpenVCluster"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OpenVClusterResponse>();
}

/**
 * @deprecated OpenAPI OpenVCluster is deprecated
 *
 * @summary Activates a virtual cluster.
 *
 * @param request OpenVClusterRequest
 * @return OpenVClusterResponse
 */
OpenVClusterResponse Client::openVCluster(const OpenVClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return openVClusterWithOptions(request, runtime);
}

/**
 * @summary Activates the service-linked role AliyunServiceRoleForXtrace for Tracing Analysis.
 *
 * @param request OpenXtraceDefaultSLRRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OpenXtraceDefaultSLRResponse
 */
OpenXtraceDefaultSLRResponse Client::openXtraceDefaultSLRWithOptions(const OpenXtraceDefaultSLRRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OpenXtraceDefaultSLR"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OpenXtraceDefaultSLRResponse>();
}

/**
 * @summary Activates the service-linked role AliyunServiceRoleForXtrace for Tracing Analysis.
 *
 * @param request OpenXtraceDefaultSLRRequest
 * @return OpenXtraceDefaultSLRResponse
 */
OpenXtraceDefaultSLRResponse Client::openXtraceDefaultSLR(const OpenXtraceDefaultSLRRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return openXtraceDefaultSLRWithOptions(request, runtime);
}

/**
 * @summary Queries the encoding mapping content based on the metadata IDs and metadata type.
 *
 * @param request QueryAppMetadataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryAppMetadataResponse
 */
QueryAppMetadataResponse Client::queryAppMetadataWithOptions(const QueryAppMetadataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryAppMetadata"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryAppMetadataResponse>();
}

/**
 * @summary Queries the encoding mapping content based on the metadata IDs and metadata type.
 *
 * @param request QueryAppMetadataRequest
 * @return QueryAppMetadataResponse
 */
QueryAppMetadataResponse Client::queryAppMetadata(const QueryAppMetadataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryAppMetadataWithOptions(request, runtime);
}

/**
 * @summary Queries the topology of an application.
 *
 * @param tmpReq QueryAppTopologyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryAppTopologyResponse
 */
QueryAppTopologyResponse Client::queryAppTopologyWithOptions(const QueryAppTopologyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  QueryAppTopologyShrinkRequest request = QueryAppTopologyShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFilters()) {
    request.setFiltersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.filters(), "Filters", "json"));
  }

  json query = {};
  if (!!request.hasAppType()) {
    query["AppType"] = request.appType();
  }

  if (!!request.hasDb()) {
    query["Db"] = request.db();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.dbName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasFiltersShrink()) {
    query["Filters"] = request.filtersShrink();
  }

  if (!!request.hasPid()) {
    query["Pid"] = request.pid();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRpc()) {
    query["Rpc"] = request.rpc();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryAppTopology"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryAppTopologyResponse>();
}

/**
 * @summary Queries the topology of an application.
 *
 * @param request QueryAppTopologyRequest
 * @return QueryAppTopologyResponse
 */
QueryAppTopologyResponse Client::queryAppTopology(const QueryAppTopologyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryAppTopologyWithOptions(request, runtime);
}

/**
 * @summary Queries the amount of data written to Application Monitoring, Managed Service for OpenTelemetry, Managed Service for Prometheus, and Real User Monitoring (RUM).
 *
 * @param request QueryCommercialUsageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryCommercialUsageResponse
 */
QueryCommercialUsageResponse Client::queryCommercialUsageWithOptions(const QueryCommercialUsageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAdvancedFilters()) {
    query["AdvancedFilters"] = request.advancedFilters();
  }

  if (!!request.hasDimensions()) {
    query["Dimensions"] = request.dimensions();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasIntervalInSec()) {
    query["IntervalInSec"] = request.intervalInSec();
  }

  if (!!request.hasMeasures()) {
    query["Measures"] = request.measures();
  }

  if (!!request.hasMetric()) {
    query["Metric"] = request.metric();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.order();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.orderBy();
  }

  if (!!request.hasQueryType()) {
    query["QueryType"] = request.queryType();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryCommercialUsage"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryCommercialUsageResponse>();
}

/**
 * @summary Queries the amount of data written to Application Monitoring, Managed Service for OpenTelemetry, Managed Service for Prometheus, and Real User Monitoring (RUM).
 *
 * @param request QueryCommercialUsageRequest
 * @return QueryCommercialUsageResponse
 */
QueryCommercialUsageResponse Client::queryCommercialUsage(const QueryCommercialUsageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryCommercialUsageWithOptions(request, runtime);
}

/**
 * @summary Queries an Application Monitoring metric or a Browser Monitoring metric.
 *
 * @param request QueryMetricByPageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryMetricByPageResponse
 */
QueryMetricByPageResponse Client::queryMetricByPageWithOptions(const QueryMetricByPageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasCustomFilters()) {
    query["CustomFilters"] = request.customFilters();
  }

  if (!!request.hasDimensions()) {
    query["Dimensions"] = request.dimensions();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasFilters()) {
    query["Filters"] = request.filters();
  }

  if (!!request.hasIntervalInSec()) {
    query["IntervalInSec"] = request.intervalInSec();
  }

  if (!!request.hasMeasures()) {
    query["Measures"] = request.measures();
  }

  if (!!request.hasMetric()) {
    query["Metric"] = request.metric();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.order();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.orderBy();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryMetricByPage"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryMetricByPageResponse>();
}

/**
 * @summary Queries an Application Monitoring metric or a Browser Monitoring metric.
 *
 * @param request QueryMetricByPageRequest
 * @return QueryMetricByPageResponse
 */
QueryMetricByPageResponse Client::queryMetricByPage(const QueryMetricByPageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryMetricByPageWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI QueryPromInstallStatus is deprecated
 *
 * @summary Queries whether the Prometheus agent is installed on a cluster.
 *
 * @param request QueryPromInstallStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryPromInstallStatusResponse
 */
QueryPromInstallStatusResponse Client::queryPromInstallStatusWithOptions(const QueryPromInstallStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryPromInstallStatus"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryPromInstallStatusResponse>();
}

/**
 * @deprecated OpenAPI QueryPromInstallStatus is deprecated
 *
 * @summary Queries whether the Prometheus agent is installed on a cluster.
 *
 * @param request QueryPromInstallStatusRequest
 * @return QueryPromInstallStatusResponse
 */
QueryPromInstallStatusResponse Client::queryPromInstallStatus(const QueryPromInstallStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryPromInstallStatusWithOptions(request, runtime);
}

/**
 * @summary Queries the metrics that are provided for different versions of a specified Enterprise Distributed Application Service (EDAS) or Kubernetes application.
 *
 * @param request QueryReleaseMetricRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryReleaseMetricResponse
 */
QueryReleaseMetricResponse Client::queryReleaseMetricWithOptions(const QueryReleaseMetricRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChangeOrderId()) {
    query["ChangeOrderId"] = request.changeOrderId();
  }

  if (!!request.hasCreateTime()) {
    query["CreateTime"] = request.createTime();
  }

  if (!!request.hasMetricType()) {
    query["MetricType"] = request.metricType();
  }

  if (!!request.hasPid()) {
    query["Pid"] = request.pid();
  }

  if (!!request.hasProxyUserId()) {
    query["ProxyUserId"] = request.proxyUserId();
  }

  if (!!request.hasReleaseEndTime()) {
    query["ReleaseEndTime"] = request.releaseEndTime();
  }

  if (!!request.hasReleaseStartTime()) {
    query["ReleaseStartTime"] = request.releaseStartTime();
  }

  if (!!request.hasService()) {
    query["Service"] = request.service();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryReleaseMetric"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryReleaseMetricResponse>();
}

/**
 * @summary Queries the metrics that are provided for different versions of a specified Enterprise Distributed Application Service (EDAS) or Kubernetes application.
 *
 * @param request QueryReleaseMetricRequest
 * @return QueryReleaseMetricResponse
 */
QueryReleaseMetricResponse Client::queryReleaseMetric(const QueryReleaseMetricRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryReleaseMetricWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI RemoveAliClusterIdsFromPrometheusGlobalView is deprecated
 *
 * @summary Removes data sources from a global aggregation instance in Managed Service for Prometheus.
 *
 * @param request RemoveAliClusterIdsFromPrometheusGlobalViewRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveAliClusterIdsFromPrometheusGlobalViewResponse
 */
RemoveAliClusterIdsFromPrometheusGlobalViewResponse Client::removeAliClusterIdsFromPrometheusGlobalViewWithOptions(const RemoveAliClusterIdsFromPrometheusGlobalViewRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterIds()) {
    query["ClusterIds"] = request.clusterIds();
  }

  if (!!request.hasGlobalViewClusterId()) {
    query["GlobalViewClusterId"] = request.globalViewClusterId();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.groupName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveAliClusterIdsFromPrometheusGlobalView"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveAliClusterIdsFromPrometheusGlobalViewResponse>();
}

/**
 * @deprecated OpenAPI RemoveAliClusterIdsFromPrometheusGlobalView is deprecated
 *
 * @summary Removes data sources from a global aggregation instance in Managed Service for Prometheus.
 *
 * @param request RemoveAliClusterIdsFromPrometheusGlobalViewRequest
 * @return RemoveAliClusterIdsFromPrometheusGlobalViewResponse
 */
RemoveAliClusterIdsFromPrometheusGlobalViewResponse Client::removeAliClusterIdsFromPrometheusGlobalView(const RemoveAliClusterIdsFromPrometheusGlobalViewRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeAliClusterIdsFromPrometheusGlobalViewWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI RemoveSourcesFromPrometheusGlobalView is deprecated
 *
 * @summary Removes data sources from a global aggregation instance in Managed Service for Prometheus. You can delete only data sources that are not from Alibaba Cloud.
 *
 * @param request RemoveSourcesFromPrometheusGlobalViewRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveSourcesFromPrometheusGlobalViewResponse
 */
RemoveSourcesFromPrometheusGlobalViewResponse Client::removeSourcesFromPrometheusGlobalViewWithOptions(const RemoveSourcesFromPrometheusGlobalViewRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGlobalViewClusterId()) {
    query["GlobalViewClusterId"] = request.globalViewClusterId();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.groupName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSourceNames()) {
    query["SourceNames"] = request.sourceNames();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveSourcesFromPrometheusGlobalView"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveSourcesFromPrometheusGlobalViewResponse>();
}

/**
 * @deprecated OpenAPI RemoveSourcesFromPrometheusGlobalView is deprecated
 *
 * @summary Removes data sources from a global aggregation instance in Managed Service for Prometheus. You can delete only data sources that are not from Alibaba Cloud.
 *
 * @param request RemoveSourcesFromPrometheusGlobalViewRequest
 * @return RemoveSourcesFromPrometheusGlobalViewResponse
 */
RemoveSourcesFromPrometheusGlobalViewResponse Client::removeSourcesFromPrometheusGlobalView(const RemoveSourcesFromPrometheusGlobalViewRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeSourcesFromPrometheusGlobalViewWithOptions(request, runtime);
}

/**
 * @summary Restarts a feature.
 *
 * @param request RestartEnvironmentFeatureRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RestartEnvironmentFeatureResponse
 */
RestartEnvironmentFeatureResponse Client::restartEnvironmentFeatureWithOptions(const RestartEnvironmentFeatureRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnvironmentId()) {
    query["EnvironmentId"] = request.environmentId();
  }

  if (!!request.hasFeatureName()) {
    query["FeatureName"] = request.featureName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RestartEnvironmentFeature"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RestartEnvironmentFeatureResponse>();
}

/**
 * @summary Restarts a feature.
 *
 * @param request RestartEnvironmentFeatureRequest
 * @return RestartEnvironmentFeatureResponse
 */
RestartEnvironmentFeatureResponse Client::restartEnvironmentFeature(const RestartEnvironmentFeatureRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return restartEnvironmentFeatureWithOptions(request, runtime);
}

/**
 * @summary Modifies the settings of Application Monitoring, such as trace sampling and agent switch settings.
 *
 * @param request SaveTraceAppConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveTraceAppConfigResponse
 */
SaveTraceAppConfigResponse Client::saveTraceAppConfigWithOptions(const SaveTraceAppConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPid()) {
    query["Pid"] = request.pid();
  }

  if (!!request.hasSettings()) {
    query["Settings"] = request.settings();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SaveTraceAppConfig"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveTraceAppConfigResponse>();
}

/**
 * @summary Modifies the settings of Application Monitoring, such as trace sampling and agent switch settings.
 *
 * @param request SaveTraceAppConfigRequest
 * @return SaveTraceAppConfigResponse
 */
SaveTraceAppConfigResponse Client::saveTraceAppConfig(const SaveTraceAppConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveTraceAppConfigWithOptions(request, runtime);
}

/**
 * @summary Queries alert contacts.
 *
 * @description This operation is no longer maintained. To query alert contacts, call the DescribeContacts operation provided by the new version of Alert Management.
 *
 * @param request SearchAlertContactRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchAlertContactResponse
 */
SearchAlertContactResponse Client::searchAlertContactWithOptions(const SearchAlertContactRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactIds()) {
    query["ContactIds"] = request.contactIds();
  }

  if (!!request.hasContactName()) {
    query["ContactName"] = request.contactName();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasEmail()) {
    query["Email"] = request.email();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasPhone()) {
    query["Phone"] = request.phone();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SearchAlertContact"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SearchAlertContactResponse>();
}

/**
 * @summary Queries alert contacts.
 *
 * @description This operation is no longer maintained. To query alert contacts, call the DescribeContacts operation provided by the new version of Alert Management.
 *
 * @param request SearchAlertContactRequest
 * @return SearchAlertContactResponse
 */
SearchAlertContactResponse Client::searchAlertContact(const SearchAlertContactRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return searchAlertContactWithOptions(request, runtime);
}

/**
 * @summary Queries alert contact groups.
 *
 * @description The operation is no longer maintained. Call the DescribeContactGroups operation in the alert management module to query alert contact groups.
 *
 * @param request SearchAlertContactGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchAlertContactGroupResponse
 */
SearchAlertContactGroupResponse Client::searchAlertContactGroupWithOptions(const SearchAlertContactGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactGroupIds()) {
    query["ContactGroupIds"] = request.contactGroupIds();
  }

  if (!!request.hasContactGroupName()) {
    query["ContactGroupName"] = request.contactGroupName();
  }

  if (!!request.hasContactId()) {
    query["ContactId"] = request.contactId();
  }

  if (!!request.hasContactName()) {
    query["ContactName"] = request.contactName();
  }

  if (!!request.hasIsDetail()) {
    query["IsDetail"] = request.isDetail();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SearchAlertContactGroup"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SearchAlertContactGroupResponse>();
}

/**
 * @summary Queries alert contact groups.
 *
 * @description The operation is no longer maintained. Call the DescribeContactGroups operation in the alert management module to query alert contact groups.
 *
 * @param request SearchAlertContactGroupRequest
 * @return SearchAlertContactGroupResponse
 */
SearchAlertContactGroupResponse Client::searchAlertContactGroup(const SearchAlertContactGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return searchAlertContactGroupWithOptions(request, runtime);
}

/**
 * @summary Queries the alert records of an alert rule.
 *
 * @description This operation is no longer maintained. To query alert records, call the ListAlerts operation provided by the new version of Alert Management.
 *
 * @param request SearchAlertHistoriesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchAlertHistoriesResponse
 */
SearchAlertHistoriesResponse Client::searchAlertHistoriesWithOptions(const SearchAlertHistoriesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlertId()) {
    query["AlertId"] = request.alertId();
  }

  if (!!request.hasAlertType()) {
    query["AlertType"] = request.alertType();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SearchAlertHistories"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SearchAlertHistoriesResponse>();
}

/**
 * @summary Queries the alert records of an alert rule.
 *
 * @description This operation is no longer maintained. To query alert records, call the ListAlerts operation provided by the new version of Alert Management.
 *
 * @param request SearchAlertHistoriesRequest
 * @return SearchAlertHistoriesResponse
 */
SearchAlertHistoriesResponse Client::searchAlertHistories(const SearchAlertHistoriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return searchAlertHistoriesWithOptions(request, runtime);
}

/**
 * @summary Queries alert rules.
 *
 * @description The current operation is no longer maintained. You can call the GetAlertRules operation of Alert Management (New) to query existing alert rules.
 *
 * @param request SearchAlertRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchAlertRulesResponse
 */
SearchAlertRulesResponse Client::searchAlertRulesWithOptions(const SearchAlertRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlertRuleId()) {
    query["AlertRuleId"] = request.alertRuleId();
  }

  if (!!request.hasAppType()) {
    query["AppType"] = request.appType();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasPid()) {
    query["Pid"] = request.pid();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSystemRegionId()) {
    query["SystemRegionId"] = request.systemRegionId();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.tags();
  }

  if (!!request.hasTitle()) {
    query["Title"] = request.title();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SearchAlertRules"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SearchAlertRulesResponse>();
}

/**
 * @summary Queries alert rules.
 *
 * @description The current operation is no longer maintained. You can call the GetAlertRules operation of Alert Management (New) to query existing alert rules.
 *
 * @param request SearchAlertRulesRequest
 * @return SearchAlertRulesResponse
 */
SearchAlertRulesResponse Client::searchAlertRules(const SearchAlertRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return searchAlertRulesWithOptions(request, runtime);
}

/**
 * @summary Queries alert event records.
 *
 * @description Alert event records are different from alert notification records. Alert events are recorded every minute after an alert rule filters data. Alert events can be classified based on whether they are triggered or not. If a triggered event is not in the silence period, an alert notification is sent.
 *
 * @param request SearchEventsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchEventsResponse
 */
SearchEventsResponse Client::searchEventsWithOptions(const SearchEventsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlertId()) {
    query["AlertId"] = request.alertId();
  }

  if (!!request.hasAlertType()) {
    query["AlertType"] = request.alertType();
  }

  if (!!request.hasAppType()) {
    query["AppType"] = request.appType();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasIsTrigger()) {
    query["IsTrigger"] = request.isTrigger();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasPid()) {
    query["Pid"] = request.pid();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SearchEvents"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SearchEventsResponse>();
}

/**
 * @summary Queries alert event records.
 *
 * @description Alert event records are different from alert notification records. Alert events are recorded every minute after an alert rule filters data. Alert events can be classified based on whether they are triggered or not. If a triggered event is not in the silence period, an alert notification is sent.
 *
 * @param request SearchEventsRequest
 * @return SearchEventsResponse
 */
SearchEventsResponse Client::searchEvents(const SearchEventsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return searchEventsWithOptions(request, runtime);
}

/**
 * @summary Queries Browser Monitoring tasks by page.
 *
 * @param request SearchRetcodeAppByPageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchRetcodeAppByPageResponse
 */
SearchRetcodeAppByPageResponse Client::searchRetcodeAppByPageWithOptions(const SearchRetcodeAppByPageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasRetcodeAppId()) {
    query["RetcodeAppId"] = request.retcodeAppId();
  }

  if (!!request.hasRetcodeAppName()) {
    query["RetcodeAppName"] = request.retcodeAppName();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.tags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SearchRetcodeAppByPage"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SearchRetcodeAppByPageResponse>();
}

/**
 * @summary Queries Browser Monitoring tasks by page.
 *
 * @param request SearchRetcodeAppByPageRequest
 * @return SearchRetcodeAppByPageResponse
 */
SearchRetcodeAppByPageResponse Client::searchRetcodeAppByPage(const SearchRetcodeAppByPageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return searchRetcodeAppByPageWithOptions(request, runtime);
}

/**
 * @summary Queries Application Monitoring tasks by application name.
 *
 * @param request SearchTraceAppByNameRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchTraceAppByNameResponse
 */
SearchTraceAppByNameResponse Client::searchTraceAppByNameWithOptions(const SearchTraceAppByNameRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.tags();
  }

  if (!!request.hasTraceAppName()) {
    query["TraceAppName"] = request.traceAppName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SearchTraceAppByName"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SearchTraceAppByNameResponse>();
}

/**
 * @summary Queries Application Monitoring tasks by application name.
 *
 * @param request SearchTraceAppByNameRequest
 * @return SearchTraceAppByNameResponse
 */
SearchTraceAppByNameResponse Client::searchTraceAppByName(const SearchTraceAppByNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return searchTraceAppByNameWithOptions(request, runtime);
}

/**
 * @summary Queries application monitoring tasks by page.
 *
 * @param request SearchTraceAppByPageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchTraceAppByPageResponse
 */
SearchTraceAppByPageResponse Client::searchTraceAppByPageWithOptions(const SearchTraceAppByPageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.tags();
  }

  if (!!request.hasTraceAppName()) {
    query["TraceAppName"] = request.traceAppName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SearchTraceAppByPage"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SearchTraceAppByPageResponse>();
}

/**
 * @summary Queries application monitoring tasks by page.
 *
 * @param request SearchTraceAppByPageRequest
 * @return SearchTraceAppByPageResponse
 */
SearchTraceAppByPageResponse Client::searchTraceAppByPage(const SearchTraceAppByPageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return searchTraceAppByPageWithOptions(request, runtime);
}

/**
 * @summary Queries traces by time, application name, IP address, span name, and tag.
 *
 * @description > A maximum of 100 data entries can be returned each time this operation is called. If you want to query all existing traces, we recommend that you call the SearchTracesByPage operation. For more information, see [SearchTracesByPage](https://help.aliyun.com/document_detail/175866.html).
 *
 * @param request SearchTracesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchTracesResponse
 */
SearchTracesResponse Client::searchTracesWithOptions(const SearchTracesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasExclusionFilters()) {
    query["ExclusionFilters"] = request.exclusionFilters();
  }

  if (!!request.hasMinDuration()) {
    query["MinDuration"] = request.minDuration();
  }

  if (!!request.hasOperationName()) {
    query["OperationName"] = request.operationName();
  }

  if (!!request.hasPid()) {
    query["Pid"] = request.pid();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasReverse()) {
    query["Reverse"] = request.reverse();
  }

  if (!!request.hasServiceIp()) {
    query["ServiceIp"] = request.serviceIp();
  }

  if (!!request.hasServiceName()) {
    query["ServiceName"] = request.serviceName();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SearchTraces"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SearchTracesResponse>();
}

/**
 * @summary Queries traces by time, application name, IP address, span name, and tag.
 *
 * @description > A maximum of 100 data entries can be returned each time this operation is called. If you want to query all existing traces, we recommend that you call the SearchTracesByPage operation. For more information, see [SearchTracesByPage](https://help.aliyun.com/document_detail/175866.html).
 *
 * @param request SearchTracesRequest
 * @return SearchTracesResponse
 */
SearchTracesResponse Client::searchTraces(const SearchTracesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return searchTracesWithOptions(request, runtime);
}

/**
 * @summary Queries traces by page. You can query traces by time range, application name, IP address, span name, or tag.
 *
 * @param request SearchTracesByPageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchTracesByPageResponse
 */
SearchTracesByPageResponse Client::searchTracesByPageWithOptions(const SearchTracesByPageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasExclusionFilters()) {
    query["ExclusionFilters"] = request.exclusionFilters();
  }

  if (!!request.hasIsError()) {
    query["IsError"] = request.isError();
  }

  if (!!request.hasMinDuration()) {
    query["MinDuration"] = request.minDuration();
  }

  if (!!request.hasOperationName()) {
    query["OperationName"] = request.operationName();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasPid()) {
    query["Pid"] = request.pid();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasReverse()) {
    query["Reverse"] = request.reverse();
  }

  if (!!request.hasServiceIp()) {
    query["ServiceIp"] = request.serviceIp();
  }

  if (!!request.hasServiceName()) {
    query["ServiceName"] = request.serviceName();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.tags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SearchTracesByPage"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SearchTracesByPageResponse>();
}

/**
 * @summary Queries traces by page. You can query traces by time range, application name, IP address, span name, or tag.
 *
 * @param request SearchTracesByPageRequest
 * @return SearchTracesByPageResponse
 */
SearchTracesByPageResponse Client::searchTracesByPage(const SearchTracesByPageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return searchTracesByPageWithOptions(request, runtime);
}

/**
 * @summary Sends a text message to an alert contact to verify the mobile number of the alert contact.
 *
 * @description After you receive the text message, verify the mobile number as prompted. Before you can specify a mobile phone number in a notification policy, you must verify the mobile phone number.
 *
 * @param request SendTTSVerifyLinkRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SendTTSVerifyLinkResponse
 */
SendTTSVerifyLinkResponse Client::sendTTSVerifyLinkWithOptions(const SendTTSVerifyLinkRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasContactId()) {
    body["ContactId"] = request.contactId();
  }

  if (!!request.hasPhone()) {
    body["Phone"] = request.phone();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "SendTTSVerifyLink"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SendTTSVerifyLinkResponse>();
}

/**
 * @summary Sends a text message to an alert contact to verify the mobile number of the alert contact.
 *
 * @description After you receive the text message, verify the mobile number as prompted. Before you can specify a mobile phone number in a notification policy, you must verify the mobile phone number.
 *
 * @param request SendTTSVerifyLinkRequest
 * @return SendTTSVerifyLinkResponse
 */
SendTTSVerifyLinkResponse Client::sendTTSVerifyLink(const SendTTSVerifyLinkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return sendTTSVerifyLinkWithOptions(request, runtime);
}

/**
 * @summary Turns on or turns off logon-free sharing for an application monitored by Browser Monitoring.
 *
 * @param request SetRetcodeShareStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetRetcodeShareStatusResponse
 */
SetRetcodeShareStatusResponse Client::setRetcodeShareStatusWithOptions(const SetRetcodeShareStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppName()) {
    query["AppName"] = request.appName();
  }

  if (!!request.hasPid()) {
    query["Pid"] = request.pid();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetRetcodeShareStatus"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetRetcodeShareStatusResponse>();
}

/**
 * @summary Turns on or turns off logon-free sharing for an application monitored by Browser Monitoring.
 *
 * @param request SetRetcodeShareStatusRequest
 * @return SetRetcodeShareStatusResponse
 */
SetRetcodeShareStatusResponse Client::setRetcodeShareStatus(const SetRetcodeShareStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setRetcodeShareStatusWithOptions(request, runtime);
}

/**
 * @param request StartAlertRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartAlertResponse
 */
StartAlertResponse Client::startAlertWithOptions(const StartAlertRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlertId()) {
    query["AlertId"] = request.alertId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartAlert"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartAlertResponse>();
}

/**
 * @param request StartAlertRequest
 * @return StartAlertResponse
 */
StartAlertResponse Client::startAlert(const StartAlertRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startAlertWithOptions(request, runtime);
}

/**
 * @summary Starts scheduled synthetic monitoring tasks.
 *
 * @param tmpReq StartTimingSyntheticTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartTimingSyntheticTaskResponse
 */
StartTimingSyntheticTaskResponse Client::startTimingSyntheticTaskWithOptions(const StartTimingSyntheticTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  StartTimingSyntheticTaskShrinkRequest request = StartTimingSyntheticTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTaskIds()) {
    request.setTaskIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.taskIds(), "TaskIds", "json"));
  }

  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasTaskIdsShrink()) {
    query["TaskIds"] = request.taskIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartTimingSyntheticTask"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartTimingSyntheticTaskResponse>();
}

/**
 * @summary Starts scheduled synthetic monitoring tasks.
 *
 * @param request StartTimingSyntheticTaskRequest
 * @return StartTimingSyntheticTaskResponse
 */
StartTimingSyntheticTaskResponse Client::startTimingSyntheticTask(const StartTimingSyntheticTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startTimingSyntheticTaskWithOptions(request, runtime);
}

/**
 * @summary Call StartAlert to stop an alert rule.
 *
 * @param request StopAlertRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopAlertResponse
 */
StopAlertResponse Client::stopAlertWithOptions(const StopAlertRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlertId()) {
    query["AlertId"] = request.alertId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopAlert"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopAlertResponse>();
}

/**
 * @summary Call StartAlert to stop an alert rule.
 *
 * @param request StopAlertRequest
 * @return StopAlertResponse
 */
StopAlertResponse Client::stopAlert(const StopAlertRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopAlertWithOptions(request, runtime);
}

/**
 * @summary Stops scheduled synthetic monitoring tasks.
 *
 * @param tmpReq StopTimingSyntheticTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopTimingSyntheticTaskResponse
 */
StopTimingSyntheticTaskResponse Client::stopTimingSyntheticTaskWithOptions(const StopTimingSyntheticTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  StopTimingSyntheticTaskShrinkRequest request = StopTimingSyntheticTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTaskIds()) {
    request.setTaskIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.taskIds(), "TaskIds", "json"));
  }

  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasTaskIdsShrink()) {
    query["TaskIds"] = request.taskIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopTimingSyntheticTask"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopTimingSyntheticTaskResponse>();
}

/**
 * @summary Stops scheduled synthetic monitoring tasks.
 *
 * @param request StopTimingSyntheticTaskRequest
 * @return StopTimingSyntheticTaskResponse
 */
StopTimingSyntheticTaskResponse Client::stopTimingSyntheticTask(const StopTimingSyntheticTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopTimingSyntheticTaskWithOptions(request, runtime);
}

/**
 * @summary Starts or stops a scheduled synthetic monitoring task.
 *
 * @param request SwitchSyntheticTaskStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SwitchSyntheticTaskStatusResponse
 */
SwitchSyntheticTaskStatusResponse Client::switchSyntheticTaskStatusWithOptions(const SwitchSyntheticTaskStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSwitchStatus()) {
    query["SwitchStatus"] = request.switchStatus();
  }

  if (!!request.hasTaskIds()) {
    query["TaskIds"] = request.taskIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SwitchSyntheticTaskStatus"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SwitchSyntheticTaskStatusResponse>();
}

/**
 * @summary Starts or stops a scheduled synthetic monitoring task.
 *
 * @param request SwitchSyntheticTaskStatusRequest
 * @return SwitchSyntheticTaskStatusResponse
 */
SwitchSyntheticTaskStatusResponse Client::switchSyntheticTaskStatus(const SwitchSyntheticTaskStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return switchSyntheticTaskStatusWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI SyncRecordingRules is deprecated
 *
 * @summary Synchronizes the aggregation rule of a cluster to other clusters in a region.
 *
 * @param request SyncRecordingRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SyncRecordingRulesResponse
 */
SyncRecordingRulesResponse Client::syncRecordingRulesWithOptions(const SyncRecordingRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasTargetClusters()) {
    query["TargetClusters"] = request.targetClusters();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SyncRecordingRules"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SyncRecordingRulesResponse>();
}

/**
 * @deprecated OpenAPI SyncRecordingRules is deprecated
 *
 * @summary Synchronizes the aggregation rule of a cluster to other clusters in a region.
 *
 * @param request SyncRecordingRulesRequest
 * @return SyncRecordingRulesResponse
 */
SyncRecordingRulesResponse Client::syncRecordingRules(const SyncRecordingRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return syncRecordingRulesWithOptions(request, runtime);
}

/**
 * @summary Adds tags to ARMS resources.
 *
 * @param request TagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResourcesWithOptions(const TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TagResources"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TagResourcesResponse>();
}

/**
 * @summary Adds tags to ARMS resources.
 *
 * @param request TagResourcesRequest
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResources(const TagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tagResourcesWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI UninstallManagedPrometheus is deprecated
 *
 * @summary Uninstalls a managed Prometheus agent for a serverless Kubernetes (ASK) cluster, Distributed Cloud Container Platform for Kubernetes (ACK One) cluster, or Elastic Compute Service (ECS) cluster.
 *
 * @description This operation is available only for ASK, ECS, and ACK One clusters. Before you call this operation, make sure that a managed Prometheus agent is installed for your cluster.
 *
 * @param request UninstallManagedPrometheusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UninstallManagedPrometheusResponse
 */
UninstallManagedPrometheusResponse Client::uninstallManagedPrometheusWithOptions(const UninstallManagedPrometheusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasClusterType()) {
    query["ClusterType"] = request.clusterType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.vpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UninstallManagedPrometheus"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UninstallManagedPrometheusResponse>();
}

/**
 * @deprecated OpenAPI UninstallManagedPrometheus is deprecated
 *
 * @summary Uninstalls a managed Prometheus agent for a serverless Kubernetes (ASK) cluster, Distributed Cloud Container Platform for Kubernetes (ACK One) cluster, or Elastic Compute Service (ECS) cluster.
 *
 * @description This operation is available only for ASK, ECS, and ACK One clusters. Before you call this operation, make sure that a managed Prometheus agent is installed for your cluster.
 *
 * @param request UninstallManagedPrometheusRequest
 * @return UninstallManagedPrometheusResponse
 */
UninstallManagedPrometheusResponse Client::uninstallManagedPrometheus(const UninstallManagedPrometheusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return uninstallManagedPrometheusWithOptions(request, runtime);
}

/**
 * @summary Releases a Prometheus instance.
 *
 * @param request UninstallPromClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UninstallPromClusterResponse
 */
UninstallPromClusterResponse Client::uninstallPromClusterWithOptions(const UninstallPromClusterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAliyunLang()) {
    query["AliyunLang"] = request.aliyunLang();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UninstallPromCluster"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UninstallPromClusterResponse>();
}

/**
 * @summary Releases a Prometheus instance.
 *
 * @param request UninstallPromClusterRequest
 * @return UninstallPromClusterResponse
 */
UninstallPromClusterResponse Client::uninstallPromCluster(const UninstallPromClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return uninstallPromClusterWithOptions(request, runtime);
}

/**
 * @summary Removes tags from ARMS resources.
 *
 * @param request UntagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResourcesWithOptions(const UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAll()) {
    query["All"] = request.all();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasTagKey()) {
    query["TagKey"] = request.tagKey();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.tags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UntagResources"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UntagResourcesResponse>();
}

/**
 * @summary Removes tags from ARMS resources.
 *
 * @param request UntagResourcesRequest
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResources(const UntagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return untagResourcesWithOptions(request, runtime);
}

/**
 * @summary Updates an alert contact.
 *
 * @description This operation is no longer maintained. To create or modify an alert contact, call the CreateOrUpdateContact operation provided by the new version of Alert Management.
 *
 * @param request UpdateAlertContactRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAlertContactResponse
 */
UpdateAlertContactResponse Client::updateAlertContactWithOptions(const UpdateAlertContactRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactId()) {
    query["ContactId"] = request.contactId();
  }

  if (!!request.hasContactName()) {
    query["ContactName"] = request.contactName();
  }

  if (!!request.hasDingRobotWebhookUrl()) {
    query["DingRobotWebhookUrl"] = request.dingRobotWebhookUrl();
  }

  if (!!request.hasEmail()) {
    query["Email"] = request.email();
  }

  if (!!request.hasPhoneNum()) {
    query["PhoneNum"] = request.phoneNum();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSystemNoc()) {
    query["SystemNoc"] = request.systemNoc();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateAlertContact"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAlertContactResponse>();
}

/**
 * @summary Updates an alert contact.
 *
 * @description This operation is no longer maintained. To create or modify an alert contact, call the CreateOrUpdateContact operation provided by the new version of Alert Management.
 *
 * @param request UpdateAlertContactRequest
 * @return UpdateAlertContactResponse
 */
UpdateAlertContactResponse Client::updateAlertContact(const UpdateAlertContactRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAlertContactWithOptions(request, runtime);
}

/**
 * @summary Updates UpdateAlertContactGroup alarm contact group.
 *
 * @param request UpdateAlertContactGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAlertContactGroupResponse
 */
UpdateAlertContactGroupResponse Client::updateAlertContactGroupWithOptions(const UpdateAlertContactGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactGroupId()) {
    query["ContactGroupId"] = request.contactGroupId();
  }

  if (!!request.hasContactGroupName()) {
    query["ContactGroupName"] = request.contactGroupName();
  }

  if (!!request.hasContactIds()) {
    query["ContactIds"] = request.contactIds();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateAlertContactGroup"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAlertContactGroupResponse>();
}

/**
 * @summary Updates UpdateAlertContactGroup alarm contact group.
 *
 * @param request UpdateAlertContactGroupRequest
 * @return UpdateAlertContactGroupResponse
 */
UpdateAlertContactGroupResponse Client::updateAlertContactGroup(const UpdateAlertContactGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAlertContactGroupWithOptions(request, runtime);
}

/**
 * @param request UpdateAlertRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAlertRuleResponse
 */
UpdateAlertRuleResponse Client::updateAlertRuleWithOptions(const UpdateAlertRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlertId()) {
    query["AlertId"] = request.alertId();
  }

  if (!!request.hasContactGroupIds()) {
    query["ContactGroupIds"] = request.contactGroupIds();
  }

  if (!!request.hasIsAutoStart()) {
    query["IsAutoStart"] = request.isAutoStart();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasTemplageAlertConfig()) {
    query["TemplageAlertConfig"] = request.templageAlertConfig();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateAlertRule"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAlertRuleResponse>();
}

/**
 * @param request UpdateAlertRuleRequest
 * @return UpdateAlertRuleResponse
 */
UpdateAlertRuleResponse Client::updateAlertRule(const UpdateAlertRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAlertRuleWithOptions(request, runtime);
}

/**
 * @summary Modifies a dispatch policy.
 *
 * @param request UpdateDispatchRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDispatchRuleResponse
 */
UpdateDispatchRuleResponse Client::updateDispatchRuleWithOptions(const UpdateDispatchRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDispatchRule()) {
    query["DispatchRule"] = request.dispatchRule();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateDispatchRule"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDispatchRuleResponse>();
}

/**
 * @summary Modifies a dispatch policy.
 *
 * @param request UpdateDispatchRuleRequest
 * @return UpdateDispatchRuleResponse
 */
UpdateDispatchRuleResponse Client::updateDispatchRule(const UpdateDispatchRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDispatchRuleWithOptions(request, runtime);
}

/**
 * @summary Updates a custom job for an environment.
 *
 * @param request UpdateEnvCustomJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateEnvCustomJobResponse
 */
UpdateEnvCustomJobResponse Client::updateEnvCustomJobWithOptions(const UpdateEnvCustomJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAliyunLang()) {
    query["AliyunLang"] = request.aliyunLang();
  }

  if (!!request.hasCustomJobName()) {
    query["CustomJobName"] = request.customJobName();
  }

  if (!!request.hasEnvironmentId()) {
    query["EnvironmentId"] = request.environmentId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  json body = {};
  if (!!request.hasConfigYaml()) {
    body["ConfigYaml"] = request.configYaml();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateEnvCustomJob"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateEnvCustomJobResponse>();
}

/**
 * @summary Updates a custom job for an environment.
 *
 * @param request UpdateEnvCustomJobRequest
 * @return UpdateEnvCustomJobResponse
 */
UpdateEnvCustomJobResponse Client::updateEnvCustomJob(const UpdateEnvCustomJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateEnvCustomJobWithOptions(request, runtime);
}

/**
 * @summary 更新环境实例的废弃指标列表
 *
 * @param request UpdateEnvDropMetricsRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateEnvDropMetricsRuleResponse
 */
UpdateEnvDropMetricsRuleResponse Client::updateEnvDropMetricsRuleWithOptions(const UpdateEnvDropMetricsRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAliyunLang()) {
    query["AliyunLang"] = request.aliyunLang();
  }

  if (!!request.hasEnvironmentId()) {
    query["EnvironmentId"] = request.environmentId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  json body = {};
  if (!!request.hasDropMetrics()) {
    body["DropMetrics"] = request.dropMetrics();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateEnvDropMetricsRule"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateEnvDropMetricsRuleResponse>();
}

/**
 * @summary 更新环境实例的废弃指标列表
 *
 * @param request UpdateEnvDropMetricsRuleRequest
 * @return UpdateEnvDropMetricsRuleResponse
 */
UpdateEnvDropMetricsRuleResponse Client::updateEnvDropMetricsRule(const UpdateEnvDropMetricsRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateEnvDropMetricsRuleWithOptions(request, runtime);
}

/**
 * @summary Updates the PodMonitor of an environment.
 *
 * @param request UpdateEnvPodMonitorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateEnvPodMonitorResponse
 */
UpdateEnvPodMonitorResponse Client::updateEnvPodMonitorWithOptions(const UpdateEnvPodMonitorRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAliyunLang()) {
    query["AliyunLang"] = request.aliyunLang();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasEnvironmentId()) {
    query["EnvironmentId"] = request.environmentId();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasPodMonitorName()) {
    query["PodMonitorName"] = request.podMonitorName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  json body = {};
  if (!!request.hasConfigYaml()) {
    body["ConfigYaml"] = request.configYaml();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateEnvPodMonitor"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateEnvPodMonitorResponse>();
}

/**
 * @summary Updates the PodMonitor of an environment.
 *
 * @param request UpdateEnvPodMonitorRequest
 * @return UpdateEnvPodMonitorResponse
 */
UpdateEnvPodMonitorResponse Client::updateEnvPodMonitor(const UpdateEnvPodMonitorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateEnvPodMonitorWithOptions(request, runtime);
}

/**
 * @summary Updates the ServiceMonitor of an environment.
 *
 * @param request UpdateEnvServiceMonitorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateEnvServiceMonitorResponse
 */
UpdateEnvServiceMonitorResponse Client::updateEnvServiceMonitorWithOptions(const UpdateEnvServiceMonitorRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAliyunLang()) {
    query["AliyunLang"] = request.aliyunLang();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasEnvironmentId()) {
    query["EnvironmentId"] = request.environmentId();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasServiceMonitorName()) {
    query["ServiceMonitorName"] = request.serviceMonitorName();
  }

  json body = {};
  if (!!request.hasConfigYaml()) {
    body["ConfigYaml"] = request.configYaml();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateEnvServiceMonitor"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateEnvServiceMonitorResponse>();
}

/**
 * @summary Updates the ServiceMonitor of an environment.
 *
 * @param request UpdateEnvServiceMonitorRequest
 * @return UpdateEnvServiceMonitorResponse
 */
UpdateEnvServiceMonitorResponse Client::updateEnvServiceMonitor(const UpdateEnvServiceMonitorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateEnvServiceMonitorWithOptions(request, runtime);
}

/**
 * @summary Updates the configuration of an environment.
 *
 * @param request UpdateEnvironmentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateEnvironmentResponse
 */
UpdateEnvironmentResponse Client::updateEnvironmentWithOptions(const UpdateEnvironmentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAliyunLang()) {
    query["AliyunLang"] = request.aliyunLang();
  }

  if (!!request.hasEnvironmentId()) {
    query["EnvironmentId"] = request.environmentId();
  }

  if (!!request.hasEnvironmentName()) {
    query["EnvironmentName"] = request.environmentName();
  }

  if (!!request.hasFeePackage()) {
    query["FeePackage"] = request.feePackage();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateEnvironment"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateEnvironmentResponse>();
}

/**
 * @summary Updates the configuration of an environment.
 *
 * @param request UpdateEnvironmentRequest
 * @return UpdateEnvironmentResponse
 */
UpdateEnvironmentResponse Client::updateEnvironment(const UpdateEnvironmentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateEnvironmentWithOptions(request, runtime);
}

/**
 * @summary Updates the information about a Grafana workspace.
 *
 * @param request UpdateGrafanaWorkspaceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateGrafanaWorkspaceResponse
 */
UpdateGrafanaWorkspaceResponse Client::updateGrafanaWorkspaceWithOptions(const UpdateGrafanaWorkspaceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAliyunLang()) {
    query["AliyunLang"] = request.aliyunLang();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasGrafanaWorkspaceId()) {
    query["GrafanaWorkspaceId"] = request.grafanaWorkspaceId();
  }

  if (!!request.hasGrafanaWorkspaceName()) {
    query["GrafanaWorkspaceName"] = request.grafanaWorkspaceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateGrafanaWorkspace"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateGrafanaWorkspaceResponse>();
}

/**
 * @summary Updates the information about a Grafana workspace.
 *
 * @param request UpdateGrafanaWorkspaceRequest
 * @return UpdateGrafanaWorkspaceResponse
 */
UpdateGrafanaWorkspaceResponse Client::updateGrafanaWorkspace(const UpdateGrafanaWorkspaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateGrafanaWorkspaceWithOptions(request, runtime);
}

/**
 * @summary Updates the version of a Grafana workspace.
 *
 * @description Note: The list returned by this operation includes the workspaces of Developer Edition, Expert Edition, and Advanced Edition. The list does not include the workspaces of Shared Edition.
 *
 * @param request UpdateGrafanaWorkspaceVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateGrafanaWorkspaceVersionResponse
 */
UpdateGrafanaWorkspaceVersionResponse Client::updateGrafanaWorkspaceVersionWithOptions(const UpdateGrafanaWorkspaceVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAliyunLang()) {
    query["AliyunLang"] = request.aliyunLang();
  }

  if (!!request.hasGrafanaVersion()) {
    query["GrafanaVersion"] = request.grafanaVersion();
  }

  if (!!request.hasGrafanaWorkspaceId()) {
    query["GrafanaWorkspaceId"] = request.grafanaWorkspaceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateGrafanaWorkspaceVersion"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateGrafanaWorkspaceVersionResponse>();
}

/**
 * @summary Updates the version of a Grafana workspace.
 *
 * @description Note: The list returned by this operation includes the workspaces of Developer Edition, Expert Edition, and Advanced Edition. The list does not include the workspaces of Shared Edition.
 *
 * @param request UpdateGrafanaWorkspaceVersionRequest
 * @return UpdateGrafanaWorkspaceVersionResponse
 */
UpdateGrafanaWorkspaceVersionResponse Client::updateGrafanaWorkspaceVersion(const UpdateGrafanaWorkspaceVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateGrafanaWorkspaceVersionWithOptions(request, runtime);
}

/**
 * @summary Modifies the information about an integration.
 *
 * @param request UpdateIntegrationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateIntegrationResponse
 */
UpdateIntegrationResponse Client::updateIntegrationWithOptions(const UpdateIntegrationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAutoRecover()) {
    body["AutoRecover"] = request.autoRecover();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasDuplicateKey()) {
    body["DuplicateKey"] = request.duplicateKey();
  }

  if (!!request.hasExtendedFieldRedefineRules()) {
    body["ExtendedFieldRedefineRules"] = request.extendedFieldRedefineRules();
  }

  if (!!request.hasFieldRedefineRules()) {
    body["FieldRedefineRules"] = request.fieldRedefineRules();
  }

  if (!!request.hasInitiativeRecoverField()) {
    body["InitiativeRecoverField"] = request.initiativeRecoverField();
  }

  if (!!request.hasInitiativeRecoverValue()) {
    body["InitiativeRecoverValue"] = request.initiativeRecoverValue();
  }

  if (!!request.hasIntegrationId()) {
    body["IntegrationId"] = request.integrationId();
  }

  if (!!request.hasIntegrationName()) {
    body["IntegrationName"] = request.integrationName();
  }

  if (!!request.hasIntegrationProductType()) {
    body["IntegrationProductType"] = request.integrationProductType();
  }

  if (!!request.hasLiveness()) {
    body["Liveness"] = request.liveness();
  }

  if (!!request.hasRecoverTime()) {
    body["RecoverTime"] = request.recoverTime();
  }

  if (!!request.hasStat()) {
    body["Stat"] = request.stat();
  }

  if (!!request.hasState()) {
    body["State"] = request.state();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateIntegration"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateIntegrationResponse>();
}

/**
 * @summary Modifies the information about an integration.
 *
 * @param request UpdateIntegrationRequest
 * @return UpdateIntegrationResponse
 */
UpdateIntegrationResponse Client::updateIntegration(const UpdateIntegrationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateIntegrationWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI UpdateMetricDrop is deprecated, please use ARMS::2019-08-08::UpdateEnvDropMetricsRule instead.
 *
 * @summary Updates the list of discarded metrics.
 *
 * @param request UpdateMetricDropRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateMetricDropResponse
 */
UpdateMetricDropResponse Client::updateMetricDropWithOptions(const UpdateMetricDropRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasMetricDrop()) {
    query["MetricDrop"] = request.metricDrop();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateMetricDrop"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateMetricDropResponse>();
}

/**
 * @deprecated OpenAPI UpdateMetricDrop is deprecated, please use ARMS::2019-08-08::UpdateEnvDropMetricsRule instead.
 *
 * @summary Updates the list of discarded metrics.
 *
 * @param request UpdateMetricDropRequest
 * @return UpdateMetricDropResponse
 */
UpdateMetricDropResponse Client::updateMetricDrop(const UpdateMetricDropRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateMetricDropWithOptions(request, runtime);
}

/**
 * @summary 更新Prometheus告警规则
 *
 * @param request UpdatePrometheusAlertRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdatePrometheusAlertRuleResponse
 */
UpdatePrometheusAlertRuleResponse Client::updatePrometheusAlertRuleWithOptions(const UpdatePrometheusAlertRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlertId()) {
    query["AlertId"] = request.alertId();
  }

  if (!!request.hasAlertName()) {
    query["AlertName"] = request.alertName();
  }

  if (!!request.hasAnnotations()) {
    query["Annotations"] = request.annotations();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasDispatchRuleId()) {
    query["DispatchRuleId"] = request.dispatchRuleId();
  }

  if (!!request.hasDuration()) {
    query["Duration"] = request.duration();
  }

  if (!!request.hasExpression()) {
    query["Expression"] = request.expression();
  }

  if (!!request.hasLabels()) {
    query["Labels"] = request.labels();
  }

  if (!!request.hasMessage()) {
    query["Message"] = request.message();
  }

  if (!!request.hasNotifyType()) {
    query["NotifyType"] = request.notifyType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.tags();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdatePrometheusAlertRule"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdatePrometheusAlertRuleResponse>();
}

/**
 * @summary 更新Prometheus告警规则
 *
 * @param request UpdatePrometheusAlertRuleRequest
 * @return UpdatePrometheusAlertRuleResponse
 */
UpdatePrometheusAlertRuleResponse Client::updatePrometheusAlertRule(const UpdatePrometheusAlertRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updatePrometheusAlertRuleWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI UpdatePrometheusGlobalView is deprecated
 *
 * @summary Updates the data sources of Prometheus instance for GlobalView.
 *
 * @param request UpdatePrometheusGlobalViewRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdatePrometheusGlobalViewResponse
 */
UpdatePrometheusGlobalViewResponse Client::updatePrometheusGlobalViewWithOptions(const UpdatePrometheusGlobalViewRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAllSubClustersSuccess()) {
    query["AllSubClustersSuccess"] = request.allSubClustersSuccess();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.groupName();
  }

  if (!!request.hasMostRegionId()) {
    query["MostRegionId"] = request.mostRegionId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSubClustersJson()) {
    query["SubClustersJson"] = request.subClustersJson();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdatePrometheusGlobalView"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdatePrometheusGlobalViewResponse>();
}

/**
 * @deprecated OpenAPI UpdatePrometheusGlobalView is deprecated
 *
 * @summary Updates the data sources of Prometheus instance for GlobalView.
 *
 * @param request UpdatePrometheusGlobalViewRequest
 * @return UpdatePrometheusGlobalViewResponse
 */
UpdatePrometheusGlobalViewResponse Client::updatePrometheusGlobalView(const UpdatePrometheusGlobalViewRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updatePrometheusGlobalViewWithOptions(request, runtime);
}

/**
 * @summary Updates the information about a Prometheus instance.
 *
 * @param request UpdatePrometheusInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdatePrometheusInstanceResponse
 */
UpdatePrometheusInstanceResponse Client::updatePrometheusInstanceWithOptions(const UpdatePrometheusInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasArchiveDuration()) {
    query["ArchiveDuration"] = request.archiveDuration();
  }

  if (!!request.hasAuthFreeReadPolicy()) {
    query["AuthFreeReadPolicy"] = request.authFreeReadPolicy();
  }

  if (!!request.hasAuthFreeWritePolicy()) {
    query["AuthFreeWritePolicy"] = request.authFreeWritePolicy();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasEnableAuthFreeRead()) {
    query["EnableAuthFreeRead"] = request.enableAuthFreeRead();
  }

  if (!!request.hasEnableAuthFreeWrite()) {
    query["EnableAuthFreeWrite"] = request.enableAuthFreeWrite();
  }

  if (!!request.hasEnableAuthToken()) {
    query["EnableAuthToken"] = request.enableAuthToken();
  }

  if (!!request.hasPaymentType()) {
    query["PaymentType"] = request.paymentType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasStorageDuration()) {
    query["StorageDuration"] = request.storageDuration();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdatePrometheusInstance"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdatePrometheusInstanceResponse>();
}

/**
 * @summary Updates the information about a Prometheus instance.
 *
 * @param request UpdatePrometheusInstanceRequest
 * @return UpdatePrometheusInstanceResponse
 */
UpdatePrometheusInstanceResponse Client::updatePrometheusInstance(const UpdatePrometheusInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updatePrometheusInstanceWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI UpdatePrometheusIntegration is deprecated
 *
 * @summary Modifies the configurations of an exporter that is integrated into a Prometheus instance for Container Service or a Prometheus instance for ECS.
 *
 * @param request UpdatePrometheusIntegrationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdatePrometheusIntegrationResponse
 */
UpdatePrometheusIntegrationResponse Client::updatePrometheusIntegrationWithOptions(const UpdatePrometheusIntegrationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasIntegrationType()) {
    query["IntegrationType"] = request.integrationType();
  }

  if (!!request.hasParam()) {
    query["Param"] = request.param();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdatePrometheusIntegration"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdatePrometheusIntegrationResponse>();
}

/**
 * @deprecated OpenAPI UpdatePrometheusIntegration is deprecated
 *
 * @summary Modifies the configurations of an exporter that is integrated into a Prometheus instance for Container Service or a Prometheus instance for ECS.
 *
 * @param request UpdatePrometheusIntegrationRequest
 * @return UpdatePrometheusIntegrationResponse
 */
UpdatePrometheusIntegrationResponse Client::updatePrometheusIntegration(const UpdatePrometheusIntegrationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updatePrometheusIntegrationWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI UpdatePrometheusMonitoring is deprecated
 *
 * @summary Updates the monitoring configuration of a Prometheus instance.
 *
 * @param request UpdatePrometheusMonitoringRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdatePrometheusMonitoringResponse
 */
UpdatePrometheusMonitoringResponse Client::updatePrometheusMonitoringWithOptions(const UpdatePrometheusMonitoringRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasMonitoringName()) {
    query["MonitoringName"] = request.monitoringName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  json body = {};
  if (!!request.hasConfigYaml()) {
    body["ConfigYaml"] = request.configYaml();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdatePrometheusMonitoring"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdatePrometheusMonitoringResponse>();
}

/**
 * @deprecated OpenAPI UpdatePrometheusMonitoring is deprecated
 *
 * @summary Updates the monitoring configuration of a Prometheus instance.
 *
 * @param request UpdatePrometheusMonitoringRequest
 * @return UpdatePrometheusMonitoringResponse
 */
UpdatePrometheusMonitoringResponse Client::updatePrometheusMonitoring(const UpdatePrometheusMonitoringRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updatePrometheusMonitoringWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI UpdatePrometheusMonitoringStatus is deprecated
 *
 * @summary Updates the status of the monitoring configuration of a Prometheus instance.
 *
 * @param request UpdatePrometheusMonitoringStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdatePrometheusMonitoringStatusResponse
 */
UpdatePrometheusMonitoringStatusResponse Client::updatePrometheusMonitoringStatusWithOptions(const UpdatePrometheusMonitoringStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasMonitoringName()) {
    query["MonitoringName"] = request.monitoringName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdatePrometheusMonitoringStatus"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdatePrometheusMonitoringStatusResponse>();
}

/**
 * @deprecated OpenAPI UpdatePrometheusMonitoringStatus is deprecated
 *
 * @summary Updates the status of the monitoring configuration of a Prometheus instance.
 *
 * @param request UpdatePrometheusMonitoringStatusRequest
 * @return UpdatePrometheusMonitoringStatusResponse
 */
UpdatePrometheusMonitoringStatusResponse Client::updatePrometheusMonitoringStatus(const UpdatePrometheusMonitoringStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updatePrometheusMonitoringStatusWithOptions(request, runtime);
}

/**
 * @summary Updates a Real User Monitoring (RUM) application.
 *
 * @description Real User Monitoring (RUM) is available only in the China (Hangzhou), Singapore, and US (Silicon Valley) regions. Select the correct endpoint.
 *
 * @param request UpdateRumAppRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateRumAppResponse
 */
UpdateRumAppResponse Client::updateRumAppWithOptions(const UpdateRumAppRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppConfig()) {
    query["AppConfig"] = request.appConfig();
  }

  if (!!request.hasAutoRestart()) {
    query["AutoRestart"] = request.autoRestart();
  }

  if (!!request.hasBackendServiceTraceRegion()) {
    query["BackendServiceTraceRegion"] = request.backendServiceTraceRegion();
  }

  if (!!request.hasBonreeSDKConfigJson()) {
    query["BonreeSDKConfigJson"] = request.bonreeSDKConfigJson();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasIsSubscribe()) {
    query["IsSubscribe"] = request.isSubscribe();
  }

  if (!!request.hasNickname()) {
    query["Nickname"] = request.nickname();
  }

  if (!!request.hasPid()) {
    query["Pid"] = request.pid();
  }

  if (!!request.hasRealRegionId()) {
    query["RealRegionId"] = request.realRegionId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRestart()) {
    query["Restart"] = request.restart();
  }

  if (!!request.hasServiceDomainOperationJson()) {
    query["ServiceDomainOperationJson"] = request.serviceDomainOperationJson();
  }

  if (!!request.hasStop()) {
    query["Stop"] = request.stop();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateRumApp"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateRumAppResponse>();
}

/**
 * @summary Updates a Real User Monitoring (RUM) application.
 *
 * @description Real User Monitoring (RUM) is available only in the China (Hangzhou), Singapore, and US (Silicon Valley) regions. Select the correct endpoint.
 *
 * @param request UpdateRumAppRequest
 * @return UpdateRumAppResponse
 */
UpdateRumAppResponse Client::updateRumApp(const UpdateRumAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateRumAppWithOptions(request, runtime);
}

/**
 * @summary Updates the status of a Real User Monitoring (RUM) file. You can call this operation after the RUM file is uploaded.
 *
 * @description Real User Monitoring (RUM) is available only in the China (Hangzhou), Singapore, and US (Silicon Valley) regions. Select the correct endpoint.
 *
 * @param request UpdateRumFileStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateRumFileStatusResponse
 */
UpdateRumFileStatusResponse Client::updateRumFileStatusWithOptions(const UpdateRumFileStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileName()) {
    query["FileName"] = request.fileName();
  }

  if (!!request.hasPid()) {
    query["Pid"] = request.pid();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSize()) {
    query["Size"] = request.size();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasUuid()) {
    query["Uuid"] = request.uuid();
  }

  if (!!request.hasVersionId()) {
    query["VersionId"] = request.versionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateRumFileStatus"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateRumFileStatusResponse>();
}

/**
 * @summary Updates the status of a Real User Monitoring (RUM) file. You can call this operation after the RUM file is uploaded.
 *
 * @description Real User Monitoring (RUM) is available only in the China (Hangzhou), Singapore, and US (Silicon Valley) regions. Select the correct endpoint.
 *
 * @param request UpdateRumFileStatusRequest
 * @return UpdateRumFileStatusResponse
 */
UpdateRumFileStatusResponse Client::updateRumFileStatus(const UpdateRumFileStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateRumFileStatusWithOptions(request, runtime);
}

/**
 * @summary Updates a scheduled synthetic test task.
 *
 * @param tmpReq UpdateTimingSyntheticTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTimingSyntheticTaskResponse
 */
UpdateTimingSyntheticTaskResponse Client::updateTimingSyntheticTaskWithOptions(const UpdateTimingSyntheticTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateTimingSyntheticTaskShrinkRequest request = UpdateTimingSyntheticTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAvailableAssertions()) {
    request.setAvailableAssertionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.availableAssertions(), "AvailableAssertions", "json"));
  }

  if (!!tmpReq.hasCommonSetting()) {
    request.setCommonSettingShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.commonSetting(), "CommonSetting", "json"));
  }

  if (!!tmpReq.hasCustomPeriod()) {
    request.setCustomPeriodShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.customPeriod(), "CustomPeriod", "json"));
  }

  if (!!tmpReq.hasMonitorConf()) {
    request.setMonitorConfShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.monitorConf(), "MonitorConf", "json"));
  }

  if (!!tmpReq.hasMonitors()) {
    request.setMonitorsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.monitors(), "Monitors", "json"));
  }

  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tags(), "Tags", "json"));
  }

  json query = {};
  if (!!request.hasAvailableAssertionsShrink()) {
    query["AvailableAssertions"] = request.availableAssertionsShrink();
  }

  if (!!request.hasCommonSettingShrink()) {
    query["CommonSetting"] = request.commonSettingShrink();
  }

  if (!!request.hasCustomPeriodShrink()) {
    query["CustomPeriod"] = request.customPeriodShrink();
  }

  if (!!request.hasFrequency()) {
    query["Frequency"] = request.frequency();
  }

  if (!!request.hasMonitorConfShrink()) {
    query["MonitorConf"] = request.monitorConfShrink();
  }

  if (!!request.hasMonitorsShrink()) {
    query["Monitors"] = request.monitorsShrink();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasTagsShrink()) {
    query["Tags"] = request.tagsShrink();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateTimingSyntheticTask"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTimingSyntheticTaskResponse>();
}

/**
 * @summary Updates a scheduled synthetic test task.
 *
 * @param request UpdateTimingSyntheticTaskRequest
 * @return UpdateTimingSyntheticTaskResponse
 */
UpdateTimingSyntheticTaskResponse Client::updateTimingSyntheticTask(const UpdateTimingSyntheticTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateTimingSyntheticTaskWithOptions(request, runtime);
}

/**
 * @summary Modifies the information about a webhook alert contact.
 *
 * @description This operation is no longer maintained. Call the CreateOrUpdateWebhookContact operation in the new alter management module to create or modify a webhook alert contact.
 *
 * @param request UpdateWebhookRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateWebhookResponse
 */
UpdateWebhookResponse Client::updateWebhookWithOptions(const UpdateWebhookRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBody()) {
    query["Body"] = request.body();
  }

  if (!!request.hasContactId()) {
    query["ContactId"] = request.contactId();
  }

  if (!!request.hasContactName()) {
    query["ContactName"] = request.contactName();
  }

  if (!!request.hasHttpHeaders()) {
    query["HttpHeaders"] = request.httpHeaders();
  }

  if (!!request.hasHttpParams()) {
    query["HttpParams"] = request.httpParams();
  }

  if (!!request.hasMethod()) {
    query["Method"] = request.method();
  }

  if (!!request.hasRecoverBody()) {
    query["RecoverBody"] = request.recoverBody();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasUrl()) {
    query["Url"] = request.url();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateWebhook"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateWebhookResponse>();
}

/**
 * @summary Modifies the information about a webhook alert contact.
 *
 * @description This operation is no longer maintained. Call the CreateOrUpdateWebhookContact operation in the new alter management module to create or modify a webhook alert contact.
 *
 * @param request UpdateWebhookRequest
 * @return UpdateWebhookResponse
 */
UpdateWebhookResponse Client::updateWebhook(const UpdateWebhookRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateWebhookWithOptions(request, runtime);
}

/**
 * @summary Updates the release information of an add-on.
 *
 * @param request UpgradeAddonReleaseRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpgradeAddonReleaseResponse
 */
UpgradeAddonReleaseResponse Client::upgradeAddonReleaseWithOptions(const UpgradeAddonReleaseRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddonVersion()) {
    query["AddonVersion"] = request.addonVersion();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasEnvironmentId()) {
    query["EnvironmentId"] = request.environmentId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasReleaseName()) {
    query["ReleaseName"] = request.releaseName();
  }

  if (!!request.hasValues()) {
    query["Values"] = request.values();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpgradeAddonRelease"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpgradeAddonReleaseResponse>();
}

/**
 * @summary Updates the release information of an add-on.
 *
 * @param request UpgradeAddonReleaseRequest
 * @return UpgradeAddonReleaseResponse
 */
UpgradeAddonReleaseResponse Client::upgradeAddonRelease(const UpgradeAddonReleaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return upgradeAddonReleaseWithOptions(request, runtime);
}

/**
 * @summary Updates the feature information of an environment.
 *
 * @param request UpgradeEnvironmentFeatureRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpgradeEnvironmentFeatureResponse
 */
UpgradeEnvironmentFeatureResponse Client::upgradeEnvironmentFeatureWithOptions(const UpgradeEnvironmentFeatureRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAliyunLang()) {
    query["AliyunLang"] = request.aliyunLang();
  }

  if (!!request.hasEnvironmentId()) {
    query["EnvironmentId"] = request.environmentId();
  }

  if (!!request.hasFeatureName()) {
    query["FeatureName"] = request.featureName();
  }

  if (!!request.hasFeatureVersion()) {
    query["FeatureVersion"] = request.featureVersion();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasValues()) {
    query["Values"] = request.values();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpgradeEnvironmentFeature"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpgradeEnvironmentFeatureResponse>();
}

/**
 * @summary Updates the feature information of an environment.
 *
 * @param request UpgradeEnvironmentFeatureRequest
 * @return UpgradeEnvironmentFeatureResponse
 */
UpgradeEnvironmentFeatureResponse Client::upgradeEnvironmentFeature(const UpgradeEnvironmentFeatureRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return upgradeEnvironmentFeatureWithOptions(request, runtime);
}

/**
 * @summary Uploads a SourceMap file to ARMS Browser Monitoring.
 *
 * @param request UploadRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UploadResponse
 */
UploadResponse Client::uploadWithOptions(const UploadRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEdition()) {
    query["Edition"] = request.edition();
  }

  if (!!request.hasFileName()) {
    query["FileName"] = request.fileName();
  }

  if (!!request.hasPid()) {
    query["Pid"] = request.pid();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasVersion()) {
    query["Version"] = request.version();
  }

  json body = {};
  if (!!request.hasFile()) {
    body["File"] = request.file();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "Upload"},
    {"version" , "2019-08-08"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UploadResponse>();
}

/**
 * @summary Uploads a SourceMap file to ARMS Browser Monitoring.
 *
 * @param request UploadRequest
 * @return UploadResponse
 */
UploadResponse Client::upload(const UploadRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return uploadWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace ARMS20190808