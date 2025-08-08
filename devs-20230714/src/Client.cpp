#include <darabonba/Core.hpp>
#include <alibabacloud/Devs20230714.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
#include <darabonba/http/URL.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::Devs20230714::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace Devs20230714
{

AlibabaCloud::Devs20230714::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("devs", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 激活身份绑定,完成OAuth授权
 *
 * @param request ActivateConnectionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ActivateConnectionResponse
 */
ActivateConnectionResponse Client::activateConnectionWithOptions(const string &name, const ActivateConnectionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccount()) {
    body["account"] = request.account();
  }

  if (!!request.hasCredential()) {
    body["credential"] = request.credential();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ActivateConnection"},
    {"version" , "2023-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-07-14/connections/" , Darabonba::Http::URL::percentEncode(name) , "/activate")},
    {"method" , "PATCH"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<ActivateConnectionResponse>();
}

/**
 * @summary 激活身份绑定,完成OAuth授权
 *
 * @param request ActivateConnectionRequest
 * @return ActivateConnectionResponse
 */
ActivateConnectionResponse Client::activateConnection(const string &name, const ActivateConnectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return activateConnectionWithOptions(name, request, headers, runtime);
}

/**
 * @summary 取消流水线
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelPipelineResponse
 */
CancelPipelineResponse Client::cancelPipelineWithOptions(const string &name, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }));
  Params params = Params(json({
    {"action" , "CancelPipeline"},
    {"version" , "2023-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-07-14/pipelines/" , Darabonba::Http::URL::percentEncode(name) , "/cancel")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<CancelPipelineResponse>();
}

/**
 * @summary 取消流水线
 *
 * @return CancelPipelineResponse
 */
CancelPipelineResponse Client::cancelPipeline(const string &name) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return cancelPipelineWithOptions(name, headers, runtime);
}

/**
 * @summary 取消任务
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelTaskResponse
 */
CancelTaskResponse Client::cancelTaskWithOptions(const string &name, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }));
  Params params = Params(json({
    {"action" , "CancelTask"},
    {"version" , "2023-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-07-14/tasks/" , Darabonba::Http::URL::percentEncode(name) , "/cancel")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<CancelTaskResponse>();
}

/**
 * @summary 取消任务
 *
 * @return CancelTaskResponse
 */
CancelTaskResponse Client::cancelTask(const string &name) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return cancelTaskWithOptions(name, headers, runtime);
}

/**
 * @summary 创建交付物存储
 *
 * @param request CreateArtifactRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateArtifactResponse
 */
CreateArtifactResponse Client::createArtifactWithOptions(const CreateArtifactRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.body())}
  }));
  Params params = Params(json({
    {"action" , "CreateArtifact"},
    {"version" , "2023-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-07-14/artifacts")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<CreateArtifactResponse>();
}

/**
 * @summary 创建交付物存储
 *
 * @param request CreateArtifactRequest
 * @return CreateArtifactResponse
 */
CreateArtifactResponse Client::createArtifact(const CreateArtifactRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createArtifactWithOptions(request, headers, runtime);
}

/**
 * @summary 创建环境
 *
 * @param request CreateEnvironmentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateEnvironmentResponse
 */
CreateEnvironmentResponse Client::createEnvironmentWithOptions(const string &projectName, const CreateEnvironmentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.body())}
  }));
  Params params = Params(json({
    {"action" , "CreateEnvironment"},
    {"version" , "2023-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-07-14/projects/" , Darabonba::Http::URL::percentEncode(projectName) , "/environments")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<CreateEnvironmentResponse>();
}

/**
 * @summary 创建环境
 *
 * @param request CreateEnvironmentRequest
 * @return CreateEnvironmentResponse
 */
CreateEnvironmentResponse Client::createEnvironment(const string &projectName, const CreateEnvironmentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createEnvironmentWithOptions(projectName, request, headers, runtime);
}

/**
 * @summary 创建流水线
 *
 * @param request CreatePipelineRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePipelineResponse
 */
CreatePipelineResponse Client::createPipelineWithOptions(const CreatePipelineRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.body())}
  }));
  Params params = Params(json({
    {"action" , "CreatePipeline"},
    {"version" , "2023-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-07-14/pipelines")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<CreatePipelineResponse>();
}

/**
 * @summary 创建流水线
 *
 * @param request CreatePipelineRequest
 * @return CreatePipelineResponse
 */
CreatePipelineResponse Client::createPipeline(const CreatePipelineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createPipelineWithOptions(request, headers, runtime);
}

/**
 * @summary 创建项目
 *
 * @param request CreateProjectRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateProjectResponse
 */
CreateProjectResponse Client::createProjectWithOptions(const CreateProjectRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.body())}
  }));
  Params params = Params(json({
    {"action" , "CreateProject"},
    {"version" , "2023-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-07-14/projects")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<CreateProjectResponse>();
}

/**
 * @summary 创建项目
 *
 * @param request CreateProjectRequest
 * @return CreateProjectResponse
 */
CreateProjectResponse Client::createProject(const CreateProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createProjectWithOptions(request, headers, runtime);
}

/**
 * @summary 创建任务
 *
 * @param request CreateTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTaskResponse
 */
CreateTaskResponse Client::createTaskWithOptions(const CreateTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.body())}
  }));
  Params params = Params(json({
    {"action" , "CreateTask"},
    {"version" , "2023-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-07-14/tasks")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<CreateTaskResponse>();
}

/**
 * @summary 创建任务
 *
 * @param request CreateTaskRequest
 * @return CreateTaskResponse
 */
CreateTaskResponse Client::createTask(const CreateTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createTaskWithOptions(request, headers, runtime);
}

/**
 * @summary 创建工具集
 *
 * @param request CreateToolsetRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateToolsetResponse
 */
CreateToolsetResponse Client::createToolsetWithOptions(const CreateToolsetRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.body())}
  }));
  Params params = Params(json({
    {"action" , "CreateToolset"},
    {"version" , "2023-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-07-14/toolsets")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<CreateToolsetResponse>();
}

/**
 * @summary 创建工具集
 *
 * @param request CreateToolsetRequest
 * @return CreateToolsetResponse
 */
CreateToolsetResponse Client::createToolset(const CreateToolsetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createToolsetWithOptions(request, headers, runtime);
}

/**
 * @summary 删除交付物
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteArtifactResponse
 */
DeleteArtifactResponse Client::deleteArtifactWithOptions(const string &name, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }));
  Params params = Params(json({
    {"action" , "DeleteArtifact"},
    {"version" , "2023-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-07-14/artifacts/" , Darabonba::Http::URL::percentEncode(name))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }));
  return json(callApi(params, req, runtime)).get<DeleteArtifactResponse>();
}

/**
 * @summary 删除交付物
 *
 * @return DeleteArtifactResponse
 */
DeleteArtifactResponse Client::deleteArtifact(const string &name) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteArtifactWithOptions(name, headers, runtime);
}

/**
 * @summary 删除身份绑定
 *
 * @param request DeleteConnectionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteConnectionResponse
 */
DeleteConnectionResponse Client::deleteConnectionWithOptions(const string &name, const DeleteConnectionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasForce()) {
    query["force"] = request.force();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "DeleteConnection"},
    {"version" , "2023-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-07-14/connections/" , Darabonba::Http::URL::percentEncode(name))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<DeleteConnectionResponse>();
}

/**
 * @summary 删除身份绑定
 *
 * @param request DeleteConnectionRequest
 * @return DeleteConnectionResponse
 */
DeleteConnectionResponse Client::deleteConnection(const string &name, const DeleteConnectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteConnectionWithOptions(name, request, headers, runtime);
}

/**
 * @summary 删除环境
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteEnvironmentResponse
 */
DeleteEnvironmentResponse Client::deleteEnvironmentWithOptions(const string &projectName, const string &name, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }));
  Params params = Params(json({
    {"action" , "DeleteEnvironment"},
    {"version" , "2023-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-07-14/projects/" , Darabonba::Http::URL::percentEncode(projectName) , "/environments/" , Darabonba::Http::URL::percentEncode(name))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }));
  return json(callApi(params, req, runtime)).get<DeleteEnvironmentResponse>();
}

/**
 * @summary 删除环境
 *
 * @return DeleteEnvironmentResponse
 */
DeleteEnvironmentResponse Client::deleteEnvironment(const string &projectName, const string &name) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteEnvironmentWithOptions(projectName, name, headers, runtime);
}

/**
 * @summary 删除项目
 *
 * @param request DeleteProjectRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteProjectResponse
 */
DeleteProjectResponse Client::deleteProjectWithOptions(const string &name, const DeleteProjectRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasForce()) {
    query["force"] = request.force();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "DeleteProject"},
    {"version" , "2023-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-07-14/projects/" , Darabonba::Http::URL::percentEncode(name))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }));
  return json(callApi(params, req, runtime)).get<DeleteProjectResponse>();
}

/**
 * @summary 删除项目
 *
 * @param request DeleteProjectRequest
 * @return DeleteProjectResponse
 */
DeleteProjectResponse Client::deleteProject(const string &name, const DeleteProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteProjectWithOptions(name, request, headers, runtime);
}

/**
 * @summary 删除工具集
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteToolsetResponse
 */
DeleteToolsetResponse Client::deleteToolsetWithOptions(const string &name, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }));
  Params params = Params(json({
    {"action" , "DeleteToolset"},
    {"version" , "2023-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-07-14/toolsets/" , Darabonba::Http::URL::percentEncode(name))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }));
  return json(callApi(params, req, runtime)).get<DeleteToolsetResponse>();
}

/**
 * @summary 删除工具集
 *
 * @return DeleteToolsetResponse
 */
DeleteToolsetResponse Client::deleteToolset(const string &name) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteToolsetWithOptions(name, headers, runtime);
}

/**
 * @summary 手动触发环境部署
 *
 * @param request DeployEnvironmentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeployEnvironmentResponse
 */
DeployEnvironmentResponse Client::deployEnvironmentWithOptions(const string &projectName, const string &name, const DeployEnvironmentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.body())}
  }));
  Params params = Params(json({
    {"action" , "DeployEnvironment"},
    {"version" , "2023-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-07-14/projects/" , Darabonba::Http::URL::percentEncode(projectName) , "/environments/" , Darabonba::Http::URL::percentEncode(name) , "/deploy")},
    {"method" , "PATCH"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<DeployEnvironmentResponse>();
}

/**
 * @summary 手动触发环境部署
 *
 * @param request DeployEnvironmentRequest
 * @return DeployEnvironmentResponse
 */
DeployEnvironmentResponse Client::deployEnvironment(const string &projectName, const string &name, const DeployEnvironmentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deployEnvironmentWithOptions(projectName, name, request, headers, runtime);
}

/**
 * @summary 获取交付物的zip包临时下载地址url
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return FetchArtifactDownloadUrlResponse
 */
FetchArtifactDownloadUrlResponse Client::fetchArtifactDownloadUrlWithOptions(const string &name, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }));
  Params params = Params(json({
    {"action" , "FetchArtifactDownloadUrl"},
    {"version" , "2023-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-07-14/artifacts/" , Darabonba::Http::URL::percentEncode(name) , "/fetchCode")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<FetchArtifactDownloadUrlResponse>();
}

/**
 * @summary 获取交付物的zip包临时下载地址url
 *
 * @return FetchArtifactDownloadUrlResponse
 */
FetchArtifactDownloadUrlResponse Client::fetchArtifactDownloadUrl(const string &name) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return fetchArtifactDownloadUrlWithOptions(name, headers, runtime);
}

/**
 * @summary 获取交付物临时上传的bucket、object和临时sts
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return FetchArtifactTempBucketTokenResponse
 */
FetchArtifactTempBucketTokenResponse Client::fetchArtifactTempBucketTokenWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }));
  Params params = Params(json({
    {"action" , "FetchArtifactTempBucketToken"},
    {"version" , "2023-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-07-14/artifacts/action/fetchTempBucketToken")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<FetchArtifactTempBucketTokenResponse>();
}

/**
 * @summary 获取交付物临时上传的bucket、object和临时sts
 *
 * @return FetchArtifactTempBucketTokenResponse
 */
FetchArtifactTempBucketTokenResponse Client::fetchArtifactTempBucketToken() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return fetchArtifactTempBucketTokenWithOptions(headers, runtime);
}

/**
 * @summary 查询身份绑定中的凭证信息
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return FetchConnectionCredentialResponse
 */
FetchConnectionCredentialResponse Client::fetchConnectionCredentialWithOptions(const string &name, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }));
  Params params = Params(json({
    {"action" , "FetchConnectionCredential"},
    {"version" , "2023-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-07-14/connections/" , Darabonba::Http::URL::percentEncode(name) , "/fetchCredential")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<FetchConnectionCredentialResponse>();
}

/**
 * @summary 查询身份绑定中的凭证信息
 *
 * @return FetchConnectionCredentialResponse
 */
FetchConnectionCredentialResponse Client::fetchConnectionCredential(const string &name) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return fetchConnectionCredentialWithOptions(name, headers, runtime);
}

/**
 * @summary 查询交付物
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetArtifactResponse
 */
GetArtifactResponse Client::getArtifactWithOptions(const string &name, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }));
  Params params = Params(json({
    {"action" , "GetArtifact"},
    {"version" , "2023-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-07-14/artifacts/" , Darabonba::Http::URL::percentEncode(name))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<GetArtifactResponse>();
}

/**
 * @summary 查询交付物
 *
 * @return GetArtifactResponse
 */
GetArtifactResponse Client::getArtifact(const string &name) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getArtifactWithOptions(name, headers, runtime);
}

/**
 * @summary 获取环境信息
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetEnvironmentResponse
 */
GetEnvironmentResponse Client::getEnvironmentWithOptions(const string &projectName, const string &name, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }));
  Params params = Params(json({
    {"action" , "GetEnvironment"},
    {"version" , "2023-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-07-14/projects/" , Darabonba::Http::URL::percentEncode(projectName) , "/environments/" , Darabonba::Http::URL::percentEncode(name))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<GetEnvironmentResponse>();
}

/**
 * @summary 获取环境信息
 *
 * @return GetEnvironmentResponse
 */
GetEnvironmentResponse Client::getEnvironment(const string &projectName, const string &name) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getEnvironmentWithOptions(projectName, name, headers, runtime);
}

/**
 * @summary 查询环境部署信息
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetEnvironmentDeploymentResponse
 */
GetEnvironmentDeploymentResponse Client::getEnvironmentDeploymentWithOptions(const string &name, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }));
  Params params = Params(json({
    {"action" , "GetEnvironmentDeployment"},
    {"version" , "2023-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-07-14/environmentdeployments/" , Darabonba::Http::URL::percentEncode(name))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<GetEnvironmentDeploymentResponse>();
}

/**
 * @summary 查询环境部署信息
 *
 * @return GetEnvironmentDeploymentResponse
 */
GetEnvironmentDeploymentResponse Client::getEnvironmentDeployment(const string &name) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getEnvironmentDeploymentWithOptions(name, headers, runtime);
}

/**
 * @summary 查询流水线
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPipelineResponse
 */
GetPipelineResponse Client::getPipelineWithOptions(const string &name, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }));
  Params params = Params(json({
    {"action" , "GetPipeline"},
    {"version" , "2023-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-07-14/pipelines/" , Darabonba::Http::URL::percentEncode(name))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<GetPipelineResponse>();
}

/**
 * @summary 查询流水线
 *
 * @return GetPipelineResponse
 */
GetPipelineResponse Client::getPipeline(const string &name) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getPipelineWithOptions(name, headers, runtime);
}

/**
 * @summary 查询项目
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetProjectResponse
 */
GetProjectResponse Client::getProjectWithOptions(const string &name, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }));
  Params params = Params(json({
    {"action" , "GetProject"},
    {"version" , "2023-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-07-14/projects/" , Darabonba::Http::URL::percentEncode(name))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<GetProjectResponse>();
}

/**
 * @summary 查询项目
 *
 * @return GetProjectResponse
 */
GetProjectResponse Client::getProject(const string &name) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getProjectWithOptions(name, headers, runtime);
}

/**
 * @summary 查询仓库绑定
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRepositoryResponse
 */
GetRepositoryResponse Client::getRepositoryWithOptions(const string &name, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }));
  Params params = Params(json({
    {"action" , "GetRepository"},
    {"version" , "2023-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-07-14/repositories/" , Darabonba::Http::URL::percentEncode(name))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<GetRepositoryResponse>();
}

/**
 * @summary 查询仓库绑定
 *
 * @return GetRepositoryResponse
 */
GetRepositoryResponse Client::getRepository(const string &name) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getRepositoryWithOptions(name, headers, runtime);
}

/**
 * @summary 查询服务部署信息
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetServiceDeploymentResponse
 */
GetServiceDeploymentResponse Client::getServiceDeploymentWithOptions(const string &name, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }));
  Params params = Params(json({
    {"action" , "GetServiceDeployment"},
    {"version" , "2023-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-07-14/servicedeployments/" , Darabonba::Http::URL::percentEncode(name))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<GetServiceDeploymentResponse>();
}

/**
 * @summary 查询服务部署信息
 *
 * @return GetServiceDeploymentResponse
 */
GetServiceDeploymentResponse Client::getServiceDeployment(const string &name) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getServiceDeploymentWithOptions(name, headers, runtime);
}

/**
 * @summary 查询任务
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTaskResponse
 */
GetTaskResponse Client::getTaskWithOptions(const string &name, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }));
  Params params = Params(json({
    {"action" , "GetTask"},
    {"version" , "2023-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-07-14/tasks/" , Darabonba::Http::URL::percentEncode(name))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<GetTaskResponse>();
}

/**
 * @summary 查询任务
 *
 * @return GetTaskResponse
 */
GetTaskResponse Client::getTask(const string &name) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getTaskWithOptions(name, headers, runtime);
}

/**
 * @summary 查询工具集
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetToolsetResponse
 */
GetToolsetResponse Client::getToolsetWithOptions(const string &name, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }));
  Params params = Params(json({
    {"action" , "GetToolset"},
    {"version" , "2023-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-07-14/toolsets/" , Darabonba::Http::URL::percentEncode(name))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<GetToolsetResponse>();
}

/**
 * @summary 查询工具集
 *
 * @return GetToolsetResponse
 */
GetToolsetResponse Client::getToolset(const string &name) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getToolsetWithOptions(name, headers, runtime);
}

/**
 * @summary 批量查询身份绑定
 *
 * @param tmpReq ListConnectionsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListConnectionsResponse
 */
ListConnectionsResponse Client::listConnectionsWithOptions(const ListConnectionsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListConnectionsShrinkRequest request = ListConnectionsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasLabelSelector()) {
    request.setLabelSelectorShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.labelSelector(), "labelSelector", "simple"));
  }

  json query = {};
  if (!!request.hasKeyword()) {
    query["keyword"] = request.keyword();
  }

  if (!!request.hasLabelSelectorShrink()) {
    query["labelSelector"] = request.labelSelectorShrink();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "ListConnections"},
    {"version" , "2023-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-07-14/connections")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<ListConnectionsResponse>();
}

/**
 * @summary 批量查询身份绑定
 *
 * @param request ListConnectionsRequest
 * @return ListConnectionsResponse
 */
ListConnectionsResponse Client::listConnections(const ListConnectionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listConnectionsWithOptions(request, headers, runtime);
}

/**
 * @summary 查询环境列表
 *
 * @param tmpReq ListEnvironmentsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListEnvironmentsResponse
 */
ListEnvironmentsResponse Client::listEnvironmentsWithOptions(const string &projectName, const ListEnvironmentsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListEnvironmentsShrinkRequest request = ListEnvironmentsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasLabelSelector()) {
    request.setLabelSelectorShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.labelSelector(), "labelSelector", "simple"));
  }

  json query = {};
  if (!!request.hasKeyword()) {
    query["keyword"] = request.keyword();
  }

  if (!!request.hasLabelSelectorShrink()) {
    query["labelSelector"] = request.labelSelectorShrink();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "ListEnvironments"},
    {"version" , "2023-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-07-14/projects/" , Darabonba::Http::URL::percentEncode(projectName) , "/environments/")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<ListEnvironmentsResponse>();
}

/**
 * @summary 查询环境列表
 *
 * @param request ListEnvironmentsRequest
 * @return ListEnvironmentsResponse
 */
ListEnvironmentsResponse Client::listEnvironments(const string &projectName, const ListEnvironmentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listEnvironmentsWithOptions(projectName, request, headers, runtime);
}

/**
 * @summary 批量查询流水线
 *
 * @param tmpReq ListPipelinesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPipelinesResponse
 */
ListPipelinesResponse Client::listPipelinesWithOptions(const ListPipelinesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListPipelinesShrinkRequest request = ListPipelinesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasLabelSelector()) {
    request.setLabelSelectorShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.labelSelector(), "labelSelector", "simple"));
  }

  json query = {};
  if (!!request.hasLabelSelectorShrink()) {
    query["labelSelector"] = request.labelSelectorShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "ListPipelines"},
    {"version" , "2023-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-07-14/pipelines")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "array"}
  }));
  return json(callApi(params, req, runtime)).get<ListPipelinesResponse>();
}

/**
 * @summary 批量查询流水线
 *
 * @param request ListPipelinesRequest
 * @return ListPipelinesResponse
 */
ListPipelinesResponse Client::listPipelines(const ListPipelinesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listPipelinesWithOptions(request, headers, runtime);
}

/**
 * @summary 批量查询项目
 *
 * @param tmpReq ListProjectsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListProjectsResponse
 */
ListProjectsResponse Client::listProjectsWithOptions(const ListProjectsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListProjectsShrinkRequest request = ListProjectsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasLabelSelector()) {
    request.setLabelSelectorShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.labelSelector(), "labelSelector", "simple"));
  }

  json query = {};
  if (!!request.hasKeyword()) {
    query["keyword"] = request.keyword();
  }

  if (!!request.hasLabelSelectorShrink()) {
    query["labelSelector"] = request.labelSelectorShrink();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "ListProjects"},
    {"version" , "2023-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-07-14/projects")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<ListProjectsResponse>();
}

/**
 * @summary 批量查询项目
 *
 * @param request ListProjectsRequest
 * @return ListProjectsResponse
 */
ListProjectsResponse Client::listProjects(const ListProjectsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listProjectsWithOptions(request, headers, runtime);
}

/**
 * @summary 批量查询服务部署信息
 *
 * @param tmpReq ListServiceDeploymentsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListServiceDeploymentsResponse
 */
ListServiceDeploymentsResponse Client::listServiceDeploymentsWithOptions(const ListServiceDeploymentsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListServiceDeploymentsShrinkRequest request = ListServiceDeploymentsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasLabelSelector()) {
    request.setLabelSelectorShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.labelSelector(), "labelSelector", "simple"));
  }

  json query = {};
  if (!!request.hasKeyword()) {
    query["keyword"] = request.keyword();
  }

  if (!!request.hasLabelSelectorShrink()) {
    query["labelSelector"] = request.labelSelectorShrink();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "ListServiceDeployments"},
    {"version" , "2023-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-07-14/servicedeployments")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<ListServiceDeploymentsResponse>();
}

/**
 * @summary 批量查询服务部署信息
 *
 * @param request ListServiceDeploymentsRequest
 * @return ListServiceDeploymentsResponse
 */
ListServiceDeploymentsResponse Client::listServiceDeployments(const ListServiceDeploymentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listServiceDeploymentsWithOptions(request, headers, runtime);
}

/**
 * @summary 批量查询任务
 *
 * @param tmpReq ListTasksRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTasksResponse
 */
ListTasksResponse Client::listTasksWithOptions(const ListTasksRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListTasksShrinkRequest request = ListTasksShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasLabelSelector()) {
    request.setLabelSelectorShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.labelSelector(), "labelSelector", "simple"));
  }

  json query = {};
  if (!!request.hasLabelSelectorShrink()) {
    query["labelSelector"] = request.labelSelectorShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "ListTasks"},
    {"version" , "2023-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-07-14/tasks")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "array"}
  }));
  return json(callApi(params, req, runtime)).get<ListTasksResponse>();
}

/**
 * @summary 批量查询任务
 *
 * @param request ListTasksRequest
 * @return ListTasksResponse
 */
ListTasksResponse Client::listTasks(const ListTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listTasksWithOptions(request, headers, runtime);
}

/**
 * @summary 批量查询工具集
 *
 * @param tmpReq ListToolsetsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListToolsetsResponse
 */
ListToolsetsResponse Client::listToolsetsWithOptions(const ListToolsetsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListToolsetsShrinkRequest request = ListToolsetsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasLabelSelector()) {
    request.setLabelSelectorShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.labelSelector(), "labelSelector", "simple"));
  }

  json query = {};
  if (!!request.hasKeyword()) {
    query["keyword"] = request.keyword();
  }

  if (!!request.hasLabelSelectorShrink()) {
    query["labelSelector"] = request.labelSelectorShrink();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "ListToolsets"},
    {"version" , "2023-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-07-14/toolsets")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<ListToolsetsResponse>();
}

/**
 * @summary 批量查询工具集
 *
 * @param request ListToolsetsRequest
 * @return ListToolsetsResponse
 */
ListToolsetsResponse Client::listToolsets(const ListToolsetsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listToolsetsWithOptions(request, headers, runtime);
}

/**
 * @summary 预览环境变更信息
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return PreviewEnvironmentResponse
 */
PreviewEnvironmentResponse Client::previewEnvironmentWithOptions(const string &projectName, const string &name, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }));
  Params params = Params(json({
    {"action" , "PreviewEnvironment"},
    {"version" , "2023-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-07-14/projects/" , Darabonba::Http::URL::percentEncode(projectName) , "/environments/" , Darabonba::Http::URL::percentEncode(name) , "/preview")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<PreviewEnvironmentResponse>();
}

/**
 * @summary 预览环境变更信息
 *
 * @return PreviewEnvironmentResponse
 */
PreviewEnvironmentResponse Client::previewEnvironment(const string &projectName, const string &name) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return previewEnvironmentWithOptions(projectName, name, headers, runtime);
}

/**
 * @summary 更新交付物
 *
 * @param request PutArtifactRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return PutArtifactResponse
 */
PutArtifactResponse Client::putArtifactWithOptions(const string &name, const PutArtifactRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasForce()) {
    query["force"] = request.force();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(request.body())}
  }));
  Params params = Params(json({
    {"action" , "PutArtifact"},
    {"version" , "2023-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-07-14/artifacts/" , Darabonba::Http::URL::percentEncode(name))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<PutArtifactResponse>();
}

/**
 * @summary 更新交付物
 *
 * @param request PutArtifactRequest
 * @return PutArtifactResponse
 */
PutArtifactResponse Client::putArtifact(const string &name, const PutArtifactRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return putArtifactWithOptions(name, request, headers, runtime);
}

/**
 * @summary 更新流水线状态
 *
 * @param request PutPipelineStatusRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return PutPipelineStatusResponse
 */
PutPipelineStatusResponse Client::putPipelineStatusWithOptions(const string &name, const PutPipelineStatusRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasForce()) {
    query["force"] = request.force();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(request.body())}
  }));
  Params params = Params(json({
    {"action" , "PutPipelineStatus"},
    {"version" , "2023-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-07-14/pipelines/" , Darabonba::Http::URL::percentEncode(name) , "/status")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<PutPipelineStatusResponse>();
}

/**
 * @summary 更新流水线状态
 *
 * @param request PutPipelineStatusRequest
 * @return PutPipelineStatusResponse
 */
PutPipelineStatusResponse Client::putPipelineStatus(const string &name, const PutPipelineStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return putPipelineStatusWithOptions(name, request, headers, runtime);
}

/**
 * @summary 更新替换任务状态
 *
 * @param request PutTaskStatusRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return PutTaskStatusResponse
 */
PutTaskStatusResponse Client::putTaskStatusWithOptions(const string &name, const PutTaskStatusRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasForce()) {
    query["force"] = request.force();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(request.body())}
  }));
  Params params = Params(json({
    {"action" , "PutTaskStatus"},
    {"version" , "2023-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-07-14/tasks/" , Darabonba::Http::URL::percentEncode(name) , "/status")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<PutTaskStatusResponse>();
}

/**
 * @summary 更新替换任务状态
 *
 * @param request PutTaskStatusRequest
 * @return PutTaskStatusResponse
 */
PutTaskStatusResponse Client::putTaskStatus(const string &name, const PutTaskStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return putTaskStatusWithOptions(name, request, headers, runtime);
}

/**
 * @summary 解析模板中的服务、变量配置
 *
 * @param request RenderServicesByTemplateRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RenderServicesByTemplateResponse
 */
RenderServicesByTemplateResponse Client::renderServicesByTemplateWithOptions(const RenderServicesByTemplateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasParameters()) {
    body["parameters"] = request.parameters();
  }

  if (!!request.hasProjectName()) {
    body["projectName"] = request.projectName();
  }

  if (!!request.hasServiceNameChanges()) {
    body["serviceNameChanges"] = request.serviceNameChanges();
  }

  if (!!request.hasTemplateName()) {
    body["templateName"] = request.templateName();
  }

  if (!!request.hasVariableValues()) {
    body["variableValues"] = request.variableValues();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RenderServicesByTemplate"},
    {"version" , "2023-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-07-14/templates/action/renderServices")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<RenderServicesByTemplateResponse>();
}

/**
 * @summary 解析模板中的服务、变量配置
 *
 * @param request RenderServicesByTemplateRequest
 * @return RenderServicesByTemplateResponse
 */
RenderServicesByTemplateResponse Client::renderServicesByTemplate(const RenderServicesByTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return renderServicesByTemplateWithOptions(request, headers, runtime);
}

/**
 * @summary 确认并继续执行任务
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResumeTaskResponse
 */
ResumeTaskResponse Client::resumeTaskWithOptions(const string &name, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }));
  Params params = Params(json({
    {"action" , "ResumeTask"},
    {"version" , "2023-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-07-14/tasks/" , Darabonba::Http::URL::percentEncode(name) , "/resume")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<ResumeTaskResponse>();
}

/**
 * @summary 确认并继续执行任务
 *
 * @return ResumeTaskResponse
 */
ResumeTaskResponse Client::resumeTask(const string &name) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return resumeTaskWithOptions(name, headers, runtime);
}

/**
 * @summary 重试执行任务
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RetryTaskResponse
 */
RetryTaskResponse Client::retryTaskWithOptions(const string &name, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }));
  Params params = Params(json({
    {"action" , "RetryTask"},
    {"version" , "2023-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-07-14/tasks/" , Darabonba::Http::URL::percentEncode(name) , "/retry")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<RetryTaskResponse>();
}

/**
 * @summary 重试执行任务
 *
 * @return RetryTaskResponse
 */
RetryTaskResponse Client::retryTask(const string &name) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return retryTaskWithOptions(name, headers, runtime);
}

/**
 * @summary 开始执行流水线
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartPipelineResponse
 */
StartPipelineResponse Client::startPipelineWithOptions(const string &name, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }));
  Params params = Params(json({
    {"action" , "StartPipeline"},
    {"version" , "2023-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-07-14/pipelines/" , Darabonba::Http::URL::percentEncode(name) , "/start")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<StartPipelineResponse>();
}

/**
 * @summary 开始执行流水线
 *
 * @return StartPipelineResponse
 */
StartPipelineResponse Client::startPipeline(const string &name) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return startPipelineWithOptions(name, headers, runtime);
}

/**
 * @summary 开始执行任务
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartTaskResponse
 */
StartTaskResponse Client::startTaskWithOptions(const string &name, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }));
  Params params = Params(json({
    {"action" , "StartTask"},
    {"version" , "2023-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-07-14/tasks/" , Darabonba::Http::URL::percentEncode(name) , "/start")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<StartTaskResponse>();
}

/**
 * @summary 开始执行任务
 *
 * @return StartTaskResponse
 */
StartTaskResponse Client::startTask(const string &name) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return startTaskWithOptions(name, headers, runtime);
}

/**
 * @summary 更新环境（局部更新）
 *
 * @param request UpdateEnvironmentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateEnvironmentResponse
 */
UpdateEnvironmentResponse Client::updateEnvironmentWithOptions(const string &projectName, const string &name, const UpdateEnvironmentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.body())}
  }));
  Params params = Params(json({
    {"action" , "UpdateEnvironment"},
    {"version" , "2023-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-07-14/projects/" , Darabonba::Http::URL::percentEncode(projectName) , "/environments/" , Darabonba::Http::URL::percentEncode(name))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<UpdateEnvironmentResponse>();
}

/**
 * @summary 更新环境（局部更新）
 *
 * @param request UpdateEnvironmentRequest
 * @return UpdateEnvironmentResponse
 */
UpdateEnvironmentResponse Client::updateEnvironment(const string &projectName, const string &name, const UpdateEnvironmentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateEnvironmentWithOptions(projectName, name, request, headers, runtime);
}

/**
 * @summary 更新替换应用
 *
 * @param request UpdateProjectRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateProjectResponse
 */
UpdateProjectResponse Client::updateProjectWithOptions(const string &name, const UpdateProjectRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.body())}
  }));
  Params params = Params(json({
    {"action" , "UpdateProject"},
    {"version" , "2023-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-07-14/projects/" , Darabonba::Http::URL::percentEncode(name))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<UpdateProjectResponse>();
}

/**
 * @summary 更新替换应用
 *
 * @param request UpdateProjectRequest
 * @return UpdateProjectResponse
 */
UpdateProjectResponse Client::updateProject(const string &name, const UpdateProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateProjectWithOptions(name, request, headers, runtime);
}

/**
 * @summary 更新工具集
 *
 * @param request UpdateToolsetRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateToolsetResponse
 */
UpdateToolsetResponse Client::updateToolsetWithOptions(const string &name, const UpdateToolsetRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.body())}
  }));
  Params params = Params(json({
    {"action" , "UpdateToolset"},
    {"version" , "2023-07-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2023-07-14/toolsets/" , Darabonba::Http::URL::percentEncode(name))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<UpdateToolsetResponse>();
}

/**
 * @summary 更新工具集
 *
 * @param request UpdateToolsetRequest
 * @return UpdateToolsetResponse
 */
UpdateToolsetResponse Client::updateToolset(const string &name, const UpdateToolsetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateToolsetWithOptions(name, request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace Devs20230714