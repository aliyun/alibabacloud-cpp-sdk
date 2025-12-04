#include <darabonba/Core.hpp>
#include <alibabacloud/Ververica20220718.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
#include <darabonba/Convert.hpp>
#include <darabonba/encode/Encoder.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::Ververica20220718::Models;
namespace AlibabaCloud
{
namespace Ververica20220718
{

AlibabaCloud::Ververica20220718::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  checkConfig(config);
  this->_endpoint = getEndpoint("ververica", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 执行定时计划
 *
 * @param headers ApplyScheduledPlanHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ApplyScheduledPlanResponse
 */
ApplyScheduledPlanResponse Client::applyScheduledPlanWithOptions(const string &_namespace, const string &scheduledPlanId, const ApplyScheduledPlanHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.workspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ApplyScheduledPlan"},
    {"version" , "2022-07-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/namespaces/" , Darabonba::Encode::Encoder::percentEncode(namespace) , "/scheduled-plans/" , Darabonba::Encode::Encoder::percentEncode(scheduledPlanId) , "%3Aapply")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ApplyScheduledPlanResponse>();
}

/**
 * @summary 执行定时计划
 *
 * @return ApplyScheduledPlanResponse
 */
ApplyScheduledPlanResponse Client::applyScheduledPlan(const string &_namespace, const string &scheduledPlanId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ApplyScheduledPlanHeaders headers = ApplyScheduledPlanHeaders();
  return applyScheduledPlanWithOptions(namespace, scheduledPlanId, headers, runtime);
}

/**
 * @summary 取消调试
 *
 * @param request CancelSqlPreviewRequest
 * @param headers CancelSqlPreviewHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelSqlPreviewResponse
 */
CancelSqlPreviewResponse Client::cancelSqlPreviewWithOptions(const string &_namespace, const CancelSqlPreviewRequest &request, const CancelSqlPreviewHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasQueryId()) {
    query["queryId"] = request.queryId();
  }

  if (!!request.hasSessionClusterName()) {
    query["sessionClusterName"] = request.sessionClusterName();
  }

  if (!!request.hasSessionId()) {
    query["sessionId"] = request.sessionId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.workspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CancelSqlPreview"},
    {"version" , "2022-07-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/namespaces/" , Darabonba::Encode::Encoder::percentEncode(namespace) , "/sql-preview/cancel")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelSqlPreviewResponse>();
}

/**
 * @summary 取消调试
 *
 * @param request CancelSqlPreviewRequest
 * @return CancelSqlPreviewResponse
 */
CancelSqlPreviewResponse Client::cancelSqlPreview(const string &_namespace, const CancelSqlPreviewRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  CancelSqlPreviewHeaders headers = CancelSqlPreviewHeaders();
  return cancelSqlPreviewWithOptions(namespace, request, headers, runtime);
}

/**
 * @summary Creates a deployment.
 *
 * @param request CreateDeploymentRequest
 * @param headers CreateDeploymentHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDeploymentResponse
 */
CreateDeploymentResponse Client::createDeploymentWithOptions(const string &_namespace, const CreateDeploymentRequest &request, const CreateDeploymentHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.workspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(request.body())}
  }));
  Params params = Params(json({
    {"action" , "CreateDeployment"},
    {"version" , "2022-07-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/namespaces/" , Darabonba::Encode::Encoder::percentEncode(namespace) , "/deployments")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDeploymentResponse>();
}

/**
 * @summary Creates a deployment.
 *
 * @param request CreateDeploymentRequest
 * @return CreateDeploymentResponse
 */
CreateDeploymentResponse Client::createDeployment(const string &_namespace, const CreateDeploymentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  CreateDeploymentHeaders headers = CreateDeploymentHeaders();
  return createDeploymentWithOptions(namespace, request, headers, runtime);
}

/**
 * @summary create a deploymentDraft
 *
 * @param request CreateDeploymentDraftRequest
 * @param headers CreateDeploymentDraftHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDeploymentDraftResponse
 */
CreateDeploymentDraftResponse Client::createDeploymentDraftWithOptions(const string &_namespace, const CreateDeploymentDraftRequest &request, const CreateDeploymentDraftHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.workspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(request.body())}
  }));
  Params params = Params(json({
    {"action" , "CreateDeploymentDraft"},
    {"version" , "2022-07-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/namespaces/" , Darabonba::Encode::Encoder::percentEncode(namespace) , "/deployment-drafts")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDeploymentDraftResponse>();
}

/**
 * @summary create a deploymentDraft
 *
 * @param request CreateDeploymentDraftRequest
 * @return CreateDeploymentDraftResponse
 */
CreateDeploymentDraftResponse Client::createDeploymentDraft(const string &_namespace, const CreateDeploymentDraftRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  CreateDeploymentDraftHeaders headers = CreateDeploymentDraftHeaders();
  return createDeploymentDraftWithOptions(namespace, request, headers, runtime);
}

/**
 * @summary 创建deploymentTarget
 *
 * @param request CreateDeploymentTargetRequest
 * @param headers CreateDeploymentTargetHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDeploymentTargetResponse
 */
CreateDeploymentTargetResponse Client::createDeploymentTargetWithOptions(const string &_namespace, const CreateDeploymentTargetRequest &request, const CreateDeploymentTargetHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeploymentTargetName()) {
    query["deploymentTargetName"] = request.deploymentTargetName();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.workspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(request.body())}
  }));
  Params params = Params(json({
    {"action" , "CreateDeploymentTarget"},
    {"version" , "2022-07-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/namespaces/" , Darabonba::Encode::Encoder::percentEncode(namespace) , "/deployment-targets")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDeploymentTargetResponse>();
}

/**
 * @summary 创建deploymentTarget
 *
 * @param request CreateDeploymentTargetRequest
 * @return CreateDeploymentTargetResponse
 */
CreateDeploymentTargetResponse Client::createDeploymentTarget(const string &_namespace, const CreateDeploymentTargetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  CreateDeploymentTargetHeaders headers = CreateDeploymentTargetHeaders();
  return createDeploymentTargetWithOptions(namespace, request, headers, runtime);
}

/**
 * @summary 创建部署目标V2
 *
 * @param request CreateDeploymentTargetV2Request
 * @param headers CreateDeploymentTargetV2Headers
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDeploymentTargetV2Response
 */
CreateDeploymentTargetV2Response Client::createDeploymentTargetV2WithOptions(const string &_namespace, const CreateDeploymentTargetV2Request &request, const CreateDeploymentTargetV2Headers &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeploymentTargetName()) {
    query["deploymentTargetName"] = request.deploymentTargetName();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.workspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(request.body())}
  }));
  Params params = Params(json({
    {"action" , "CreateDeploymentTargetV2"},
    {"version" , "2022-07-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/namespaces/" , Darabonba::Encode::Encoder::percentEncode(namespace) , "/deployment-targets/support-elastic")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDeploymentTargetV2Response>();
}

/**
 * @summary 创建部署目标V2
 *
 * @param request CreateDeploymentTargetV2Request
 * @return CreateDeploymentTargetV2Response
 */
CreateDeploymentTargetV2Response Client::createDeploymentTargetV2(const string &_namespace, const CreateDeploymentTargetV2Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  CreateDeploymentTargetV2Headers headers = CreateDeploymentTargetV2Headers();
  return createDeploymentTargetV2WithOptions(namespace, request, headers, runtime);
}

/**
 * @summary create a folder
 *
 * @param request CreateFolderRequest
 * @param headers CreateFolderHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateFolderResponse
 */
CreateFolderResponse Client::createFolderWithOptions(const string &_namespace, const CreateFolderRequest &request, const CreateFolderHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.workspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(request.body())}
  }));
  Params params = Params(json({
    {"action" , "CreateFolder"},
    {"version" , "2022-07-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/namespaces/" , Darabonba::Encode::Encoder::percentEncode(namespace) , "/folder")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateFolderResponse>();
}

/**
 * @summary create a folder
 *
 * @param request CreateFolderRequest
 * @return CreateFolderResponse
 */
CreateFolderResponse Client::createFolder(const string &_namespace, const CreateFolderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  CreateFolderHeaders headers = CreateFolderHeaders();
  return createFolderWithOptions(namespace, request, headers, runtime);
}

/**
 * @summary Adds a user to a namespace as a member and grants permissions to the user.
 *
 * @param request CreateMemberRequest
 * @param headers CreateMemberHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMemberResponse
 */
CreateMemberResponse Client::createMemberWithOptions(const string &_namespace, const CreateMemberRequest &request, const CreateMemberHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.workspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(request.body())}
  }));
  Params params = Params(json({
    {"action" , "CreateMember"},
    {"version" , "2022-07-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/gateway/v2/namespaces/" , Darabonba::Encode::Encoder::percentEncode(namespace) , "/members")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateMemberResponse>();
}

/**
 * @summary Adds a user to a namespace as a member and grants permissions to the user.
 *
 * @param request CreateMemberRequest
 * @return CreateMemberResponse
 */
CreateMemberResponse Client::createMember(const string &_namespace, const CreateMemberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  CreateMemberHeaders headers = CreateMemberHeaders();
  return createMemberWithOptions(namespace, request, headers, runtime);
}

/**
 * @summary Creates a savepoint.
 *
 * @param request CreateSavepointRequest
 * @param headers CreateSavepointHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSavepointResponse
 */
CreateSavepointResponse Client::createSavepointWithOptions(const string &_namespace, const CreateSavepointRequest &request, const CreateSavepointHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDeploymentId()) {
    body["deploymentId"] = request.deploymentId();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.description();
  }

  if (!!request.hasNativeFormat()) {
    body["nativeFormat"] = request.nativeFormat();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.workspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateSavepoint"},
    {"version" , "2022-07-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/namespaces/" , Darabonba::Encode::Encoder::percentEncode(namespace) , "/savepoints")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSavepointResponse>();
}

/**
 * @summary Creates a savepoint.
 *
 * @param request CreateSavepointRequest
 * @return CreateSavepointResponse
 */
CreateSavepointResponse Client::createSavepoint(const string &_namespace, const CreateSavepointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  CreateSavepointHeaders headers = CreateSavepointHeaders();
  return createSavepointWithOptions(namespace, request, headers, runtime);
}

/**
 * @summary 创建定时执行计划
 *
 * @param request CreateScheduledPlanRequest
 * @param headers CreateScheduledPlanHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateScheduledPlanResponse
 */
CreateScheduledPlanResponse Client::createScheduledPlanWithOptions(const string &_namespace, const CreateScheduledPlanRequest &request, const CreateScheduledPlanHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.workspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(request.body())}
  }));
  Params params = Params(json({
    {"action" , "CreateScheduledPlan"},
    {"version" , "2022-07-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/namespaces/" , Darabonba::Encode::Encoder::percentEncode(namespace) , "/scheduled-plans")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateScheduledPlanResponse>();
}

/**
 * @summary 创建定时执行计划
 *
 * @param request CreateScheduledPlanRequest
 * @return CreateScheduledPlanResponse
 */
CreateScheduledPlanResponse Client::createScheduledPlan(const string &_namespace, const CreateScheduledPlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  CreateScheduledPlanHeaders headers = CreateScheduledPlanHeaders();
  return createScheduledPlanWithOptions(namespace, request, headers, runtime);
}

/**
 * @summary 创建session集群
 *
 * @param request CreateSessionClusterRequest
 * @param headers CreateSessionClusterHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSessionClusterResponse
 */
CreateSessionClusterResponse Client::createSessionClusterWithOptions(const string &_namespace, const CreateSessionClusterRequest &request, const CreateSessionClusterHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.workspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(request.body())}
  }));
  Params params = Params(json({
    {"action" , "CreateSessionCluster"},
    {"version" , "2022-07-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/namespaces/" , Darabonba::Encode::Encoder::percentEncode(namespace) , "/sessionclusters")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSessionClusterResponse>();
}

/**
 * @summary 创建session集群
 *
 * @param request CreateSessionClusterRequest
 * @return CreateSessionClusterResponse
 */
CreateSessionClusterResponse Client::createSessionCluster(const string &_namespace, const CreateSessionClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  CreateSessionClusterHeaders headers = CreateSessionClusterHeaders();
  return createSessionClusterWithOptions(namespace, request, headers, runtime);
}

/**
 * @summary Parses all user-defined function (UDF) methods in your JAR or Python file and creates an artifact configuration for a UDF.
 *
 * @param request CreateUdfArtifactRequest
 * @param headers CreateUdfArtifactHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateUdfArtifactResponse
 */
CreateUdfArtifactResponse Client::createUdfArtifactWithOptions(const string &_namespace, const CreateUdfArtifactRequest &request, const CreateUdfArtifactHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.workspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(request.body())}
  }));
  Params params = Params(json({
    {"action" , "CreateUdfArtifact"},
    {"version" , "2022-07-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/namespaces/" , Darabonba::Encode::Encoder::percentEncode(namespace) , "/udfartifacts")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateUdfArtifactResponse>();
}

/**
 * @summary Parses all user-defined function (UDF) methods in your JAR or Python file and creates an artifact configuration for a UDF.
 *
 * @param request CreateUdfArtifactRequest
 * @return CreateUdfArtifactResponse
 */
CreateUdfArtifactResponse Client::createUdfArtifact(const string &_namespace, const CreateUdfArtifactRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  CreateUdfArtifactHeaders headers = CreateUdfArtifactHeaders();
  return createUdfArtifactWithOptions(namespace, request, headers, runtime);
}

/**
 * @summary Creates a variable.
 *
 * @param request CreateVariableRequest
 * @param headers CreateVariableHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateVariableResponse
 */
CreateVariableResponse Client::createVariableWithOptions(const string &_namespace, const CreateVariableRequest &request, const CreateVariableHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.workspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(request.body())}
  }));
  Params params = Params(json({
    {"action" , "CreateVariable"},
    {"version" , "2022-07-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/namespaces/" , Darabonba::Encode::Encoder::percentEncode(namespace) , "/variables")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateVariableResponse>();
}

/**
 * @summary Creates a variable.
 *
 * @param request CreateVariableRequest
 * @return CreateVariableResponse
 */
CreateVariableResponse Client::createVariable(const string &_namespace, const CreateVariableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  CreateVariableHeaders headers = CreateVariableHeaders();
  return createVariableWithOptions(namespace, request, headers, runtime);
}

/**
 * @summary Deletes a registered custom connector from a workspace.
 *
 * @param headers DeleteCustomConnectorHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCustomConnectorResponse
 */
DeleteCustomConnectorResponse Client::deleteCustomConnectorWithOptions(const string &_namespace, const string &connectorName, const DeleteCustomConnectorHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.workspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCustomConnector"},
    {"version" , "2022-07-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/namespaces/" , Darabonba::Encode::Encoder::percentEncode(namespace) , "/connectors/" , Darabonba::Encode::Encoder::percentEncode(connectorName))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCustomConnectorResponse>();
}

/**
 * @summary Deletes a registered custom connector from a workspace.
 *
 * @return DeleteCustomConnectorResponse
 */
DeleteCustomConnectorResponse Client::deleteCustomConnector(const string &_namespace, const string &connectorName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  DeleteCustomConnectorHeaders headers = DeleteCustomConnectorHeaders();
  return deleteCustomConnectorWithOptions(namespace, connectorName, headers, runtime);
}

/**
 * @summary Deletes a deployment based on the deployment ID.
 *
 * @param headers DeleteDeploymentHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDeploymentResponse
 */
DeleteDeploymentResponse Client::deleteDeploymentWithOptions(const string &_namespace, const string &deploymentId, const DeleteDeploymentHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.workspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDeployment"},
    {"version" , "2022-07-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/namespaces/" , Darabonba::Encode::Encoder::percentEncode(namespace) , "/deployments/" , Darabonba::Encode::Encoder::percentEncode(deploymentId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDeploymentResponse>();
}

/**
 * @summary Deletes a deployment based on the deployment ID.
 *
 * @return DeleteDeploymentResponse
 */
DeleteDeploymentResponse Client::deleteDeployment(const string &_namespace, const string &deploymentId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  DeleteDeploymentHeaders headers = DeleteDeploymentHeaders();
  return deleteDeploymentWithOptions(namespace, deploymentId, headers, runtime);
}

/**
 * @summary delete a deploymentDraft
 *
 * @param headers DeleteDeploymentDraftHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDeploymentDraftResponse
 */
DeleteDeploymentDraftResponse Client::deleteDeploymentDraftWithOptions(const string &_namespace, const string &deploymentDraftId, const DeleteDeploymentDraftHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.workspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDeploymentDraft"},
    {"version" , "2022-07-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/namespaces/" , Darabonba::Encode::Encoder::percentEncode(namespace) , "/deployment-drafts/" , Darabonba::Encode::Encoder::percentEncode(deploymentDraftId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDeploymentDraftResponse>();
}

/**
 * @summary delete a deploymentDraft
 *
 * @return DeleteDeploymentDraftResponse
 */
DeleteDeploymentDraftResponse Client::deleteDeploymentDraft(const string &_namespace, const string &deploymentDraftId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  DeleteDeploymentDraftHeaders headers = DeleteDeploymentDraftHeaders();
  return deleteDeploymentDraftWithOptions(namespace, deploymentDraftId, headers, runtime);
}

/**
 * @summary 删除deploymentTarget
 *
 * @param headers DeleteDeploymentTargetHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDeploymentTargetResponse
 */
DeleteDeploymentTargetResponse Client::deleteDeploymentTargetWithOptions(const string &_namespace, const string &deploymentTargetName, const DeleteDeploymentTargetHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.workspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDeploymentTarget"},
    {"version" , "2022-07-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/namespaces/" , Darabonba::Encode::Encoder::percentEncode(namespace) , "/deployment-targets/" , Darabonba::Encode::Encoder::percentEncode(deploymentTargetName))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDeploymentTargetResponse>();
}

/**
 * @summary 删除deploymentTarget
 *
 * @return DeleteDeploymentTargetResponse
 */
DeleteDeploymentTargetResponse Client::deleteDeploymentTarget(const string &_namespace, const string &deploymentTargetName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  DeleteDeploymentTargetHeaders headers = DeleteDeploymentTargetHeaders();
  return deleteDeploymentTargetWithOptions(namespace, deploymentTargetName, headers, runtime);
}

/**
 * @summary delete a folder
 *
 * @param headers DeleteFolderHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteFolderResponse
 */
DeleteFolderResponse Client::deleteFolderWithOptions(const string &_namespace, const string &folderId, const DeleteFolderHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.workspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteFolder"},
    {"version" , "2022-07-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/namespaces/" , Darabonba::Encode::Encoder::percentEncode(namespace) , "/folder/" , Darabonba::Encode::Encoder::percentEncode(folderId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteFolderResponse>();
}

/**
 * @summary delete a folder
 *
 * @return DeleteFolderResponse
 */
DeleteFolderResponse Client::deleteFolder(const string &_namespace, const string &folderId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  DeleteFolderHeaders headers = DeleteFolderHeaders();
  return deleteFolderWithOptions(namespace, folderId, headers, runtime);
}

/**
 * @summary Deletes the information about a job that is not in the running state in a deployment.
 *
 * @param headers DeleteJobHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteJobResponse
 */
DeleteJobResponse Client::deleteJobWithOptions(const string &_namespace, const string &jobId, const DeleteJobHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.workspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteJob"},
    {"version" , "2022-07-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/namespaces/" , Darabonba::Encode::Encoder::percentEncode(namespace) , "/jobs/" , Darabonba::Encode::Encoder::percentEncode(jobId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteJobResponse>();
}

/**
 * @summary Deletes the information about a job that is not in the running state in a deployment.
 *
 * @return DeleteJobResponse
 */
DeleteJobResponse Client::deleteJob(const string &_namespace, const string &jobId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  DeleteJobHeaders headers = DeleteJobHeaders();
  return deleteJobWithOptions(namespace, jobId, headers, runtime);
}

/**
 * @summary Revokes the permissions from a member.
 *
 * @param headers DeleteMemberHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMemberResponse
 */
DeleteMemberResponse Client::deleteMemberWithOptions(const string &_namespace, const string &member, const DeleteMemberHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.workspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteMember"},
    {"version" , "2022-07-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/gateway/v2/namespaces/" , Darabonba::Encode::Encoder::percentEncode(namespace) , "/members/" , Darabonba::Encode::Encoder::percentEncode(member))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMemberResponse>();
}

/**
 * @summary Revokes the permissions from a member.
 *
 * @return DeleteMemberResponse
 */
DeleteMemberResponse Client::deleteMember(const string &_namespace, const string &member) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  DeleteMemberHeaders headers = DeleteMemberHeaders();
  return deleteMemberWithOptions(namespace, member, headers, runtime);
}

/**
 * @summary Deletes a savepoint.
 *
 * @param headers DeleteSavepointHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSavepointResponse
 */
DeleteSavepointResponse Client::deleteSavepointWithOptions(const string &_namespace, const string &savepointId, const DeleteSavepointHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.workspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSavepoint"},
    {"version" , "2022-07-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/namespaces/" , Darabonba::Encode::Encoder::percentEncode(namespace) , "/savepoints/" , Darabonba::Encode::Encoder::percentEncode(savepointId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSavepointResponse>();
}

/**
 * @summary Deletes a savepoint.
 *
 * @return DeleteSavepointResponse
 */
DeleteSavepointResponse Client::deleteSavepoint(const string &_namespace, const string &savepointId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  DeleteSavepointHeaders headers = DeleteSavepointHeaders();
  return deleteSavepointWithOptions(namespace, savepointId, headers, runtime);
}

/**
 * @summary 删除定时执行计划
 *
 * @param headers DeleteScheduledPlanHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteScheduledPlanResponse
 */
DeleteScheduledPlanResponse Client::deleteScheduledPlanWithOptions(const string &_namespace, const string &scheduledPlanId, const DeleteScheduledPlanHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.workspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteScheduledPlan"},
    {"version" , "2022-07-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/namespaces/" , Darabonba::Encode::Encoder::percentEncode(namespace) , "/scheduled-plans/" , Darabonba::Encode::Encoder::percentEncode(scheduledPlanId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteScheduledPlanResponse>();
}

/**
 * @summary 删除定时执行计划
 *
 * @return DeleteScheduledPlanResponse
 */
DeleteScheduledPlanResponse Client::deleteScheduledPlan(const string &_namespace, const string &scheduledPlanId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  DeleteScheduledPlanHeaders headers = DeleteScheduledPlanHeaders();
  return deleteScheduledPlanWithOptions(namespace, scheduledPlanId, headers, runtime);
}

/**
 * @summary 删除session集群
 *
 * @param headers DeleteSessionClusterHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSessionClusterResponse
 */
DeleteSessionClusterResponse Client::deleteSessionClusterWithOptions(const string &_namespace, const string &sessionClusterName, const DeleteSessionClusterHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.workspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSessionCluster"},
    {"version" , "2022-07-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/namespaces/" , Darabonba::Encode::Encoder::percentEncode(namespace) , "/sessionclusters/" , Darabonba::Encode::Encoder::percentEncode(sessionClusterName))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSessionClusterResponse>();
}

/**
 * @summary 删除session集群
 *
 * @return DeleteSessionClusterResponse
 */
DeleteSessionClusterResponse Client::deleteSessionCluster(const string &_namespace, const string &sessionClusterName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  DeleteSessionClusterHeaders headers = DeleteSessionClusterHeaders();
  return deleteSessionClusterWithOptions(namespace, sessionClusterName, headers, runtime);
}

/**
 * @summary 删除UdfArtifact
 *
 * @param headers DeleteUdfArtifactHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteUdfArtifactResponse
 */
DeleteUdfArtifactResponse Client::deleteUdfArtifactWithOptions(const string &_namespace, const string &udfArtifactName, const DeleteUdfArtifactHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.workspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteUdfArtifact"},
    {"version" , "2022-07-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/namespaces/" , Darabonba::Encode::Encoder::percentEncode(namespace) , "/udfartifacts/" , Darabonba::Encode::Encoder::percentEncode(udfArtifactName))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteUdfArtifactResponse>();
}

/**
 * @summary 删除UdfArtifact
 *
 * @return DeleteUdfArtifactResponse
 */
DeleteUdfArtifactResponse Client::deleteUdfArtifact(const string &_namespace, const string &udfArtifactName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  DeleteUdfArtifactHeaders headers = DeleteUdfArtifactHeaders();
  return deleteUdfArtifactWithOptions(namespace, udfArtifactName, headers, runtime);
}

/**
 * @summary Deletes an existing user-defined function (UDF) from a Realtime Compute for Apache Flink workspace.
 *
 * @param request DeleteUdfFunctionRequest
 * @param headers DeleteUdfFunctionHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteUdfFunctionResponse
 */
DeleteUdfFunctionResponse Client::deleteUdfFunctionWithOptions(const string &_namespace, const string &functionName, const DeleteUdfFunctionRequest &request, const DeleteUdfFunctionHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClassName()) {
    query["className"] = request.className();
  }

  if (!!request.hasUdfArtifactName()) {
    query["udfArtifactName"] = request.udfArtifactName();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.workspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteUdfFunction"},
    {"version" , "2022-07-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/namespaces/" , Darabonba::Encode::Encoder::percentEncode(namespace) , "/udfartifacts/function/" , Darabonba::Encode::Encoder::percentEncode(functionName))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteUdfFunctionResponse>();
}

/**
 * @summary Deletes an existing user-defined function (UDF) from a Realtime Compute for Apache Flink workspace.
 *
 * @param request DeleteUdfFunctionRequest
 * @return DeleteUdfFunctionResponse
 */
DeleteUdfFunctionResponse Client::deleteUdfFunction(const string &_namespace, const string &functionName, const DeleteUdfFunctionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  DeleteUdfFunctionHeaders headers = DeleteUdfFunctionHeaders();
  return deleteUdfFunctionWithOptions(namespace, functionName, request, headers, runtime);
}

/**
 * @summary Deletes a variable.
 *
 * @param headers DeleteVariableHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteVariableResponse
 */
DeleteVariableResponse Client::deleteVariableWithOptions(const string &_namespace, const string &name, const DeleteVariableHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.workspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteVariable"},
    {"version" , "2022-07-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/namespaces/" , Darabonba::Encode::Encoder::percentEncode(namespace) , "/variables/" , Darabonba::Encode::Encoder::percentEncode(name))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteVariableResponse>();
}

/**
 * @summary Deletes a variable.
 *
 * @return DeleteVariableResponse
 */
DeleteVariableResponse Client::deleteVariable(const string &_namespace, const string &name) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  DeleteVariableHeaders headers = DeleteVariableHeaders();
  return deleteVariableWithOptions(namespace, name, headers, runtime);
}

/**
 * @summary deploy deploymentDraft async
 *
 * @param request DeployDeploymentDraftAsyncRequest
 * @param headers DeployDeploymentDraftAsyncHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeployDeploymentDraftAsyncResponse
 */
DeployDeploymentDraftAsyncResponse Client::deployDeploymentDraftAsyncWithOptions(const string &_namespace, const DeployDeploymentDraftAsyncRequest &request, const DeployDeploymentDraftAsyncHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.workspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(request.body())}
  }));
  Params params = Params(json({
    {"action" , "DeployDeploymentDraftAsync"},
    {"version" , "2022-07-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/namespaces/" , Darabonba::Encode::Encoder::percentEncode(namespace) , "/deployment-drafts/async-deploy")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeployDeploymentDraftAsyncResponse>();
}

/**
 * @summary deploy deploymentDraft async
 *
 * @param request DeployDeploymentDraftAsyncRequest
 * @return DeployDeploymentDraftAsyncResponse
 */
DeployDeploymentDraftAsyncResponse Client::deployDeploymentDraftAsync(const string &_namespace, const DeployDeploymentDraftAsyncRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  DeployDeploymentDraftAsyncHeaders headers = DeployDeploymentDraftAsyncHeaders();
  return deployDeploymentDraftAsyncWithOptions(namespace, request, headers, runtime);
}

/**
 * @summary 执行sql语句
 *
 * @param request ExecuteSqlStatementRequest
 * @param headers ExecuteSqlStatementHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExecuteSqlStatementResponse
 */
ExecuteSqlStatementResponse Client::executeSqlStatementWithOptions(const string &_namespace, const ExecuteSqlStatementRequest &request, const ExecuteSqlStatementHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.workspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(request.body())}
  }));
  Params params = Params(json({
    {"action" , "ExecuteSqlStatement"},
    {"version" , "2022-07-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/namespaces/" , Darabonba::Encode::Encoder::percentEncode(namespace) , "/sql-statement/execute")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExecuteSqlStatementResponse>();
}

/**
 * @summary 执行sql语句
 *
 * @param request ExecuteSqlStatementRequest
 * @return ExecuteSqlStatementResponse
 */
ExecuteSqlStatementResponse Client::executeSqlStatement(const string &_namespace, const ExecuteSqlStatementRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ExecuteSqlStatementHeaders headers = ExecuteSqlStatementHeaders();
  return executeSqlStatementWithOptions(namespace, request, headers, runtime);
}

/**
 * @summary 获取调试结果
 *
 * @param request FetchSqlPreviewResultsRequest
 * @param headers FetchSqlPreviewResultsHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return FetchSqlPreviewResultsResponse
 */
FetchSqlPreviewResultsResponse Client::fetchSqlPreviewResultsWithOptions(const string &_namespace, const FetchSqlPreviewResultsRequest &request, const FetchSqlPreviewResultsHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasQueryId()) {
    query["queryId"] = request.queryId();
  }

  if (!!request.hasSessionClusterName()) {
    query["sessionClusterName"] = request.sessionClusterName();
  }

  if (!!request.hasSessionId()) {
    query["sessionId"] = request.sessionId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.workspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "FetchSqlPreviewResults"},
    {"version" , "2022-07-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/namespaces/" , Darabonba::Encode::Encoder::percentEncode(namespace) , "/sql-preview/fetchResults")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FetchSqlPreviewResultsResponse>();
}

/**
 * @summary 获取调试结果
 *
 * @param request FetchSqlPreviewResultsRequest
 * @return FetchSqlPreviewResultsResponse
 */
FetchSqlPreviewResultsResponse Client::fetchSqlPreviewResults(const string &_namespace, const FetchSqlPreviewResultsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  FetchSqlPreviewResultsHeaders headers = FetchSqlPreviewResultsHeaders();
  return fetchSqlPreviewResultsWithOptions(namespace, request, headers, runtime);
}

/**
 * @summary Provides a Flink request proxy.
 *
 * @param request FlinkApiProxyRequest
 * @param headers FlinkApiProxyHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return FlinkApiProxyResponse
 */
FlinkApiProxyResponse Client::flinkApiProxyWithOptions(const FlinkApiProxyRequest &request, const FlinkApiProxyHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFlinkApiPath()) {
    query["flinkApiPath"] = request.flinkApiPath();
  }

  if (!!request.hasNamespace()) {
    query["namespace"] = request._namespace();
  }

  if (!!request.hasResourceId()) {
    query["resourceId"] = request.resourceId();
  }

  if (!!request.hasResourceType()) {
    query["resourceType"] = request.resourceType();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.workspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "FlinkApiProxy"},
    {"version" , "2022-07-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/flink-ui/v2/proxy")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FlinkApiProxyResponse>();
}

/**
 * @summary Provides a Flink request proxy.
 *
 * @param request FlinkApiProxyRequest
 * @return FlinkApiProxyResponse
 */
FlinkApiProxyResponse Client::flinkApiProxy(const FlinkApiProxyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  FlinkApiProxyHeaders headers = FlinkApiProxyHeaders();
  return flinkApiProxyWithOptions(request, headers, runtime);
}

/**
 * @summary Submits a ticket that applies for asynchronous generation of the fine-grained resources. This operation returns the ID of the ticket for you to query the asynchronous generation result.
 *
 * @param request GenerateResourcePlanWithFlinkConfAsyncRequest
 * @param headers GenerateResourcePlanWithFlinkConfAsyncHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GenerateResourcePlanWithFlinkConfAsyncResponse
 */
GenerateResourcePlanWithFlinkConfAsyncResponse Client::generateResourcePlanWithFlinkConfAsyncWithOptions(const string &_namespace, const string &deploymentId, const GenerateResourcePlanWithFlinkConfAsyncRequest &request, const GenerateResourcePlanWithFlinkConfAsyncHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.workspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(request.body())}
  }));
  Params params = Params(json({
    {"action" , "GenerateResourcePlanWithFlinkConfAsync"},
    {"version" , "2022-07-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/namespaces/" , Darabonba::Encode::Encoder::percentEncode(namespace) , "/deployments/" , Darabonba::Encode::Encoder::percentEncode(deploymentId) , "/resource-plan%3AasyncGenerate")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GenerateResourcePlanWithFlinkConfAsyncResponse>();
}

/**
 * @summary Submits a ticket that applies for asynchronous generation of the fine-grained resources. This operation returns the ID of the ticket for you to query the asynchronous generation result.
 *
 * @param request GenerateResourcePlanWithFlinkConfAsyncRequest
 * @return GenerateResourcePlanWithFlinkConfAsyncResponse
 */
GenerateResourcePlanWithFlinkConfAsyncResponse Client::generateResourcePlanWithFlinkConfAsync(const string &_namespace, const string &deploymentId, const GenerateResourcePlanWithFlinkConfAsyncRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GenerateResourcePlanWithFlinkConfAsyncHeaders headers = GenerateResourcePlanWithFlinkConfAsyncHeaders();
  return generateResourcePlanWithFlinkConfAsyncWithOptions(namespace, deploymentId, request, headers, runtime);
}

/**
 * @summary 获取应用中的执行定时计划
 *
 * @param request GetAppliedScheduledPlanRequest
 * @param headers GetAppliedScheduledPlanHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAppliedScheduledPlanResponse
 */
GetAppliedScheduledPlanResponse Client::getAppliedScheduledPlanWithOptions(const string &_namespace, const GetAppliedScheduledPlanRequest &request, const GetAppliedScheduledPlanHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeploymentId()) {
    query["deploymentId"] = request.deploymentId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.workspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAppliedScheduledPlan"},
    {"version" , "2022-07-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/namespaces/" , Darabonba::Encode::Encoder::percentEncode(namespace) , "/scheduled-plans%3AgetExecutedScheduledPlan")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAppliedScheduledPlanResponse>();
}

/**
 * @summary 获取应用中的执行定时计划
 *
 * @param request GetAppliedScheduledPlanRequest
 * @return GetAppliedScheduledPlanResponse
 */
GetAppliedScheduledPlanResponse Client::getAppliedScheduledPlan(const string &_namespace, const GetAppliedScheduledPlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetAppliedScheduledPlanHeaders headers = GetAppliedScheduledPlanHeaders();
  return getAppliedScheduledPlanWithOptions(namespace, request, headers, runtime);
}

/**
 * @summary 获取catalog
 *
 * @param request GetCatalogsRequest
 * @param headers GetCatalogsHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCatalogsResponse
 */
GetCatalogsResponse Client::getCatalogsWithOptions(const string &_namespace, const GetCatalogsRequest &request, const GetCatalogsHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCatalogName()) {
    query["catalogName"] = request.catalogName();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.workspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCatalogs"},
    {"version" , "2022-07-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/namespaces/" , Darabonba::Encode::Encoder::percentEncode(namespace) , "/catalogs")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCatalogsResponse>();
}

/**
 * @summary 获取catalog
 *
 * @param request GetCatalogsRequest
 * @return GetCatalogsResponse
 */
GetCatalogsResponse Client::getCatalogs(const string &_namespace, const GetCatalogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetCatalogsHeaders headers = GetCatalogsHeaders();
  return getCatalogsWithOptions(namespace, request, headers, runtime);
}

/**
 * @summary 获取database
 *
 * @param request GetDatabasesRequest
 * @param headers GetDatabasesHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDatabasesResponse
 */
GetDatabasesResponse Client::getDatabasesWithOptions(const string &_namespace, const string &catalogName, const GetDatabasesRequest &request, const GetDatabasesHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatabaseName()) {
    query["databaseName"] = request.databaseName();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.workspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDatabases"},
    {"version" , "2022-07-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/namespaces/" , Darabonba::Encode::Encoder::percentEncode(namespace) , "/catalogs/" , Darabonba::Encode::Encoder::percentEncode(catalogName) , "/databases")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDatabasesResponse>();
}

/**
 * @summary 获取database
 *
 * @param request GetDatabasesRequest
 * @return GetDatabasesResponse
 */
GetDatabasesResponse Client::getDatabases(const string &_namespace, const string &catalogName, const GetDatabasesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetDatabasesHeaders headers = GetDatabasesHeaders();
  return getDatabasesWithOptions(namespace, catalogName, request, headers, runtime);
}

/**
 * @summary get deploy deploymentDraft result
 *
 * @param headers GetDeployDeploymentDraftResultHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDeployDeploymentDraftResultResponse
 */
GetDeployDeploymentDraftResultResponse Client::getDeployDeploymentDraftResultWithOptions(const string &_namespace, const string &ticketId, const GetDeployDeploymentDraftResultHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.workspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDeployDeploymentDraftResult"},
    {"version" , "2022-07-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/namespaces/" , Darabonba::Encode::Encoder::percentEncode(namespace) , "/deployment-drafts/tickets/" , Darabonba::Encode::Encoder::percentEncode(ticketId) , "/async-deploy")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDeployDeploymentDraftResultResponse>();
}

/**
 * @summary get deploy deploymentDraft result
 *
 * @return GetDeployDeploymentDraftResultResponse
 */
GetDeployDeploymentDraftResultResponse Client::getDeployDeploymentDraftResult(const string &_namespace, const string &ticketId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetDeployDeploymentDraftResultHeaders headers = GetDeployDeploymentDraftResultHeaders();
  return getDeployDeploymentDraftResultWithOptions(namespace, ticketId, headers, runtime);
}

/**
 * @summary Obtains the details of a deployment.
 *
 * @param headers GetDeploymentHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDeploymentResponse
 */
GetDeploymentResponse Client::getDeploymentWithOptions(const string &_namespace, const string &deploymentId, const GetDeploymentHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.workspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDeployment"},
    {"version" , "2022-07-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/namespaces/" , Darabonba::Encode::Encoder::percentEncode(namespace) , "/deployments/" , Darabonba::Encode::Encoder::percentEncode(deploymentId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDeploymentResponse>();
}

/**
 * @summary Obtains the details of a deployment.
 *
 * @return GetDeploymentResponse
 */
GetDeploymentResponse Client::getDeployment(const string &_namespace, const string &deploymentId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetDeploymentHeaders headers = GetDeploymentHeaders();
  return getDeploymentWithOptions(namespace, deploymentId, headers, runtime);
}

/**
 * @summary get a deploymentDraft
 *
 * @param headers GetDeploymentDraftHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDeploymentDraftResponse
 */
GetDeploymentDraftResponse Client::getDeploymentDraftWithOptions(const string &_namespace, const string &deploymentDraftId, const GetDeploymentDraftHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.workspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDeploymentDraft"},
    {"version" , "2022-07-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/namespaces/" , Darabonba::Encode::Encoder::percentEncode(namespace) , "/deployment-drafts/" , Darabonba::Encode::Encoder::percentEncode(deploymentDraftId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDeploymentDraftResponse>();
}

/**
 * @summary get a deploymentDraft
 *
 * @return GetDeploymentDraftResponse
 */
GetDeploymentDraftResponse Client::getDeploymentDraft(const string &_namespace, const string &deploymentDraftId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetDeploymentDraftHeaders headers = GetDeploymentDraftHeaders();
  return getDeploymentDraftWithOptions(namespace, deploymentDraftId, headers, runtime);
}

/**
 * @summary get deploymentDraft lock
 *
 * @param request GetDeploymentDraftLockRequest
 * @param headers GetDeploymentDraftLockHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDeploymentDraftLockResponse
 */
GetDeploymentDraftLockResponse Client::getDeploymentDraftLockWithOptions(const string &_namespace, const GetDeploymentDraftLockRequest &request, const GetDeploymentDraftLockHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeploymentDraftId()) {
    query["deploymentDraftId"] = request.deploymentDraftId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.workspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDeploymentDraftLock"},
    {"version" , "2022-07-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/namespaces/" , Darabonba::Encode::Encoder::percentEncode(namespace) , "/deployment-drafts/getLock")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDeploymentDraftLockResponse>();
}

/**
 * @summary get deploymentDraft lock
 *
 * @param request GetDeploymentDraftLockRequest
 * @return GetDeploymentDraftLockResponse
 */
GetDeploymentDraftLockResponse Client::getDeploymentDraftLock(const string &_namespace, const GetDeploymentDraftLockRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetDeploymentDraftLockHeaders headers = GetDeploymentDraftLockHeaders();
  return getDeploymentDraftLockWithOptions(namespace, request, headers, runtime);
}

/**
 * @summary 获取运行事件
 *
 * @param request GetEventsRequest
 * @param headers GetEventsHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetEventsResponse
 */
GetEventsResponse Client::getEventsWithOptions(const string &_namespace, const GetEventsRequest &request, const GetEventsHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeploymentId()) {
    query["deploymentId"] = request.deploymentId();
  }

  if (!!request.hasPageIndex()) {
    query["pageIndex"] = request.pageIndex();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.workspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetEvents"},
    {"version" , "2022-07-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/namespaces/" , Darabonba::Encode::Encoder::percentEncode(namespace) , "/events")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetEventsResponse>();
}

/**
 * @summary 获取运行事件
 *
 * @param request GetEventsRequest
 * @return GetEventsResponse
 */
GetEventsResponse Client::getEvents(const string &_namespace, const GetEventsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetEventsHeaders headers = GetEventsHeaders();
  return getEventsWithOptions(namespace, request, headers, runtime);
}

/**
 * @summary get a folder
 *
 * @param request GetFolderRequest
 * @param headers GetFolderHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetFolderResponse
 */
GetFolderResponse Client::getFolderWithOptions(const string &_namespace, const GetFolderRequest &request, const GetFolderHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFolderId()) {
    query["folderId"] = request.folderId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.workspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetFolder"},
    {"version" , "2022-07-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/namespaces/" , Darabonba::Encode::Encoder::percentEncode(namespace) , "/folder")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetFolderResponse>();
}

/**
 * @summary get a folder
 *
 * @param request GetFolderRequest
 * @return GetFolderResponse
 */
GetFolderResponse Client::getFolder(const string &_namespace, const GetFolderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetFolderHeaders headers = GetFolderHeaders();
  return getFolderWithOptions(namespace, request, headers, runtime);
}

/**
 * @summary Obtains the asynchronous generation result of fine-grained resources based on the ID of the ticket that applies for an asynchronous generation.
 *
 * @param headers GetGenerateResourcePlanResultHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetGenerateResourcePlanResultResponse
 */
GetGenerateResourcePlanResultResponse Client::getGenerateResourcePlanResultWithOptions(const string &_namespace, const string &ticketId, const GetGenerateResourcePlanResultHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.workspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetGenerateResourcePlanResult"},
    {"version" , "2022-07-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/namespaces/" , Darabonba::Encode::Encoder::percentEncode(namespace) , "/deployments/tickets/" , Darabonba::Encode::Encoder::percentEncode(ticketId) , "/resource-plan%3AasyncGenerate")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetGenerateResourcePlanResultResponse>();
}

/**
 * @summary Obtains the asynchronous generation result of fine-grained resources based on the ID of the ticket that applies for an asynchronous generation.
 *
 * @return GetGenerateResourcePlanResultResponse
 */
GetGenerateResourcePlanResultResponse Client::getGenerateResourcePlanResult(const string &_namespace, const string &ticketId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetGenerateResourcePlanResultHeaders headers = GetGenerateResourcePlanResultHeaders();
  return getGenerateResourcePlanResultWithOptions(namespace, ticketId, headers, runtime);
}

/**
 * @summary 查询动态更新结果
 *
 * @param headers GetHotUpdateJobResultHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetHotUpdateJobResultResponse
 */
GetHotUpdateJobResultResponse Client::getHotUpdateJobResultWithOptions(const string &_namespace, const string &jobHotUpdateId, const GetHotUpdateJobResultHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.workspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetHotUpdateJobResult"},
    {"version" , "2022-07-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/namespaces/" , Darabonba::Encode::Encoder::percentEncode(namespace) , "/jobs/hot-updates/" , Darabonba::Encode::Encoder::percentEncode(jobHotUpdateId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetHotUpdateJobResultResponse>();
}

/**
 * @summary 查询动态更新结果
 *
 * @return GetHotUpdateJobResultResponse
 */
GetHotUpdateJobResultResponse Client::getHotUpdateJobResult(const string &_namespace, const string &jobHotUpdateId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetHotUpdateJobResultHeaders headers = GetHotUpdateJobResultHeaders();
  return getHotUpdateJobResultWithOptions(namespace, jobHotUpdateId, headers, runtime);
}

/**
 * @summary Obtains the details of a job.
 *
 * @param headers GetJobHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetJobResponse
 */
GetJobResponse Client::getJobWithOptions(const string &_namespace, const string &jobId, const GetJobHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.workspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetJob"},
    {"version" , "2022-07-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/namespaces/" , Darabonba::Encode::Encoder::percentEncode(namespace) , "/jobs/" , Darabonba::Encode::Encoder::percentEncode(jobId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetJobResponse>();
}

/**
 * @summary Obtains the details of a job.
 *
 * @return GetJobResponse
 */
GetJobResponse Client::getJob(const string &_namespace, const string &jobId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetJobHeaders headers = GetJobHeaders();
  return getJobWithOptions(namespace, jobId, headers, runtime);
}

/**
 * @summary 获取作业诊断信息
 *
 * @param headers GetJobDiagnosisHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetJobDiagnosisResponse
 */
GetJobDiagnosisResponse Client::getJobDiagnosisWithOptions(const string &_namespace, const string &deploymentId, const string &jobId, const GetJobDiagnosisHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.workspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetJobDiagnosis"},
    {"version" , "2022-07-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/namespaces/" , Darabonba::Encode::Encoder::percentEncode(namespace) , "/deployments/" , Darabonba::Encode::Encoder::percentEncode(deploymentId) , "/jobs/" , Darabonba::Encode::Encoder::percentEncode(jobId) , "/job-diagnoses/lite")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetJobDiagnosisResponse>();
}

/**
 * @summary 获取作业诊断信息
 *
 * @return GetJobDiagnosisResponse
 */
GetJobDiagnosisResponse Client::getJobDiagnosis(const string &_namespace, const string &deploymentId, const string &jobId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetJobDiagnosisHeaders headers = GetJobDiagnosisHeaders();
  return getJobDiagnosisWithOptions(namespace, deploymentId, jobId, headers, runtime);
}

/**
 * @summary Obtains the latest startup logs of a job.
 *
 * @param headers GetLatestJobStartLogHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLatestJobStartLogResponse
 */
GetLatestJobStartLogResponse Client::getLatestJobStartLogWithOptions(const string &_namespace, const string &deploymentId, const GetLatestJobStartLogHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.workspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetLatestJobStartLog"},
    {"version" , "2022-07-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/namespaces/" , Darabonba::Encode::Encoder::percentEncode(namespace) , "/deployments/" , Darabonba::Encode::Encoder::percentEncode(deploymentId) , "/latest_jobmanager_start_log")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetLatestJobStartLogResponse>();
}

/**
 * @summary Obtains the latest startup logs of a job.
 *
 * @return GetLatestJobStartLogResponse
 */
GetLatestJobStartLogResponse Client::getLatestJobStartLog(const string &_namespace, const string &deploymentId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetLatestJobStartLogHeaders headers = GetLatestJobStartLogHeaders();
  return getLatestJobStartLogWithOptions(namespace, deploymentId, headers, runtime);
}

/**
 * @summary Obtains the lineage information of a deployment.
 *
 * @param request GetLineageInfoRequest
 * @param headers GetLineageInfoHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLineageInfoResponse
 */
GetLineageInfoResponse Client::getLineageInfoWithOptions(const GetLineageInfoRequest &request, const GetLineageInfoHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.workspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(request.body())}
  }));
  Params params = Params(json({
    {"action" , "GetLineageInfo"},
    {"version" , "2022-07-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/meta/v2/lineage")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetLineageInfoResponse>();
}

/**
 * @summary Obtains the lineage information of a deployment.
 *
 * @param request GetLineageInfoRequest
 * @return GetLineageInfoResponse
 */
GetLineageInfoResponse Client::getLineageInfo(const GetLineageInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetLineageInfoHeaders headers = GetLineageInfoHeaders();
  return getLineageInfoWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the permissions of a member.
 *
 * @param headers GetMemberHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMemberResponse
 */
GetMemberResponse Client::getMemberWithOptions(const string &_namespace, const string &member, const GetMemberHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.workspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMember"},
    {"version" , "2022-07-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/gateway/v2/namespaces/" , Darabonba::Encode::Encoder::percentEncode(namespace) , "/members/" , Darabonba::Encode::Encoder::percentEncode(member))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMemberResponse>();
}

/**
 * @summary Queries the permissions of a member.
 *
 * @return GetMemberResponse
 */
GetMemberResponse Client::getMember(const string &_namespace, const string &member) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetMemberHeaders headers = GetMemberHeaders();
  return getMemberWithOptions(namespace, member, headers, runtime);
}

/**
 * @summary 获取上传文件URL
 *
 * @param request GetPreSignedUrlForPutObjectRequest
 * @param headers GetPreSignedUrlForPutObjectHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPreSignedUrlForPutObjectResponse
 */
GetPreSignedUrlForPutObjectResponse Client::getPreSignedUrlForPutObjectWithOptions(const string &_namespace, const GetPreSignedUrlForPutObjectRequest &request, const GetPreSignedUrlForPutObjectHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileName()) {
    query["fileName"] = request.fileName();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.workspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPreSignedUrlForPutObject"},
    {"version" , "2022-07-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/artifacts/v2/namespaces/" , Darabonba::Encode::Encoder::percentEncode(namespace) , "/getPreSignedUrlForPutObject")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPreSignedUrlForPutObjectResponse>();
}

/**
 * @summary 获取上传文件URL
 *
 * @param request GetPreSignedUrlForPutObjectRequest
 * @return GetPreSignedUrlForPutObjectResponse
 */
GetPreSignedUrlForPutObjectResponse Client::getPreSignedUrlForPutObject(const string &_namespace, const GetPreSignedUrlForPutObjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetPreSignedUrlForPutObjectHeaders headers = GetPreSignedUrlForPutObjectHeaders();
  return getPreSignedUrlForPutObjectWithOptions(namespace, request, headers, runtime);
}

/**
 * @summary Queries details of a savepoint and checkpoint.
 *
 * @param headers GetSavepointHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSavepointResponse
 */
GetSavepointResponse Client::getSavepointWithOptions(const string &_namespace, const string &savepointId, const GetSavepointHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.workspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSavepoint"},
    {"version" , "2022-07-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/namespaces/" , Darabonba::Encode::Encoder::percentEncode(namespace) , "/savepoints/" , Darabonba::Encode::Encoder::percentEncode(savepointId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSavepointResponse>();
}

/**
 * @summary Queries details of a savepoint and checkpoint.
 *
 * @return GetSavepointResponse
 */
GetSavepointResponse Client::getSavepoint(const string &_namespace, const string &savepointId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetSavepointHeaders headers = GetSavepointHeaders();
  return getSavepointWithOptions(namespace, savepointId, headers, runtime);
}

/**
 * @summary 获取session集群
 *
 * @param headers GetSessionClusterHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSessionClusterResponse
 */
GetSessionClusterResponse Client::getSessionClusterWithOptions(const string &_namespace, const string &sessionClusterName, const GetSessionClusterHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.workspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSessionCluster"},
    {"version" , "2022-07-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/namespaces/" , Darabonba::Encode::Encoder::percentEncode(namespace) , "/sessionclusters/" , Darabonba::Encode::Encoder::percentEncode(sessionClusterName))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSessionClusterResponse>();
}

/**
 * @summary 获取session集群
 *
 * @return GetSessionClusterResponse
 */
GetSessionClusterResponse Client::getSessionCluster(const string &_namespace, const string &sessionClusterName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetSessionClusterHeaders headers = GetSessionClusterHeaders();
  return getSessionClusterWithOptions(namespace, sessionClusterName, headers, runtime);
}

/**
 * @summary 获取table
 *
 * @param request GetTablesRequest
 * @param headers GetTablesHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTablesResponse
 */
GetTablesResponse Client::getTablesWithOptions(const string &_namespace, const string &catalogName, const string &databaseName, const GetTablesRequest &request, const GetTablesHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTableName()) {
    query["tableName"] = request.tableName();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.workspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTables"},
    {"version" , "2022-07-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/namespaces/" , Darabonba::Encode::Encoder::percentEncode(namespace) , "/catalogs/" , Darabonba::Encode::Encoder::percentEncode(catalogName) , "/databases/" , Darabonba::Encode::Encoder::percentEncode(databaseName) , "/tables")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTablesResponse>();
}

/**
 * @summary 获取table
 *
 * @param request GetTablesRequest
 * @return GetTablesResponse
 */
GetTablesResponse Client::getTables(const string &_namespace, const string &catalogName, const string &databaseName, const GetTablesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetTablesHeaders headers = GetTablesHeaders();
  return getTablesWithOptions(namespace, catalogName, databaseName, request, headers, runtime);
}

/**
 * @summary Obtains the details of the JAR or Python file that corresponds to the user-defined function (UDF) that you upload and create.
 *
 * @param request GetUdfArtifactsRequest
 * @param headers GetUdfArtifactsHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUdfArtifactsResponse
 */
GetUdfArtifactsResponse Client::getUdfArtifactsWithOptions(const string &_namespace, const GetUdfArtifactsRequest &request, const GetUdfArtifactsHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUdfArtifactName()) {
    query["udfArtifactName"] = request.udfArtifactName();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.workspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetUdfArtifacts"},
    {"version" , "2022-07-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/namespaces/" , Darabonba::Encode::Encoder::percentEncode(namespace) , "/udfartifacts")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetUdfArtifactsResponse>();
}

/**
 * @summary Obtains the details of the JAR or Python file that corresponds to the user-defined function (UDF) that you upload and create.
 *
 * @param request GetUdfArtifactsRequest
 * @return GetUdfArtifactsResponse
 */
GetUdfArtifactsResponse Client::getUdfArtifacts(const string &_namespace, const GetUdfArtifactsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetUdfArtifactsHeaders headers = GetUdfArtifactsHeaders();
  return getUdfArtifactsWithOptions(namespace, request, headers, runtime);
}

/**
 * @summary Dynamically updates parameters or resources of a deployment that is running.
 *
 * @param headers HotUpdateJobHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return HotUpdateJobResponse
 */
HotUpdateJobResponse Client::hotUpdateJobWithOptions(const string &_namespace, const string &jobId, const HotUpdateJobHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.workspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "HotUpdateJob"},
    {"version" , "2022-07-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/namespaces/" , Darabonba::Encode::Encoder::percentEncode(namespace) , "/jobs/" , Darabonba::Encode::Encoder::percentEncode(jobId) , "%3AhotUpdate")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<HotUpdateJobResponse>();
}

/**
 * @summary Dynamically updates parameters or resources of a deployment that is running.
 *
 * @return HotUpdateJobResponse
 */
HotUpdateJobResponse Client::hotUpdateJob(const string &_namespace, const string &jobId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  HotUpdateJobHeaders headers = HotUpdateJobHeaders();
  return hotUpdateJobWithOptions(namespace, jobId, headers, runtime);
}

/**
 * @summary Obtains a list of existing custom connectors.
 *
 * @param headers ListCustomConnectorsHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCustomConnectorsResponse
 */
ListCustomConnectorsResponse Client::listCustomConnectorsWithOptions(const string &_namespace, const ListCustomConnectorsHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.workspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCustomConnectors"},
    {"version" , "2022-07-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/namespaces/" , Darabonba::Encode::Encoder::percentEncode(namespace) , "/connectors")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCustomConnectorsResponse>();
}

/**
 * @summary Obtains a list of existing custom connectors.
 *
 * @return ListCustomConnectorsResponse
 */
ListCustomConnectorsResponse Client::listCustomConnectors(const string &_namespace) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ListCustomConnectorsHeaders headers = ListCustomConnectorsHeaders();
  return listCustomConnectorsWithOptions(namespace, headers, runtime);
}

/**
 * @summary list deploymentDrafts
 *
 * @param request ListDeploymentDraftsRequest
 * @param headers ListDeploymentDraftsHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDeploymentDraftsResponse
 */
ListDeploymentDraftsResponse Client::listDeploymentDraftsWithOptions(const string &_namespace, const ListDeploymentDraftsRequest &request, const ListDeploymentDraftsHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageIndex()) {
    query["pageIndex"] = request.pageIndex();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.workspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDeploymentDrafts"},
    {"version" , "2022-07-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/namespaces/" , Darabonba::Encode::Encoder::percentEncode(namespace) , "/deployment-drafts")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDeploymentDraftsResponse>();
}

/**
 * @summary list deploymentDrafts
 *
 * @param request ListDeploymentDraftsRequest
 * @return ListDeploymentDraftsResponse
 */
ListDeploymentDraftsResponse Client::listDeploymentDrafts(const string &_namespace, const ListDeploymentDraftsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ListDeploymentDraftsHeaders headers = ListDeploymentDraftsHeaders();
  return listDeploymentDraftsWithOptions(namespace, request, headers, runtime);
}

/**
 * @summary Obtains a list of clusters in which deployments can be deployed. The cluster can be a session cluster or a per-job cluster.
 *
 * @param request ListDeploymentTargetsRequest
 * @param headers ListDeploymentTargetsHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDeploymentTargetsResponse
 */
ListDeploymentTargetsResponse Client::listDeploymentTargetsWithOptions(const string &_namespace, const ListDeploymentTargetsRequest &request, const ListDeploymentTargetsHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageIndex()) {
    query["pageIndex"] = request.pageIndex();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.workspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDeploymentTargets"},
    {"version" , "2022-07-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/namespaces/" , Darabonba::Encode::Encoder::percentEncode(namespace) , "/deployment-targets")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDeploymentTargetsResponse>();
}

/**
 * @summary Obtains a list of clusters in which deployments can be deployed. The cluster can be a session cluster or a per-job cluster.
 *
 * @param request ListDeploymentTargetsRequest
 * @return ListDeploymentTargetsResponse
 */
ListDeploymentTargetsResponse Client::listDeploymentTargets(const string &_namespace, const ListDeploymentTargetsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ListDeploymentTargetsHeaders headers = ListDeploymentTargetsHeaders();
  return listDeploymentTargetsWithOptions(namespace, request, headers, runtime);
}

/**
 * @summary Obtains information about all deployments.
 *
 * @param request ListDeploymentsRequest
 * @param headers ListDeploymentsHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDeploymentsResponse
 */
ListDeploymentsResponse Client::listDeploymentsWithOptions(const string &_namespace, const ListDeploymentsRequest &request, const ListDeploymentsHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCreator()) {
    query["creator"] = request.creator();
  }

  if (!!request.hasExecutionMode()) {
    query["executionMode"] = request.executionMode();
  }

  if (!!request.hasLabelKey()) {
    query["labelKey"] = request.labelKey();
  }

  if (!!request.hasLabelValueArray()) {
    query["labelValueArray"] = request.labelValueArray();
  }

  if (!!request.hasModifier()) {
    query["modifier"] = request.modifier();
  }

  if (!!request.hasName()) {
    query["name"] = request.name();
  }

  if (!!request.hasPageIndex()) {
    query["pageIndex"] = request.pageIndex();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasSortName()) {
    query["sortName"] = request.sortName();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.status();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.workspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDeployments"},
    {"version" , "2022-07-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/namespaces/" , Darabonba::Encode::Encoder::percentEncode(namespace) , "/deployments")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDeploymentsResponse>();
}

/**
 * @summary Obtains information about all deployments.
 *
 * @param request ListDeploymentsRequest
 * @return ListDeploymentsResponse
 */
ListDeploymentsResponse Client::listDeployments(const string &_namespace, const ListDeploymentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ListDeploymentsHeaders headers = ListDeploymentsHeaders();
  return listDeploymentsWithOptions(namespace, request, headers, runtime);
}

/**
 * @summary 列出有编辑权限的项目空间。
 *
 * @param request ListEditableNamespaceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListEditableNamespaceResponse
 */
ListEditableNamespaceResponse Client::listEditableNamespaceWithOptions(const ListEditableNamespaceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNamespace()) {
    query["namespace"] = request._namespace();
  }

  if (!!request.hasPageIndex()) {
    query["pageIndex"] = request.pageIndex();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    query["regionId"] = request.regionId();
  }

  if (!!request.hasWorkspaceId()) {
    query["workspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListEditableNamespace"},
    {"version" , "2022-07-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/gateway/v2/namespaces/editable")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListEditableNamespaceResponse>();
}

/**
 * @summary 列出有编辑权限的项目空间。
 *
 * @param request ListEditableNamespaceRequest
 * @return ListEditableNamespaceResponse
 */
ListEditableNamespaceResponse Client::listEditableNamespace(const ListEditableNamespaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listEditableNamespaceWithOptions(request, headers, runtime);
}

/**
 * @summary Obtains a list of engine versions that are supported by Realtime Compute for Apache Flink.
 *
 * @param headers ListEngineVersionMetadataHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListEngineVersionMetadataResponse
 */
ListEngineVersionMetadataResponse Client::listEngineVersionMetadataWithOptions(const ListEngineVersionMetadataHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.workspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListEngineVersionMetadata"},
    {"version" , "2022-07-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/engine-version-meta.json")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListEngineVersionMetadataResponse>();
}

/**
 * @summary Obtains a list of engine versions that are supported by Realtime Compute for Apache Flink.
 *
 * @return ListEngineVersionMetadataResponse
 */
ListEngineVersionMetadataResponse Client::listEngineVersionMetadata() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ListEngineVersionMetadataHeaders headers = ListEngineVersionMetadataHeaders();
  return listEngineVersionMetadataWithOptions(headers, runtime);
}

/**
 * @summary Queries the information about all jobs in a deployment.
 *
 * @param request ListJobsRequest
 * @param headers ListJobsHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListJobsResponse
 */
ListJobsResponse Client::listJobsWithOptions(const string &_namespace, const ListJobsRequest &request, const ListJobsHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeploymentId()) {
    query["deploymentId"] = request.deploymentId();
  }

  if (!!request.hasPageIndex()) {
    query["pageIndex"] = request.pageIndex();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasSortName()) {
    query["sortName"] = request.sortName();
  }

  if (!!request.hasSortOrder()) {
    query["sortOrder"] = request.sortOrder();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.workspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListJobs"},
    {"version" , "2022-07-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/namespaces/" , Darabonba::Encode::Encoder::percentEncode(namespace) , "/jobs")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListJobsResponse>();
}

/**
 * @summary Queries the information about all jobs in a deployment.
 *
 * @param request ListJobsRequest
 * @return ListJobsResponse
 */
ListJobsResponse Client::listJobs(const string &_namespace, const ListJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ListJobsHeaders headers = ListJobsHeaders();
  return listJobsWithOptions(namespace, request, headers, runtime);
}

/**
 * @summary Queries the mappings between the ID and permissions of a member in a specific namespace.
 *
 * @param request ListMembersRequest
 * @param headers ListMembersHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMembersResponse
 */
ListMembersResponse Client::listMembersWithOptions(const string &_namespace, const ListMembersRequest &request, const ListMembersHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageIndex()) {
    query["pageIndex"] = request.pageIndex();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.workspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListMembers"},
    {"version" , "2022-07-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/gateway/v2/namespaces/" , Darabonba::Encode::Encoder::percentEncode(namespace) , "/members")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMembersResponse>();
}

/**
 * @summary Queries the mappings between the ID and permissions of a member in a specific namespace.
 *
 * @param request ListMembersRequest
 * @return ListMembersResponse
 */
ListMembersResponse Client::listMembers(const string &_namespace, const ListMembersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ListMembersHeaders headers = ListMembersHeaders();
  return listMembersWithOptions(namespace, request, headers, runtime);
}

/**
 * @summary Obtains a list of savepoints or checkpoints.
 *
 * @param request ListSavepointsRequest
 * @param headers ListSavepointsHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSavepointsResponse
 */
ListSavepointsResponse Client::listSavepointsWithOptions(const string &_namespace, const ListSavepointsRequest &request, const ListSavepointsHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeploymentId()) {
    query["deploymentId"] = request.deploymentId();
  }

  if (!!request.hasJobId()) {
    query["jobId"] = request.jobId();
  }

  if (!!request.hasPageIndex()) {
    query["pageIndex"] = request.pageIndex();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.workspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSavepoints"},
    {"version" , "2022-07-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/namespaces/" , Darabonba::Encode::Encoder::percentEncode(namespace) , "/savepoints")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSavepointsResponse>();
}

/**
 * @summary Obtains a list of savepoints or checkpoints.
 *
 * @param request ListSavepointsRequest
 * @return ListSavepointsResponse
 */
ListSavepointsResponse Client::listSavepoints(const string &_namespace, const ListSavepointsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ListSavepointsHeaders headers = ListSavepointsHeaders();
  return listSavepointsWithOptions(namespace, request, headers, runtime);
}

/**
 * @summary 列表定时执行计划
 *
 * @param request ListScheduledPlanRequest
 * @param headers ListScheduledPlanHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListScheduledPlanResponse
 */
ListScheduledPlanResponse Client::listScheduledPlanWithOptions(const string &_namespace, const ListScheduledPlanRequest &request, const ListScheduledPlanHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeploymentId()) {
    query["deploymentId"] = request.deploymentId();
  }

  if (!!request.hasPageIndex()) {
    query["pageIndex"] = request.pageIndex();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.workspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListScheduledPlan"},
    {"version" , "2022-07-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/namespaces/" , Darabonba::Encode::Encoder::percentEncode(namespace) , "/scheduled-plans")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListScheduledPlanResponse>();
}

/**
 * @summary 列表定时执行计划
 *
 * @param request ListScheduledPlanRequest
 * @return ListScheduledPlanResponse
 */
ListScheduledPlanResponse Client::listScheduledPlan(const string &_namespace, const ListScheduledPlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ListScheduledPlanHeaders headers = ListScheduledPlanHeaders();
  return listScheduledPlanWithOptions(namespace, request, headers, runtime);
}

/**
 * @summary 获取作业资源变更历史
 *
 * @param request ListScheduledPlanExecutedHistoryRequest
 * @param headers ListScheduledPlanExecutedHistoryHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListScheduledPlanExecutedHistoryResponse
 */
ListScheduledPlanExecutedHistoryResponse Client::listScheduledPlanExecutedHistoryWithOptions(const string &_namespace, const ListScheduledPlanExecutedHistoryRequest &request, const ListScheduledPlanExecutedHistoryHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeploymentId()) {
    query["deploymentId"] = request.deploymentId();
  }

  if (!!request.hasOrigin()) {
    query["origin"] = request.origin();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.workspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListScheduledPlanExecutedHistory"},
    {"version" , "2022-07-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/namespaces/" , Darabonba::Encode::Encoder::percentEncode(namespace) , "/job-resource-upgradings")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListScheduledPlanExecutedHistoryResponse>();
}

/**
 * @summary 获取作业资源变更历史
 *
 * @param request ListScheduledPlanExecutedHistoryRequest
 * @return ListScheduledPlanExecutedHistoryResponse
 */
ListScheduledPlanExecutedHistoryResponse Client::listScheduledPlanExecutedHistory(const string &_namespace, const ListScheduledPlanExecutedHistoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ListScheduledPlanExecutedHistoryHeaders headers = ListScheduledPlanExecutedHistoryHeaders();
  return listScheduledPlanExecutedHistoryWithOptions(namespace, request, headers, runtime);
}

/**
 * @summary 列举session集群
 *
 * @param headers ListSessionClustersHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSessionClustersResponse
 */
ListSessionClustersResponse Client::listSessionClustersWithOptions(const string &_namespace, const ListSessionClustersHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.workspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSessionClusters"},
    {"version" , "2022-07-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/namespaces/" , Darabonba::Encode::Encoder::percentEncode(namespace) , "/sessionclusters")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSessionClustersResponse>();
}

/**
 * @summary 列举session集群
 *
 * @return ListSessionClustersResponse
 */
ListSessionClustersResponse Client::listSessionClusters(const string &_namespace) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ListSessionClustersHeaders headers = ListSessionClustersHeaders();
  return listSessionClustersWithOptions(namespace, headers, runtime);
}

/**
 * @summary Obtains a list of variables.
 *
 * @param request ListVariablesRequest
 * @param headers ListVariablesHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListVariablesResponse
 */
ListVariablesResponse Client::listVariablesWithOptions(const string &_namespace, const ListVariablesRequest &request, const ListVariablesHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageIndex()) {
    query["pageIndex"] = request.pageIndex();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.workspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListVariables"},
    {"version" , "2022-07-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/namespaces/" , Darabonba::Encode::Encoder::percentEncode(namespace) , "/variables")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListVariablesResponse>();
}

/**
 * @summary Obtains a list of variables.
 *
 * @param request ListVariablesRequest
 * @return ListVariablesResponse
 */
ListVariablesResponse Client::listVariables(const string &_namespace, const ListVariablesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ListVariablesHeaders headers = ListVariablesHeaders();
  return listVariablesWithOptions(namespace, request, headers, runtime);
}

/**
 * @summary Registers a custom connector in a namespace. The registered custom connector can be used in SQL statements.
 *
 * @param request RegisterCustomConnectorRequest
 * @param headers RegisterCustomConnectorHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return RegisterCustomConnectorResponse
 */
RegisterCustomConnectorResponse Client::registerCustomConnectorWithOptions(const string &_namespace, const RegisterCustomConnectorRequest &request, const RegisterCustomConnectorHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJarUrl()) {
    query["jarUrl"] = request.jarUrl();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.workspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RegisterCustomConnector"},
    {"version" , "2022-07-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/namespaces/" , Darabonba::Encode::Encoder::percentEncode(namespace) , "/connectors%3Aregister")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RegisterCustomConnectorResponse>();
}

/**
 * @summary Registers a custom connector in a namespace. The registered custom connector can be used in SQL statements.
 *
 * @param request RegisterCustomConnectorRequest
 * @return RegisterCustomConnectorResponse
 */
RegisterCustomConnectorResponse Client::registerCustomConnector(const string &_namespace, const RegisterCustomConnectorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  RegisterCustomConnectorHeaders headers = RegisterCustomConnectorHeaders();
  return registerCustomConnectorWithOptions(namespace, request, headers, runtime);
}

/**
 * @summary Registers specific or all of the user-defined functions (UDFs) that are parsed from the JAR files. The registered functions can be used in SQL statements.
 *
 * @param request RegisterUdfFunctionRequest
 * @param headers RegisterUdfFunctionHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return RegisterUdfFunctionResponse
 */
RegisterUdfFunctionResponse Client::registerUdfFunctionWithOptions(const string &_namespace, const RegisterUdfFunctionRequest &request, const RegisterUdfFunctionHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClassName()) {
    query["className"] = request.className();
  }

  if (!!request.hasFunctionName()) {
    query["functionName"] = request.functionName();
  }

  if (!!request.hasUdfArtifactName()) {
    query["udfArtifactName"] = request.udfArtifactName();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.workspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RegisterUdfFunction"},
    {"version" , "2022-07-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/namespaces/" , Darabonba::Encode::Encoder::percentEncode(namespace) , "/udfartifacts/function%3AregisterUdfFunction")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RegisterUdfFunctionResponse>();
}

/**
 * @summary Registers specific or all of the user-defined functions (UDFs) that are parsed from the JAR files. The registered functions can be used in SQL statements.
 *
 * @param request RegisterUdfFunctionRequest
 * @return RegisterUdfFunctionResponse
 */
RegisterUdfFunctionResponse Client::registerUdfFunction(const string &_namespace, const RegisterUdfFunctionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  RegisterUdfFunctionHeaders headers = RegisterUdfFunctionHeaders();
  return registerUdfFunctionWithOptions(namespace, request, headers, runtime);
}

/**
 * @deprecated OpenAPI StartJob is deprecated
 *
 * @summary Creates and starts a job.
 *
 * @param request StartJobRequest
 * @param headers StartJobHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartJobResponse
 */
StartJobResponse Client::startJobWithOptions(const string &_namespace, const StartJobRequest &request, const StartJobHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.workspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(request.body())}
  }));
  Params params = Params(json({
    {"action" , "StartJob"},
    {"version" , "2022-07-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/namespaces/" , Darabonba::Encode::Encoder::percentEncode(namespace) , "/jobs")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartJobResponse>();
}

/**
 * @deprecated OpenAPI StartJob is deprecated
 *
 * @summary Creates and starts a job.
 *
 * @param request StartJobRequest
 * @return StartJobResponse
 */
StartJobResponse Client::startJob(const string &_namespace, const StartJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  StartJobHeaders headers = StartJobHeaders();
  return startJobWithOptions(namespace, request, headers, runtime);
}

/**
 * @summary Starts a job.
 *
 * @param request StartJobWithParamsRequest
 * @param headers StartJobWithParamsHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartJobWithParamsResponse
 */
StartJobWithParamsResponse Client::startJobWithParamsWithOptions(const string &_namespace, const StartJobWithParamsRequest &request, const StartJobWithParamsHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.workspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(request.body())}
  }));
  Params params = Params(json({
    {"action" , "StartJobWithParams"},
    {"version" , "2022-07-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/namespaces/" , Darabonba::Encode::Encoder::percentEncode(namespace) , "/jobs%3Astart")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartJobWithParamsResponse>();
}

/**
 * @summary Starts a job.
 *
 * @param request StartJobWithParamsRequest
 * @return StartJobWithParamsResponse
 */
StartJobWithParamsResponse Client::startJobWithParams(const string &_namespace, const StartJobWithParamsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  StartJobWithParamsHeaders headers = StartJobWithParamsHeaders();
  return startJobWithParamsWithOptions(namespace, request, headers, runtime);
}

/**
 * @summary 启动session集群
 *
 * @param headers StartSessionClusterHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartSessionClusterResponse
 */
StartSessionClusterResponse Client::startSessionClusterWithOptions(const string &_namespace, const string &sessionClusterName, const StartSessionClusterHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.workspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartSessionCluster"},
    {"version" , "2022-07-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/namespaces/" , Darabonba::Encode::Encoder::percentEncode(namespace) , "/sessionclusters/" , Darabonba::Encode::Encoder::percentEncode(sessionClusterName) , "%3Astart")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartSessionClusterResponse>();
}

/**
 * @summary 启动session集群
 *
 * @return StartSessionClusterResponse
 */
StartSessionClusterResponse Client::startSessionCluster(const string &_namespace, const string &sessionClusterName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  StartSessionClusterHeaders headers = StartSessionClusterHeaders();
  return startSessionClusterWithOptions(namespace, sessionClusterName, headers, runtime);
}

/**
 * @summary 停止应用执行定时计划
 *
 * @param headers StopApplyScheduledPlanHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopApplyScheduledPlanResponse
 */
StopApplyScheduledPlanResponse Client::stopApplyScheduledPlanWithOptions(const string &_namespace, const string &scheduledPlanId, const StopApplyScheduledPlanHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.workspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopApplyScheduledPlan"},
    {"version" , "2022-07-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/namespaces/" , Darabonba::Encode::Encoder::percentEncode(namespace) , "/scheduled-plans/" , Darabonba::Encode::Encoder::percentEncode(scheduledPlanId) , "%3Astop")},
    {"method" , "PATCH"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopApplyScheduledPlanResponse>();
}

/**
 * @summary 停止应用执行定时计划
 *
 * @return StopApplyScheduledPlanResponse
 */
StopApplyScheduledPlanResponse Client::stopApplyScheduledPlan(const string &_namespace, const string &scheduledPlanId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  StopApplyScheduledPlanHeaders headers = StopApplyScheduledPlanHeaders();
  return stopApplyScheduledPlanWithOptions(namespace, scheduledPlanId, headers, runtime);
}

/**
 * @summary Stops a job.
 *
 * @param request StopJobRequest
 * @param headers StopJobHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopJobResponse
 */
StopJobResponse Client::stopJobWithOptions(const string &_namespace, const string &jobId, const StopJobRequest &request, const StopJobHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.workspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(request.body())}
  }));
  Params params = Params(json({
    {"action" , "StopJob"},
    {"version" , "2022-07-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/namespaces/" , Darabonba::Encode::Encoder::percentEncode(namespace) , "/jobs/" , Darabonba::Encode::Encoder::percentEncode(jobId) , "%3Astop")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopJobResponse>();
}

/**
 * @summary Stops a job.
 *
 * @param request StopJobRequest
 * @return StopJobResponse
 */
StopJobResponse Client::stopJob(const string &_namespace, const string &jobId, const StopJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  StopJobHeaders headers = StopJobHeaders();
  return stopJobWithOptions(namespace, jobId, request, headers, runtime);
}

/**
 * @summary 停止session集群
 *
 * @param headers StopSessionClusterHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopSessionClusterResponse
 */
StopSessionClusterResponse Client::stopSessionClusterWithOptions(const string &_namespace, const string &sessionClusterName, const StopSessionClusterHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.workspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopSessionCluster"},
    {"version" , "2022-07-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/namespaces/" , Darabonba::Encode::Encoder::percentEncode(namespace) , "/sessionclusters/" , Darabonba::Encode::Encoder::percentEncode(sessionClusterName) , "%3Astop")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopSessionClusterResponse>();
}

/**
 * @summary 停止session集群
 *
 * @return StopSessionClusterResponse
 */
StopSessionClusterResponse Client::stopSessionCluster(const string &_namespace, const string &sessionClusterName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  StopSessionClusterHeaders headers = StopSessionClusterHeaders();
  return stopSessionClusterWithOptions(namespace, sessionClusterName, headers, runtime);
}

/**
 * @summary 提交sql调试
 *
 * @param request SubmitSqlPreviewRequest
 * @param headers SubmitSqlPreviewHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitSqlPreviewResponse
 */
SubmitSqlPreviewResponse Client::submitSqlPreviewWithOptions(const string &_namespace, const SubmitSqlPreviewRequest &request, const SubmitSqlPreviewHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSessionClusterName()) {
    query["sessionClusterName"] = request.sessionClusterName();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.workspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(request.body())}
  }));
  Params params = Params(json({
    {"action" , "SubmitSqlPreview"},
    {"version" , "2022-07-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/namespaces/" , Darabonba::Encode::Encoder::percentEncode(namespace) , "/sql-preview/submit")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitSqlPreviewResponse>();
}

/**
 * @summary 提交sql调试
 *
 * @param request SubmitSqlPreviewRequest
 * @return SubmitSqlPreviewResponse
 */
SubmitSqlPreviewResponse Client::submitSqlPreview(const string &_namespace, const SubmitSqlPreviewRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  SubmitSqlPreviewHeaders headers = SubmitSqlPreviewHeaders();
  return submitSqlPreviewWithOptions(namespace, request, headers, runtime);
}

/**
 * @summary Updates information about a deployment.
 *
 * @param request UpdateDeploymentRequest
 * @param headers UpdateDeploymentHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDeploymentResponse
 */
UpdateDeploymentResponse Client::updateDeploymentWithOptions(const string &_namespace, const string &deploymentId, const UpdateDeploymentRequest &request, const UpdateDeploymentHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.workspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(request.body())}
  }));
  Params params = Params(json({
    {"action" , "UpdateDeployment"},
    {"version" , "2022-07-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/namespaces/" , Darabonba::Encode::Encoder::percentEncode(namespace) , "/deployments/" , Darabonba::Encode::Encoder::percentEncode(deploymentId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDeploymentResponse>();
}

/**
 * @summary Updates information about a deployment.
 *
 * @param request UpdateDeploymentRequest
 * @return UpdateDeploymentResponse
 */
UpdateDeploymentResponse Client::updateDeployment(const string &_namespace, const string &deploymentId, const UpdateDeploymentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  UpdateDeploymentHeaders headers = UpdateDeploymentHeaders();
  return updateDeploymentWithOptions(namespace, deploymentId, request, headers, runtime);
}

/**
 * @summary update a deploymentDraft
 *
 * @param request UpdateDeploymentDraftRequest
 * @param headers UpdateDeploymentDraftHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDeploymentDraftResponse
 */
UpdateDeploymentDraftResponse Client::updateDeploymentDraftWithOptions(const string &_namespace, const string &deploymentDraftId, const UpdateDeploymentDraftRequest &request, const UpdateDeploymentDraftHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.workspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(request.body())}
  }));
  Params params = Params(json({
    {"action" , "UpdateDeploymentDraft"},
    {"version" , "2022-07-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/namespaces/" , Darabonba::Encode::Encoder::percentEncode(namespace) , "/deployment-drafts/" , Darabonba::Encode::Encoder::percentEncode(deploymentDraftId))},
    {"method" , "PATCH"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDeploymentDraftResponse>();
}

/**
 * @summary update a deploymentDraft
 *
 * @param request UpdateDeploymentDraftRequest
 * @return UpdateDeploymentDraftResponse
 */
UpdateDeploymentDraftResponse Client::updateDeploymentDraft(const string &_namespace, const string &deploymentDraftId, const UpdateDeploymentDraftRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  UpdateDeploymentDraftHeaders headers = UpdateDeploymentDraftHeaders();
  return updateDeploymentDraftWithOptions(namespace, deploymentDraftId, request, headers, runtime);
}

/**
 * @summary 修改deploymentTarget
 *
 * @param request UpdateDeploymentTargetRequest
 * @param headers UpdateDeploymentTargetHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDeploymentTargetResponse
 */
UpdateDeploymentTargetResponse Client::updateDeploymentTargetWithOptions(const string &_namespace, const string &deploymentTargetName, const UpdateDeploymentTargetRequest &request, const UpdateDeploymentTargetHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.workspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(request.body())}
  }));
  Params params = Params(json({
    {"action" , "UpdateDeploymentTarget"},
    {"version" , "2022-07-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/namespaces/" , Darabonba::Encode::Encoder::percentEncode(namespace) , "/deployment-targets/" , Darabonba::Encode::Encoder::percentEncode(deploymentTargetName))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDeploymentTargetResponse>();
}

/**
 * @summary 修改deploymentTarget
 *
 * @param request UpdateDeploymentTargetRequest
 * @return UpdateDeploymentTargetResponse
 */
UpdateDeploymentTargetResponse Client::updateDeploymentTarget(const string &_namespace, const string &deploymentTargetName, const UpdateDeploymentTargetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  UpdateDeploymentTargetHeaders headers = UpdateDeploymentTargetHeaders();
  return updateDeploymentTargetWithOptions(namespace, deploymentTargetName, request, headers, runtime);
}

/**
 * @summary 更新部署目标
 *
 * @param request UpdateDeploymentTargetV2Request
 * @param headers UpdateDeploymentTargetV2Headers
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDeploymentTargetV2Response
 */
UpdateDeploymentTargetV2Response Client::updateDeploymentTargetV2WithOptions(const string &_namespace, const string &deploymentTargetName, const UpdateDeploymentTargetV2Request &request, const UpdateDeploymentTargetV2Headers &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.workspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(request.body())}
  }));
  Params params = Params(json({
    {"action" , "UpdateDeploymentTargetV2"},
    {"version" , "2022-07-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/namespaces/" , Darabonba::Encode::Encoder::percentEncode(namespace) , "/deployment-targets/support-elastic/" , Darabonba::Encode::Encoder::percentEncode(deploymentTargetName))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDeploymentTargetV2Response>();
}

/**
 * @summary 更新部署目标
 *
 * @param request UpdateDeploymentTargetV2Request
 * @return UpdateDeploymentTargetV2Response
 */
UpdateDeploymentTargetV2Response Client::updateDeploymentTargetV2(const string &_namespace, const string &deploymentTargetName, const UpdateDeploymentTargetV2Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  UpdateDeploymentTargetV2Headers headers = UpdateDeploymentTargetV2Headers();
  return updateDeploymentTargetV2WithOptions(namespace, deploymentTargetName, request, headers, runtime);
}

/**
 * @summary update a folder
 *
 * @param request UpdateFolderRequest
 * @param headers UpdateFolderHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateFolderResponse
 */
UpdateFolderResponse Client::updateFolderWithOptions(const string &_namespace, const string &folderId, const UpdateFolderRequest &request, const UpdateFolderHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.workspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(request.body())}
  }));
  Params params = Params(json({
    {"action" , "UpdateFolder"},
    {"version" , "2022-07-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/namespaces/" , Darabonba::Encode::Encoder::percentEncode(namespace) , "/folder/" , Darabonba::Encode::Encoder::percentEncode(folderId))},
    {"method" , "PATCH"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateFolderResponse>();
}

/**
 * @summary update a folder
 *
 * @param request UpdateFolderRequest
 * @return UpdateFolderResponse
 */
UpdateFolderResponse Client::updateFolder(const string &_namespace, const string &folderId, const UpdateFolderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  UpdateFolderHeaders headers = UpdateFolderHeaders();
  return updateFolderWithOptions(namespace, folderId, request, headers, runtime);
}

/**
 * @summary Updates the permissions of one or more members in a specific namespace.
 *
 * @param request UpdateMemberRequest
 * @param headers UpdateMemberHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateMemberResponse
 */
UpdateMemberResponse Client::updateMemberWithOptions(const string &_namespace, const UpdateMemberRequest &request, const UpdateMemberHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.workspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(request.body())}
  }));
  Params params = Params(json({
    {"action" , "UpdateMember"},
    {"version" , "2022-07-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/gateway/v2/namespaces/" , Darabonba::Encode::Encoder::percentEncode(namespace) , "/members")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateMemberResponse>();
}

/**
 * @summary Updates the permissions of one or more members in a specific namespace.
 *
 * @param request UpdateMemberRequest
 * @return UpdateMemberResponse
 */
UpdateMemberResponse Client::updateMember(const string &_namespace, const UpdateMemberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  UpdateMemberHeaders headers = UpdateMemberHeaders();
  return updateMemberWithOptions(namespace, request, headers, runtime);
}

/**
 * @summary 更新定时执行计划
 *
 * @param request UpdateScheduledPlanRequest
 * @param headers UpdateScheduledPlanHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateScheduledPlanResponse
 */
UpdateScheduledPlanResponse Client::updateScheduledPlanWithOptions(const string &_namespace, const string &scheduledPlanId, const UpdateScheduledPlanRequest &request, const UpdateScheduledPlanHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.workspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(request.body())}
  }));
  Params params = Params(json({
    {"action" , "UpdateScheduledPlan"},
    {"version" , "2022-07-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/namespaces/" , Darabonba::Encode::Encoder::percentEncode(namespace) , "/scheduled-plans/" , Darabonba::Encode::Encoder::percentEncode(scheduledPlanId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateScheduledPlanResponse>();
}

/**
 * @summary 更新定时执行计划
 *
 * @param request UpdateScheduledPlanRequest
 * @return UpdateScheduledPlanResponse
 */
UpdateScheduledPlanResponse Client::updateScheduledPlan(const string &_namespace, const string &scheduledPlanId, const UpdateScheduledPlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  UpdateScheduledPlanHeaders headers = UpdateScheduledPlanHeaders();
  return updateScheduledPlanWithOptions(namespace, scheduledPlanId, request, headers, runtime);
}

/**
 * @summary 更新session集群
 *
 * @param request UpdateSessionClusterRequest
 * @param headers UpdateSessionClusterHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSessionClusterResponse
 */
UpdateSessionClusterResponse Client::updateSessionClusterWithOptions(const string &_namespace, const string &sessionClusterName, const UpdateSessionClusterRequest &request, const UpdateSessionClusterHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.workspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(request.body())}
  }));
  Params params = Params(json({
    {"action" , "UpdateSessionCluster"},
    {"version" , "2022-07-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/namespaces/" , Darabonba::Encode::Encoder::percentEncode(namespace) , "/sessionclusters/" , Darabonba::Encode::Encoder::percentEncode(sessionClusterName))},
    {"method" , "PATCH"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSessionClusterResponse>();
}

/**
 * @summary 更新session集群
 *
 * @param request UpdateSessionClusterRequest
 * @return UpdateSessionClusterResponse
 */
UpdateSessionClusterResponse Client::updateSessionCluster(const string &_namespace, const string &sessionClusterName, const UpdateSessionClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  UpdateSessionClusterHeaders headers = UpdateSessionClusterHeaders();
  return updateSessionClusterWithOptions(namespace, sessionClusterName, request, headers, runtime);
}

/**
 * @summary Updates the JAR file of the user-defined function (UDF) that you create.
 *
 * @param request UpdateUdfArtifactRequest
 * @param headers UpdateUdfArtifactHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateUdfArtifactResponse
 */
UpdateUdfArtifactResponse Client::updateUdfArtifactWithOptions(const string &_namespace, const string &udfArtifactName, const UpdateUdfArtifactRequest &request, const UpdateUdfArtifactHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.workspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(request.body())}
  }));
  Params params = Params(json({
    {"action" , "UpdateUdfArtifact"},
    {"version" , "2022-07-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/namespaces/" , Darabonba::Encode::Encoder::percentEncode(namespace) , "/udfartifacts/" , Darabonba::Encode::Encoder::percentEncode(udfArtifactName))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateUdfArtifactResponse>();
}

/**
 * @summary Updates the JAR file of the user-defined function (UDF) that you create.
 *
 * @param request UpdateUdfArtifactRequest
 * @return UpdateUdfArtifactResponse
 */
UpdateUdfArtifactResponse Client::updateUdfArtifact(const string &_namespace, const string &udfArtifactName, const UpdateUdfArtifactRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  UpdateUdfArtifactHeaders headers = UpdateUdfArtifactHeaders();
  return updateUdfArtifactWithOptions(namespace, udfArtifactName, request, headers, runtime);
}

/**
 * @summary 更新秘钥
 *
 * @param request UpdateVariableRequest
 * @param headers UpdateVariableHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateVariableResponse
 */
UpdateVariableResponse Client::updateVariableWithOptions(const string &_namespace, const string &name, const UpdateVariableRequest &request, const UpdateVariableHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.workspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(request.body())}
  }));
  Params params = Params(json({
    {"action" , "UpdateVariable"},
    {"version" , "2022-07-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/namespaces/" , Darabonba::Encode::Encoder::percentEncode(namespace) , "/variables/" , Darabonba::Encode::Encoder::percentEncode(name))},
    {"method" , "PATCH"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateVariableResponse>();
}

/**
 * @summary 更新秘钥
 *
 * @param request UpdateVariableRequest
 * @return UpdateVariableResponse
 */
UpdateVariableResponse Client::updateVariable(const string &_namespace, const string &name, const UpdateVariableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  UpdateVariableHeaders headers = UpdateVariableHeaders();
  return updateVariableWithOptions(namespace, name, request, headers, runtime);
}

/**
 * @summary Verifies the code of an SQL deployment.
 *
 * @param request ValidateSqlStatementRequest
 * @param headers ValidateSqlStatementHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ValidateSqlStatementResponse
 */
ValidateSqlStatementResponse Client::validateSqlStatementWithOptions(const string &_namespace, const ValidateSqlStatementRequest &request, const ValidateSqlStatementHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.workspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(request.body())}
  }));
  Params params = Params(json({
    {"action" , "ValidateSqlStatement"},
    {"version" , "2022-07-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/namespaces/" , Darabonba::Encode::Encoder::percentEncode(namespace) , "/sql-statement/validate")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ValidateSqlStatementResponse>();
}

/**
 * @summary Verifies the code of an SQL deployment.
 *
 * @param request ValidateSqlStatementRequest
 * @return ValidateSqlStatementResponse
 */
ValidateSqlStatementResponse Client::validateSqlStatement(const string &_namespace, const ValidateSqlStatementRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ValidateSqlStatementHeaders headers = ValidateSqlStatementHeaders();
  return validateSqlStatementWithOptions(namespace, request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace Ververica20220718