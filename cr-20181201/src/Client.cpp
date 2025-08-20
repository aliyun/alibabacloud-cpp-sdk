#include <darabonba/Core.hpp>
#include <alibabacloud/Cr20181201.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::Cr20181201::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace Cr20181201
{

AlibabaCloud::Cr20181201::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  checkConfig(config);
  this->_endpoint = getEndpoint("cr", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Cancels an artifact building task.
 *
 * @param request CancelArtifactBuildTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelArtifactBuildTaskResponse
 */
CancelArtifactBuildTaskResponse Client::cancelArtifactBuildTaskWithOptions(const CancelArtifactBuildTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBuildTaskId()) {
    query["BuildTaskId"] = request.buildTaskId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CancelArtifactBuildTask"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelArtifactBuildTaskResponse>();
}

/**
 * @summary Cancels an artifact building task.
 *
 * @param request CancelArtifactBuildTaskRequest
 * @return CancelArtifactBuildTaskResponse
 */
CancelArtifactBuildTaskResponse Client::cancelArtifactBuildTask(const CancelArtifactBuildTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelArtifactBuildTaskWithOptions(request, runtime);
}

/**
 * @summary Cancels an image building task of a repository.
 *
 * @param request CancelRepoBuildRecordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelRepoBuildRecordResponse
 */
CancelRepoBuildRecordResponse Client::cancelRepoBuildRecordWithOptions(const CancelRepoBuildRecordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBuildRecordId()) {
    query["BuildRecordId"] = request.buildRecordId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRepoId()) {
    query["RepoId"] = request.repoId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CancelRepoBuildRecord"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelRepoBuildRecordResponse>();
}

/**
 * @summary Cancels an image building task of a repository.
 *
 * @param request CancelRepoBuildRecordRequest
 * @return CancelRepoBuildRecordResponse
 */
CancelRepoBuildRecordResponse Client::cancelRepoBuildRecord(const CancelRepoBuildRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelRepoBuildRecordWithOptions(request, runtime);
}

/**
 * @summary Cancels a single replication task.
 *
 * @param request CancelRepoSyncTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelRepoSyncTaskResponse
 */
CancelRepoSyncTaskResponse Client::cancelRepoSyncTaskWithOptions(const CancelRepoSyncTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasSyncTaskId()) {
    query["SyncTaskId"] = request.syncTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CancelRepoSyncTask"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelRepoSyncTaskResponse>();
}

/**
 * @summary Cancels a single replication task.
 *
 * @param request CancelRepoSyncTaskRequest
 * @return CancelRepoSyncTaskResponse
 */
CancelRepoSyncTaskResponse Client::cancelRepoSyncTask(const CancelRepoSyncTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelRepoSyncTaskWithOptions(request, runtime);
}

/**
 * @summary Changes the resource group to which a resource belongs.
 *
 * @param request ChangeResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChangeResourceGroupResponse
 */
ChangeResourceGroupResponse Client::changeResourceGroupWithOptions(const ChangeResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceRegionId()) {
    query["ResourceRegionId"] = request.resourceRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ChangeResourceGroup"},
    {"version" , "2018-12-01"},
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
 * @summary Changes the resource group to which a resource belongs.
 *
 * @param request ChangeResourceGroupRequest
 * @return ChangeResourceGroupResponse
 */
ChangeResourceGroupResponse Client::changeResourceGroup(const ChangeResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return changeResourceGroupWithOptions(request, runtime);
}

/**
 * @summary Create image repository acceleration rules for image building.
 *
 * @description You can create building rules of accelerated images only for image repositories of Container Registry Advanced Edition instances. You cannot create building rules of accelerated images for image repositories of Container Registry Basic Edition instances. For more information, see [Specifications of different editions](https://www.alibabacloud.com/help/en/acr/product-overview/what-is-container-registry?spm=openapi-amp.newDocPublishment.0.0.bf82281fRj7rmV#section-n3q-ps7-x6k).
 * Accelerated images are not supported in Alibaba Finance Cloud regions or Alibaba Gov Cloud regions.
 *
 * @param tmpReq CreateArtifactBuildRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateArtifactBuildRuleResponse
 */
CreateArtifactBuildRuleResponse Client::createArtifactBuildRuleWithOptions(const CreateArtifactBuildRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateArtifactBuildRuleShrinkRequest request = CreateArtifactBuildRuleShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasParameters()) {
    request.setParametersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.parameters(), "Parameters", "json"));
  }

  json query = {};
  if (!!request.hasArtifactType()) {
    query["ArtifactType"] = request.artifactType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasParametersShrink()) {
    query["Parameters"] = request.parametersShrink();
  }

  if (!!request.hasScopeId()) {
    query["ScopeId"] = request.scopeId();
  }

  if (!!request.hasScopeType()) {
    query["ScopeType"] = request.scopeType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateArtifactBuildRule"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateArtifactBuildRuleResponse>();
}

/**
 * @summary Create image repository acceleration rules for image building.
 *
 * @description You can create building rules of accelerated images only for image repositories of Container Registry Advanced Edition instances. You cannot create building rules of accelerated images for image repositories of Container Registry Basic Edition instances. For more information, see [Specifications of different editions](https://www.alibabacloud.com/help/en/acr/product-overview/what-is-container-registry?spm=openapi-amp.newDocPublishment.0.0.bf82281fRj7rmV#section-n3q-ps7-x6k).
 * Accelerated images are not supported in Alibaba Finance Cloud regions or Alibaba Gov Cloud regions.
 *
 * @param request CreateArtifactBuildRuleRequest
 * @return CreateArtifactBuildRuleResponse
 */
CreateArtifactBuildRuleResponse Client::createArtifactBuildRule(const CreateArtifactBuildRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createArtifactBuildRuleWithOptions(request, runtime);
}

/**
 * @summary Creates a lifecycle management rule for an artifact.
 *
 * @param request CreateArtifactLifecycleRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateArtifactLifecycleRuleResponse
 */
CreateArtifactLifecycleRuleResponse Client::createArtifactLifecycleRuleWithOptions(const CreateArtifactLifecycleRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuto()) {
    query["Auto"] = request._auto();
  }

  if (!!request.hasEnableDeleteTag()) {
    query["EnableDeleteTag"] = request.enableDeleteTag();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNamespaceName()) {
    query["NamespaceName"] = request.namespaceName();
  }

  if (!!request.hasRepoName()) {
    query["RepoName"] = request.repoName();
  }

  if (!!request.hasRetentionTagCount()) {
    query["RetentionTagCount"] = request.retentionTagCount();
  }

  if (!!request.hasScheduleTime()) {
    query["ScheduleTime"] = request.scheduleTime();
  }

  if (!!request.hasScope()) {
    query["Scope"] = request.scope();
  }

  if (!!request.hasTagRegexp()) {
    query["TagRegexp"] = request.tagRegexp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateArtifactLifecycleRule"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateArtifactLifecycleRuleResponse>();
}

/**
 * @summary Creates a lifecycle management rule for an artifact.
 *
 * @param request CreateArtifactLifecycleRuleRequest
 * @return CreateArtifactLifecycleRuleResponse
 */
CreateArtifactLifecycleRuleResponse Client::createArtifactLifecycleRule(const CreateArtifactLifecycleRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createArtifactLifecycleRuleWithOptions(request, runtime);
}

/**
 * @summary Creates an artifact subscription rule.
 *
 * @param request CreateArtifactSubscriptionRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateArtifactSubscriptionRuleResponse
 */
CreateArtifactSubscriptionRuleResponse Client::createArtifactSubscriptionRuleWithOptions(const CreateArtifactSubscriptionRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccelerate()) {
    query["Accelerate"] = request.accelerate();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNamespaceName()) {
    query["NamespaceName"] = request.namespaceName();
  }

  if (!!request.hasOverride()) {
    query["Override"] = request.override();
  }

  if (!!request.hasPlatform()) {
    query["Platform"] = request.platform();
  }

  if (!!request.hasRepoName()) {
    query["RepoName"] = request.repoName();
  }

  if (!!request.hasSourceNamespaceName()) {
    query["SourceNamespaceName"] = request.sourceNamespaceName();
  }

  if (!!request.hasSourceProvider()) {
    query["SourceProvider"] = request.sourceProvider();
  }

  if (!!request.hasSourceRepoName()) {
    query["SourceRepoName"] = request.sourceRepoName();
  }

  if (!!request.hasTagCount()) {
    query["TagCount"] = request.tagCount();
  }

  if (!!request.hasTagRegexp()) {
    query["TagRegexp"] = request.tagRegexp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateArtifactSubscriptionRule"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateArtifactSubscriptionRuleResponse>();
}

/**
 * @summary Creates an artifact subscription rule.
 *
 * @param request CreateArtifactSubscriptionRuleRequest
 * @return CreateArtifactSubscriptionRuleResponse
 */
CreateArtifactSubscriptionRuleResponse Client::createArtifactSubscriptionRule(const CreateArtifactSubscriptionRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createArtifactSubscriptionRuleWithOptions(request, runtime);
}

/**
 * @summary Creates an artifact subscription task.
 *
 * @param request CreateArtifactSubscriptionTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateArtifactSubscriptionTaskResponse
 */
CreateArtifactSubscriptionTaskResponse Client::createArtifactSubscriptionTaskWithOptions(const CreateArtifactSubscriptionTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.ruleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateArtifactSubscriptionTask"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateArtifactSubscriptionTaskResponse>();
}

/**
 * @summary Creates an artifact subscription task.
 *
 * @param request CreateArtifactSubscriptionTaskRequest
 * @return CreateArtifactSubscriptionTaskResponse
 */
CreateArtifactSubscriptionTaskResponse Client::createArtifactSubscriptionTask(const CreateArtifactSubscriptionTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createArtifactSubscriptionTaskWithOptions(request, runtime);
}

/**
 * @summary Creates an image building record based on an existing record.
 *
 * @param request CreateBuildRecordByRecordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateBuildRecordByRecordResponse
 */
CreateBuildRecordByRecordResponse Client::createBuildRecordByRecordWithOptions(const CreateBuildRecordByRecordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBuildRecordId()) {
    query["BuildRecordId"] = request.buildRecordId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRepoId()) {
    query["RepoId"] = request.repoId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateBuildRecordByRecord"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateBuildRecordByRecordResponse>();
}

/**
 * @summary Creates an image building record based on an existing record.
 *
 * @param request CreateBuildRecordByRecordRequest
 * @return CreateBuildRecordByRecordResponse
 */
CreateBuildRecordByRecordResponse Client::createBuildRecordByRecord(const CreateBuildRecordByRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createBuildRecordByRecordWithOptions(request, runtime);
}

/**
 * @summary Creates an image building record based on a rule.
 *
 * @param request CreateBuildRecordByRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateBuildRecordByRuleResponse
 */
CreateBuildRecordByRuleResponse Client::createBuildRecordByRuleWithOptions(const CreateBuildRecordByRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBuildRuleId()) {
    query["BuildRuleId"] = request.buildRuleId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRepoId()) {
    query["RepoId"] = request.repoId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateBuildRecordByRule"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateBuildRecordByRuleResponse>();
}

/**
 * @summary Creates an image building record based on a rule.
 *
 * @param request CreateBuildRecordByRuleRequest
 * @return CreateBuildRecordByRuleResponse
 */
CreateBuildRecordByRuleResponse Client::createBuildRecordByRule(const CreateBuildRecordByRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createBuildRecordByRuleWithOptions(request, runtime);
}

/**
 * @summary Creates a delivery chain.
 *
 * @param request CreateChainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateChainResponse
 */
CreateChainResponse Client::createChainWithOptions(const CreateChainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChainConfig()) {
    query["ChainConfig"] = request.chainConfig();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasRepoName()) {
    query["RepoName"] = request.repoName();
  }

  if (!!request.hasRepoNamespaceName()) {
    query["RepoNamespaceName"] = request.repoNamespaceName();
  }

  if (!!request.hasScopeExclude()) {
    query["ScopeExclude"] = request.scopeExclude();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateChain"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateChainResponse>();
}

/**
 * @summary Creates a delivery chain.
 *
 * @param request CreateChainRequest
 * @return CreateChainResponse
 */
CreateChainResponse Client::createChain(const CreateChainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createChainWithOptions(request, runtime);
}

/**
 * @summary Creates a chart namespace in an instance.
 *
 * @param request CreateChartNamespaceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateChartNamespaceResponse
 */
CreateChartNamespaceResponse Client::createChartNamespaceWithOptions(const CreateChartNamespaceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoCreateRepo()) {
    query["AutoCreateRepo"] = request.autoCreateRepo();
  }

  if (!!request.hasDefaultRepoType()) {
    query["DefaultRepoType"] = request.defaultRepoType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNamespaceName()) {
    query["NamespaceName"] = request.namespaceName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateChartNamespace"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateChartNamespaceResponse>();
}

/**
 * @summary Creates a chart namespace in an instance.
 *
 * @param request CreateChartNamespaceRequest
 * @return CreateChartNamespaceResponse
 */
CreateChartNamespaceResponse Client::createChartNamespace(const CreateChartNamespaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createChartNamespaceWithOptions(request, runtime);
}

/**
 * @summary Creates a chart repository.
 *
 * @param request CreateChartRepositoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateChartRepositoryResponse
 */
CreateChartRepositoryResponse Client::createChartRepositoryWithOptions(const CreateChartRepositoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRepoName()) {
    query["RepoName"] = request.repoName();
  }

  if (!!request.hasRepoNamespaceName()) {
    query["RepoNamespaceName"] = request.repoNamespaceName();
  }

  if (!!request.hasRepoType()) {
    query["RepoType"] = request.repoType();
  }

  if (!!request.hasSummary()) {
    query["Summary"] = request.summary();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateChartRepository"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateChartRepositoryResponse>();
}

/**
 * @summary Creates a chart repository.
 *
 * @param request CreateChartRepositoryRequest
 * @return CreateChartRepositoryResponse
 */
CreateChartRepositoryResponse Client::createChartRepository(const CreateChartRepositoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createChartRepositoryWithOptions(request, runtime);
}

/**
 * @summary Creates a whitelist policy for the public endpoint of the instance.
 *
 * @param request CreateInstanceEndpointAclPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateInstanceEndpointAclPolicyResponse
 */
CreateInstanceEndpointAclPolicyResponse Client::createInstanceEndpointAclPolicyWithOptions(const CreateInstanceEndpointAclPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComment()) {
    query["Comment"] = request.comment();
  }

  if (!!request.hasEndpointType()) {
    query["EndpointType"] = request.endpointType();
  }

  if (!!request.hasEntry()) {
    query["Entry"] = request.entry();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasModuleName()) {
    query["ModuleName"] = request.moduleName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateInstanceEndpointAclPolicy"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateInstanceEndpointAclPolicyResponse>();
}

/**
 * @summary Creates a whitelist policy for the public endpoint of the instance.
 *
 * @param request CreateInstanceEndpointAclPolicyRequest
 * @return CreateInstanceEndpointAclPolicyResponse
 */
CreateInstanceEndpointAclPolicyResponse Client::createInstanceEndpointAclPolicy(const CreateInstanceEndpointAclPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createInstanceEndpointAclPolicyWithOptions(request, runtime);
}

/**
 * @summary Associates a virtual private cloud (VPC) with a Container Registry instance.
 *
 * @description The VPC quota must be purchased separately.
 *
 * @param request CreateInstanceVpcEndpointLinkedVpcRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateInstanceVpcEndpointLinkedVpcResponse
 */
CreateInstanceVpcEndpointLinkedVpcResponse Client::createInstanceVpcEndpointLinkedVpcWithOptions(const CreateInstanceVpcEndpointLinkedVpcRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnableCreateDNSRecordInPvzt()) {
    query["EnableCreateDNSRecordInPvzt"] = request.enableCreateDNSRecordInPvzt();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasModuleName()) {
    query["ModuleName"] = request.moduleName();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.vpcId();
  }

  if (!!request.hasVswitchId()) {
    query["VswitchId"] = request.vswitchId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateInstanceVpcEndpointLinkedVpc"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateInstanceVpcEndpointLinkedVpcResponse>();
}

/**
 * @summary Associates a virtual private cloud (VPC) with a Container Registry instance.
 *
 * @description The VPC quota must be purchased separately.
 *
 * @param request CreateInstanceVpcEndpointLinkedVpcRequest
 * @return CreateInstanceVpcEndpointLinkedVpcResponse
 */
CreateInstanceVpcEndpointLinkedVpcResponse Client::createInstanceVpcEndpointLinkedVpc(const CreateInstanceVpcEndpointLinkedVpcRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createInstanceVpcEndpointLinkedVpcWithOptions(request, runtime);
}

/**
 * @summary Creates a namespace of image repositories.
 *
 * @param tmpReq CreateNamespaceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateNamespaceResponse
 */
CreateNamespaceResponse Client::createNamespaceWithOptions(const CreateNamespaceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateNamespaceShrinkRequest request = CreateNamespaceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDefaultRepoConfiguration()) {
    request.setDefaultRepoConfigurationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.defaultRepoConfiguration(), "DefaultRepoConfiguration", "json"));
  }

  json query = {};
  if (!!request.hasAutoCreateRepo()) {
    query["AutoCreateRepo"] = request.autoCreateRepo();
  }

  if (!!request.hasDefaultRepoConfigurationShrink()) {
    query["DefaultRepoConfiguration"] = request.defaultRepoConfigurationShrink();
  }

  if (!!request.hasDefaultRepoType()) {
    query["DefaultRepoType"] = request.defaultRepoType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNamespaceName()) {
    query["NamespaceName"] = request.namespaceName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateNamespace"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateNamespaceResponse>();
}

/**
 * @summary Creates a namespace of image repositories.
 *
 * @param request CreateNamespaceRequest
 * @return CreateNamespaceResponse
 */
CreateNamespaceResponse Client::createNamespace(const CreateNamespaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createNamespaceWithOptions(request, runtime);
}

/**
 * @summary Creates an image building rule for a repository.
 *
 * @param request CreateRepoBuildRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRepoBuildRuleResponse
 */
CreateRepoBuildRuleResponse Client::createRepoBuildRuleWithOptions(const CreateRepoBuildRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBuildArgs()) {
    query["BuildArgs"] = request.buildArgs();
  }

  if (!!request.hasDockerfileLocation()) {
    query["DockerfileLocation"] = request.dockerfileLocation();
  }

  if (!!request.hasDockerfileName()) {
    query["DockerfileName"] = request.dockerfileName();
  }

  if (!!request.hasImageTag()) {
    query["ImageTag"] = request.imageTag();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPlatforms()) {
    query["Platforms"] = request.platforms();
  }

  if (!!request.hasPushName()) {
    query["PushName"] = request.pushName();
  }

  if (!!request.hasPushType()) {
    query["PushType"] = request.pushType();
  }

  if (!!request.hasRepoId()) {
    query["RepoId"] = request.repoId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateRepoBuildRule"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRepoBuildRuleResponse>();
}

/**
 * @summary Creates an image building rule for a repository.
 *
 * @param request CreateRepoBuildRuleRequest
 * @return CreateRepoBuildRuleResponse
 */
CreateRepoBuildRuleResponse Client::createRepoBuildRule(const CreateRepoBuildRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRepoBuildRuleWithOptions(request, runtime);
}

/**
 * @summary Binds a source code repository to an image repository.
 *
 * @param request CreateRepoSourceCodeRepoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRepoSourceCodeRepoResponse
 */
CreateRepoSourceCodeRepoResponse Client::createRepoSourceCodeRepoWithOptions(const CreateRepoSourceCodeRepoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoBuild()) {
    query["AutoBuild"] = request.autoBuild();
  }

  if (!!request.hasCodeRepoName()) {
    query["CodeRepoName"] = request.codeRepoName();
  }

  if (!!request.hasCodeRepoNamespaceName()) {
    query["CodeRepoNamespaceName"] = request.codeRepoNamespaceName();
  }

  if (!!request.hasCodeRepoType()) {
    query["CodeRepoType"] = request.codeRepoType();
  }

  if (!!request.hasDisableCacheBuild()) {
    query["DisableCacheBuild"] = request.disableCacheBuild();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasOverseaBuild()) {
    query["OverseaBuild"] = request.overseaBuild();
  }

  if (!!request.hasRepoId()) {
    query["RepoId"] = request.repoId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateRepoSourceCodeRepo"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRepoSourceCodeRepoResponse>();
}

/**
 * @summary Binds a source code repository to an image repository.
 *
 * @param request CreateRepoSourceCodeRepoRequest
 * @return CreateRepoSourceCodeRepoResponse
 */
CreateRepoSourceCodeRepoResponse Client::createRepoSourceCodeRepo(const CreateRepoSourceCodeRepoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRepoSourceCodeRepoWithOptions(request, runtime);
}

/**
 * @summary Creates an image synchronization rule for an image repository.
 *
 * @param request CreateRepoSyncRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRepoSyncRuleResponse
 */
CreateRepoSyncRuleResponse Client::createRepoSyncRuleWithOptions(const CreateRepoSyncRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNamespaceName()) {
    query["NamespaceName"] = request.namespaceName();
  }

  if (!!request.hasRepoName()) {
    query["RepoName"] = request.repoName();
  }

  if (!!request.hasRepoNameFilter()) {
    query["RepoNameFilter"] = request.repoNameFilter();
  }

  if (!!request.hasSyncRuleName()) {
    query["SyncRuleName"] = request.syncRuleName();
  }

  if (!!request.hasSyncScope()) {
    query["SyncScope"] = request.syncScope();
  }

  if (!!request.hasSyncTrigger()) {
    query["SyncTrigger"] = request.syncTrigger();
  }

  if (!!request.hasTagFilter()) {
    query["TagFilter"] = request.tagFilter();
  }

  if (!!request.hasTargetInstanceId()) {
    query["TargetInstanceId"] = request.targetInstanceId();
  }

  if (!!request.hasTargetNamespaceName()) {
    query["TargetNamespaceName"] = request.targetNamespaceName();
  }

  if (!!request.hasTargetRegionId()) {
    query["TargetRegionId"] = request.targetRegionId();
  }

  if (!!request.hasTargetRepoName()) {
    query["TargetRepoName"] = request.targetRepoName();
  }

  if (!!request.hasTargetUserId()) {
    query["TargetUserId"] = request.targetUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateRepoSyncRule"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRepoSyncRuleResponse>();
}

/**
 * @summary Creates an image synchronization rule for an image repository.
 *
 * @param request CreateRepoSyncRuleRequest
 * @return CreateRepoSyncRuleResponse
 */
CreateRepoSyncRuleResponse Client::createRepoSyncRule(const CreateRepoSyncRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRepoSyncRuleWithOptions(request, runtime);
}

/**
 * @param request CreateRepoSyncTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRepoSyncTaskResponse
 */
CreateRepoSyncTaskResponse Client::createRepoSyncTaskWithOptions(const CreateRepoSyncTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasOverride()) {
    query["Override"] = request.override();
  }

  if (!!request.hasRepoId()) {
    query["RepoId"] = request.repoId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  if (!!request.hasTargetInstanceId()) {
    query["TargetInstanceId"] = request.targetInstanceId();
  }

  if (!!request.hasTargetNamespace()) {
    query["TargetNamespace"] = request.targetNamespace();
  }

  if (!!request.hasTargetRegionId()) {
    query["TargetRegionId"] = request.targetRegionId();
  }

  if (!!request.hasTargetRepoName()) {
    query["TargetRepoName"] = request.targetRepoName();
  }

  if (!!request.hasTargetTag()) {
    query["TargetTag"] = request.targetTag();
  }

  if (!!request.hasTargetUserId()) {
    query["TargetUserId"] = request.targetUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateRepoSyncTask"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRepoSyncTaskResponse>();
}

/**
 * @param request CreateRepoSyncTaskRequest
 * @return CreateRepoSyncTaskResponse
 */
CreateRepoSyncTaskResponse Client::createRepoSyncTask(const CreateRepoSyncTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRepoSyncTaskWithOptions(request, runtime);
}

/**
 * @summary Creates an image replication task based on a manual replication rule.
 *
 * @param request CreateRepoSyncTaskByRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRepoSyncTaskByRuleResponse
 */
CreateRepoSyncTaskByRuleResponse Client::createRepoSyncTaskByRuleWithOptions(const CreateRepoSyncTaskByRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRepoId()) {
    query["RepoId"] = request.repoId();
  }

  if (!!request.hasSyncRuleId()) {
    query["SyncRuleId"] = request.syncRuleId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateRepoSyncTaskByRule"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRepoSyncTaskByRuleResponse>();
}

/**
 * @summary Creates an image replication task based on a manual replication rule.
 *
 * @param request CreateRepoSyncTaskByRuleRequest
 * @return CreateRepoSyncTaskByRuleResponse
 */
CreateRepoSyncTaskByRuleResponse Client::createRepoSyncTaskByRule(const CreateRepoSyncTaskByRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRepoSyncTaskByRuleWithOptions(request, runtime);
}

/**
 * @summary Creates an image tag based on an existing image tag in an image repository.
 *
 * @param request CreateRepoTagRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRepoTagResponse
 */
CreateRepoTagResponse Client::createRepoTagWithOptions(const CreateRepoTagRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFromTag()) {
    query["FromTag"] = request.fromTag();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNamespaceName()) {
    query["NamespaceName"] = request.namespaceName();
  }

  if (!!request.hasRepoName()) {
    query["RepoName"] = request.repoName();
  }

  if (!!request.hasToTag()) {
    query["ToTag"] = request.toTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateRepoTag"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRepoTagResponse>();
}

/**
 * @summary Creates an image tag based on an existing image tag in an image repository.
 *
 * @param request CreateRepoTagRequest
 * @return CreateRepoTagResponse
 */
CreateRepoTagResponse Client::createRepoTag(const CreateRepoTagRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRepoTagWithOptions(request, runtime);
}

/**
 * @summary Creates an image scan task.
 *
 * @param request CreateRepoTagScanTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRepoTagScanTaskResponse
 */
CreateRepoTagScanTaskResponse Client::createRepoTagScanTaskWithOptions(const CreateRepoTagScanTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDigest()) {
    query["Digest"] = request.digest();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRepoId()) {
    query["RepoId"] = request.repoId();
  }

  if (!!request.hasScanService()) {
    query["ScanService"] = request.scanService();
  }

  if (!!request.hasScanType()) {
    query["ScanType"] = request.scanType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateRepoTagScanTask"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRepoTagScanTaskResponse>();
}

/**
 * @summary Creates an image scan task.
 *
 * @param request CreateRepoTagScanTaskRequest
 * @return CreateRepoTagScanTaskResponse
 */
CreateRepoTagScanTaskResponse Client::createRepoTagScanTask(const CreateRepoTagScanTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRepoTagScanTaskWithOptions(request, runtime);
}

/**
 * @summary Creates a trigger for a repository.
 *
 * @param request CreateRepoTriggerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRepoTriggerResponse
 */
CreateRepoTriggerResponse Client::createRepoTriggerWithOptions(const CreateRepoTriggerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRepoId()) {
    query["RepoId"] = request.repoId();
  }

  if (!!request.hasTriggerName()) {
    query["TriggerName"] = request.triggerName();
  }

  if (!!request.hasTriggerTag()) {
    query["TriggerTag"] = request.triggerTag();
  }

  if (!!request.hasTriggerType()) {
    query["TriggerType"] = request.triggerType();
  }

  if (!!request.hasTriggerUrl()) {
    query["TriggerUrl"] = request.triggerUrl();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateRepoTrigger"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRepoTriggerResponse>();
}

/**
 * @summary Creates a trigger for a repository.
 *
 * @param request CreateRepoTriggerRequest
 * @return CreateRepoTriggerResponse
 */
CreateRepoTriggerResponse Client::createRepoTrigger(const CreateRepoTriggerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRepoTriggerWithOptions(request, runtime);
}

/**
 * @summary Creates an image repository.
 *
 * @param request CreateRepositoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRepositoryResponse
 */
CreateRepositoryResponse Client::createRepositoryWithOptions(const CreateRepositoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDetail()) {
    query["Detail"] = request.detail();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRepoName()) {
    query["RepoName"] = request.repoName();
  }

  if (!!request.hasRepoNamespaceName()) {
    query["RepoNamespaceName"] = request.repoNamespaceName();
  }

  if (!!request.hasRepoType()) {
    query["RepoType"] = request.repoType();
  }

  if (!!request.hasSummary()) {
    query["Summary"] = request.summary();
  }

  if (!!request.hasTagImmutability()) {
    query["TagImmutability"] = request.tagImmutability();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateRepository"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRepositoryResponse>();
}

/**
 * @summary Creates an image repository.
 *
 * @param request CreateRepositoryRequest
 * @return CreateRepositoryResponse
 */
CreateRepositoryResponse Client::createRepository(const CreateRepositoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRepositoryWithOptions(request, runtime);
}

/**
 * @summary Deletes an artifact lifecycle management rule.
 *
 * @param request DeleteArtifactLifecycleRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteArtifactLifecycleRuleResponse
 */
DeleteArtifactLifecycleRuleResponse Client::deleteArtifactLifecycleRuleWithOptions(const DeleteArtifactLifecycleRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.ruleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteArtifactLifecycleRule"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteArtifactLifecycleRuleResponse>();
}

/**
 * @summary Deletes an artifact lifecycle management rule.
 *
 * @param request DeleteArtifactLifecycleRuleRequest
 * @return DeleteArtifactLifecycleRuleResponse
 */
DeleteArtifactLifecycleRuleResponse Client::deleteArtifactLifecycleRule(const DeleteArtifactLifecycleRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteArtifactLifecycleRuleWithOptions(request, runtime);
}

/**
 * @summary Deletes an artifact subscription rule.
 *
 * @param request DeleteArtifactSubscriptionRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteArtifactSubscriptionRuleResponse
 */
DeleteArtifactSubscriptionRuleResponse Client::deleteArtifactSubscriptionRuleWithOptions(const DeleteArtifactSubscriptionRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.ruleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteArtifactSubscriptionRule"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteArtifactSubscriptionRuleResponse>();
}

/**
 * @summary Deletes an artifact subscription rule.
 *
 * @param request DeleteArtifactSubscriptionRuleRequest
 * @return DeleteArtifactSubscriptionRuleResponse
 */
DeleteArtifactSubscriptionRuleResponse Client::deleteArtifactSubscriptionRule(const DeleteArtifactSubscriptionRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteArtifactSubscriptionRuleWithOptions(request, runtime);
}

/**
 * @summary Deletes a delivery pipeline.
 *
 * @param request DeleteChainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteChainResponse
 */
DeleteChainResponse Client::deleteChainWithOptions(const DeleteChainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChainId()) {
    query["ChainId"] = request.chainId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteChain"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteChainResponse>();
}

/**
 * @summary Deletes a delivery pipeline.
 *
 * @param request DeleteChainRequest
 * @return DeleteChainResponse
 */
DeleteChainResponse Client::deleteChain(const DeleteChainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteChainWithOptions(request, runtime);
}

/**
 * @summary Deletes a chart namespace from an instance.
 *
 * @description >  If you delete a chart namespace, all repositories in the namespace and the charts in all repositories are deleted.
 *
 * @param request DeleteChartNamespaceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteChartNamespaceResponse
 */
DeleteChartNamespaceResponse Client::deleteChartNamespaceWithOptions(const DeleteChartNamespaceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNamespaceName()) {
    query["NamespaceName"] = request.namespaceName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteChartNamespace"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteChartNamespaceResponse>();
}

/**
 * @summary Deletes a chart namespace from an instance.
 *
 * @description >  If you delete a chart namespace, all repositories in the namespace and the charts in all repositories are deleted.
 *
 * @param request DeleteChartNamespaceRequest
 * @return DeleteChartNamespaceResponse
 */
DeleteChartNamespaceResponse Client::deleteChartNamespace(const DeleteChartNamespaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteChartNamespaceWithOptions(request, runtime);
}

/**
 * @summary Deletes a chart version from a chart repository.
 *
 * @param request DeleteChartReleaseRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteChartReleaseResponse
 */
DeleteChartReleaseResponse Client::deleteChartReleaseWithOptions(const DeleteChartReleaseRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChart()) {
    query["Chart"] = request.chart();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRelease()) {
    query["Release"] = request.release();
  }

  if (!!request.hasRepoName()) {
    query["RepoName"] = request.repoName();
  }

  if (!!request.hasRepoNamespaceName()) {
    query["RepoNamespaceName"] = request.repoNamespaceName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteChartRelease"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteChartReleaseResponse>();
}

/**
 * @summary Deletes a chart version from a chart repository.
 *
 * @param request DeleteChartReleaseRequest
 * @return DeleteChartReleaseResponse
 */
DeleteChartReleaseResponse Client::deleteChartRelease(const DeleteChartReleaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteChartReleaseWithOptions(request, runtime);
}

/**
 * @summary Deletes a chart repository from an instance.
 *
 * @param request DeleteChartRepositoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteChartRepositoryResponse
 */
DeleteChartRepositoryResponse Client::deleteChartRepositoryWithOptions(const DeleteChartRepositoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRepoName()) {
    query["RepoName"] = request.repoName();
  }

  if (!!request.hasRepoNamespaceName()) {
    query["RepoNamespaceName"] = request.repoNamespaceName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteChartRepository"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteChartRepositoryResponse>();
}

/**
 * @summary Deletes a chart repository from an instance.
 *
 * @param request DeleteChartRepositoryRequest
 * @return DeleteChartRepositoryResponse
 */
DeleteChartRepositoryResponse Client::deleteChartRepository(const DeleteChartRepositoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteChartRepositoryWithOptions(request, runtime);
}

/**
 * @summary Deletes an event notification rule.
 *
 * @param request DeleteEventCenterRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteEventCenterRuleResponse
 */
DeleteEventCenterRuleResponse Client::deleteEventCenterRuleWithOptions(const DeleteEventCenterRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.ruleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteEventCenterRule"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteEventCenterRuleResponse>();
}

/**
 * @summary Deletes an event notification rule.
 *
 * @param request DeleteEventCenterRuleRequest
 * @return DeleteEventCenterRuleResponse
 */
DeleteEventCenterRuleResponse Client::deleteEventCenterRule(const DeleteEventCenterRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteEventCenterRuleWithOptions(request, runtime);
}

/**
 * @summary Deletes a whitelist policy for the public endpoint of an instance.
 *
 * @param request DeleteInstanceEndpointAclPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteInstanceEndpointAclPolicyResponse
 */
DeleteInstanceEndpointAclPolicyResponse Client::deleteInstanceEndpointAclPolicyWithOptions(const DeleteInstanceEndpointAclPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndpointType()) {
    query["EndpointType"] = request.endpointType();
  }

  if (!!request.hasEntry()) {
    query["Entry"] = request.entry();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasModuleName()) {
    query["ModuleName"] = request.moduleName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteInstanceEndpointAclPolicy"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteInstanceEndpointAclPolicyResponse>();
}

/**
 * @summary Deletes a whitelist policy for the public endpoint of an instance.
 *
 * @param request DeleteInstanceEndpointAclPolicyRequest
 * @return DeleteInstanceEndpointAclPolicyResponse
 */
DeleteInstanceEndpointAclPolicyResponse Client::deleteInstanceEndpointAclPolicy(const DeleteInstanceEndpointAclPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteInstanceEndpointAclPolicyWithOptions(request, runtime);
}

/**
 * @summary Disassociates a virtual private cloud (VPC) from an instance.
 *
 * @param request DeleteInstanceVpcEndpointLinkedVpcRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteInstanceVpcEndpointLinkedVpcResponse
 */
DeleteInstanceVpcEndpointLinkedVpcResponse Client::deleteInstanceVpcEndpointLinkedVpcWithOptions(const DeleteInstanceVpcEndpointLinkedVpcRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasModuleName()) {
    query["ModuleName"] = request.moduleName();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.vpcId();
  }

  if (!!request.hasVswitchId()) {
    query["VswitchId"] = request.vswitchId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteInstanceVpcEndpointLinkedVpc"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteInstanceVpcEndpointLinkedVpcResponse>();
}

/**
 * @summary Disassociates a virtual private cloud (VPC) from an instance.
 *
 * @param request DeleteInstanceVpcEndpointLinkedVpcRequest
 * @return DeleteInstanceVpcEndpointLinkedVpcResponse
 */
DeleteInstanceVpcEndpointLinkedVpcResponse Client::deleteInstanceVpcEndpointLinkedVpc(const DeleteInstanceVpcEndpointLinkedVpcRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteInstanceVpcEndpointLinkedVpcWithOptions(request, runtime);
}

/**
 * @summary Deletes a namespace.
 *
 * @description > After you delete a namespace, all repositories in the namespace and all images in these repositories are deleted as well.
 *
 * @param request DeleteNamespaceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteNamespaceResponse
 */
DeleteNamespaceResponse Client::deleteNamespaceWithOptions(const DeleteNamespaceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNamespaceName()) {
    query["NamespaceName"] = request.namespaceName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteNamespace"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteNamespaceResponse>();
}

/**
 * @summary Deletes a namespace.
 *
 * @description > After you delete a namespace, all repositories in the namespace and all images in these repositories are deleted as well.
 *
 * @param request DeleteNamespaceRequest
 * @return DeleteNamespaceResponse
 */
DeleteNamespaceResponse Client::deleteNamespace(const DeleteNamespaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteNamespaceWithOptions(request, runtime);
}

/**
 * @summary Deletes an image building rule of a repository.
 *
 * @param request DeleteRepoBuildRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRepoBuildRuleResponse
 */
DeleteRepoBuildRuleResponse Client::deleteRepoBuildRuleWithOptions(const DeleteRepoBuildRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBuildRuleId()) {
    query["BuildRuleId"] = request.buildRuleId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRepoId()) {
    query["RepoId"] = request.repoId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteRepoBuildRule"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRepoBuildRuleResponse>();
}

/**
 * @summary Deletes an image building rule of a repository.
 *
 * @param request DeleteRepoBuildRuleRequest
 * @return DeleteRepoBuildRuleResponse
 */
DeleteRepoBuildRuleResponse Client::deleteRepoBuildRule(const DeleteRepoBuildRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteRepoBuildRuleWithOptions(request, runtime);
}

/**
 * @summary Deletes an image replication rule of an image repository.
 *
 * @param request DeleteRepoSyncRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRepoSyncRuleResponse
 */
DeleteRepoSyncRuleResponse Client::deleteRepoSyncRuleWithOptions(const DeleteRepoSyncRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasSyncRuleId()) {
    query["SyncRuleId"] = request.syncRuleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteRepoSyncRule"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRepoSyncRuleResponse>();
}

/**
 * @summary Deletes an image replication rule of an image repository.
 *
 * @param request DeleteRepoSyncRuleRequest
 * @return DeleteRepoSyncRuleResponse
 */
DeleteRepoSyncRuleResponse Client::deleteRepoSyncRule(const DeleteRepoSyncRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteRepoSyncRuleWithOptions(request, runtime);
}

/**
 * @summary Deletes an image tag.
 *
 * @param request DeleteRepoTagRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRepoTagResponse
 */
DeleteRepoTagResponse Client::deleteRepoTagWithOptions(const DeleteRepoTagRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRepoId()) {
    query["RepoId"] = request.repoId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteRepoTag"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRepoTagResponse>();
}

/**
 * @summary Deletes an image tag.
 *
 * @param request DeleteRepoTagRequest
 * @return DeleteRepoTagResponse
 */
DeleteRepoTagResponse Client::deleteRepoTag(const DeleteRepoTagRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteRepoTagWithOptions(request, runtime);
}

/**
 * @summary Deletes a trigger of an image repository.
 *
 * @param request DeleteRepoTriggerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRepoTriggerResponse
 */
DeleteRepoTriggerResponse Client::deleteRepoTriggerWithOptions(const DeleteRepoTriggerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRepoId()) {
    query["RepoId"] = request.repoId();
  }

  if (!!request.hasTriggerId()) {
    query["TriggerId"] = request.triggerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteRepoTrigger"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRepoTriggerResponse>();
}

/**
 * @summary Deletes a trigger of an image repository.
 *
 * @param request DeleteRepoTriggerRequest
 * @return DeleteRepoTriggerResponse
 */
DeleteRepoTriggerResponse Client::deleteRepoTrigger(const DeleteRepoTriggerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteRepoTriggerWithOptions(request, runtime);
}

/**
 * @summary Deletes an image repository.
 *
 * @description If you delete a repository, all images in the repository are also deleted.
 *
 * @param request DeleteRepositoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRepositoryResponse
 */
DeleteRepositoryResponse Client::deleteRepositoryWithOptions(const DeleteRepositoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRepoId()) {
    query["RepoId"] = request.repoId();
  }

  if (!!request.hasRepoName()) {
    query["RepoName"] = request.repoName();
  }

  if (!!request.hasRepoNamespaceName()) {
    query["RepoNamespaceName"] = request.repoNamespaceName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteRepository"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRepositoryResponse>();
}

/**
 * @summary Deletes an image repository.
 *
 * @description If you delete a repository, all images in the repository are also deleted.
 *
 * @param request DeleteRepositoryRequest
 * @return DeleteRepositoryResponse
 */
DeleteRepositoryResponse Client::deleteRepository(const DeleteRepositoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteRepositoryWithOptions(request, runtime);
}

/**
 * @param request GetArtifactBuildRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetArtifactBuildRuleResponse
 */
GetArtifactBuildRuleResponse Client::getArtifactBuildRuleWithOptions(const GetArtifactBuildRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetArtifactBuildRule"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetArtifactBuildRuleResponse>();
}

/**
 * @param request GetArtifactBuildRuleRequest
 * @return GetArtifactBuildRuleResponse
 */
GetArtifactBuildRuleResponse Client::getArtifactBuildRule(const GetArtifactBuildRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getArtifactBuildRuleWithOptions(request, runtime);
}

/**
 * @summary Queries the details of an artifact building task.
 *
 * @param request GetArtifactBuildTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetArtifactBuildTaskResponse
 */
GetArtifactBuildTaskResponse Client::getArtifactBuildTaskWithOptions(const GetArtifactBuildTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetArtifactBuildTask"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetArtifactBuildTaskResponse>();
}

/**
 * @summary Queries the details of an artifact building task.
 *
 * @param request GetArtifactBuildTaskRequest
 * @return GetArtifactBuildTaskResponse
 */
GetArtifactBuildTaskResponse Client::getArtifactBuildTask(const GetArtifactBuildTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getArtifactBuildTaskWithOptions(request, runtime);
}

/**
 * @summary Queries the lifecycle management rules of an artifact.
 *
 * @param request GetArtifactLifecycleRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetArtifactLifecycleRuleResponse
 */
GetArtifactLifecycleRuleResponse Client::getArtifactLifecycleRuleWithOptions(const GetArtifactLifecycleRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetArtifactLifecycleRule"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetArtifactLifecycleRuleResponse>();
}

/**
 * @summary Queries the lifecycle management rules of an artifact.
 *
 * @param request GetArtifactLifecycleRuleRequest
 * @return GetArtifactLifecycleRuleResponse
 */
GetArtifactLifecycleRuleResponse Client::getArtifactLifecycleRule(const GetArtifactLifecycleRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getArtifactLifecycleRuleWithOptions(request, runtime);
}

/**
 * @summary Queries the information about an artifact subscription rule.
 *
 * @param request GetArtifactSubscriptionRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetArtifactSubscriptionRuleResponse
 */
GetArtifactSubscriptionRuleResponse Client::getArtifactSubscriptionRuleWithOptions(const GetArtifactSubscriptionRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetArtifactSubscriptionRule"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetArtifactSubscriptionRuleResponse>();
}

/**
 * @summary Queries the information about an artifact subscription rule.
 *
 * @param request GetArtifactSubscriptionRuleRequest
 * @return GetArtifactSubscriptionRuleResponse
 */
GetArtifactSubscriptionRuleResponse Client::getArtifactSubscriptionRule(const GetArtifactSubscriptionRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getArtifactSubscriptionRuleWithOptions(request, runtime);
}

/**
 * @summary Queries an artifact subscription task.
 *
 * @param request GetArtifactSubscriptionTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetArtifactSubscriptionTaskResponse
 */
GetArtifactSubscriptionTaskResponse Client::getArtifactSubscriptionTaskWithOptions(const GetArtifactSubscriptionTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetArtifactSubscriptionTask"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetArtifactSubscriptionTaskResponse>();
}

/**
 * @summary Queries an artifact subscription task.
 *
 * @param request GetArtifactSubscriptionTaskRequest
 * @return GetArtifactSubscriptionTaskResponse
 */
GetArtifactSubscriptionTaskResponse Client::getArtifactSubscriptionTask(const GetArtifactSubscriptionTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getArtifactSubscriptionTaskWithOptions(request, runtime);
}

/**
 * @summary Queries the details of an artifact subscription task.
 *
 * @param request GetArtifactSubscriptionTaskResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetArtifactSubscriptionTaskResultResponse
 */
GetArtifactSubscriptionTaskResultResponse Client::getArtifactSubscriptionTaskResultWithOptions(const GetArtifactSubscriptionTaskResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetArtifactSubscriptionTaskResult"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetArtifactSubscriptionTaskResultResponse>();
}

/**
 * @summary Queries the details of an artifact subscription task.
 *
 * @param request GetArtifactSubscriptionTaskResultRequest
 * @return GetArtifactSubscriptionTaskResultResponse
 */
GetArtifactSubscriptionTaskResultResponse Client::getArtifactSubscriptionTaskResult(const GetArtifactSubscriptionTaskResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getArtifactSubscriptionTaskResultWithOptions(request, runtime);
}

/**
 * @summary Queries a temporary username and a token that you can use to log on to a Container Registry instance.
 *
 * @description The ID of the Container Registry instance.
 *
 * @param request GetAuthorizationTokenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAuthorizationTokenResponse
 */
GetAuthorizationTokenResponse Client::getAuthorizationTokenWithOptions(const GetAuthorizationTokenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAuthorizationToken"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAuthorizationTokenResponse>();
}

/**
 * @summary Queries a temporary username and a token that you can use to log on to a Container Registry instance.
 *
 * @description The ID of the Container Registry instance.
 *
 * @param request GetAuthorizationTokenRequest
 * @return GetAuthorizationTokenResponse
 */
GetAuthorizationTokenResponse Client::getAuthorizationToken(const GetAuthorizationTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAuthorizationTokenWithOptions(request, runtime);
}

/**
 * @param request GetChainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetChainResponse
 */
GetChainResponse Client::getChainWithOptions(const GetChainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChainId()) {
    query["ChainId"] = request.chainId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetChain"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetChainResponse>();
}

/**
 * @param request GetChainRequest
 * @return GetChainResponse
 */
GetChainResponse Client::getChain(const GetChainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getChainWithOptions(request, runtime);
}

/**
 * @summary Queries a chart namespace in an instance.
 *
 * @param request GetChartNamespaceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetChartNamespaceResponse
 */
GetChartNamespaceResponse Client::getChartNamespaceWithOptions(const GetChartNamespaceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNamespaceName()) {
    query["NamespaceName"] = request.namespaceName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetChartNamespace"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetChartNamespaceResponse>();
}

/**
 * @summary Queries a chart namespace in an instance.
 *
 * @param request GetChartNamespaceRequest
 * @return GetChartNamespaceResponse
 */
GetChartNamespaceResponse Client::getChartNamespace(const GetChartNamespaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getChartNamespaceWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a chart repository.
 *
 * @param request GetChartRepositoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetChartRepositoryResponse
 */
GetChartRepositoryResponse Client::getChartRepositoryWithOptions(const GetChartRepositoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRepoName()) {
    query["RepoName"] = request.repoName();
  }

  if (!!request.hasRepoNamespaceName()) {
    query["RepoNamespaceName"] = request.repoNamespaceName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetChartRepository"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetChartRepositoryResponse>();
}

/**
 * @summary Queries the information about a chart repository.
 *
 * @param request GetChartRepositoryRequest
 * @return GetChartRepositoryResponse
 */
GetChartRepositoryResponse Client::getChartRepository(const GetChartRepositoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getChartRepositoryWithOptions(request, runtime);
}

/**
 * @summary The ID of the resource group to which the instance belongs.
 *
 * @param request GetInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInstanceResponse
 */
GetInstanceResponse Client::getInstanceWithOptions(const GetInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetInstance"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInstanceResponse>();
}

/**
 * @summary The ID of the resource group to which the instance belongs.
 *
 * @param request GetInstanceRequest
 * @return GetInstanceResponse
 */
GetInstanceResponse Client::getInstance(const GetInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getInstanceWithOptions(request, runtime);
}

/**
 * @summary Queries the number of instances.
 *
 * @param request GetInstanceCountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInstanceCountResponse
 */
GetInstanceCountResponse Client::getInstanceCountWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "GetInstanceCount"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInstanceCountResponse>();
}

/**
 * @summary Queries the number of instances.
 *
 * @return GetInstanceCountResponse
 */
GetInstanceCountResponse Client::getInstanceCount() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getInstanceCountWithOptions(runtime);
}

/**
 * @summary Queries the endpoint of an instance.
 *
 * @param request GetInstanceEndpointRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInstanceEndpointResponse
 */
GetInstanceEndpointResponse Client::getInstanceEndpointWithOptions(const GetInstanceEndpointRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndpointType()) {
    query["EndpointType"] = request.endpointType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasModuleName()) {
    query["ModuleName"] = request.moduleName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetInstanceEndpoint"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInstanceEndpointResponse>();
}

/**
 * @summary Queries the endpoint of an instance.
 *
 * @param request GetInstanceEndpointRequest
 * @return GetInstanceEndpointResponse
 */
GetInstanceEndpointResponse Client::getInstanceEndpoint(const GetInstanceEndpointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getInstanceEndpointWithOptions(request, runtime);
}

/**
 * @summary Queries the quota usage of an instance.
 *
 * @param request GetInstanceUsageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInstanceUsageResponse
 */
GetInstanceUsageResponse Client::getInstanceUsageWithOptions(const GetInstanceUsageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetInstanceUsage"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInstanceUsageResponse>();
}

/**
 * @summary Queries the quota usage of an instance.
 *
 * @param request GetInstanceUsageRequest
 * @return GetInstanceUsageResponse
 */
GetInstanceUsageResponse Client::getInstanceUsage(const GetInstanceUsageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getInstanceUsageWithOptions(request, runtime);
}

/**
 * @summary Queries the endpoints of the virtual private clouds (VPCs) in which a Container Registry instance is deployed.
 *
 * @param request GetInstanceVpcEndpointRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInstanceVpcEndpointResponse
 */
GetInstanceVpcEndpointResponse Client::getInstanceVpcEndpointWithOptions(const GetInstanceVpcEndpointRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasModuleName()) {
    query["ModuleName"] = request.moduleName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetInstanceVpcEndpoint"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInstanceVpcEndpointResponse>();
}

/**
 * @summary Queries the endpoints of the virtual private clouds (VPCs) in which a Container Registry instance is deployed.
 *
 * @param request GetInstanceVpcEndpointRequest
 * @return GetInstanceVpcEndpointResponse
 */
GetInstanceVpcEndpointResponse Client::getInstanceVpcEndpoint(const GetInstanceVpcEndpointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getInstanceVpcEndpointWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a namespace.
 *
 * @param request GetNamespaceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetNamespaceResponse
 */
GetNamespaceResponse Client::getNamespaceWithOptions(const GetNamespaceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.namespaceId();
  }

  if (!!request.hasNamespaceName()) {
    query["NamespaceName"] = request.namespaceName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetNamespace"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetNamespaceResponse>();
}

/**
 * @summary Queries the information about a namespace.
 *
 * @param request GetNamespaceRequest
 * @return GetNamespaceResponse
 */
GetNamespaceResponse Client::getNamespace(const GetNamespaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getNamespaceWithOptions(request, runtime);
}

/**
 * @summary Queries the information about image building records of a repository.
 *
 * @description ****
 *
 * @param request GetRepoBuildRecordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRepoBuildRecordResponse
 */
GetRepoBuildRecordResponse Client::getRepoBuildRecordWithOptions(const GetRepoBuildRecordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBuildRecordId()) {
    query["BuildRecordId"] = request.buildRecordId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRepoBuildRecord"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRepoBuildRecordResponse>();
}

/**
 * @summary Queries the information about image building records of a repository.
 *
 * @description ****
 *
 * @param request GetRepoBuildRecordRequest
 * @return GetRepoBuildRecordResponse
 */
GetRepoBuildRecordResponse Client::getRepoBuildRecord(const GetRepoBuildRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRepoBuildRecordWithOptions(request, runtime);
}

/**
 * @summary Queries the status of an image building task.
 *
 * @param request GetRepoBuildRecordStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRepoBuildRecordStatusResponse
 */
GetRepoBuildRecordStatusResponse Client::getRepoBuildRecordStatusWithOptions(const GetRepoBuildRecordStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBuildRecordId()) {
    query["BuildRecordId"] = request.buildRecordId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRepoId()) {
    query["RepoId"] = request.repoId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRepoBuildRecordStatus"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRepoBuildRecordStatusResponse>();
}

/**
 * @summary Queries the status of an image building task.
 *
 * @param request GetRepoBuildRecordStatusRequest
 * @return GetRepoBuildRecordStatusResponse
 */
GetRepoBuildRecordStatusResponse Client::getRepoBuildRecordStatus(const GetRepoBuildRecordStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRepoBuildRecordStatusWithOptions(request, runtime);
}

/**
 * @summary Queries the information about the source code repository that is bound to an image repository.
 *
 * @param request GetRepoSourceCodeRepoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRepoSourceCodeRepoResponse
 */
GetRepoSourceCodeRepoResponse Client::getRepoSourceCodeRepoWithOptions(const GetRepoSourceCodeRepoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRepoId()) {
    query["RepoId"] = request.repoId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRepoSourceCodeRepo"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRepoSourceCodeRepoResponse>();
}

/**
 * @summary Queries the information about the source code repository that is bound to an image repository.
 *
 * @param request GetRepoSourceCodeRepoRequest
 * @return GetRepoSourceCodeRepoResponse
 */
GetRepoSourceCodeRepoResponse Client::getRepoSourceCodeRepo(const GetRepoSourceCodeRepoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRepoSourceCodeRepoWithOptions(request, runtime);
}

/**
 * @summary Queries an image synchronization task in an instance.
 *
 * @param request GetRepoSyncTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRepoSyncTaskResponse
 */
GetRepoSyncTaskResponse Client::getRepoSyncTaskWithOptions(const GetRepoSyncTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasSyncTaskId()) {
    query["SyncTaskId"] = request.syncTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRepoSyncTask"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRepoSyncTaskResponse>();
}

/**
 * @summary Queries an image synchronization task in an instance.
 *
 * @param request GetRepoSyncTaskRequest
 * @return GetRepoSyncTaskResponse
 */
GetRepoSyncTaskResponse Client::getRepoSyncTask(const GetRepoSyncTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRepoSyncTaskWithOptions(request, runtime);
}

/**
 * @summary The version of the repository.
 *
 * @param request GetRepoTagRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRepoTagResponse
 */
GetRepoTagResponse Client::getRepoTagWithOptions(const GetRepoTagRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRepoTag"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRepoTagResponse>();
}

/**
 * @summary The version of the repository.
 *
 * @param request GetRepoTagRequest
 * @return GetRepoTagResponse
 */
GetRepoTagResponse Client::getRepoTag(const GetRepoTagRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRepoTagWithOptions(request, runtime);
}

/**
 * @summary Queries the scanning status of an image tag.
 *
 * @param request GetRepoTagScanStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRepoTagScanStatusResponse
 */
GetRepoTagScanStatusResponse Client::getRepoTagScanStatusWithOptions(const GetRepoTagScanStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDigest()) {
    query["Digest"] = request.digest();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRepoId()) {
    query["RepoId"] = request.repoId();
  }

  if (!!request.hasScanTaskId()) {
    query["ScanTaskId"] = request.scanTaskId();
  }

  if (!!request.hasScanType()) {
    query["ScanType"] = request.scanType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRepoTagScanStatus"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRepoTagScanStatusResponse>();
}

/**
 * @summary Queries the scanning status of an image tag.
 *
 * @param request GetRepoTagScanStatusRequest
 * @return GetRepoTagScanStatusResponse
 */
GetRepoTagScanStatusResponse Client::getRepoTagScanStatus(const GetRepoTagScanStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRepoTagScanStatusWithOptions(request, runtime);
}

/**
 * @param request GetRepoTagScanSummaryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRepoTagScanSummaryResponse
 */
GetRepoTagScanSummaryResponse Client::getRepoTagScanSummaryWithOptions(const GetRepoTagScanSummaryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDigest()) {
    query["Digest"] = request.digest();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRepoId()) {
    query["RepoId"] = request.repoId();
  }

  if (!!request.hasScanTaskId()) {
    query["ScanTaskId"] = request.scanTaskId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRepoTagScanSummary"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRepoTagScanSummaryResponse>();
}

/**
 * @param request GetRepoTagScanSummaryRequest
 * @return GetRepoTagScanSummaryResponse
 */
GetRepoTagScanSummaryResponse Client::getRepoTagScanSummary(const GetRepoTagScanSummaryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRepoTagScanSummaryWithOptions(request, runtime);
}

/**
 * @summary Queries details about an image repository.
 *
 * @param request GetRepositoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRepositoryResponse
 */
GetRepositoryResponse Client::getRepositoryWithOptions(const GetRepositoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRepoId()) {
    query["RepoId"] = request.repoId();
  }

  if (!!request.hasRepoName()) {
    query["RepoName"] = request.repoName();
  }

  if (!!request.hasRepoNamespaceName()) {
    query["RepoNamespaceName"] = request.repoNamespaceName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRepository"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRepositoryResponse>();
}

/**
 * @summary Queries details about an image repository.
 *
 * @param request GetRepositoryRequest
 * @return GetRepositoryResponse
 */
GetRepositoryResponse Client::getRepository(const GetRepositoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRepositoryWithOptions(request, runtime);
}

/**
 * @summary Queries the log entries of an artifact building task.
 *
 * @param request ListArtifactBuildTaskLogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListArtifactBuildTaskLogResponse
 */
ListArtifactBuildTaskLogResponse Client::listArtifactBuildTaskLogWithOptions(const ListArtifactBuildTaskLogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListArtifactBuildTaskLog"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListArtifactBuildTaskLogResponse>();
}

/**
 * @summary Queries the log entries of an artifact building task.
 *
 * @param request ListArtifactBuildTaskLogRequest
 * @return ListArtifactBuildTaskLogResponse
 */
ListArtifactBuildTaskLogResponse Client::listArtifactBuildTaskLog(const ListArtifactBuildTaskLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listArtifactBuildTaskLogWithOptions(request, runtime);
}

/**
 * @summary Queries the lifecycle management rules of an artifact.
 *
 * @param request ListArtifactLifecycleRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListArtifactLifecycleRuleResponse
 */
ListArtifactLifecycleRuleResponse Client::listArtifactLifecycleRuleWithOptions(const ListArtifactLifecycleRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListArtifactLifecycleRule"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListArtifactLifecycleRuleResponse>();
}

/**
 * @summary Queries the lifecycle management rules of an artifact.
 *
 * @param request ListArtifactLifecycleRuleRequest
 * @return ListArtifactLifecycleRuleResponse
 */
ListArtifactLifecycleRuleResponse Client::listArtifactLifecycleRule(const ListArtifactLifecycleRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listArtifactLifecycleRuleWithOptions(request, runtime);
}

/**
 * @summary Lists the subscription rules of artifacts.
 *
 * @param request ListArtifactSubscriptionRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListArtifactSubscriptionRuleResponse
 */
ListArtifactSubscriptionRuleResponse Client::listArtifactSubscriptionRuleWithOptions(const ListArtifactSubscriptionRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListArtifactSubscriptionRule"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListArtifactSubscriptionRuleResponse>();
}

/**
 * @summary Lists the subscription rules of artifacts.
 *
 * @param request ListArtifactSubscriptionRuleRequest
 * @return ListArtifactSubscriptionRuleResponse
 */
ListArtifactSubscriptionRuleResponse Client::listArtifactSubscriptionRule(const ListArtifactSubscriptionRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listArtifactSubscriptionRuleWithOptions(request, runtime);
}

/**
 * @summary Lists artifact subscription tasks.
 *
 * @param request ListArtifactSubscriptionTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListArtifactSubscriptionTaskResponse
 */
ListArtifactSubscriptionTaskResponse Client::listArtifactSubscriptionTaskWithOptions(const ListArtifactSubscriptionTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListArtifactSubscriptionTask"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListArtifactSubscriptionTaskResponse>();
}

/**
 * @summary Lists artifact subscription tasks.
 *
 * @param request ListArtifactSubscriptionTaskRequest
 * @return ListArtifactSubscriptionTaskResponse
 */
ListArtifactSubscriptionTaskResponse Client::listArtifactSubscriptionTask(const ListArtifactSubscriptionTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listArtifactSubscriptionTaskWithOptions(request, runtime);
}

/**
 * @summary Queries delivery chains.
 *
 * @param request ListChainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListChainResponse
 */
ListChainResponse Client::listChainWithOptions(const ListChainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRepoName()) {
    query["RepoName"] = request.repoName();
  }

  if (!!request.hasRepoNamespaceName()) {
    query["RepoNamespaceName"] = request.repoNamespaceName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListChain"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListChainResponse>();
}

/**
 * @summary Queries delivery chains.
 *
 * @param request ListChainRequest
 * @return ListChainResponse
 */
ListChainResponse Client::listChain(const ListChainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listChainWithOptions(request, runtime);
}

/**
 * @summary The response code.
 *
 * @param request ListChainInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListChainInstanceResponse
 */
ListChainInstanceResponse Client::listChainInstanceWithOptions(const ListChainInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRepoName()) {
    query["RepoName"] = request.repoName();
  }

  if (!!request.hasRepoNamespaceName()) {
    query["RepoNamespaceName"] = request.repoNamespaceName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListChainInstance"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListChainInstanceResponse>();
}

/**
 * @summary The response code.
 *
 * @param request ListChainInstanceRequest
 * @return ListChainInstanceResponse
 */
ListChainInstanceResponse Client::listChainInstance(const ListChainInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listChainInstanceWithOptions(request, runtime);
}

/**
 * @summary Queries the chart namespaces of a Container Registry instance.
 *
 * @param request ListChartNamespaceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListChartNamespaceResponse
 */
ListChartNamespaceResponse Client::listChartNamespaceWithOptions(const ListChartNamespaceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNamespaceName()) {
    query["NamespaceName"] = request.namespaceName();
  }

  if (!!request.hasNamespaceStatus()) {
    query["NamespaceStatus"] = request.namespaceStatus();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListChartNamespace"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListChartNamespaceResponse>();
}

/**
 * @summary Queries the chart namespaces of a Container Registry instance.
 *
 * @param request ListChartNamespaceRequest
 * @return ListChartNamespaceResponse
 */
ListChartNamespaceResponse Client::listChartNamespace(const ListChartNamespaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listChartNamespaceWithOptions(request, runtime);
}

/**
 * @summary Queries the versions of a chart in a chart repository.
 *
 * @param request ListChartReleaseRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListChartReleaseResponse
 */
ListChartReleaseResponse Client::listChartReleaseWithOptions(const ListChartReleaseRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChart()) {
    query["Chart"] = request.chart();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRepoName()) {
    query["RepoName"] = request.repoName();
  }

  if (!!request.hasRepoNamespaceName()) {
    query["RepoNamespaceName"] = request.repoNamespaceName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListChartRelease"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListChartReleaseResponse>();
}

/**
 * @summary Queries the versions of a chart in a chart repository.
 *
 * @param request ListChartReleaseRequest
 * @return ListChartReleaseResponse
 */
ListChartReleaseResponse Client::listChartRelease(const ListChartReleaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listChartReleaseWithOptions(request, runtime);
}

/**
 * @summary Queries the chart repositories of a Container Registry instance.
 *
 * @param request ListChartRepositoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListChartRepositoryResponse
 */
ListChartRepositoryResponse Client::listChartRepositoryWithOptions(const ListChartRepositoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRepoName()) {
    query["RepoName"] = request.repoName();
  }

  if (!!request.hasRepoNamespaceName()) {
    query["RepoNamespaceName"] = request.repoNamespaceName();
  }

  if (!!request.hasRepoStatus()) {
    query["RepoStatus"] = request.repoStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListChartRepository"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListChartRepositoryResponse>();
}

/**
 * @summary Queries the chart repositories of a Container Registry instance.
 *
 * @param request ListChartRepositoryRequest
 * @return ListChartRepositoryResponse
 */
ListChartRepositoryResponse Client::listChartRepository(const ListChartRepositoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listChartRepositoryWithOptions(request, runtime);
}

/**
 * @summary Queries the historical events of an event rule.
 *
 * @param request ListEventCenterRecordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListEventCenterRecordResponse
 */
ListEventCenterRecordResponse Client::listEventCenterRecordWithOptions(const ListEventCenterRecordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListEventCenterRecord"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListEventCenterRecordResponse>();
}

/**
 * @summary Queries the historical events of an event rule.
 *
 * @param request ListEventCenterRecordRequest
 * @return ListEventCenterRecordResponse
 */
ListEventCenterRecordResponse Client::listEventCenterRecord(const ListEventCenterRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listEventCenterRecordWithOptions(request, runtime);
}

/**
 * @summary Queries the names of event notification rules.
 *
 * @param request ListEventCenterRuleNameRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListEventCenterRuleNameResponse
 */
ListEventCenterRuleNameResponse Client::listEventCenterRuleNameWithOptions(const ListEventCenterRuleNameRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListEventCenterRuleName"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListEventCenterRuleNameResponse>();
}

/**
 * @summary Queries the names of event notification rules.
 *
 * @param request ListEventCenterRuleNameRequest
 * @return ListEventCenterRuleNameResponse
 */
ListEventCenterRuleNameResponse Client::listEventCenterRuleName(const ListEventCenterRuleNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listEventCenterRuleNameWithOptions(request, runtime);
}

/**
 * @summary Queries Container Registry instances.
 *
 * @param request ListInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInstanceResponse
 */
ListInstanceResponse Client::listInstanceWithOptions(const ListInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.instanceName();
  }

  if (!!request.hasInstanceStatus()) {
    query["InstanceStatus"] = request.instanceStatus();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListInstance"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInstanceResponse>();
}

/**
 * @summary Queries Container Registry instances.
 *
 * @param request ListInstanceRequest
 * @return ListInstanceResponse
 */
ListInstanceResponse Client::listInstance(const ListInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listInstanceWithOptions(request, runtime);
}

/**
 * @summary Queries the endpoints of a Container Registry instance.
 *
 * @param request ListInstanceEndpointRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInstanceEndpointResponse
 */
ListInstanceEndpointResponse Client::listInstanceEndpointWithOptions(const ListInstanceEndpointRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasModuleName()) {
    query["ModuleName"] = request.moduleName();
  }

  if (!!request.hasSummary()) {
    query["Summary"] = request.summary();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListInstanceEndpoint"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInstanceEndpointResponse>();
}

/**
 * @summary Queries the endpoints of a Container Registry instance.
 *
 * @param request ListInstanceEndpointRequest
 * @return ListInstanceEndpointResponse
 */
ListInstanceEndpointResponse Client::listInstanceEndpoint(const ListInstanceEndpointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listInstanceEndpointWithOptions(request, runtime);
}

/**
 * @summary Queries regions in which you can create Container Registry instances.
 *
 * @param request ListInstanceRegionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInstanceRegionResponse
 */
ListInstanceRegionResponse Client::listInstanceRegionWithOptions(const ListInstanceRegionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListInstanceRegion"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInstanceRegionResponse>();
}

/**
 * @summary Queries regions in which you can create Container Registry instances.
 *
 * @param request ListInstanceRegionRequest
 * @return ListInstanceRegionResponse
 */
ListInstanceRegionResponse Client::listInstanceRegion(const ListInstanceRegionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listInstanceRegionWithOptions(request, runtime);
}

/**
 * @summary Queries namespaces in a Container Registry instance.
 *
 * @param request ListNamespaceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListNamespaceResponse
 */
ListNamespaceResponse Client::listNamespaceWithOptions(const ListNamespaceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNamespaceName()) {
    query["NamespaceName"] = request.namespaceName();
  }

  if (!!request.hasNamespaceStatus()) {
    query["NamespaceStatus"] = request.namespaceStatus();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListNamespace"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListNamespaceResponse>();
}

/**
 * @summary Queries namespaces in a Container Registry instance.
 *
 * @param request ListNamespaceRequest
 * @return ListNamespaceResponse
 */
ListNamespaceResponse Client::listNamespace(const ListNamespaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listNamespaceWithOptions(request, runtime);
}

/**
 * @summary Queries image building records of an image repository.
 *
 * @param request ListRepoBuildRecordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRepoBuildRecordResponse
 */
ListRepoBuildRecordResponse Client::listRepoBuildRecordWithOptions(const ListRepoBuildRecordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRepoId()) {
    query["RepoId"] = request.repoId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRepoBuildRecord"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRepoBuildRecordResponse>();
}

/**
 * @summary Queries image building records of an image repository.
 *
 * @param request ListRepoBuildRecordRequest
 * @return ListRepoBuildRecordResponse
 */
ListRepoBuildRecordResponse Client::listRepoBuildRecord(const ListRepoBuildRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRepoBuildRecordWithOptions(request, runtime);
}

/**
 * @summary Queries the log of an image building record.
 *
 * @param request ListRepoBuildRecordLogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRepoBuildRecordLogResponse
 */
ListRepoBuildRecordLogResponse Client::listRepoBuildRecordLogWithOptions(const ListRepoBuildRecordLogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBuildRecordId()) {
    query["BuildRecordId"] = request.buildRecordId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasOffset()) {
    query["Offset"] = request.offset();
  }

  if (!!request.hasRepoId()) {
    query["RepoId"] = request.repoId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRepoBuildRecordLog"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRepoBuildRecordLogResponse>();
}

/**
 * @summary Queries the log of an image building record.
 *
 * @param request ListRepoBuildRecordLogRequest
 * @return ListRepoBuildRecordLogResponse
 */
ListRepoBuildRecordLogResponse Client::listRepoBuildRecordLog(const ListRepoBuildRecordLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRepoBuildRecordLogWithOptions(request, runtime);
}

/**
 * @summary Queries image building rules of a repository.
 *
 * @param request ListRepoBuildRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRepoBuildRuleResponse
 */
ListRepoBuildRuleResponse Client::listRepoBuildRuleWithOptions(const ListRepoBuildRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRepoId()) {
    query["RepoId"] = request.repoId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRepoBuildRule"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRepoBuildRuleResponse>();
}

/**
 * @summary Queries image building rules of a repository.
 *
 * @param request ListRepoBuildRuleRequest
 * @return ListRepoBuildRuleResponse
 */
ListRepoBuildRuleResponse Client::listRepoBuildRule(const ListRepoBuildRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRepoBuildRuleWithOptions(request, runtime);
}

/**
 * @summary Queries image synchronization rules of a repository.
 *
 * @param request ListRepoSyncRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRepoSyncRuleResponse
 */
ListRepoSyncRuleResponse Client::listRepoSyncRuleWithOptions(const ListRepoSyncRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNamespaceName()) {
    query["NamespaceName"] = request.namespaceName();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRepoName()) {
    query["RepoName"] = request.repoName();
  }

  if (!!request.hasTargetInstanceId()) {
    query["TargetInstanceId"] = request.targetInstanceId();
  }

  if (!!request.hasTargetRegionId()) {
    query["TargetRegionId"] = request.targetRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRepoSyncRule"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRepoSyncRuleResponse>();
}

/**
 * @summary Queries image synchronization rules of a repository.
 *
 * @param request ListRepoSyncRuleRequest
 * @return ListRepoSyncRuleResponse
 */
ListRepoSyncRuleResponse Client::listRepoSyncRule(const ListRepoSyncRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRepoSyncRuleWithOptions(request, runtime);
}

/**
 * @summary Queries image synchronization tasks in an image repository.
 *
 * @param request ListRepoSyncTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRepoSyncTaskResponse
 */
ListRepoSyncTaskResponse Client::listRepoSyncTaskWithOptions(const ListRepoSyncTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRepoName()) {
    query["RepoName"] = request.repoName();
  }

  if (!!request.hasRepoNamespaceName()) {
    query["RepoNamespaceName"] = request.repoNamespaceName();
  }

  if (!!request.hasSyncRecordId()) {
    query["SyncRecordId"] = request.syncRecordId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRepoSyncTask"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRepoSyncTaskResponse>();
}

/**
 * @summary Queries image synchronization tasks in an image repository.
 *
 * @param request ListRepoSyncTaskRequest
 * @return ListRepoSyncTaskResponse
 */
ListRepoSyncTaskResponse Client::listRepoSyncTask(const ListRepoSyncTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRepoSyncTaskWithOptions(request, runtime);
}

/**
 * @summary Queries image tags in a repository.
 *
 * @param request ListRepoTagRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRepoTagResponse
 */
ListRepoTagResponse Client::listRepoTagWithOptions(const ListRepoTagRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRepoId()) {
    query["RepoId"] = request.repoId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRepoTag"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRepoTagResponse>();
}

/**
 * @summary Queries image tags in a repository.
 *
 * @param request ListRepoTagRequest
 * @return ListRepoTagResponse
 */
ListRepoTagResponse Client::listRepoTag(const ListRepoTagRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRepoTagWithOptions(request, runtime);
}

/**
 * @summary Queries the results of a security scan that is created for an image tag.
 *
 * @param request ListRepoTagScanResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRepoTagScanResultResponse
 */
ListRepoTagScanResultResponse Client::listRepoTagScanResultWithOptions(const ListRepoTagScanResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDigest()) {
    query["Digest"] = request.digest();
  }

  if (!!request.hasFilterValue()) {
    query["FilterValue"] = request.filterValue();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRepoId()) {
    query["RepoId"] = request.repoId();
  }

  if (!!request.hasScanTaskId()) {
    query["ScanTaskId"] = request.scanTaskId();
  }

  if (!!request.hasScanType()) {
    query["ScanType"] = request.scanType();
  }

  if (!!request.hasSeverity()) {
    query["Severity"] = request.severity();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  if (!!request.hasVulQueryKey()) {
    query["VulQueryKey"] = request.vulQueryKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRepoTagScanResult"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRepoTagScanResultResponse>();
}

/**
 * @summary Queries the results of a security scan that is created for an image tag.
 *
 * @param request ListRepoTagScanResultRequest
 * @return ListRepoTagScanResultResponse
 */
ListRepoTagScanResultResponse Client::listRepoTagScanResult(const ListRepoTagScanResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRepoTagScanResultWithOptions(request, runtime);
}

/**
 * @summary Queries the triggers of a repository.
 *
 * @param request ListRepoTriggerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRepoTriggerResponse
 */
ListRepoTriggerResponse Client::listRepoTriggerWithOptions(const ListRepoTriggerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRepoId()) {
    query["RepoId"] = request.repoId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRepoTrigger"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRepoTriggerResponse>();
}

/**
 * @summary Queries the triggers of a repository.
 *
 * @param request ListRepoTriggerRequest
 * @return ListRepoTriggerResponse
 */
ListRepoTriggerResponse Client::listRepoTrigger(const ListRepoTriggerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRepoTriggerWithOptions(request, runtime);
}

/**
 * @summary Queries image repositories.
 *
 * @param request ListRepositoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRepositoryResponse
 */
ListRepositoryResponse Client::listRepositoryWithOptions(const ListRepositoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRepoName()) {
    query["RepoName"] = request.repoName();
  }

  if (!!request.hasRepoNamespaceName()) {
    query["RepoNamespaceName"] = request.repoNamespaceName();
  }

  if (!!request.hasRepoStatus()) {
    query["RepoStatus"] = request.repoStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRepository"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRepositoryResponse>();
}

/**
 * @summary Queries image repositories.
 *
 * @param request ListRepositoryRequest
 * @return ListRepositoryResponse
 */
ListRepositoryResponse Client::listRepository(const ListRepositoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRepositoryWithOptions(request, runtime);
}

/**
 * @summary Queries the baseline risks of a scan task by page.
 *
 * @description Before you call this operation, use a Security Center scan engine to scan the image.
 *
 * @param request ListScanBaselineByTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListScanBaselineByTaskResponse
 */
ListScanBaselineByTaskResponse Client::listScanBaselineByTaskWithOptions(const ListScanBaselineByTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListScanBaselineByTask"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListScanBaselineByTaskResponse>();
}

/**
 * @summary Queries the baseline risks of a scan task by page.
 *
 * @description Before you call this operation, use a Security Center scan engine to scan the image.
 *
 * @param request ListScanBaselineByTaskRequest
 * @return ListScanBaselineByTaskResponse
 */
ListScanBaselineByTaskResponse Client::listScanBaselineByTask(const ListScanBaselineByTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listScanBaselineByTaskWithOptions(request, runtime);
}

/**
 * @summary Queries the malicious files of a scan task by page.
 *
 * @description Before you call this operation, use a Security Center scan engine to scan the image.
 *
 * @param request ListScanMaliciousFileByTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListScanMaliciousFileByTaskResponse
 */
ListScanMaliciousFileByTaskResponse Client::listScanMaliciousFileByTaskWithOptions(const ListScanMaliciousFileByTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListScanMaliciousFileByTask"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListScanMaliciousFileByTaskResponse>();
}

/**
 * @summary Queries the malicious files of a scan task by page.
 *
 * @description Before you call this operation, use a Security Center scan engine to scan the image.
 *
 * @param request ListScanMaliciousFileByTaskRequest
 * @return ListScanMaliciousFileByTaskResponse
 */
ListScanMaliciousFileByTaskResponse Client::listScanMaliciousFileByTask(const ListScanMaliciousFileByTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listScanMaliciousFileByTaskWithOptions(request, runtime);
}

/**
 * @summary Queries the tags that are added to cloud resources. Instance resources are supported.
 *
 * @param request ListTagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResourcesWithOptions(const ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
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

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTagResources"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTagResourcesResponse>();
}

/**
 * @summary Queries the tags that are added to cloud resources. Instance resources are supported.
 *
 * @param request ListTagResourcesRequest
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResources(const ListTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagResourcesWithOptions(request, runtime);
}

/**
 * @summary Resets the logon password of a Container Registry instance.
 *
 * @param request ResetLoginPasswordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResetLoginPasswordResponse
 */
ResetLoginPasswordResponse Client::resetLoginPasswordWithOptions(const ResetLoginPasswordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.password();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResetLoginPassword"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResetLoginPasswordResponse>();
}

/**
 * @summary Resets the logon password of a Container Registry instance.
 *
 * @param request ResetLoginPasswordRequest
 * @return ResetLoginPasswordResponse
 */
ResetLoginPasswordResponse Client::resetLoginPassword(const ResetLoginPasswordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resetLoginPasswordWithOptions(request, runtime);
}

/**
 * @summary Adds tags to resources. Instance resources are supported.
 *
 * @param request TagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResourcesWithOptions(const TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

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
    {"version" , "2018-12-01"},
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
 * @summary Adds tags to resources. Instance resources are supported.
 *
 * @param request TagResourcesRequest
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResources(const TagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tagResourcesWithOptions(request, runtime);
}

/**
 * @summary Removes tags from resources. Instance resources are supported.
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UntagResources"},
    {"version" , "2018-12-01"},
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
 * @summary Removes tags from resources. Instance resources are supported.
 *
 * @param request UntagResourcesRequest
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResources(const UntagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return untagResourcesWithOptions(request, runtime);
}

/**
 * @summary Updates a lifecycle management rule of an artifact.
 *
 * @param request UpdateArtifactLifecycleRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateArtifactLifecycleRuleResponse
 */
UpdateArtifactLifecycleRuleResponse Client::updateArtifactLifecycleRuleWithOptions(const UpdateArtifactLifecycleRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuto()) {
    query["Auto"] = request._auto();
  }

  if (!!request.hasEnableDeleteTag()) {
    query["EnableDeleteTag"] = request.enableDeleteTag();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNamespaceName()) {
    query["NamespaceName"] = request.namespaceName();
  }

  if (!!request.hasRepoName()) {
    query["RepoName"] = request.repoName();
  }

  if (!!request.hasRetentionTagCount()) {
    query["RetentionTagCount"] = request.retentionTagCount();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.ruleId();
  }

  if (!!request.hasScheduleTime()) {
    query["ScheduleTime"] = request.scheduleTime();
  }

  if (!!request.hasScope()) {
    query["Scope"] = request.scope();
  }

  if (!!request.hasTagRegexp()) {
    query["TagRegexp"] = request.tagRegexp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateArtifactLifecycleRule"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateArtifactLifecycleRuleResponse>();
}

/**
 * @summary Updates a lifecycle management rule of an artifact.
 *
 * @param request UpdateArtifactLifecycleRuleRequest
 * @return UpdateArtifactLifecycleRuleResponse
 */
UpdateArtifactLifecycleRuleResponse Client::updateArtifactLifecycleRule(const UpdateArtifactLifecycleRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateArtifactLifecycleRuleWithOptions(request, runtime);
}

/**
 * @summary Updates an artifact subscription rule.
 *
 * @param request UpdateArtifactSubscriptionRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateArtifactSubscriptionRuleResponse
 */
UpdateArtifactSubscriptionRuleResponse Client::updateArtifactSubscriptionRuleWithOptions(const UpdateArtifactSubscriptionRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccelerate()) {
    query["Accelerate"] = request.accelerate();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNamespaceName()) {
    query["NamespaceName"] = request.namespaceName();
  }

  if (!!request.hasOverride()) {
    query["Override"] = request.override();
  }

  if (!!request.hasPlatform()) {
    query["Platform"] = request.platform();
  }

  if (!!request.hasRepoName()) {
    query["RepoName"] = request.repoName();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.ruleId();
  }

  if (!!request.hasSourceNamespaceName()) {
    query["SourceNamespaceName"] = request.sourceNamespaceName();
  }

  if (!!request.hasSourceProvider()) {
    query["SourceProvider"] = request.sourceProvider();
  }

  if (!!request.hasSourceRepoName()) {
    query["SourceRepoName"] = request.sourceRepoName();
  }

  if (!!request.hasTagCount()) {
    query["TagCount"] = request.tagCount();
  }

  if (!!request.hasTagRegexp()) {
    query["TagRegexp"] = request.tagRegexp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateArtifactSubscriptionRule"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateArtifactSubscriptionRuleResponse>();
}

/**
 * @summary Updates an artifact subscription rule.
 *
 * @param request UpdateArtifactSubscriptionRuleRequest
 * @return UpdateArtifactSubscriptionRuleResponse
 */
UpdateArtifactSubscriptionRuleResponse Client::updateArtifactSubscriptionRule(const UpdateArtifactSubscriptionRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateArtifactSubscriptionRuleWithOptions(request, runtime);
}

/**
 * @summary Updates the information about a delivery chain, such as the node execution sequence of the delivery chain.
 *
 * @param request UpdateChainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateChainResponse
 */
UpdateChainResponse Client::updateChainWithOptions(const UpdateChainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChainConfig()) {
    query["ChainConfig"] = request.chainConfig();
  }

  if (!!request.hasChainId()) {
    query["ChainId"] = request.chainId();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasScopeExclude()) {
    query["ScopeExclude"] = request.scopeExclude();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateChain"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateChainResponse>();
}

/**
 * @summary Updates the information about a delivery chain, such as the node execution sequence of the delivery chain.
 *
 * @param request UpdateChainRequest
 * @return UpdateChainResponse
 */
UpdateChainResponse Client::updateChain(const UpdateChainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateChainWithOptions(request, runtime);
}

/**
 * @summary Updates a chart namespace.
 *
 * @param request UpdateChartNamespaceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateChartNamespaceResponse
 */
UpdateChartNamespaceResponse Client::updateChartNamespaceWithOptions(const UpdateChartNamespaceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoCreateRepo()) {
    query["AutoCreateRepo"] = request.autoCreateRepo();
  }

  if (!!request.hasDefaultRepoType()) {
    query["DefaultRepoType"] = request.defaultRepoType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNamespaceName()) {
    query["NamespaceName"] = request.namespaceName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateChartNamespace"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateChartNamespaceResponse>();
}

/**
 * @summary Updates a chart namespace.
 *
 * @param request UpdateChartNamespaceRequest
 * @return UpdateChartNamespaceResponse
 */
UpdateChartNamespaceResponse Client::updateChartNamespace(const UpdateChartNamespaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateChartNamespaceWithOptions(request, runtime);
}

/**
 * @summary Updates a chart repository of a Container Registry instance.
 *
 * @param request UpdateChartRepositoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateChartRepositoryResponse
 */
UpdateChartRepositoryResponse Client::updateChartRepositoryWithOptions(const UpdateChartRepositoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRepoName()) {
    query["RepoName"] = request.repoName();
  }

  if (!!request.hasRepoNamespaceName()) {
    query["RepoNamespaceName"] = request.repoNamespaceName();
  }

  if (!!request.hasRepoType()) {
    query["RepoType"] = request.repoType();
  }

  if (!!request.hasSummary()) {
    query["Summary"] = request.summary();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateChartRepository"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateChartRepositoryResponse>();
}

/**
 * @summary Updates a chart repository of a Container Registry instance.
 *
 * @param request UpdateChartRepositoryRequest
 * @return UpdateChartRepositoryResponse
 */
UpdateChartRepositoryResponse Client::updateChartRepository(const UpdateChartRepositoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateChartRepositoryWithOptions(request, runtime);
}

/**
 * @summary Updates an event notification rule.
 *
 * @param tmpReq UpdateEventCenterRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateEventCenterRuleResponse
 */
UpdateEventCenterRuleResponse Client::updateEventCenterRuleWithOptions(const UpdateEventCenterRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateEventCenterRuleShrinkRequest request = UpdateEventCenterRuleShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasNamespaces()) {
    request.setNamespacesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.namespaces(), "Namespaces", "json"));
  }

  if (!!tmpReq.hasRepoNames()) {
    request.setRepoNamesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.repoNames(), "RepoNames", "json"));
  }

  json query = {};
  if (!!request.hasEventChannel()) {
    query["EventChannel"] = request.eventChannel();
  }

  if (!!request.hasEventConfig()) {
    query["EventConfig"] = request.eventConfig();
  }

  if (!!request.hasEventScope()) {
    query["EventScope"] = request.eventScope();
  }

  if (!!request.hasEventType()) {
    query["EventType"] = request.eventType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNamespacesShrink()) {
    query["Namespaces"] = request.namespacesShrink();
  }

  if (!!request.hasRepoNamesShrink()) {
    query["RepoNames"] = request.repoNamesShrink();
  }

  if (!!request.hasRepoTagFilterPattern()) {
    query["RepoTagFilterPattern"] = request.repoTagFilterPattern();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.ruleId();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.ruleName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateEventCenterRule"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateEventCenterRuleResponse>();
}

/**
 * @summary Updates an event notification rule.
 *
 * @param request UpdateEventCenterRuleRequest
 * @return UpdateEventCenterRuleResponse
 */
UpdateEventCenterRuleResponse Client::updateEventCenterRule(const UpdateEventCenterRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateEventCenterRuleWithOptions(request, runtime);
}

/**
 * @summary Updates the status of an instance endpoint.
 *
 * @param request UpdateInstanceEndpointStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateInstanceEndpointStatusResponse
 */
UpdateInstanceEndpointStatusResponse Client::updateInstanceEndpointStatusWithOptions(const UpdateInstanceEndpointStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnable()) {
    query["Enable"] = request.enable();
  }

  if (!!request.hasEndpointType()) {
    query["EndpointType"] = request.endpointType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasModuleName()) {
    query["ModuleName"] = request.moduleName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateInstanceEndpointStatus"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateInstanceEndpointStatusResponse>();
}

/**
 * @summary Updates the status of an instance endpoint.
 *
 * @param request UpdateInstanceEndpointStatusRequest
 * @return UpdateInstanceEndpointStatusResponse
 */
UpdateInstanceEndpointStatusResponse Client::updateInstanceEndpointStatus(const UpdateInstanceEndpointStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateInstanceEndpointStatusWithOptions(request, runtime);
}

/**
 * @summary Updates a namespace.
 *
 * @param tmpReq UpdateNamespaceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateNamespaceResponse
 */
UpdateNamespaceResponse Client::updateNamespaceWithOptions(const UpdateNamespaceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateNamespaceShrinkRequest request = UpdateNamespaceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDefaultRepoConfiguration()) {
    request.setDefaultRepoConfigurationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.defaultRepoConfiguration(), "DefaultRepoConfiguration", "json"));
  }

  json query = {};
  if (!!request.hasAutoCreateRepo()) {
    query["AutoCreateRepo"] = request.autoCreateRepo();
  }

  if (!!request.hasDefaultRepoConfigurationShrink()) {
    query["DefaultRepoConfiguration"] = request.defaultRepoConfigurationShrink();
  }

  if (!!request.hasDefaultRepoType()) {
    query["DefaultRepoType"] = request.defaultRepoType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNamespaceName()) {
    query["NamespaceName"] = request.namespaceName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateNamespace"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateNamespaceResponse>();
}

/**
 * @summary Updates a namespace.
 *
 * @param request UpdateNamespaceRequest
 * @return UpdateNamespaceResponse
 */
UpdateNamespaceResponse Client::updateNamespace(const UpdateNamespaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateNamespaceWithOptions(request, runtime);
}

/**
 * @summary Updates an image building rule for a repository.
 *
 * @param request UpdateRepoBuildRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateRepoBuildRuleResponse
 */
UpdateRepoBuildRuleResponse Client::updateRepoBuildRuleWithOptions(const UpdateRepoBuildRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBuildArgs()) {
    query["BuildArgs"] = request.buildArgs();
  }

  if (!!request.hasBuildRuleId()) {
    query["BuildRuleId"] = request.buildRuleId();
  }

  if (!!request.hasDockerfileLocation()) {
    query["DockerfileLocation"] = request.dockerfileLocation();
  }

  if (!!request.hasDockerfileName()) {
    query["DockerfileName"] = request.dockerfileName();
  }

  if (!!request.hasImageTag()) {
    query["ImageTag"] = request.imageTag();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPlatforms()) {
    query["Platforms"] = request.platforms();
  }

  if (!!request.hasPushName()) {
    query["PushName"] = request.pushName();
  }

  if (!!request.hasPushType()) {
    query["PushType"] = request.pushType();
  }

  if (!!request.hasRepoId()) {
    query["RepoId"] = request.repoId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateRepoBuildRule"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateRepoBuildRuleResponse>();
}

/**
 * @summary Updates an image building rule for a repository.
 *
 * @param request UpdateRepoBuildRuleRequest
 * @return UpdateRepoBuildRuleResponse
 */
UpdateRepoBuildRuleResponse Client::updateRepoBuildRule(const UpdateRepoBuildRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateRepoBuildRuleWithOptions(request, runtime);
}

/**
 * @summary Updates the URL of the source code repository that is bound to an image repository.
 *
 * @param request UpdateRepoSourceCodeRepoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateRepoSourceCodeRepoResponse
 */
UpdateRepoSourceCodeRepoResponse Client::updateRepoSourceCodeRepoWithOptions(const UpdateRepoSourceCodeRepoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoBuild()) {
    query["AutoBuild"] = request.autoBuild();
  }

  if (!!request.hasCodeRepoId()) {
    query["CodeRepoId"] = request.codeRepoId();
  }

  if (!!request.hasCodeRepoName()) {
    query["CodeRepoName"] = request.codeRepoName();
  }

  if (!!request.hasCodeRepoNamespaceName()) {
    query["CodeRepoNamespaceName"] = request.codeRepoNamespaceName();
  }

  if (!!request.hasCodeRepoType()) {
    query["CodeRepoType"] = request.codeRepoType();
  }

  if (!!request.hasDisableCacheBuild()) {
    query["DisableCacheBuild"] = request.disableCacheBuild();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasOverseaBuild()) {
    query["OverseaBuild"] = request.overseaBuild();
  }

  if (!!request.hasRepoId()) {
    query["RepoId"] = request.repoId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateRepoSourceCodeRepo"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateRepoSourceCodeRepoResponse>();
}

/**
 * @summary Updates the URL of the source code repository that is bound to an image repository.
 *
 * @param request UpdateRepoSourceCodeRepoRequest
 * @return UpdateRepoSourceCodeRepoResponse
 */
UpdateRepoSourceCodeRepoResponse Client::updateRepoSourceCodeRepo(const UpdateRepoSourceCodeRepoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateRepoSourceCodeRepoWithOptions(request, runtime);
}

/**
 * @summary Updates a trigger of an image repository.
 *
 * @param request UpdateRepoTriggerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateRepoTriggerResponse
 */
UpdateRepoTriggerResponse Client::updateRepoTriggerWithOptions(const UpdateRepoTriggerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRepoId()) {
    query["RepoId"] = request.repoId();
  }

  if (!!request.hasTriggerId()) {
    query["TriggerId"] = request.triggerId();
  }

  if (!!request.hasTriggerName()) {
    query["TriggerName"] = request.triggerName();
  }

  if (!!request.hasTriggerTag()) {
    query["TriggerTag"] = request.triggerTag();
  }

  if (!!request.hasTriggerType()) {
    query["TriggerType"] = request.triggerType();
  }

  if (!!request.hasTriggerUrl()) {
    query["TriggerUrl"] = request.triggerUrl();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateRepoTrigger"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateRepoTriggerResponse>();
}

/**
 * @summary Updates a trigger of an image repository.
 *
 * @param request UpdateRepoTriggerRequest
 * @return UpdateRepoTriggerResponse
 */
UpdateRepoTriggerResponse Client::updateRepoTrigger(const UpdateRepoTriggerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateRepoTriggerWithOptions(request, runtime);
}

/**
 * @summary The ID of the request.
 *
 * @param request UpdateRepositoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateRepositoryResponse
 */
UpdateRepositoryResponse Client::updateRepositoryWithOptions(const UpdateRepositoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDetail()) {
    query["Detail"] = request.detail();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRepoId()) {
    query["RepoId"] = request.repoId();
  }

  if (!!request.hasRepoName()) {
    query["RepoName"] = request.repoName();
  }

  if (!!request.hasRepoNamespaceName()) {
    query["RepoNamespaceName"] = request.repoNamespaceName();
  }

  if (!!request.hasRepoType()) {
    query["RepoType"] = request.repoType();
  }

  if (!!request.hasSummary()) {
    query["Summary"] = request.summary();
  }

  if (!!request.hasTagImmutability()) {
    query["TagImmutability"] = request.tagImmutability();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateRepository"},
    {"version" , "2018-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateRepositoryResponse>();
}

/**
 * @summary The ID of the request.
 *
 * @param request UpdateRepositoryRequest
 * @return UpdateRepositoryResponse
 */
UpdateRepositoryResponse Client::updateRepository(const UpdateRepositoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateRepositoryWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Cr20181201