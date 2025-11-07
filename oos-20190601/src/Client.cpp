#include <darabonba/Core.hpp>
#include <alibabacloud/Oos20190601.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::Oos20190601::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace Oos20190601
{

AlibabaCloud::Oos20190601::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  checkConfig(config);
  this->_endpoint = getEndpoint("oos", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 分析仓库
 *
 * @param request AnalyzeGitRepositoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AnalyzeGitRepositoryResponse
 */
AnalyzeGitRepositoryResponse Client::analyzeGitRepositoryWithOptions(const AnalyzeGitRepositoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBranch()) {
    query["Branch"] = request.branch();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasOrgId()) {
    query["OrgId"] = request.orgId();
  }

  if (!!request.hasOwner()) {
    query["Owner"] = request.owner();
  }

  if (!!request.hasPlatform()) {
    query["Platform"] = request.platform();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRepoFullName()) {
    query["RepoFullName"] = request.repoFullName();
  }

  if (!!request.hasRepoId()) {
    query["RepoId"] = request.repoId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AnalyzeGitRepository"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AnalyzeGitRepositoryResponse>();
}

/**
 * @summary 分析仓库
 *
 * @param request AnalyzeGitRepositoryRequest
 * @return AnalyzeGitRepositoryResponse
 */
AnalyzeGitRepositoryResponse Client::analyzeGitRepository(const AnalyzeGitRepositoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return analyzeGitRepositoryWithOptions(request, runtime);
}

/**
 * @summary Cancels an execution.
 *
 * @param request CancelExecutionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelExecutionResponse
 */
CancelExecutionResponse Client::cancelExecutionWithOptions(const CancelExecutionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasExecutionId()) {
    query["ExecutionId"] = request.executionId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CancelExecution"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelExecutionResponse>();
}

/**
 * @summary Cancels an execution.
 *
 * @param request CancelExecutionRequest
 * @return CancelExecutionResponse
 */
CancelExecutionResponse Client::cancelExecution(const CancelExecutionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelExecutionWithOptions(request, runtime);
}

/**
 * @summary Modifies the resource group to which a cloud resource belongs.
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
    {"version" , "2019-06-01"},
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
 * @summary Modifies the resource group to which a cloud resource belongs.
 *
 * @param request ChangeResourceGroupRequest
 * @return ChangeResourceGroupResponse
 */
ChangeResourceGroupResponse Client::changeResourceGroup(const ChangeResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return changeResourceGroupWithOptions(request, runtime);
}

/**
 * @summary 检测仓库中文件是否存在
 *
 * @param request CheckGitRepoFileExistsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckGitRepoFileExistsResponse
 */
CheckGitRepoFileExistsResponse Client::checkGitRepoFileExistsWithOptions(const CheckGitRepoFileExistsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBranch()) {
    query["Branch"] = request.branch();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasFilePath()) {
    query["FilePath"] = request.filePath();
  }

  if (!!request.hasOrgId()) {
    query["OrgId"] = request.orgId();
  }

  if (!!request.hasOwner()) {
    query["Owner"] = request.owner();
  }

  if (!!request.hasPlatform()) {
    query["Platform"] = request.platform();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRepoFullName()) {
    query["RepoFullName"] = request.repoFullName();
  }

  if (!!request.hasRepoId()) {
    query["RepoId"] = request.repoId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckGitRepoFileExists"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckGitRepoFileExistsResponse>();
}

/**
 * @summary 检测仓库中文件是否存在
 *
 * @param request CheckGitRepoFileExistsRequest
 * @return CheckGitRepoFileExistsResponse
 */
CheckGitRepoFileExistsResponse Client::checkGitRepoFileExists(const CheckGitRepoFileExistsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkGitRepoFileExistsWithOptions(request, runtime);
}

/**
 * @summary 检测仓库是否存在
 *
 * @param request CheckGitRepositoryExistsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckGitRepositoryExistsResponse
 */
CheckGitRepositoryExistsResponse Client::checkGitRepositoryExistsWithOptions(const CheckGitRepositoryExistsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasOrgId()) {
    query["OrgId"] = request.orgId();
  }

  if (!!request.hasOwner()) {
    query["Owner"] = request.owner();
  }

  if (!!request.hasPlatform()) {
    query["Platform"] = request.platform();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRepoFullName()) {
    query["RepoFullName"] = request.repoFullName();
  }

  if (!!request.hasRepoId()) {
    query["RepoId"] = request.repoId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckGitRepositoryExists"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckGitRepositoryExistsResponse>();
}

/**
 * @summary 检测仓库是否存在
 *
 * @param request CheckGitRepositoryExistsRequest
 * @return CheckGitRepositoryExistsResponse
 */
CheckGitRepositoryExistsResponse Client::checkGitRepositoryExists(const CheckGitRepositoryExistsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkGitRepositoryExistsWithOptions(request, runtime);
}

/**
 * @summary Continues deploying an application group when an error occurs for calling the DeployApplicationGroup operation. You can call this operation only for the applications which reside in the China (Hangzhou) region. Use an endpoint of the China (Hangzhou) region.
 *
 * @param request ContinueDeployApplicationGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ContinueDeployApplicationGroupResponse
 */
ContinueDeployApplicationGroupResponse Client::continueDeployApplicationGroupWithOptions(const ContinueDeployApplicationGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationName()) {
    query["ApplicationName"] = request.applicationName();
  }

  if (!!request.hasDeployParameters()) {
    query["DeployParameters"] = request.deployParameters();
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
    {"action" , "ContinueDeployApplicationGroup"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ContinueDeployApplicationGroupResponse>();
}

/**
 * @summary Continues deploying an application group when an error occurs for calling the DeployApplicationGroup operation. You can call this operation only for the applications which reside in the China (Hangzhou) region. Use an endpoint of the China (Hangzhou) region.
 *
 * @param request ContinueDeployApplicationGroupRequest
 * @return ContinueDeployApplicationGroupResponse
 */
ContinueDeployApplicationGroupResponse Client::continueDeployApplicationGroup(const ContinueDeployApplicationGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return continueDeployApplicationGroupWithOptions(request, runtime);
}

/**
 * @summary Creates an application. You can call this operation only for the applications that reside in the China (Hangzhou) region. Use an endpoint of the China (Hangzhou) region.
 *
 * @param tmpReq CreateApplicationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateApplicationResponse
 */
CreateApplicationResponse Client::createApplicationWithOptions(const CreateApplicationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateApplicationShrinkRequest request = CreateApplicationShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAlarmConfig()) {
    request.setAlarmConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.alarmConfig(), "AlarmConfig", "json"));
  }

  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tags(), "Tags", "json"));
  }

  json query = {};
  if (!!request.hasAlarmConfigShrink()) {
    query["AlarmConfig"] = request.alarmConfigShrink();
  }

  if (!!request.hasApplicationSource()) {
    query["ApplicationSource"] = request.applicationSource();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
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

  if (!!request.hasServiceId()) {
    query["ServiceId"] = request.serviceId();
  }

  if (!!request.hasTagsShrink()) {
    query["Tags"] = request.tagsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateApplication"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateApplicationResponse>();
}

/**
 * @summary Creates an application. You can call this operation only for the applications that reside in the China (Hangzhou) region. Use an endpoint of the China (Hangzhou) region.
 *
 * @param request CreateApplicationRequest
 * @return CreateApplicationResponse
 */
CreateApplicationResponse Client::createApplication(const CreateApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createApplicationWithOptions(request, runtime);
}

/**
 * @summary Creates an application group. You can call this operation only for the application groups that reside in the China (Hangzhou) region. Use an endpoint of the China (Hangzhou) region.
 *
 * @param request CreateApplicationGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateApplicationGroupResponse
 */
CreateApplicationGroupResponse Client::createApplicationGroupWithOptions(const CreateApplicationGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationName()) {
    query["ApplicationName"] = request.applicationName();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasCmsGroupId()) {
    query["CmsGroupId"] = request.cmsGroupId();
  }

  if (!!request.hasDeployRegionId()) {
    query["DeployRegionId"] = request.deployRegionId();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasImportTagKey()) {
    query["ImportTagKey"] = request.importTagKey();
  }

  if (!!request.hasImportTagValue()) {
    query["ImportTagValue"] = request.importTagValue();
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
    {"action" , "CreateApplicationGroup"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateApplicationGroupResponse>();
}

/**
 * @summary Creates an application group. You can call this operation only for the application groups that reside in the China (Hangzhou) region. Use an endpoint of the China (Hangzhou) region.
 *
 * @param request CreateApplicationGroupRequest
 * @return CreateApplicationGroupResponse
 */
CreateApplicationGroupResponse Client::createApplicationGroup(const CreateApplicationGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createApplicationGroupWithOptions(request, runtime);
}

/**
 * @summary 创建仓库
 *
 * @param request CreateGitRepositoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateGitRepositoryResponse
 */
CreateGitRepositoryResponse Client::createGitRepositoryWithOptions(const CreateGitRepositoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasIsPrivate()) {
    query["IsPrivate"] = request.isPrivate();
  }

  if (!!request.hasOrgId()) {
    query["OrgId"] = request.orgId();
  }

  if (!!request.hasOwner()) {
    query["Owner"] = request.owner();
  }

  if (!!request.hasPlatform()) {
    query["Platform"] = request.platform();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSourceRepoBranch()) {
    query["SourceRepoBranch"] = request.sourceRepoBranch();
  }

  if (!!request.hasSourceRepoName()) {
    query["SourceRepoName"] = request.sourceRepoName();
  }

  if (!!request.hasSourceRepoOwner()) {
    query["SourceRepoOwner"] = request.sourceRepoOwner();
  }

  if (!!request.hasTargetRepoName()) {
    query["TargetRepoName"] = request.targetRepoName();
  }

  if (!!request.hasTargetRepoOwner()) {
    query["TargetRepoOwner"] = request.targetRepoOwner();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateGitRepository"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateGitRepositoryResponse>();
}

/**
 * @summary 创建仓库
 *
 * @param request CreateGitRepositoryRequest
 * @return CreateGitRepositoryResponse
 */
CreateGitRepositoryResponse Client::createGitRepository(const CreateGitRepositoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createGitRepositoryWithOptions(request, runtime);
}

/**
 * @summary Creates an O\\\\\\\\\\\\&M Item.
 *
 * @param tmpReq CreateOpsItemRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateOpsItemResponse
 */
CreateOpsItemResponse Client::createOpsItemWithOptions(const CreateOpsItemRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateOpsItemShrinkRequest request = CreateOpsItemShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tags(), "Tags", "json"));
  }

  json query = {};
  if (!!request.hasCategory()) {
    query["Category"] = request.category();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDedupString()) {
    query["DedupString"] = request.dedupString();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasPriority()) {
    query["Priority"] = request.priority();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasResources()) {
    query["Resources"] = request.resources();
  }

  if (!!request.hasSeverity()) {
    query["Severity"] = request.severity();
  }

  if (!!request.hasSolutions()) {
    query["Solutions"] = request.solutions();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.source();
  }

  if (!!request.hasTagsShrink()) {
    query["Tags"] = request.tagsShrink();
  }

  if (!!request.hasTitle()) {
    query["Title"] = request.title();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateOpsItem"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateOpsItemResponse>();
}

/**
 * @summary Creates an O\\\\\\\\\\\\&M Item.
 *
 * @param request CreateOpsItemRequest
 * @return CreateOpsItemResponse
 */
CreateOpsItemResponse Client::createOpsItem(const CreateOpsItemRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createOpsItemWithOptions(request, runtime);
}

/**
 * @summary Creates a common parameter.
 *
 * @param tmpReq CreateParameterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateParameterResponse
 */
CreateParameterResponse Client::createParameterWithOptions(const CreateParameterRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateParameterShrinkRequest request = CreateParameterShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tags(), "Tags", "json"));
  }

  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasConstraints()) {
    query["Constraints"] = request.constraints();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
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

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  if (!!request.hasValue()) {
    query["Value"] = request.value();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateParameter"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateParameterResponse>();
}

/**
 * @summary Creates a common parameter.
 *
 * @param request CreateParameterRequest
 * @return CreateParameterResponse
 */
CreateParameterResponse Client::createParameter(const CreateParameterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createParameterWithOptions(request, runtime);
}

/**
 * @summary Creates a patch baseline.
 *
 * @param tmpReq CreatePatchBaselineRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePatchBaselineResponse
 */
CreatePatchBaselineResponse Client::createPatchBaselineWithOptions(const CreatePatchBaselineRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreatePatchBaselineShrinkRequest request = CreatePatchBaselineShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasApprovedPatches()) {
    request.setApprovedPatchesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.approvedPatches(), "ApprovedPatches", "json"));
  }

  if (!!tmpReq.hasRejectedPatches()) {
    request.setRejectedPatchesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.rejectedPatches(), "RejectedPatches", "json"));
  }

  if (!!tmpReq.hasSources()) {
    request.setSourcesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.sources(), "Sources", "json"));
  }

  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tags(), "Tags", "json"));
  }

  json query = {};
  if (!!request.hasApprovalRules()) {
    query["ApprovalRules"] = request.approvalRules();
  }

  if (!!request.hasApprovedPatchesShrink()) {
    query["ApprovedPatches"] = request.approvedPatchesShrink();
  }

  if (!!request.hasApprovedPatchesEnableNonSecurity()) {
    query["ApprovedPatchesEnableNonSecurity"] = request.approvedPatchesEnableNonSecurity();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasOperationSystem()) {
    query["OperationSystem"] = request.operationSystem();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRejectedPatchesShrink()) {
    query["RejectedPatches"] = request.rejectedPatchesShrink();
  }

  if (!!request.hasRejectedPatchesAction()) {
    query["RejectedPatchesAction"] = request.rejectedPatchesAction();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSourcesShrink()) {
    query["Sources"] = request.sourcesShrink();
  }

  if (!!request.hasTagsShrink()) {
    query["Tags"] = request.tagsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreatePatchBaseline"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePatchBaselineResponse>();
}

/**
 * @summary Creates a patch baseline.
 *
 * @param request CreatePatchBaselineRequest
 * @return CreatePatchBaselineResponse
 */
CreatePatchBaselineResponse Client::createPatchBaseline(const CreatePatchBaselineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPatchBaselineWithOptions(request, runtime);
}

/**
 * @summary Creates an encryption parameter. Make sure that you have the permissions to call this operation.
 *
 * @param tmpReq CreateSecretParameterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSecretParameterResponse
 */
CreateSecretParameterResponse Client::createSecretParameterWithOptions(const CreateSecretParameterRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateSecretParameterShrinkRequest request = CreateSecretParameterShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tags(), "Tags", "json"));
  }

  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasConstraints()) {
    query["Constraints"] = request.constraints();
  }

  if (!!request.hasDKMSInstanceId()) {
    query["DKMSInstanceId"] = request.DKMSInstanceId();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasKeyId()) {
    query["KeyId"] = request.keyId();
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

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  if (!!request.hasValue()) {
    query["Value"] = request.value();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateSecretParameter"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSecretParameterResponse>();
}

/**
 * @summary Creates an encryption parameter. Make sure that you have the permissions to call this operation.
 *
 * @param request CreateSecretParameterRequest
 * @return CreateSecretParameterResponse
 */
CreateSecretParameterResponse Client::createSecretParameter(const CreateSecretParameterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSecretParameterWithOptions(request, runtime);
}

/**
 * @summary Creates a desired-state configuration.
 *
 * @param tmpReq CreateStateConfigurationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateStateConfigurationResponse
 */
CreateStateConfigurationResponse Client::createStateConfigurationWithOptions(const CreateStateConfigurationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateStateConfigurationShrinkRequest request = CreateStateConfigurationShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tags(), "Tags", "json"));
  }

  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasConfigureMode()) {
    query["ConfigureMode"] = request.configureMode();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasParameters()) {
    query["Parameters"] = request.parameters();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasScheduleExpression()) {
    query["ScheduleExpression"] = request.scheduleExpression();
  }

  if (!!request.hasScheduleType()) {
    query["ScheduleType"] = request.scheduleType();
  }

  if (!!request.hasTagsShrink()) {
    query["Tags"] = request.tagsShrink();
  }

  if (!!request.hasTargets()) {
    query["Targets"] = request.targets();
  }

  if (!!request.hasTemplateName()) {
    query["TemplateName"] = request.templateName();
  }

  if (!!request.hasTemplateVersion()) {
    query["TemplateVersion"] = request.templateVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateStateConfiguration"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateStateConfigurationResponse>();
}

/**
 * @summary Creates a desired-state configuration.
 *
 * @param request CreateStateConfigurationRequest
 * @return CreateStateConfigurationResponse
 */
CreateStateConfigurationResponse Client::createStateConfiguration(const CreateStateConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createStateConfigurationWithOptions(request, runtime);
}

/**
 * @summary Creates a template.
 *
 * @param tmpReq CreateTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTemplateResponse
 */
CreateTemplateResponse Client::createTemplateWithOptions(const CreateTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateTemplateShrinkRequest request = CreateTemplateShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tags(), "Tags", "json"));
  }

  json query = {};
  if (!!request.hasContent()) {
    query["Content"] = request.content();
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

  if (!!request.hasTemplateName()) {
    query["TemplateName"] = request.templateName();
  }

  if (!!request.hasVersionName()) {
    query["VersionName"] = request.versionName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateTemplate"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTemplateResponse>();
}

/**
 * @summary Creates a template.
 *
 * @param request CreateTemplateRequest
 * @return CreateTemplateResponse
 */
CreateTemplateResponse Client::createTemplate(const CreateTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTemplateWithOptions(request, runtime);
}

/**
 * @summary Deletes an application. You can call this operation only for the applications that reside in the China (Hangzhou) region. Use an endpoint of the China (Hangzhou) region.
 *
 * @param request DeleteApplicationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteApplicationResponse
 */
DeleteApplicationResponse Client::deleteApplicationWithOptions(const DeleteApplicationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasForce()) {
    query["Force"] = request.force();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRetainResource()) {
    query["RetainResource"] = request.retainResource();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteApplication"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteApplicationResponse>();
}

/**
 * @summary Deletes an application. You can call this operation only for the applications that reside in the China (Hangzhou) region. Use an endpoint of the China (Hangzhou) region.
 *
 * @param request DeleteApplicationRequest
 * @return DeleteApplicationResponse
 */
DeleteApplicationResponse Client::deleteApplication(const DeleteApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteApplicationWithOptions(request, runtime);
}

/**
 * @summary Deletes an application group. You can call this operation only for the application groups which reside in the China (Hangzhou) region. Use an endpoint of the China (Hangzhou) region.
 *
 * @param request DeleteApplicationGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteApplicationGroupResponse
 */
DeleteApplicationGroupResponse Client::deleteApplicationGroupWithOptions(const DeleteApplicationGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationName()) {
    query["ApplicationName"] = request.applicationName();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRetainResource()) {
    query["RetainResource"] = request.retainResource();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteApplicationGroup"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteApplicationGroupResponse>();
}

/**
 * @summary Deletes an application group. You can call this operation only for the application groups which reside in the China (Hangzhou) region. Use an endpoint of the China (Hangzhou) region.
 *
 * @param request DeleteApplicationGroupRequest
 * @return DeleteApplicationGroupResponse
 */
DeleteApplicationGroupResponse Client::deleteApplicationGroup(const DeleteApplicationGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteApplicationGroupWithOptions(request, runtime);
}

/**
 * @summary Deletes multiple executions.
 *
 * @param request DeleteExecutionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteExecutionsResponse
 */
DeleteExecutionsResponse Client::deleteExecutionsWithOptions(const DeleteExecutionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasExecutionIds()) {
    query["ExecutionIds"] = request.executionIds();
  }

  if (!!request.hasForce()) {
    query["Force"] = request.force();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteExecutions"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteExecutionsResponse>();
}

/**
 * @summary Deletes multiple executions.
 *
 * @param request DeleteExecutionsRequest
 * @return DeleteExecutionsResponse
 */
DeleteExecutionsResponse Client::deleteExecutions(const DeleteExecutionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteExecutionsWithOptions(request, runtime);
}

/**
 * @summary Deletes O\\\\\\&M Items.
 *
 * @param request DeleteOpsItemsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteOpsItemsResponse
 */
DeleteOpsItemsResponse Client::deleteOpsItemsWithOptions(const DeleteOpsItemsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOpsItemIds()) {
    query["OpsItemIds"] = request.opsItemIds();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteOpsItems"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteOpsItemsResponse>();
}

/**
 * @summary Deletes O\\\\\\&M Items.
 *
 * @param request DeleteOpsItemsRequest
 * @return DeleteOpsItemsResponse
 */
DeleteOpsItemsResponse Client::deleteOpsItems(const DeleteOpsItemsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteOpsItemsWithOptions(request, runtime);
}

/**
 * @summary Deletes a common parameter.
 *
 * @param request DeleteParameterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteParameterResponse
 */
DeleteParameterResponse Client::deleteParameterWithOptions(const DeleteParameterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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
    {"action" , "DeleteParameter"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteParameterResponse>();
}

/**
 * @summary Deletes a common parameter.
 *
 * @param request DeleteParameterRequest
 * @return DeleteParameterResponse
 */
DeleteParameterResponse Client::deleteParameter(const DeleteParameterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteParameterWithOptions(request, runtime);
}

/**
 * @summary Deletes a patch baseline.
 *
 * @param request DeletePatchBaselineRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePatchBaselineResponse
 */
DeletePatchBaselineResponse Client::deletePatchBaselineWithOptions(const DeletePatchBaselineRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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
    {"action" , "DeletePatchBaseline"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeletePatchBaselineResponse>();
}

/**
 * @summary Deletes a patch baseline.
 *
 * @param request DeletePatchBaselineRequest
 * @return DeletePatchBaselineResponse
 */
DeletePatchBaselineResponse Client::deletePatchBaseline(const DeletePatchBaselineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deletePatchBaselineWithOptions(request, runtime);
}

/**
 * @summary Deletes an encryption parameter. Make sure that you have the permissions to call the DeleteSecret operation before you call this operation.
 *
 * @param request DeleteSecretParameterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSecretParameterResponse
 */
DeleteSecretParameterResponse Client::deleteSecretParameterWithOptions(const DeleteSecretParameterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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
    {"action" , "DeleteSecretParameter"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSecretParameterResponse>();
}

/**
 * @summary Deletes an encryption parameter. Make sure that you have the permissions to call the DeleteSecret operation before you call this operation.
 *
 * @param request DeleteSecretParameterRequest
 * @return DeleteSecretParameterResponse
 */
DeleteSecretParameterResponse Client::deleteSecretParameter(const DeleteSecretParameterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSecretParameterWithOptions(request, runtime);
}

/**
 * @summary Deletes multiple desired-state configurations at a time.
 *
 * @param request DeleteStateConfigurationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteStateConfigurationsResponse
 */
DeleteStateConfigurationsResponse Client::deleteStateConfigurationsWithOptions(const DeleteStateConfigurationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasStateConfigurationIds()) {
    query["StateConfigurationIds"] = request.stateConfigurationIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteStateConfigurations"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteStateConfigurationsResponse>();
}

/**
 * @summary Deletes multiple desired-state configurations at a time.
 *
 * @param request DeleteStateConfigurationsRequest
 * @return DeleteStateConfigurationsResponse
 */
DeleteStateConfigurationsResponse Client::deleteStateConfigurations(const DeleteStateConfigurationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteStateConfigurationsWithOptions(request, runtime);
}

/**
 * @summary Deletes a template.
 *
 * @param request DeleteTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteTemplateResponse
 */
DeleteTemplateResponse Client::deleteTemplateWithOptions(const DeleteTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoDeleteExecutions()) {
    query["AutoDeleteExecutions"] = request.autoDeleteExecutions();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasTemplateName()) {
    query["TemplateName"] = request.templateName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteTemplate"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteTemplateResponse>();
}

/**
 * @summary Deletes a template.
 *
 * @param request DeleteTemplateRequest
 * @return DeleteTemplateResponse
 */
DeleteTemplateResponse Client::deleteTemplate(const DeleteTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteTemplateWithOptions(request, runtime);
}

/**
 * @summary Deletes multiple templates.
 *
 * @param request DeleteTemplatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteTemplatesResponse
 */
DeleteTemplatesResponse Client::deleteTemplatesWithOptions(const DeleteTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoDeleteExecutions()) {
    query["AutoDeleteExecutions"] = request.autoDeleteExecutions();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasTemplateNames()) {
    query["TemplateNames"] = request.templateNames();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteTemplates"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteTemplatesResponse>();
}

/**
 * @summary Deletes multiple templates.
 *
 * @param request DeleteTemplatesRequest
 * @return DeleteTemplatesResponse
 */
DeleteTemplatesResponse Client::deleteTemplates(const DeleteTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteTemplatesWithOptions(request, runtime);
}

/**
 * @summary Deploys an application group. You can call this operation only for the applications which reside in the China (Hangzhou) region. Use an endpoint of the China (Hangzhou) region.
 *
 * @param request DeployApplicationGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeployApplicationGroupResponse
 */
DeployApplicationGroupResponse Client::deployApplicationGroupWithOptions(const DeployApplicationGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationName()) {
    query["ApplicationName"] = request.applicationName();
  }

  if (!!request.hasDeployParameters()) {
    query["DeployParameters"] = request.deployParameters();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRevisionId()) {
    query["RevisionId"] = request.revisionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeployApplicationGroup"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeployApplicationGroupResponse>();
}

/**
 * @summary Deploys an application group. You can call this operation only for the applications which reside in the China (Hangzhou) region. Use an endpoint of the China (Hangzhou) region.
 *
 * @param request DeployApplicationGroupRequest
 * @return DeployApplicationGroupResponse
 */
DeployApplicationGroupResponse Client::deployApplicationGroup(const DeployApplicationGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deployApplicationGroupWithOptions(request, runtime);
}

/**
 * @summary 查询应用分组资源成本
 *
 * @param request DescribeApplicationGroupBillRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApplicationGroupBillResponse
 */
DescribeApplicationGroupBillResponse Client::describeApplicationGroupBillWithOptions(const DescribeApplicationGroupBillRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationName()) {
    query["ApplicationName"] = request.applicationName();
  }

  if (!!request.hasBillingCycle()) {
    query["BillingCycle"] = request.billingCycle();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeApplicationGroupBill"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeApplicationGroupBillResponse>();
}

/**
 * @summary 查询应用分组资源成本
 *
 * @param request DescribeApplicationGroupBillRequest
 * @return DescribeApplicationGroupBillResponse
 */
DescribeApplicationGroupBillResponse Client::describeApplicationGroupBill(const DescribeApplicationGroupBillRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeApplicationGroupBillWithOptions(request, runtime);
}

/**
 * @summary Queries supported regions.
 *
 * @param request DescribeRegionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegionsWithOptions(const DescribeRegionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.acceptLanguage();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRegions"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRegionsResponse>();
}

/**
 * @summary Queries supported regions.
 *
 * @param request DescribeRegionsRequest
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegions(const DescribeRegionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRegionsWithOptions(request, runtime);
}

/**
 * @summary Queries the Resource Access Management (RAM) policy required for template execution.
 *
 * @param request GenerateExecutionPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GenerateExecutionPolicyResponse
 */
GenerateExecutionPolicyResponse Client::generateExecutionPolicyWithOptions(const GenerateExecutionPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRamRole()) {
    query["RamRole"] = request.ramRole();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasTemplateContent()) {
    query["TemplateContent"] = request.templateContent();
  }

  if (!!request.hasTemplateName()) {
    query["TemplateName"] = request.templateName();
  }

  if (!!request.hasTemplateVersion()) {
    query["TemplateVersion"] = request.templateVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GenerateExecutionPolicy"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GenerateExecutionPolicyResponse>();
}

/**
 * @summary Queries the Resource Access Management (RAM) policy required for template execution.
 *
 * @param request GenerateExecutionPolicyRequest
 * @return GenerateExecutionPolicyResponse
 */
GenerateExecutionPolicyResponse Client::generateExecutionPolicy(const GenerateExecutionPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return generateExecutionPolicyWithOptions(request, runtime);
}

/**
 * @summary Generates an O\\\\\\&M item.
 *
 * @param request GenerateOpsItemRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GenerateOpsItemResponse
 */
GenerateOpsItemResponse Client::generateOpsItemWithOptions(const GenerateOpsItemRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasConfigurationId()) {
    query["ConfigurationId"] = request.configurationId();
  }

  if (!!request.hasData()) {
    query["Data"] = request.data();
  }

  if (!!request.hasDataSource()) {
    query["DataSource"] = request.dataSource();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GenerateOpsItem"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GenerateOpsItemResponse>();
}

/**
 * @summary Generates an O\\\\\\&M item.
 *
 * @param request GenerateOpsItemRequest
 * @return GenerateOpsItemResponse
 */
GenerateOpsItemResponse Client::generateOpsItem(const GenerateOpsItemRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return generateOpsItemWithOptions(request, runtime);
}

/**
 * @summary Queries the information of an application. You can call this operation only for the applications that reside in the China (Hangzhou) region. Use an endpoint of the China (Hangzhou) region.
 *
 * @param request GetApplicationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetApplicationResponse
 */
GetApplicationResponse Client::getApplicationWithOptions(const GetApplicationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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
    {"action" , "GetApplication"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetApplicationResponse>();
}

/**
 * @summary Queries the information of an application. You can call this operation only for the applications that reside in the China (Hangzhou) region. Use an endpoint of the China (Hangzhou) region.
 *
 * @param request GetApplicationRequest
 * @return GetApplicationResponse
 */
GetApplicationResponse Client::getApplication(const GetApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getApplicationWithOptions(request, runtime);
}

/**
 * @summary Queries the information about an application group. You can call this operation only for the application groups that reside in the China (Hangzhou) region. Use an endpoint of the China (Hangzhou) region.
 *
 * @param request GetApplicationGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetApplicationGroupResponse
 */
GetApplicationGroupResponse Client::getApplicationGroupWithOptions(const GetApplicationGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationName()) {
    query["ApplicationName"] = request.applicationName();
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
    {"action" , "GetApplicationGroup"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetApplicationGroupResponse>();
}

/**
 * @summary Queries the information about an application group. You can call this operation only for the application groups that reside in the China (Hangzhou) region. Use an endpoint of the China (Hangzhou) region.
 *
 * @param request GetApplicationGroupRequest
 * @return GetApplicationGroupResponse
 */
GetApplicationGroupResponse Client::getApplicationGroup(const GetApplicationGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getApplicationGroupWithOptions(request, runtime);
}

/**
 * @summary Queries the information about the template of an execution, including the content of the template.
 *
 * @param request GetExecutionTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetExecutionTemplateResponse
 */
GetExecutionTemplateResponse Client::getExecutionTemplateWithOptions(const GetExecutionTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasExecutionId()) {
    query["ExecutionId"] = request.executionId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetExecutionTemplate"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetExecutionTemplateResponse>();
}

/**
 * @summary Queries the information about the template of an execution, including the content of the template.
 *
 * @param request GetExecutionTemplateRequest
 * @return GetExecutionTemplateResponse
 */
GetExecutionTemplateResponse Client::getExecutionTemplate(const GetExecutionTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getExecutionTemplateWithOptions(request, runtime);
}

/**
 * @summary 查询Git分支详情
 *
 * @param request GetGitBranchRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetGitBranchResponse
 */
GetGitBranchResponse Client::getGitBranchWithOptions(const GetGitBranchRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBranch()) {
    query["Branch"] = request.branch();
  }

  if (!!request.hasOrgId()) {
    query["OrgId"] = request.orgId();
  }

  if (!!request.hasOwner()) {
    query["Owner"] = request.owner();
  }

  if (!!request.hasPlatform()) {
    query["Platform"] = request.platform();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRepoFullName()) {
    query["RepoFullName"] = request.repoFullName();
  }

  if (!!request.hasRepoId()) {
    query["RepoId"] = request.repoId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetGitBranch"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetGitBranchResponse>();
}

/**
 * @summary 查询Git分支详情
 *
 * @param request GetGitBranchRequest
 * @return GetGitBranchResponse
 */
GetGitBranchResponse Client::getGitBranch(const GetGitBranchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getGitBranchWithOptions(request, runtime);
}

/**
 * @summary 查询Git仓库详情
 *
 * @param request GetGitRepositoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetGitRepositoryResponse
 */
GetGitRepositoryResponse Client::getGitRepositoryWithOptions(const GetGitRepositoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrgId()) {
    query["OrgId"] = request.orgId();
  }

  if (!!request.hasOwner()) {
    query["Owner"] = request.owner();
  }

  if (!!request.hasPlatform()) {
    query["Platform"] = request.platform();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRepoFullName()) {
    query["RepoFullName"] = request.repoFullName();
  }

  if (!!request.hasRepoId()) {
    query["RepoId"] = request.repoId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetGitRepository"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetGitRepositoryResponse>();
}

/**
 * @summary 查询Git仓库详情
 *
 * @param request GetGitRepositoryRequest
 * @return GetGitRepositoryResponse
 */
GetGitRepositoryResponse Client::getGitRepository(const GetGitRepositoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getGitRepositoryWithOptions(request, runtime);
}

/**
 * @summary Queries the properties of a configuration list.
 *
 * @param request GetInventorySchemaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInventorySchemaResponse
 */
GetInventorySchemaResponse Client::getInventorySchemaWithOptions(const GetInventorySchemaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAggregator()) {
    query["Aggregator"] = request.aggregator();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasTypeName()) {
    query["TypeName"] = request.typeName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetInventorySchema"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInventorySchemaResponse>();
}

/**
 * @summary Queries the properties of a configuration list.
 *
 * @param request GetInventorySchemaRequest
 * @return GetInventorySchemaResponse
 */
GetInventorySchemaResponse Client::getInventorySchema(const GetInventorySchemaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getInventorySchemaWithOptions(request, runtime);
}

/**
 * @summary Queries the details of an O\\\\\\\\\\\\&M item.
 *
 * @param request GetOpsItemRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetOpsItemResponse
 */
GetOpsItemResponse Client::getOpsItemWithOptions(const GetOpsItemRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOpsItemId()) {
    query["OpsItemId"] = request.opsItemId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetOpsItem"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetOpsItemResponse>();
}

/**
 * @summary Queries the details of an O\\\\\\\\\\\\&M item.
 *
 * @param request GetOpsItemRequest
 * @return GetOpsItemResponse
 */
GetOpsItemResponse Client::getOpsItem(const GetOpsItemRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getOpsItemWithOptions(request, runtime);
}

/**
 * @summary Queries a common parameter and its value.
 *
 * @param request GetParameterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetParameterResponse
 */
GetParameterResponse Client::getParameterWithOptions(const GetParameterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasParameterVersion()) {
    query["ParameterVersion"] = request.parameterVersion();
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
    {"action" , "GetParameter"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetParameterResponse>();
}

/**
 * @summary Queries a common parameter and its value.
 *
 * @param request GetParameterRequest
 * @return GetParameterResponse
 */
GetParameterResponse Client::getParameter(const GetParameterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getParameterWithOptions(request, runtime);
}

/**
 * @summary Queries the information about one or more parameters.
 *
 * @param request GetParametersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetParametersResponse
 */
GetParametersResponse Client::getParametersWithOptions(const GetParametersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNames()) {
    query["Names"] = request.names();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetParameters"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetParametersResponse>();
}

/**
 * @summary Queries the information about one or more parameters.
 *
 * @param request GetParametersRequest
 * @return GetParametersResponse
 */
GetParametersResponse Client::getParameters(const GetParametersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getParametersWithOptions(request, runtime);
}

/**
 * @summary Queries one or more parameters by path.
 *
 * @param request GetParametersByPathRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetParametersByPathResponse
 */
GetParametersByPathResponse Client::getParametersByPathWithOptions(const GetParametersByPathRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasPath()) {
    query["Path"] = request.path();
  }

  if (!!request.hasRecursive()) {
    query["Recursive"] = request.recursive();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetParametersByPath"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetParametersByPathResponse>();
}

/**
 * @summary Queries one or more parameters by path.
 *
 * @param request GetParametersByPathRequest
 * @return GetParametersByPathResponse
 */
GetParametersByPathResponse Client::getParametersByPath(const GetParametersByPathRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getParametersByPathWithOptions(request, runtime);
}

/**
 * @summary Queries the information of a patch baseline.
 *
 * @param request GetPatchBaselineRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPatchBaselineResponse
 */
GetPatchBaselineResponse Client::getPatchBaselineWithOptions(const GetPatchBaselineRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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
    {"action" , "GetPatchBaseline"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPatchBaselineResponse>();
}

/**
 * @summary Queries the information of a patch baseline.
 *
 * @param request GetPatchBaselineRequest
 * @return GetPatchBaselineResponse
 */
GetPatchBaselineResponse Client::getPatchBaseline(const GetPatchBaselineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPatchBaselineWithOptions(request, runtime);
}

/**
 * @summary Queries the information about an encryption parameter, including the parameter value. Make sure that you have the permissions to call the GetSecretValue operation before you call this operation.
 *
 * @param request GetSecretParameterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSecretParameterResponse
 */
GetSecretParameterResponse Client::getSecretParameterWithOptions(const GetSecretParameterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasParameterVersion()) {
    query["ParameterVersion"] = request.parameterVersion();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasWithDecryption()) {
    query["WithDecryption"] = request.withDecryption();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSecretParameter"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSecretParameterResponse>();
}

/**
 * @summary Queries the information about an encryption parameter, including the parameter value. Make sure that you have the permissions to call the GetSecretValue operation before you call this operation.
 *
 * @param request GetSecretParameterRequest
 * @return GetSecretParameterResponse
 */
GetSecretParameterResponse Client::getSecretParameter(const GetSecretParameterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSecretParameterWithOptions(request, runtime);
}

/**
 * @summary Queries the information about one or more encryption parameters. Make sure that you have the permissions to call the GetSecretValue operation before you call this operation.
 *
 * @param request GetSecretParametersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSecretParametersResponse
 */
GetSecretParametersResponse Client::getSecretParametersWithOptions(const GetSecretParametersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNames()) {
    query["Names"] = request.names();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasWithDecryption()) {
    query["WithDecryption"] = request.withDecryption();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSecretParameters"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSecretParametersResponse>();
}

/**
 * @summary Queries the information about one or more encryption parameters. Make sure that you have the permissions to call the GetSecretValue operation before you call this operation.
 *
 * @param request GetSecretParametersRequest
 * @return GetSecretParametersResponse
 */
GetSecretParametersResponse Client::getSecretParameters(const GetSecretParametersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSecretParametersWithOptions(request, runtime);
}

/**
 * @summary Queries encryption parameters by path. Make sure that you have the permissions to call the GetSecretValue operation before you call this operation.
 *
 * @param request GetSecretParametersByPathRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSecretParametersByPathResponse
 */
GetSecretParametersByPathResponse Client::getSecretParametersByPathWithOptions(const GetSecretParametersByPathRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasPath()) {
    query["Path"] = request.path();
  }

  if (!!request.hasRecursive()) {
    query["Recursive"] = request.recursive();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasWithDecryption()) {
    query["WithDecryption"] = request.withDecryption();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSecretParametersByPath"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSecretParametersByPathResponse>();
}

/**
 * @summary Queries encryption parameters by path. Make sure that you have the permissions to call the GetSecretValue operation before you call this operation.
 *
 * @param request GetSecretParametersByPathRequest
 * @return GetSecretParametersByPathResponse
 */
GetSecretParametersByPathResponse Client::getSecretParametersByPath(const GetSecretParametersByPathRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSecretParametersByPathWithOptions(request, runtime);
}

/**
 * @summary Queries the settings of the delivery feature.
 *
 * @param request GetServiceSettingsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetServiceSettingsResponse
 */
GetServiceSettingsResponse Client::getServiceSettingsWithOptions(const GetServiceSettingsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetServiceSettings"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetServiceSettingsResponse>();
}

/**
 * @summary Queries the settings of the delivery feature.
 *
 * @param request GetServiceSettingsRequest
 * @return GetServiceSettingsResponse
 */
GetServiceSettingsResponse Client::getServiceSettings(const GetServiceSettingsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getServiceSettingsWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a template, including the content of the template.
 *
 * @param request GetTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTemplateResponse
 */
GetTemplateResponse Client::getTemplateWithOptions(const GetTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasTemplateName()) {
    query["TemplateName"] = request.templateName();
  }

  if (!!request.hasTemplateVersion()) {
    query["TemplateVersion"] = request.templateVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTemplate"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTemplateResponse>();
}

/**
 * @summary Queries the information about a template, including the content of the template.
 *
 * @param request GetTemplateRequest
 * @return GetTemplateResponse
 */
GetTemplateResponse Client::getTemplate(const GetTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTemplateWithOptions(request, runtime);
}

/**
 * @summary 获取参数可用值
 *
 * @param request GetTemplateParameterConstraintsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTemplateParameterConstraintsResponse
 */
GetTemplateParameterConstraintsResponse Client::getTemplateParameterConstraintsWithOptions(const GetTemplateParameterConstraintsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasParameters()) {
    query["Parameters"] = request.parameters();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasTemplateContent()) {
    query["TemplateContent"] = request.templateContent();
  }

  if (!!request.hasTemplateName()) {
    query["TemplateName"] = request.templateName();
  }

  if (!!request.hasTemplateURL()) {
    query["TemplateURL"] = request.templateURL();
  }

  if (!!request.hasTemplateVersion()) {
    query["TemplateVersion"] = request.templateVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTemplateParameterConstraints"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTemplateParameterConstraintsResponse>();
}

/**
 * @summary 获取参数可用值
 *
 * @param request GetTemplateParameterConstraintsRequest
 * @return GetTemplateParameterConstraintsResponse
 */
GetTemplateParameterConstraintsResponse Client::getTemplateParameterConstraints(const GetTemplateParameterConstraintsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTemplateParameterConstraintsWithOptions(request, runtime);
}

/**
 * @summary Queries the available actions, including atomic actions and cloud product actions.
 *
 * @param request ListActionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListActionsResponse
 */
ListActionsResponse Client::listActionsWithOptions(const ListActionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasOOSActionName()) {
    query["OOSActionName"] = request.OOSActionName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListActions"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListActionsResponse>();
}

/**
 * @summary Queries the available actions, including atomic actions and cloud product actions.
 *
 * @param request ListActionsRequest
 * @return ListActionsResponse
 */
ListActionsResponse Client::listActions(const ListActionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listActionsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of application groups. You can call this operation only for the application groups that reside in the China (Hangzhou) region. Use an endpoint of the China (Hangzhou) region.
 *
 * @param request ListApplicationGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListApplicationGroupsResponse
 */
ListApplicationGroupsResponse Client::listApplicationGroupsWithOptions(const ListApplicationGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationName()) {
    query["ApplicationName"] = request.applicationName();
  }

  if (!!request.hasDeployRegionId()) {
    query["DeployRegionId"] = request.deployRegionId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceProduct()) {
    query["ResourceProduct"] = request.resourceProduct();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListApplicationGroups"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListApplicationGroupsResponse>();
}

/**
 * @summary Queries a list of application groups. You can call this operation only for the application groups that reside in the China (Hangzhou) region. Use an endpoint of the China (Hangzhou) region.
 *
 * @param request ListApplicationGroupsRequest
 * @return ListApplicationGroupsResponse
 */
ListApplicationGroupsResponse Client::listApplicationGroups(const ListApplicationGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listApplicationGroupsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of applications. You can call this operation only for the applications that reside in the China (Hangzhou) region. Use an endpoint of the China (Hangzhou) region.
 *
 * @param tmpReq ListApplicationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListApplicationsResponse
 */
ListApplicationsResponse Client::listApplicationsWithOptions(const ListApplicationsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListApplicationsShrinkRequest request = ListApplicationsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tags(), "Tags", "json"));
  }

  json query = {};
  if (!!request.hasApplicationType()) {
    query["ApplicationType"] = request.applicationType();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasNames()) {
    query["Names"] = request.names();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasTagsShrink()) {
    query["Tags"] = request.tagsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListApplications"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListApplicationsResponse>();
}

/**
 * @summary Queries a list of applications. You can call this operation only for the applications that reside in the China (Hangzhou) region. Use an endpoint of the China (Hangzhou) region.
 *
 * @param request ListApplicationsRequest
 * @return ListApplicationsResponse
 */
ListApplicationsResponse Client::listApplications(const ListApplicationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listApplicationsWithOptions(request, runtime);
}

/**
 * @summary Queries the logs of an execution.
 *
 * @description ****
 *
 * @param request ListExecutionLogsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListExecutionLogsResponse
 */
ListExecutionLogsResponse Client::listExecutionLogsWithOptions(const ListExecutionLogsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasExecutionId()) {
    query["ExecutionId"] = request.executionId();
  }

  if (!!request.hasLogType()) {
    query["LogType"] = request.logType();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasTaskExecutionId()) {
    query["TaskExecutionId"] = request.taskExecutionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListExecutionLogs"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListExecutionLogsResponse>();
}

/**
 * @summary Queries the logs of an execution.
 *
 * @description ****
 *
 * @param request ListExecutionLogsRequest
 * @return ListExecutionLogsResponse
 */
ListExecutionLogsResponse Client::listExecutionLogs(const ListExecutionLogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listExecutionLogsWithOptions(request, runtime);
}

/**
 * @summary Queries high-risk tasks in the execution of a template.
 *
 * @param request ListExecutionRiskyTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListExecutionRiskyTasksResponse
 */
ListExecutionRiskyTasksResponse Client::listExecutionRiskyTasksWithOptions(const ListExecutionRiskyTasksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasTemplateName()) {
    query["TemplateName"] = request.templateName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListExecutionRiskyTasks"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListExecutionRiskyTasksResponse>();
}

/**
 * @summary Queries high-risk tasks in the execution of a template.
 *
 * @param request ListExecutionRiskyTasksRequest
 * @return ListExecutionRiskyTasksResponse
 */
ListExecutionRiskyTasksResponse Client::listExecutionRiskyTasks(const ListExecutionRiskyTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listExecutionRiskyTasksWithOptions(request, runtime);
}

/**
 * @summary Queries executions. Multiple methods are supported to filter executions.
 *
 * @param tmpReq ListExecutionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListExecutionsResponse
 */
ListExecutionsResponse Client::listExecutionsWithOptions(const ListExecutionsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListExecutionsShrinkRequest request = ListExecutionsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tags(), "Tags", "json"));
  }

  json query = {};
  if (!!request.hasCategories()) {
    query["Categories"] = request.categories();
  }

  if (!!request.hasCategory()) {
    query["Category"] = request.category();
  }

  if (!!request.hasDepth()) {
    query["Depth"] = request.depth();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasEndDateAfter()) {
    query["EndDateAfter"] = request.endDateAfter();
  }

  if (!!request.hasEndDateBefore()) {
    query["EndDateBefore"] = request.endDateBefore();
  }

  if (!!request.hasExecutedBy()) {
    query["ExecutedBy"] = request.executedBy();
  }

  if (!!request.hasExecutionId()) {
    query["ExecutionId"] = request.executionId();
  }

  if (!!request.hasIncludeChildExecution()) {
    query["IncludeChildExecution"] = request.includeChildExecution();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasMode()) {
    query["Mode"] = request.mode();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasParentExecutionId()) {
    query["ParentExecutionId"] = request.parentExecutionId();
  }

  if (!!request.hasRamRole()) {
    query["RamRole"] = request.ramRole();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceTemplateName()) {
    query["ResourceTemplateName"] = request.resourceTemplateName();
  }

  if (!!request.hasSortField()) {
    query["SortField"] = request.sortField();
  }

  if (!!request.hasSortOrder()) {
    query["SortOrder"] = request.sortOrder();
  }

  if (!!request.hasStartDateAfter()) {
    query["StartDateAfter"] = request.startDateAfter();
  }

  if (!!request.hasStartDateBefore()) {
    query["StartDateBefore"] = request.startDateBefore();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasTagsShrink()) {
    query["Tags"] = request.tagsShrink();
  }

  if (!!request.hasTemplateName()) {
    query["TemplateName"] = request.templateName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListExecutions"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListExecutionsResponse>();
}

/**
 * @summary Queries executions. Multiple methods are supported to filter executions.
 *
 * @param request ListExecutionsRequest
 * @return ListExecutionsResponse
 */
ListExecutionsResponse Client::listExecutions(const ListExecutionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listExecutionsWithOptions(request, runtime);
}

/**
 * @summary 获取当前阿里云用户已授权在应用管理的托管平台账户
 *
 * @param request ListGitAccountsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListGitAccountsResponse
 */
ListGitAccountsResponse Client::listGitAccountsWithOptions(const ListGitAccountsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasPlatform()) {
    query["Platform"] = request.platform();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRoleName()) {
    query["RoleName"] = request.roleName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListGitAccounts"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListGitAccountsResponse>();
}

/**
 * @summary 获取当前阿里云用户已授权在应用管理的托管平台账户
 *
 * @param request ListGitAccountsRequest
 * @return ListGitAccountsResponse
 */
ListGitAccountsResponse Client::listGitAccounts(const ListGitAccountsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listGitAccountsWithOptions(request, runtime);
}

/**
 * @summary 获取指定Git仓库的所有分支
 *
 * @param request ListGitBranchesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListGitBranchesResponse
 */
ListGitBranchesResponse Client::listGitBranchesWithOptions(const ListGitBranchesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasOrgId()) {
    query["OrgId"] = request.orgId();
  }

  if (!!request.hasOwner()) {
    query["Owner"] = request.owner();
  }

  if (!!request.hasPlatform()) {
    query["Platform"] = request.platform();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRepoFullName()) {
    query["RepoFullName"] = request.repoFullName();
  }

  if (!!request.hasRepoId()) {
    query["RepoId"] = request.repoId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListGitBranches"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListGitBranchesResponse>();
}

/**
 * @summary 获取指定Git仓库的所有分支
 *
 * @param request ListGitBranchesRequest
 * @return ListGitBranchesResponse
 */
ListGitBranchesResponse Client::listGitBranches(const ListGitBranchesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listGitBranchesWithOptions(request, runtime);
}

/**
 * @summary 获取已授权用户的组织
 *
 * @param request ListGitOrganizationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListGitOrganizationsResponse
 */
ListGitOrganizationsResponse Client::listGitOrganizationsWithOptions(const ListGitOrganizationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasOwner()) {
    query["Owner"] = request.owner();
  }

  if (!!request.hasPlatform()) {
    query["Platform"] = request.platform();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListGitOrganizations"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListGitOrganizationsResponse>();
}

/**
 * @summary 获取已授权用户的组织
 *
 * @param request ListGitOrganizationsRequest
 * @return ListGitOrganizationsResponse
 */
ListGitOrganizationsResponse Client::listGitOrganizations(const ListGitOrganizationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listGitOrganizationsWithOptions(request, runtime);
}

/**
 * @summary 查询Git仓库列表
 *
 * @param request ListGitRepositoriesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListGitRepositoriesResponse
 */
ListGitRepositoriesResponse Client::listGitRepositoriesWithOptions(const ListGitRepositoriesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasOrgId()) {
    query["OrgId"] = request.orgId();
  }

  if (!!request.hasOrgName()) {
    query["OrgName"] = request.orgName();
  }

  if (!!request.hasOwner()) {
    query["Owner"] = request.owner();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasPlatform()) {
    query["Platform"] = request.platform();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListGitRepositories"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListGitRepositoriesResponse>();
}

/**
 * @summary 查询Git仓库列表
 *
 * @param request ListGitRepositoriesRequest
 * @return ListGitRepositoriesResponse
 */
ListGitRepositoriesResponse Client::listGitRepositories(const ListGitRepositoriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listGitRepositoriesWithOptions(request, runtime);
}

/**
 * @summary 获取仓库文件与目录信息
 *
 * @param request ListGitRepositoryContentsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListGitRepositoryContentsResponse
 */
ListGitRepositoryContentsResponse Client::listGitRepositoryContentsWithOptions(const ListGitRepositoryContentsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBranch()) {
    query["Branch"] = request.branch();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasContentType()) {
    query["ContentType"] = request.contentType();
  }

  if (!!request.hasOrgId()) {
    query["OrgId"] = request.orgId();
  }

  if (!!request.hasOwner()) {
    query["Owner"] = request.owner();
  }

  if (!!request.hasPath()) {
    query["Path"] = request.path();
  }

  if (!!request.hasPlatform()) {
    query["Platform"] = request.platform();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRepoFullName()) {
    query["RepoFullName"] = request.repoFullName();
  }

  if (!!request.hasRepoId()) {
    query["RepoId"] = request.repoId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListGitRepositoryContents"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListGitRepositoryContentsResponse>();
}

/**
 * @summary 获取仓库文件与目录信息
 *
 * @param request ListGitRepositoryContentsRequest
 * @return ListGitRepositoryContentsResponse
 */
ListGitRepositoryContentsResponse Client::listGitRepositoryContents(const ListGitRepositoryContentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listGitRepositoryContentsWithOptions(request, runtime);
}

/**
 * @summary List Instance Package States
 *
 * @param request ListInstancePackageStatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInstancePackageStatesResponse
 */
ListInstancePackageStatesResponse Client::listInstancePackageStatesWithOptions(const ListInstancePackageStatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasTemplateNames()) {
    query["TemplateNames"] = request.templateNames();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListInstancePackageStates"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInstancePackageStatesResponse>();
}

/**
 * @summary List Instance Package States
 *
 * @param request ListInstancePackageStatesRequest
 * @return ListInstancePackageStatesResponse
 */
ListInstancePackageStatesResponse Client::listInstancePackageStates(const ListInstancePackageStatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listInstancePackageStatesWithOptions(request, runtime);
}

/**
 * @summary Queries the information about the patches of an instance.
 *
 * @param request ListInstancePatchStatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInstancePatchStatesResponse
 */
ListInstancePatchStatesResponse Client::listInstancePatchStatesWithOptions(const ListInstancePatchStatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.instanceIds();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListInstancePatchStates"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInstancePatchStatesResponse>();
}

/**
 * @summary Queries the information about the patches of an instance.
 *
 * @param request ListInstancePatchStatesRequest
 * @return ListInstancePatchStatesResponse
 */
ListInstancePatchStatesResponse Client::listInstancePatchStates(const ListInstancePatchStatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listInstancePatchStatesWithOptions(request, runtime);
}

/**
 * @summary Queries the information about the patches of an instance.
 *
 * @param request ListInstancePatchesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInstancePatchesResponse
 */
ListInstancePatchesResponse Client::listInstancePatchesWithOptions(const ListInstancePatchesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasPatchStatuses()) {
    query["PatchStatuses"] = request.patchStatuses();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListInstancePatches"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInstancePatchesResponse>();
}

/**
 * @summary Queries the information about the patches of an instance.
 *
 * @param request ListInstancePatchesRequest
 * @return ListInstancePatchesResponse
 */
ListInstancePatchesResponse Client::listInstancePatches(const ListInstancePatchesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listInstancePatchesWithOptions(request, runtime);
}

/**
 * @summary Queries the configurations of an Elastic Compute Service (ECS) instance.
 *
 * @param request ListInventoryEntriesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInventoryEntriesResponse
 */
ListInventoryEntriesResponse Client::listInventoryEntriesWithOptions(const ListInventoryEntriesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFilter()) {
    query["Filter"] = request.filter();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasTypeName()) {
    query["TypeName"] = request.typeName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListInventoryEntries"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInventoryEntriesResponse>();
}

/**
 * @summary Queries the configurations of an Elastic Compute Service (ECS) instance.
 *
 * @param request ListInventoryEntriesRequest
 * @return ListInventoryEntriesResponse
 */
ListInventoryEntriesResponse Client::listInventoryEntries(const ListInventoryEntriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listInventoryEntriesWithOptions(request, runtime);
}

/**
 * @summary Queries O\\&M items.
 *
 * @param tmpReq ListOpsItemsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListOpsItemsResponse
 */
ListOpsItemsResponse Client::listOpsItemsWithOptions(const ListOpsItemsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListOpsItemsShrinkRequest request = ListOpsItemsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasResourceTags()) {
    request.setResourceTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.resourceTags(), "ResourceTags", "json"));
  }

  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tags(), "Tags", "json"));
  }

  json query = {};
  if (!!request.hasFilter()) {
    query["Filter"] = request.filter();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceTagsShrink()) {
    query["ResourceTags"] = request.resourceTagsShrink();
  }

  if (!!request.hasTagsShrink()) {
    query["Tags"] = request.tagsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListOpsItems"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListOpsItemsResponse>();
}

/**
 * @summary Queries O\\&M items.
 *
 * @param request ListOpsItemsRequest
 * @return ListOpsItemsResponse
 */
ListOpsItemsResponse Client::listOpsItems(const ListOpsItemsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listOpsItemsWithOptions(request, runtime);
}

/**
 * @summary Queries the versions of a common parameter.
 *
 * @param request ListParameterVersionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListParameterVersionsResponse
 */
ListParameterVersionsResponse Client::listParameterVersionsWithOptions(const ListParameterVersionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasShareType()) {
    query["ShareType"] = request.shareType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListParameterVersions"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListParameterVersionsResponse>();
}

/**
 * @summary Queries the versions of a common parameter.
 *
 * @param request ListParameterVersionsRequest
 * @return ListParameterVersionsResponse
 */
ListParameterVersionsResponse Client::listParameterVersions(const ListParameterVersionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listParameterVersionsWithOptions(request, runtime);
}

/**
 * @summary Queries common parameters. Multiple methods are supported to filter common parameters.
 *
 * @param tmpReq ListParametersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListParametersResponse
 */
ListParametersResponse Client::listParametersWithOptions(const ListParametersRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListParametersShrinkRequest request = ListParametersShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tags(), "Tags", "json"));
  }

  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasPath()) {
    query["Path"] = request.path();
  }

  if (!!request.hasRecursive()) {
    query["Recursive"] = request.recursive();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasShareType()) {
    query["ShareType"] = request.shareType();
  }

  if (!!request.hasSortField()) {
    query["SortField"] = request.sortField();
  }

  if (!!request.hasSortOrder()) {
    query["SortOrder"] = request.sortOrder();
  }

  if (!!request.hasTagsShrink()) {
    query["Tags"] = request.tagsShrink();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListParameters"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListParametersResponse>();
}

/**
 * @summary Queries common parameters. Multiple methods are supported to filter common parameters.
 *
 * @param request ListParametersRequest
 * @return ListParametersResponse
 */
ListParametersResponse Client::listParameters(const ListParametersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listParametersWithOptions(request, runtime);
}

/**
 * @summary Queries a list of patch baselines.
 *
 * @param tmpReq ListPatchBaselinesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPatchBaselinesResponse
 */
ListPatchBaselinesResponse Client::listPatchBaselinesWithOptions(const ListPatchBaselinesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListPatchBaselinesShrinkRequest request = ListPatchBaselinesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasApprovedPatches()) {
    request.setApprovedPatchesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.approvedPatches(), "ApprovedPatches", "json"));
  }

  if (!!tmpReq.hasSources()) {
    request.setSourcesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.sources(), "Sources", "json"));
  }

  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tags(), "Tags", "json"));
  }

  json query = {};
  if (!!request.hasApprovedPatchesShrink()) {
    query["ApprovedPatches"] = request.approvedPatchesShrink();
  }

  if (!!request.hasApprovedPatchesEnableNonSecurity()) {
    query["ApprovedPatchesEnableNonSecurity"] = request.approvedPatchesEnableNonSecurity();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasOperationSystem()) {
    query["OperationSystem"] = request.operationSystem();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasShareType()) {
    query["ShareType"] = request.shareType();
  }

  if (!!request.hasSourcesShrink()) {
    query["Sources"] = request.sourcesShrink();
  }

  if (!!request.hasTagsShrink()) {
    query["Tags"] = request.tagsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPatchBaselines"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPatchBaselinesResponse>();
}

/**
 * @summary Queries a list of patch baselines.
 *
 * @param request ListPatchBaselinesRequest
 * @return ListPatchBaselinesResponse
 */
ListPatchBaselinesResponse Client::listPatchBaselines(const ListPatchBaselinesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPatchBaselinesWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a scheduled execution that involves O&M operations on Elastic Compute Service (ECS) instances.
 *
 * @param request ListResourceExecutionStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListResourceExecutionStatusResponse
 */
ListResourceExecutionStatusResponse Client::listResourceExecutionStatusWithOptions(const ListResourceExecutionStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasExecutionId()) {
    query["ExecutionId"] = request.executionId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListResourceExecutionStatus"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListResourceExecutionStatusResponse>();
}

/**
 * @summary Queries the information about a scheduled execution that involves O&M operations on Elastic Compute Service (ECS) instances.
 *
 * @param request ListResourceExecutionStatusRequest
 * @return ListResourceExecutionStatusResponse
 */
ListResourceExecutionStatusResponse Client::listResourceExecutionStatus(const ListResourceExecutionStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listResourceExecutionStatusWithOptions(request, runtime);
}

/**
 * @summary Queries versions of an encryption parameter.
 *
 * @param request ListSecretParameterVersionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSecretParameterVersionsResponse
 */
ListSecretParameterVersionsResponse Client::listSecretParameterVersionsWithOptions(const ListSecretParameterVersionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasShareType()) {
    query["ShareType"] = request.shareType();
  }

  if (!!request.hasWithDecryption()) {
    query["WithDecryption"] = request.withDecryption();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSecretParameterVersions"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSecretParameterVersionsResponse>();
}

/**
 * @summary Queries versions of an encryption parameter.
 *
 * @param request ListSecretParameterVersionsRequest
 * @return ListSecretParameterVersionsResponse
 */
ListSecretParameterVersionsResponse Client::listSecretParameterVersions(const ListSecretParameterVersionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSecretParameterVersionsWithOptions(request, runtime);
}

/**
 * @summary Queries common parameters. Multiple types of queries are supported.
 *
 * @description Before you call this operation, make sure that you have the permission to manage Key Management Service (KMS) secrets.
 *
 * @param tmpReq ListSecretParametersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSecretParametersResponse
 */
ListSecretParametersResponse Client::listSecretParametersWithOptions(const ListSecretParametersRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListSecretParametersShrinkRequest request = ListSecretParametersShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tags(), "Tags", "json"));
  }

  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasPath()) {
    query["Path"] = request.path();
  }

  if (!!request.hasRecursive()) {
    query["Recursive"] = request.recursive();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSortField()) {
    query["SortField"] = request.sortField();
  }

  if (!!request.hasSortOrder()) {
    query["SortOrder"] = request.sortOrder();
  }

  if (!!request.hasTagsShrink()) {
    query["Tags"] = request.tagsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSecretParameters"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSecretParametersResponse>();
}

/**
 * @summary Queries common parameters. Multiple types of queries are supported.
 *
 * @description Before you call this operation, make sure that you have the permission to manage Key Management Service (KMS) secrets.
 *
 * @param request ListSecretParametersRequest
 * @return ListSecretParametersResponse
 */
ListSecretParametersResponse Client::listSecretParameters(const ListSecretParametersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSecretParametersWithOptions(request, runtime);
}

/**
 * @summary Queries desired-state configurations.
 *
 * @param tmpReq ListStateConfigurationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListStateConfigurationsResponse
 */
ListStateConfigurationsResponse Client::listStateConfigurationsWithOptions(const ListStateConfigurationsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListStateConfigurationsShrinkRequest request = ListStateConfigurationsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tags(), "Tags", "json"));
  }

  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasStateConfigurationIds()) {
    query["StateConfigurationIds"] = request.stateConfigurationIds();
  }

  if (!!request.hasTagsShrink()) {
    query["Tags"] = request.tagsShrink();
  }

  if (!!request.hasTemplateName()) {
    query["TemplateName"] = request.templateName();
  }

  if (!!request.hasTemplateVersion()) {
    query["TemplateVersion"] = request.templateVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListStateConfigurations"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListStateConfigurationsResponse>();
}

/**
 * @summary Queries desired-state configurations.
 *
 * @param request ListStateConfigurationsRequest
 * @return ListStateConfigurationsResponse
 */
ListStateConfigurationsResponse Client::listStateConfigurations(const ListStateConfigurationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listStateConfigurationsWithOptions(request, runtime);
}

/**
 * @summary Queries the tags.
 *
 * @param request ListTagKeysRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagKeysResponse
 */
ListTagKeysResponse Client::listTagKeysWithOptions(const ListTagKeysRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTagKeys"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTagKeysResponse>();
}

/**
 * @summary Queries the tags.
 *
 * @param request ListTagKeysRequest
 * @return ListTagKeysResponse
 */
ListTagKeysResponse Client::listTagKeys(const ListTagKeysRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagKeysWithOptions(request, runtime);
}

/**
 * @summary Queries the tags that are added to one or more resources.
 *
 * @param tmpReq ListTagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResourcesWithOptions(const ListTagResourcesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListTagResourcesShrinkRequest request = ListTagResourcesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasResourceIds()) {
    request.setResourceIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.resourceIds(), "ResourceIds", "json"));
  }

  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tags(), "Tags", "json"));
  }

  json query = {};
  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceIdsShrink()) {
    query["ResourceIds"] = request.resourceIdsShrink();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasTagsShrink()) {
    query["Tags"] = request.tagsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTagResources"},
    {"version" , "2019-06-01"},
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
 * @summary Queries the tags that are added to one or more resources.
 *
 * @param request ListTagResourcesRequest
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResources(const ListTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagResourcesWithOptions(request, runtime);
}

/**
 * @summary Queries the values of created tags.
 *
 * @param request ListTagValuesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagValuesResponse
 */
ListTagValuesResponse Client::listTagValuesWithOptions(const ListTagValuesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKey()) {
    query["Key"] = request.key();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTagValues"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTagValuesResponse>();
}

/**
 * @summary Queries the values of created tags.
 *
 * @param request ListTagValuesRequest
 * @return ListTagValuesResponse
 */
ListTagValuesResponse Client::listTagValues(const ListTagValuesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagValuesWithOptions(request, runtime);
}

/**
 * @summary Queries task executions. Multiple methods are supported to filter task executions.
 *
 * @param request ListTaskExecutionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTaskExecutionsResponse
 */
ListTaskExecutionsResponse Client::listTaskExecutionsWithOptions(const ListTaskExecutionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndDateAfter()) {
    query["EndDateAfter"] = request.endDateAfter();
  }

  if (!!request.hasEndDateBefore()) {
    query["EndDateBefore"] = request.endDateBefore();
  }

  if (!!request.hasExecutionId()) {
    query["ExecutionId"] = request.executionId();
  }

  if (!!request.hasIncludeChildTaskExecution()) {
    query["IncludeChildTaskExecution"] = request.includeChildTaskExecution();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasParentTaskExecutionId()) {
    query["ParentTaskExecutionId"] = request.parentTaskExecutionId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSortField()) {
    query["SortField"] = request.sortField();
  }

  if (!!request.hasSortOrder()) {
    query["SortOrder"] = request.sortOrder();
  }

  if (!!request.hasStartDateAfter()) {
    query["StartDateAfter"] = request.startDateAfter();
  }

  if (!!request.hasStartDateBefore()) {
    query["StartDateBefore"] = request.startDateBefore();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasTaskAction()) {
    query["TaskAction"] = request.taskAction();
  }

  if (!!request.hasTaskExecutionId()) {
    query["TaskExecutionId"] = request.taskExecutionId();
  }

  if (!!request.hasTaskName()) {
    query["TaskName"] = request.taskName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTaskExecutions"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTaskExecutionsResponse>();
}

/**
 * @summary Queries task executions. Multiple methods are supported to filter task executions.
 *
 * @param request ListTaskExecutionsRequest
 * @return ListTaskExecutionsResponse
 */
ListTaskExecutionsResponse Client::listTaskExecutions(const ListTaskExecutionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTaskExecutionsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of versions of a template.
 *
 * @param request ListTemplateVersionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTemplateVersionsResponse
 */
ListTemplateVersionsResponse Client::listTemplateVersionsWithOptions(const ListTemplateVersionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasShareType()) {
    query["ShareType"] = request.shareType();
  }

  if (!!request.hasTemplateName()) {
    query["TemplateName"] = request.templateName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTemplateVersions"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTemplateVersionsResponse>();
}

/**
 * @summary Queries a list of versions of a template.
 *
 * @param request ListTemplateVersionsRequest
 * @return ListTemplateVersionsResponse
 */
ListTemplateVersionsResponse Client::listTemplateVersions(const ListTemplateVersionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTemplateVersionsWithOptions(request, runtime);
}

/**
 * @summary Queries templates. Multiple methods are supported to filter templates.
 *
 * @param tmpReq ListTemplatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTemplatesResponse
 */
ListTemplatesResponse Client::listTemplatesWithOptions(const ListTemplatesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListTemplatesShrinkRequest request = ListTemplatesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tags(), "Tags", "json"));
  }

  json query = {};
  if (!!request.hasCategory()) {
    query["Category"] = request.category();
  }

  if (!!request.hasCreatedBy()) {
    query["CreatedBy"] = request.createdBy();
  }

  if (!!request.hasCreatedDateAfter()) {
    query["CreatedDateAfter"] = request.createdDateAfter();
  }

  if (!!request.hasCreatedDateBefore()) {
    query["CreatedDateBefore"] = request.createdDateBefore();
  }

  if (!!request.hasHasTrigger()) {
    query["HasTrigger"] = request.hasTrigger();
  }

  if (!!request.hasIsExample()) {
    query["IsExample"] = request.isExample();
  }

  if (!!request.hasIsFavorite()) {
    query["IsFavorite"] = request.isFavorite();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasShareType()) {
    query["ShareType"] = request.shareType();
  }

  if (!!request.hasSortField()) {
    query["SortField"] = request.sortField();
  }

  if (!!request.hasSortOrder()) {
    query["SortOrder"] = request.sortOrder();
  }

  if (!!request.hasTagsShrink()) {
    query["Tags"] = request.tagsShrink();
  }

  if (!!request.hasTemplateFormat()) {
    query["TemplateFormat"] = request.templateFormat();
  }

  if (!!request.hasTemplateName()) {
    query["TemplateName"] = request.templateName();
  }

  if (!!request.hasTemplateType()) {
    query["TemplateType"] = request.templateType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTemplates"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTemplatesResponse>();
}

/**
 * @summary Queries templates. Multiple methods are supported to filter templates.
 *
 * @param request ListTemplatesRequest
 * @return ListTemplatesResponse
 */
ListTemplatesResponse Client::listTemplates(const ListTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTemplatesWithOptions(request, runtime);
}

/**
 * @summary Notifies an execution in the Waiting state of the subsequent operations.
 *
 * @description You can call this operation to notify an execution in the following scenarios:
 * *   If a template contains a special task, such as an approval task, the Operation Orchestration Service (OOS) execution engine sets the execution state to Waiting when the approval task is being run. You can call this operation to specify whether to continue the execution.
 * *   If you perform debugging in the debug mode, you can call this operation to notify the execution of the subsequent operations after the execution is created or a task is complete.
 * *   If a high-risk operation task waits for approval, you can call this operation to specify whether to continue the execution.
 *
 * @param request NotifyExecutionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return NotifyExecutionResponse
 */
NotifyExecutionResponse Client::notifyExecutionWithOptions(const NotifyExecutionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasExecutionId()) {
    query["ExecutionId"] = request.executionId();
  }

  if (!!request.hasExecutionStatus()) {
    query["ExecutionStatus"] = request.executionStatus();
  }

  if (!!request.hasLoopItem()) {
    query["LoopItem"] = request.loopItem();
  }

  if (!!request.hasNotifyNote()) {
    query["NotifyNote"] = request.notifyNote();
  }

  if (!!request.hasNotifyType()) {
    query["NotifyType"] = request.notifyType();
  }

  if (!!request.hasParameters()) {
    query["Parameters"] = request.parameters();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasTaskExecutionId()) {
    query["TaskExecutionId"] = request.taskExecutionId();
  }

  if (!!request.hasTaskExecutionIds()) {
    query["TaskExecutionIds"] = request.taskExecutionIds();
  }

  if (!!request.hasTaskName()) {
    query["TaskName"] = request.taskName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "NotifyExecution"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<NotifyExecutionResponse>();
}

/**
 * @summary Notifies an execution in the Waiting state of the subsequent operations.
 *
 * @description You can call this operation to notify an execution in the following scenarios:
 * *   If a template contains a special task, such as an approval task, the Operation Orchestration Service (OOS) execution engine sets the execution state to Waiting when the approval task is being run. You can call this operation to specify whether to continue the execution.
 * *   If you perform debugging in the debug mode, you can call this operation to notify the execution of the subsequent operations after the execution is created or a task is complete.
 * *   If a high-risk operation task waits for approval, you can call this operation to specify whether to continue the execution.
 *
 * @param request NotifyExecutionRequest
 * @return NotifyExecutionResponse
 */
NotifyExecutionResponse Client::notifyExecution(const NotifyExecutionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return notifyExecutionWithOptions(request, runtime);
}

/**
 * @summary Registers the default patch baseline.
 *
 * @param request RegisterDefaultPatchBaselineRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RegisterDefaultPatchBaselineResponse
 */
RegisterDefaultPatchBaselineResponse Client::registerDefaultPatchBaselineWithOptions(const RegisterDefaultPatchBaselineRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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
    {"action" , "RegisterDefaultPatchBaseline"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RegisterDefaultPatchBaselineResponse>();
}

/**
 * @summary Registers the default patch baseline.
 *
 * @param request RegisterDefaultPatchBaselineRequest
 * @return RegisterDefaultPatchBaselineResponse
 */
RegisterDefaultPatchBaselineResponse Client::registerDefaultPatchBaseline(const RegisterDefaultPatchBaselineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return registerDefaultPatchBaselineWithOptions(request, runtime);
}

/**
 * @summary Queries the details or aggregate information of a configuration inventory.
 *
 * @param request SearchInventoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchInventoryResponse
 */
SearchInventoryResponse Client::searchInventoryWithOptions(const SearchInventoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAggregator()) {
    query["Aggregator"] = request.aggregator();
  }

  if (!!request.hasFilter()) {
    query["Filter"] = request.filter();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SearchInventory"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SearchInventoryResponse>();
}

/**
 * @summary Queries the details or aggregate information of a configuration inventory.
 *
 * @param request SearchInventoryRequest
 * @return SearchInventoryResponse
 */
SearchInventoryResponse Client::searchInventory(const SearchInventoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return searchInventoryWithOptions(request, runtime);
}

/**
 * @summary Enables or disables the feature of delivering template execution records and sets the storage location.
 *
 * @param request SetServiceSettingsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetServiceSettingsResponse
 */
SetServiceSettingsResponse Client::setServiceSettingsWithOptions(const SetServiceSettingsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeliveryOssBucketName()) {
    query["DeliveryOssBucketName"] = request.deliveryOssBucketName();
  }

  if (!!request.hasDeliveryOssEnabled()) {
    query["DeliveryOssEnabled"] = request.deliveryOssEnabled();
  }

  if (!!request.hasDeliveryOssKeyPrefix()) {
    query["DeliveryOssKeyPrefix"] = request.deliveryOssKeyPrefix();
  }

  if (!!request.hasDeliverySlsEnabled()) {
    query["DeliverySlsEnabled"] = request.deliverySlsEnabled();
  }

  if (!!request.hasDeliverySlsProjectName()) {
    query["DeliverySlsProjectName"] = request.deliverySlsProjectName();
  }

  if (!!request.hasRdcEnterpriseId()) {
    query["RdcEnterpriseId"] = request.rdcEnterpriseId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetServiceSettings"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetServiceSettingsResponse>();
}

/**
 * @summary Enables or disables the feature of delivering template execution records and sets the storage location.
 *
 * @param request SetServiceSettingsRequest
 * @return SetServiceSettingsResponse
 */
SetServiceSettingsResponse Client::setServiceSettings(const SetServiceSettingsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setServiceSettingsWithOptions(request, runtime);
}

/**
 * @summary Starts an execution.
 *
 * @param tmpReq StartExecutionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartExecutionResponse
 */
StartExecutionResponse Client::startExecutionWithOptions(const StartExecutionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  StartExecutionShrinkRequest request = StartExecutionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tags(), "Tags", "json"));
  }

  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasLoopMode()) {
    query["LoopMode"] = request.loopMode();
  }

  if (!!request.hasMode()) {
    query["Mode"] = request.mode();
  }

  if (!!request.hasParameters()) {
    query["Parameters"] = request.parameters();
  }

  if (!!request.hasParentExecutionId()) {
    query["ParentExecutionId"] = request.parentExecutionId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSafetyCheck()) {
    query["SafetyCheck"] = request.safetyCheck();
  }

  if (!!request.hasTagsShrink()) {
    query["Tags"] = request.tagsShrink();
  }

  if (!!request.hasTemplateContent()) {
    query["TemplateContent"] = request.templateContent();
  }

  if (!!request.hasTemplateName()) {
    query["TemplateName"] = request.templateName();
  }

  if (!!request.hasTemplateURL()) {
    query["TemplateURL"] = request.templateURL();
  }

  if (!!request.hasTemplateVersion()) {
    query["TemplateVersion"] = request.templateVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartExecution"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartExecutionResponse>();
}

/**
 * @summary Starts an execution.
 *
 * @param request StartExecutionRequest
 * @return StartExecutionResponse
 */
StartExecutionResponse Client::startExecution(const StartExecutionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startExecutionWithOptions(request, runtime);
}

/**
 * @summary Adds tags to one or more resources.
 *
 * @param tmpReq TagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResourcesWithOptions(const TagResourcesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  TagResourcesShrinkRequest request = TagResourcesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasResourceIds()) {
    request.setResourceIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.resourceIds(), "ResourceIds", "json"));
  }

  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tags(), "Tags", "json"));
  }

  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceIdsShrink()) {
    query["ResourceIds"] = request.resourceIdsShrink();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasTagsShrink()) {
    query["Tags"] = request.tagsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TagResources"},
    {"version" , "2019-06-01"},
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
 * @summary Adds tags to one or more resources.
 *
 * @param request TagResourcesRequest
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResources(const TagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tagResourcesWithOptions(request, runtime);
}

/**
 * @summary Debugs a started execution that contains an event trigger task or alert trigger task. If the operation is called, a message body is sent to the event trigger task or alert trigger task. After the trigger task receives the message body, the trigger task generates a new child execution.
 *
 * @param request TriggerExecutionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TriggerExecutionResponse
 */
TriggerExecutionResponse Client::triggerExecutionWithOptions(const TriggerExecutionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasContent()) {
    query["Content"] = request.content();
  }

  if (!!request.hasExecutionId()) {
    query["ExecutionId"] = request.executionId();
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
    {"action" , "TriggerExecution"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TriggerExecutionResponse>();
}

/**
 * @summary Debugs a started execution that contains an event trigger task or alert trigger task. If the operation is called, a message body is sent to the event trigger task or alert trigger task. After the trigger task receives the message body, the trigger task generates a new child execution.
 *
 * @param request TriggerExecutionRequest
 * @return TriggerExecutionResponse
 */
TriggerExecutionResponse Client::triggerExecution(const TriggerExecutionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return triggerExecutionWithOptions(request, runtime);
}

/**
 * @summary Removes tags from one or more resources.
 *
 * @param tmpReq UntagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResourcesWithOptions(const UntagResourcesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UntagResourcesShrinkRequest request = UntagResourcesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasResourceIds()) {
    request.setResourceIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.resourceIds(), "ResourceIds", "json"));
  }

  if (!!tmpReq.hasTagKeys()) {
    request.setTagKeysShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tagKeys(), "TagKeys", "json"));
  }

  json query = {};
  if (!!request.hasAll()) {
    query["All"] = request.all();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceIdsShrink()) {
    query["ResourceIds"] = request.resourceIdsShrink();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasTagKeysShrink()) {
    query["TagKeys"] = request.tagKeysShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UntagResources"},
    {"version" , "2019-06-01"},
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
 * @summary Removes tags from one or more resources.
 *
 * @param request UntagResourcesRequest
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResources(const UntagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return untagResourcesWithOptions(request, runtime);
}

/**
 * @summary Updates an application. You can call this operation only for the applications that reside in the China (Hangzhou) region. Use an endpoint of the China (Hangzhou) region.
 *
 * @param tmpReq UpdateApplicationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateApplicationResponse
 */
UpdateApplicationResponse Client::updateApplicationWithOptions(const UpdateApplicationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateApplicationShrinkRequest request = UpdateApplicationShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAlarmConfig()) {
    request.setAlarmConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.alarmConfig(), "AlarmConfig", "json"));
  }

  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tags(), "Tags", "json"));
  }

  json query = {};
  if (!!request.hasAlarmConfigShrink()) {
    query["AlarmConfig"] = request.alarmConfigShrink();
  }

  if (!!request.hasDeleteAlarmRulesBeforeUpdate()) {
    query["DeleteAlarmRulesBeforeUpdate"] = request.deleteAlarmRulesBeforeUpdate();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasTagsShrink()) {
    query["Tags"] = request.tagsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateApplication"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateApplicationResponse>();
}

/**
 * @summary Updates an application. You can call this operation only for the applications that reside in the China (Hangzhou) region. Use an endpoint of the China (Hangzhou) region.
 *
 * @param request UpdateApplicationRequest
 * @return UpdateApplicationResponse
 */
UpdateApplicationResponse Client::updateApplication(const UpdateApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateApplicationWithOptions(request, runtime);
}

/**
 * @summary Updates the information of an application group. You can call this operation only for the application groups that reside in the China (Hangzhou) region. Use an endpoint of the China (Hangzhou) region.
 *
 * @param tmpReq UpdateApplicationGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateApplicationGroupResponse
 */
UpdateApplicationGroupResponse Client::updateApplicationGroupWithOptions(const UpdateApplicationGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateApplicationGroupShrinkRequest request = UpdateApplicationGroupShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasParameters()) {
    request.setParametersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.parameters(), "Parameters", "json"));
  }

  json query = {};
  if (!!request.hasApplicationName()) {
    query["ApplicationName"] = request.applicationName();
  }

  if (!!request.hasDeployedRevisionId()) {
    query["DeployedRevisionId"] = request.deployedRevisionId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasNewName()) {
    query["NewName"] = request.newName();
  }

  if (!!request.hasOperationName()) {
    query["OperationName"] = request.operationName();
  }

  if (!!request.hasParametersShrink()) {
    query["Parameters"] = request.parametersShrink();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateApplicationGroup"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateApplicationGroupResponse>();
}

/**
 * @summary Updates the information of an application group. You can call this operation only for the application groups that reside in the China (Hangzhou) region. Use an endpoint of the China (Hangzhou) region.
 *
 * @param request UpdateApplicationGroupRequest
 * @return UpdateApplicationGroupResponse
 */
UpdateApplicationGroupResponse Client::updateApplicationGroup(const UpdateApplicationGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateApplicationGroupWithOptions(request, runtime);
}

/**
 * @summary Update executions that are in Running or Waiting status.
 *
 * @param request UpdateExecutionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateExecutionResponse
 */
UpdateExecutionResponse Client::updateExecutionWithOptions(const UpdateExecutionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasExecutionId()) {
    query["ExecutionId"] = request.executionId();
  }

  if (!!request.hasParameters()) {
    query["Parameters"] = request.parameters();
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
    {"action" , "UpdateExecution"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateExecutionResponse>();
}

/**
 * @summary Update executions that are in Running or Waiting status.
 *
 * @param request UpdateExecutionRequest
 * @return UpdateExecutionResponse
 */
UpdateExecutionResponse Client::updateExecution(const UpdateExecutionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateExecutionWithOptions(request, runtime);
}

/**
 * @summary Updates the installed extensions of an instance.
 *
 * @param tmpReq UpdateInstancePackageStateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateInstancePackageStateResponse
 */
UpdateInstancePackageStateResponse Client::updateInstancePackageStateWithOptions(const UpdateInstancePackageStateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateInstancePackageStateShrinkRequest request = UpdateInstancePackageStateShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasParameters()) {
    request.setParametersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.parameters(), "Parameters", "json"));
  }

  json query = {};
  if (!!request.hasConfigurationInfo()) {
    query["ConfigurationInfo"] = request.configurationInfo();
  }

  if (!!request.hasConfigureAction()) {
    query["ConfigureAction"] = request.configureAction();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasParametersShrink()) {
    query["Parameters"] = request.parametersShrink();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasTemplateName()) {
    query["TemplateName"] = request.templateName();
  }

  if (!!request.hasTemplateVersion()) {
    query["TemplateVersion"] = request.templateVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateInstancePackageState"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateInstancePackageStateResponse>();
}

/**
 * @summary Updates the installed extensions of an instance.
 *
 * @param request UpdateInstancePackageStateRequest
 * @return UpdateInstancePackageStateResponse
 */
UpdateInstancePackageStateResponse Client::updateInstancePackageState(const UpdateInstancePackageStateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateInstancePackageStateWithOptions(request, runtime);
}

/**
 * @summary Modifies an O\\\\\\\\\\\\&M item.
 *
 * @param tmpReq UpdateOpsItemRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateOpsItemResponse
 */
UpdateOpsItemResponse Client::updateOpsItemWithOptions(const UpdateOpsItemRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateOpsItemShrinkRequest request = UpdateOpsItemShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tags(), "Tags", "json"));
  }

  json query = {};
  if (!!request.hasCategory()) {
    query["Category"] = request.category();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDedupString()) {
    query["DedupString"] = request.dedupString();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasOpsItemId()) {
    query["OpsItemId"] = request.opsItemId();
  }

  if (!!request.hasPriority()) {
    query["Priority"] = request.priority();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasResources()) {
    query["Resources"] = request.resources();
  }

  if (!!request.hasSeverity()) {
    query["Severity"] = request.severity();
  }

  if (!!request.hasSolutions()) {
    query["Solutions"] = request.solutions();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.source();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasTagsShrink()) {
    query["Tags"] = request.tagsShrink();
  }

  if (!!request.hasTitle()) {
    query["Title"] = request.title();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateOpsItem"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateOpsItemResponse>();
}

/**
 * @summary Modifies an O\\\\\\\\\\\\&M item.
 *
 * @param request UpdateOpsItemRequest
 * @return UpdateOpsItemResponse
 */
UpdateOpsItemResponse Client::updateOpsItem(const UpdateOpsItemRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateOpsItemWithOptions(request, runtime);
}

/**
 * @summary Updates a common parameter.
 *
 * @param request UpdateParameterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateParameterResponse
 */
UpdateParameterResponse Client::updateParameterWithOptions(const UpdateParameterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.description();
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

  if (!!request.hasTags()) {
    query["Tags"] = request.tags();
  }

  if (!!request.hasValue()) {
    query["Value"] = request.value();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateParameter"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateParameterResponse>();
}

/**
 * @summary Updates a common parameter.
 *
 * @param request UpdateParameterRequest
 * @return UpdateParameterResponse
 */
UpdateParameterResponse Client::updateParameter(const UpdateParameterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateParameterWithOptions(request, runtime);
}

/**
 * @summary Updates a patch baseline.
 *
 * @param tmpReq UpdatePatchBaselineRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdatePatchBaselineResponse
 */
UpdatePatchBaselineResponse Client::updatePatchBaselineWithOptions(const UpdatePatchBaselineRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdatePatchBaselineShrinkRequest request = UpdatePatchBaselineShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasApprovedPatches()) {
    request.setApprovedPatchesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.approvedPatches(), "ApprovedPatches", "json"));
  }

  if (!!tmpReq.hasRejectedPatches()) {
    request.setRejectedPatchesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.rejectedPatches(), "RejectedPatches", "json"));
  }

  if (!!tmpReq.hasSources()) {
    request.setSourcesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.sources(), "Sources", "json"));
  }

  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tags(), "Tags", "json"));
  }

  json query = {};
  if (!!request.hasApprovalRules()) {
    query["ApprovalRules"] = request.approvalRules();
  }

  if (!!request.hasApprovedPatchesShrink()) {
    query["ApprovedPatches"] = request.approvedPatchesShrink();
  }

  if (!!request.hasApprovedPatchesEnableNonSecurity()) {
    query["ApprovedPatchesEnableNonSecurity"] = request.approvedPatchesEnableNonSecurity();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRejectedPatchesShrink()) {
    query["RejectedPatches"] = request.rejectedPatchesShrink();
  }

  if (!!request.hasRejectedPatchesAction()) {
    query["RejectedPatchesAction"] = request.rejectedPatchesAction();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSourcesShrink()) {
    query["Sources"] = request.sourcesShrink();
  }

  if (!!request.hasTagsShrink()) {
    query["Tags"] = request.tagsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdatePatchBaseline"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdatePatchBaselineResponse>();
}

/**
 * @summary Updates a patch baseline.
 *
 * @param request UpdatePatchBaselineRequest
 * @return UpdatePatchBaselineResponse
 */
UpdatePatchBaselineResponse Client::updatePatchBaseline(const UpdatePatchBaselineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updatePatchBaselineWithOptions(request, runtime);
}

/**
 * @summary Updates an encryption parameter.
 *
 * @param tmpReq UpdateSecretParameterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSecretParameterResponse
 */
UpdateSecretParameterResponse Client::updateSecretParameterWithOptions(const UpdateSecretParameterRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateSecretParameterShrinkRequest request = UpdateSecretParameterShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tags(), "Tags", "json"));
  }

  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.description();
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

  if (!!request.hasValue()) {
    query["Value"] = request.value();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateSecretParameter"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSecretParameterResponse>();
}

/**
 * @summary Updates an encryption parameter.
 *
 * @param request UpdateSecretParameterRequest
 * @return UpdateSecretParameterResponse
 */
UpdateSecretParameterResponse Client::updateSecretParameter(const UpdateSecretParameterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateSecretParameterWithOptions(request, runtime);
}

/**
 * @summary Updates a desired-state configuration.
 *
 * @param tmpReq UpdateStateConfigurationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateStateConfigurationResponse
 */
UpdateStateConfigurationResponse Client::updateStateConfigurationWithOptions(const UpdateStateConfigurationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateStateConfigurationShrinkRequest request = UpdateStateConfigurationShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasParameters()) {
    request.setParametersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.parameters(), "Parameters", "json"));
  }

  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tags(), "Tags", "json"));
  }

  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasConfigureMode()) {
    query["ConfigureMode"] = request.configureMode();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasParametersShrink()) {
    query["Parameters"] = request.parametersShrink();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasScheduleExpression()) {
    query["ScheduleExpression"] = request.scheduleExpression();
  }

  if (!!request.hasScheduleType()) {
    query["ScheduleType"] = request.scheduleType();
  }

  if (!!request.hasStateConfigurationId()) {
    query["StateConfigurationId"] = request.stateConfigurationId();
  }

  if (!!request.hasTagsShrink()) {
    query["Tags"] = request.tagsShrink();
  }

  if (!!request.hasTargets()) {
    query["Targets"] = request.targets();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateStateConfiguration"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateStateConfigurationResponse>();
}

/**
 * @summary Updates a desired-state configuration.
 *
 * @param request UpdateStateConfigurationRequest
 * @return UpdateStateConfigurationResponse
 */
UpdateStateConfigurationResponse Client::updateStateConfiguration(const UpdateStateConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateStateConfigurationWithOptions(request, runtime);
}

/**
 * @summary Updates the information about an existing template.
 *
 * @param tmpReq UpdateTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTemplateResponse
 */
UpdateTemplateResponse Client::updateTemplateWithOptions(const UpdateTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateTemplateShrinkRequest request = UpdateTemplateShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tags(), "Tags", "json"));
  }

  json query = {};
  if (!!request.hasContent()) {
    query["Content"] = request.content();
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

  if (!!request.hasTemplateName()) {
    query["TemplateName"] = request.templateName();
  }

  if (!!request.hasVersionName()) {
    query["VersionName"] = request.versionName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateTemplate"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTemplateResponse>();
}

/**
 * @summary Updates the information about an existing template.
 *
 * @param request UpdateTemplateRequest
 * @return UpdateTemplateResponse
 */
UpdateTemplateResponse Client::updateTemplate(const UpdateTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateTemplateWithOptions(request, runtime);
}

/**
 * @summary Check whether a template is valid.
 *
 * @param request ValidateTemplateContentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ValidateTemplateContentResponse
 */
ValidateTemplateContentResponse Client::validateTemplateContentWithOptions(const ValidateTemplateContentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContent()) {
    query["Content"] = request.content();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasTemplateURL()) {
    query["TemplateURL"] = request.templateURL();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ValidateTemplateContent"},
    {"version" , "2019-06-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ValidateTemplateContentResponse>();
}

/**
 * @summary Check whether a template is valid.
 *
 * @param request ValidateTemplateContentRequest
 * @return ValidateTemplateContentResponse
 */
ValidateTemplateContentResponse Client::validateTemplateContent(const ValidateTemplateContentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return validateTemplateContentWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Oos20190601