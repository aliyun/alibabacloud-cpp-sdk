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
  this->_endpointMap = json({
    {"us-west-1" , "ververica.us-west-1.aliyuncs.com"},
    {"us-east-1" , "ververica.us-east-1.aliyuncs.com"},
    {"eu-west-1" , "ververica.eu-west-1.aliyuncs.com"},
    {"eu-central-1" , "ververica.eu-central-1.aliyuncs.com"},
    {"cn-zhangjiakou" , "ververica.cn-zhangjiakou.aliyuncs.com"},
    {"cn-wulanchabu" , "ververica.cn-wulanchabu.aliyuncs.com"},
    {"cn-shenzhen" , "ververica.cn-shenzhen.aliyuncs.com"},
    {"cn-shanghai-finance-1" , "ververica.cn-shanghai-finance-1.aliyuncs.com"},
    {"cn-shanghai" , "ververica.cn-shanghai.aliyuncs.com"},
    {"cn-qingdao" , "ververica.cn-qingdao.aliyuncs.com"},
    {"cn-hongkong" , "ververica.cn-hongkong.aliyuncs.com"},
    {"cn-hangzhou" , "ververica.cn-hangzhou.aliyuncs.com"},
    {"cn-chengdu" , "ververica.cn-chengdu.aliyuncs.com"},
    {"cn-beijing" , "ververica.cn-beijing.aliyuncs.com"},
    {"ap-southeast-5" , "ververica.ap-southeast-5.aliyuncs.com"},
    {"ap-southeast-3" , "ververica.ap-southeast-3.aliyuncs.com"},
    {"ap-southeast-1" , "ververica.ap-southeast-1.aliyuncs.com"},
    {"ap-northeast-1" , "ververica.ap-northeast-1.aliyuncs.com"}
  }).get<map<string, string>>();
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
 * @summary This operation applies a scheduled plan.
 *
 * @param headers ApplyScheduledPlanHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ApplyScheduledPlanResponse
 */
ApplyScheduledPlanResponse Client::applyScheduledPlanWithOptions(const string &_namespace, const string &scheduledPlanId, const ApplyScheduledPlanHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.getWorkspace());
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
 * @summary This operation applies a scheduled plan.
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
    query["queryId"] = request.getQueryId();
  }

  if (!!request.hasSessionClusterName()) {
    query["sessionClusterName"] = request.getSessionClusterName();
  }

  if (!!request.hasSessionId()) {
    query["sessionId"] = request.getSessionId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.getWorkspace());
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
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.getWorkspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
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
 * @summary Creates a draft for an SQL or data ingestion job.
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
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.getWorkspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
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
 * @summary Creates a draft for an SQL or data ingestion job.
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
 * @summary Creates a deployment target.
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
    query["deploymentTargetName"] = request.getDeploymentTargetName();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.getWorkspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
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
 * @summary Creates a deployment target.
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
 * @summary Creates a deployment target.
 *
 * @description The previous API for creating deployment targets supported only fixed or elastic resources. This new API supports fixed resources, elastic resources, and mixed mode.
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
    query["deploymentTargetName"] = request.getDeploymentTargetName();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.getWorkspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
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
 * @summary Creates a deployment target.
 *
 * @description The previous API for creating deployment targets supported only fixed or elastic resources. This new API supports fixed resources, elastic resources, and mixed mode.
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
 * @summary Creates a folder.
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
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.getWorkspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
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
 * @summary Creates a folder.
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
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.getWorkspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
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
    body["deploymentId"] = request.getDeploymentId();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasNativeFormat()) {
    body["nativeFormat"] = request.getNativeFormat();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.getWorkspace());
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
 * @summary Creates a scheduled plan.
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
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.getWorkspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
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
 * @summary Creates a scheduled plan.
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
 * @summary Creates a session cluster.
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
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.getWorkspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
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
 * @summary Creates a session cluster.
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
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.getWorkspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
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
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.getWorkspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
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
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.getWorkspace());
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
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.getWorkspace());
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
 * @summary Deletes a draft of an SQL or data ingestion job. The draft cannot be deleted if it has any published or running deployment.
 *
 * @param headers DeleteDeploymentDraftHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDeploymentDraftResponse
 */
DeleteDeploymentDraftResponse Client::deleteDeploymentDraftWithOptions(const string &_namespace, const string &deploymentDraftId, const DeleteDeploymentDraftHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.getWorkspace());
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
 * @summary Deletes a draft of an SQL or data ingestion job. The draft cannot be deleted if it has any published or running deployment.
 *
 * @return DeleteDeploymentDraftResponse
 */
DeleteDeploymentDraftResponse Client::deleteDeploymentDraft(const string &_namespace, const string &deploymentDraftId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  DeleteDeploymentDraftHeaders headers = DeleteDeploymentDraftHeaders();
  return deleteDeploymentDraftWithOptions(namespace, deploymentDraftId, headers, runtime);
}

/**
 * @summary Deletes a deployment target.
 *
 * @param headers DeleteDeploymentTargetHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDeploymentTargetResponse
 */
DeleteDeploymentTargetResponse Client::deleteDeploymentTargetWithOptions(const string &_namespace, const string &deploymentTargetName, const DeleteDeploymentTargetHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.getWorkspace());
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
 * @summary Deletes a deployment target.
 *
 * @return DeleteDeploymentTargetResponse
 */
DeleteDeploymentTargetResponse Client::deleteDeploymentTarget(const string &_namespace, const string &deploymentTargetName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  DeleteDeploymentTargetHeaders headers = DeleteDeploymentTargetHeaders();
  return deleteDeploymentTargetWithOptions(namespace, deploymentTargetName, headers, runtime);
}

/**
 * @summary Deletes an empty folder. If files or folders exist in a folder, the folder cannot be deleted.
 *
 * @param headers DeleteFolderHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteFolderResponse
 */
DeleteFolderResponse Client::deleteFolderWithOptions(const string &_namespace, const string &folderId, const DeleteFolderHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.getWorkspace());
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
 * @summary Deletes an empty folder. If files or folders exist in a folder, the folder cannot be deleted.
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
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.getWorkspace());
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
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.getWorkspace());
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
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.getWorkspace());
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
 * @summary Deletes a scheduled plan.
 *
 * @param headers DeleteScheduledPlanHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteScheduledPlanResponse
 */
DeleteScheduledPlanResponse Client::deleteScheduledPlanWithOptions(const string &_namespace, const string &scheduledPlanId, const DeleteScheduledPlanHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.getWorkspace());
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
 * @summary Deletes a scheduled plan.
 *
 * @return DeleteScheduledPlanResponse
 */
DeleteScheduledPlanResponse Client::deleteScheduledPlan(const string &_namespace, const string &scheduledPlanId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  DeleteScheduledPlanHeaders headers = DeleteScheduledPlanHeaders();
  return deleteScheduledPlanWithOptions(namespace, scheduledPlanId, headers, runtime);
}

/**
 * @summary Deletes a session cluster.
 *
 * @param headers DeleteSessionClusterHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSessionClusterResponse
 */
DeleteSessionClusterResponse Client::deleteSessionClusterWithOptions(const string &_namespace, const string &sessionClusterName, const DeleteSessionClusterHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.getWorkspace());
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
 * @summary Deletes a session cluster.
 *
 * @return DeleteSessionClusterResponse
 */
DeleteSessionClusterResponse Client::deleteSessionCluster(const string &_namespace, const string &sessionClusterName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  DeleteSessionClusterHeaders headers = DeleteSessionClusterHeaders();
  return deleteSessionClusterWithOptions(namespace, sessionClusterName, headers, runtime);
}

/**
 * @summary Deletes a user-defined function (UDF) resource. You must delete all UDFs registered with the resource before you can delete the resource.
 *
 * @param headers DeleteUdfArtifactHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteUdfArtifactResponse
 */
DeleteUdfArtifactResponse Client::deleteUdfArtifactWithOptions(const string &_namespace, const string &udfArtifactName, const DeleteUdfArtifactHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.getWorkspace());
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
 * @summary Deletes a user-defined function (UDF) resource. You must delete all UDFs registered with the resource before you can delete the resource.
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
    query["className"] = request.getClassName();
  }

  if (!!request.hasUdfArtifactName()) {
    query["udfArtifactName"] = request.getUdfArtifactName();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.getWorkspace());
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
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.getWorkspace());
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
 * @summary Deploys a draft of an SQL job.
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
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.getWorkspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
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
 * @summary Deploys a draft of an SQL job.
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
 * @summary Executes Data Definition Language (DDL) and Data Manipulation Language (DML) statements on metadata. Data Query Language (DQL) is not supported.
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
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.getWorkspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
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
 * @summary Executes Data Definition Language (DDL) and Data Manipulation Language (DML) statements on metadata. Data Query Language (DQL) is not supported.
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
    query["queryId"] = request.getQueryId();
  }

  if (!!request.hasSessionClusterName()) {
    query["sessionClusterName"] = request.getSessionClusterName();
  }

  if (!!request.hasSessionId()) {
    query["sessionId"] = request.getSessionId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.getWorkspace());
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
 * @summary Provides a proxy for Realtime Compute for Apache Flink requests.
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
    query["flinkApiPath"] = request.getFlinkApiPath();
  }

  if (!!request.hasNamespace()) {
    query["namespace"] = request.getNamespace();
  }

  if (!!request.hasResourceId()) {
    query["resourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    query["resourceType"] = request.getResourceType();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.getWorkspace());
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
 * @summary Provides a proxy for Realtime Compute for Apache Flink requests.
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
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.getWorkspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
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
 * @summary Retrieves the execution plan for an application.
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
    query["deploymentId"] = request.getDeploymentId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.getWorkspace());
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
 * @summary Retrieves the execution plan for an application.
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
 * @summary Retrieves the details of a specified catalog or all catalogs.
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
    query["catalogName"] = request.getCatalogName();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.getWorkspace());
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
 * @summary Retrieves the details of a specified catalog or all catalogs.
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
 * @summary Retrieves information about one or more databases in a specified catalog.
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
    query["databaseName"] = request.getDatabaseName();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.getWorkspace());
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
 * @summary Retrieves information about one or more databases in a specified catalog.
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
 * @summary Checks the deployment result of a job draft.
 *
 * @param headers GetDeployDeploymentDraftResultHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDeployDeploymentDraftResultResponse
 */
GetDeployDeploymentDraftResultResponse Client::getDeployDeploymentDraftResultWithOptions(const string &_namespace, const string &ticketId, const GetDeployDeploymentDraftResultHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.getWorkspace());
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
 * @summary Checks the deployment result of a job draft.
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
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.getWorkspace());
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
 * @summary Retrieves the details of an SQL or data ingestion job draft.
 *
 * @param headers GetDeploymentDraftHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDeploymentDraftResponse
 */
GetDeploymentDraftResponse Client::getDeploymentDraftWithOptions(const string &_namespace, const string &deploymentDraftId, const GetDeploymentDraftHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.getWorkspace());
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
 * @summary Retrieves the details of an SQL or data ingestion job draft.
 *
 * @return GetDeploymentDraftResponse
 */
GetDeploymentDraftResponse Client::getDeploymentDraft(const string &_namespace, const string &deploymentDraftId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetDeploymentDraftHeaders headers = GetDeploymentDraftHeaders();
  return getDeploymentDraftWithOptions(namespace, deploymentDraftId, headers, runtime);
}

/**
 * @summary Before using an API to edit, validate, or deploy a job draft, you must acquire an edit lock to prevent conflicts between user interface (UI) and API operations. Acquiring this lock requires either the "Develop SQL/YAML Job (Create, Edit)" or "Unlock SQL/YAML Job Draft" permission.
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
    query["deploymentDraftId"] = request.getDeploymentDraftId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.getWorkspace());
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
 * @summary Before using an API to edit, validate, or deploy a job draft, you must acquire an edit lock to prevent conflicts between user interface (UI) and API operations. Acquiring this lock requires either the "Develop SQL/YAML Job (Create, Edit)" or "Unlock SQL/YAML Job Draft" permission.
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
 * @summary Gets a list of deployed jobs and their information on a node by a specified IP address.
 *
 * @description Use this operation to query for associated Flink deployments based on the source or destination IP address and port of a network connection.
 *
 * @param request GetDeploymentsByIpRequest
 * @param headers GetDeploymentsByIpHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDeploymentsByIpResponse
 */
GetDeploymentsByIpResponse Client::getDeploymentsByIpWithOptions(const string &_namespace, const GetDeploymentsByIpRequest &request, const GetDeploymentsByIpHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDstIp()) {
    query["dstIp"] = request.getDstIp();
  }

  if (!!request.hasDstPort()) {
    query["dstPort"] = request.getDstPort();
  }

  if (!!request.hasIgnoreJobSummary()) {
    query["ignoreJobSummary"] = request.getIgnoreJobSummary();
  }

  if (!!request.hasIgnoreResourceSetting()) {
    query["ignoreResourceSetting"] = request.getIgnoreResourceSetting();
  }

  if (!!request.hasSrcIp()) {
    query["srcIp"] = request.getSrcIp();
  }

  if (!!request.hasSrcPort()) {
    query["srcPort"] = request.getSrcPort();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.getWorkspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDeploymentsByIp"},
    {"version" , "2022-07-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/namespaces/" , Darabonba::Encode::Encoder::percentEncode(namespace) , "/deployments/getDeployments/byIp")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDeploymentsByIpResponse>();
}

/**
 * @summary Gets a list of deployed jobs and their information on a node by a specified IP address.
 *
 * @description Use this operation to query for associated Flink deployments based on the source or destination IP address and port of a network connection.
 *
 * @param request GetDeploymentsByIpRequest
 * @return GetDeploymentsByIpResponse
 */
GetDeploymentsByIpResponse Client::getDeploymentsByIp(const string &_namespace, const GetDeploymentsByIpRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetDeploymentsByIpHeaders headers = GetDeploymentsByIpHeaders();
  return getDeploymentsByIpWithOptions(namespace, request, headers, runtime);
}

/**
 * @summary Queries a list of deployed jobs and their information by a specified label.
 *
 * @description Queries a list of deployed jobs and their details by a specified job label. The query performs an exact match on the `labelKey` and `labelValue`.
 *
 * @param request GetDeploymentsByLabelRequest
 * @param headers GetDeploymentsByLabelHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDeploymentsByLabelResponse
 */
GetDeploymentsByLabelResponse Client::getDeploymentsByLabelWithOptions(const string &_namespace, const GetDeploymentsByLabelRequest &request, const GetDeploymentsByLabelHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIgnoreJobSummary()) {
    query["ignoreJobSummary"] = request.getIgnoreJobSummary();
  }

  if (!!request.hasIgnoreResourceSetting()) {
    query["ignoreResourceSetting"] = request.getIgnoreResourceSetting();
  }

  if (!!request.hasLabelKey()) {
    query["labelKey"] = request.getLabelKey();
  }

  if (!!request.hasLabelValue()) {
    query["labelValue"] = request.getLabelValue();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.getWorkspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDeploymentsByLabel"},
    {"version" , "2022-07-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/namespaces/" , Darabonba::Encode::Encoder::percentEncode(namespace) , "/deployments/getDeployments/byLabel")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDeploymentsByLabelResponse>();
}

/**
 * @summary Queries a list of deployed jobs and their information by a specified label.
 *
 * @description Queries a list of deployed jobs and their details by a specified job label. The query performs an exact match on the `labelKey` and `labelValue`.
 *
 * @param request GetDeploymentsByLabelRequest
 * @return GetDeploymentsByLabelResponse
 */
GetDeploymentsByLabelResponse Client::getDeploymentsByLabel(const string &_namespace, const GetDeploymentsByLabelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetDeploymentsByLabelHeaders headers = GetDeploymentsByLabelHeaders();
  return getDeploymentsByLabelWithOptions(namespace, request, headers, runtime);
}

/**
 * @summary Retrieves deployed job instances by name from a specified workspace and namespace.
 *
 * @param request GetDeploymentsByNameRequest
 * @param headers GetDeploymentsByNameHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDeploymentsByNameResponse
 */
GetDeploymentsByNameResponse Client::getDeploymentsByNameWithOptions(const string &_namespace, const string &deploymentName, const GetDeploymentsByNameRequest &request, const GetDeploymentsByNameHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIgnoreJobSummary()) {
    query["ignoreJobSummary"] = request.getIgnoreJobSummary();
  }

  if (!!request.hasIgnoreResourceSetting()) {
    query["ignoreResourceSetting"] = request.getIgnoreResourceSetting();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.getWorkspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDeploymentsByName"},
    {"version" , "2022-07-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/namespaces/" , Darabonba::Encode::Encoder::percentEncode(namespace) , "/deployments/name/" , Darabonba::Encode::Encoder::percentEncode(deploymentName))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDeploymentsByNameResponse>();
}

/**
 * @summary Retrieves deployed job instances by name from a specified workspace and namespace.
 *
 * @param request GetDeploymentsByNameRequest
 * @return GetDeploymentsByNameResponse
 */
GetDeploymentsByNameResponse Client::getDeploymentsByName(const string &_namespace, const string &deploymentName, const GetDeploymentsByNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetDeploymentsByNameHeaders headers = GetDeploymentsByNameHeaders();
  return getDeploymentsByNameWithOptions(namespace, deploymentName, request, headers, runtime);
}

/**
 * @summary Retrieves runtime events.
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
    query["deploymentId"] = request.getDeploymentId();
  }

  if (!!request.hasDeploymentName()) {
    query["deploymentName"] = request.getDeploymentName();
  }

  if (!!request.hasPageIndex()) {
    query["pageIndex"] = request.getPageIndex();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.getWorkspace());
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
 * @summary Retrieves runtime events.
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
 * @summary Retrieves specific folder information.
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
    query["folderId"] = request.getFolderId();
  }

  if (!!request.hasRootType()) {
    query["rootType"] = request.getRootType();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.getWorkspace());
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
 * @summary Retrieves specific folder information.
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
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.getWorkspace());
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
 * @summary Retrieves the result of a hot update for a job.
 *
 * @param headers GetHotUpdateJobResultHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetHotUpdateJobResultResponse
 */
GetHotUpdateJobResultResponse Client::getHotUpdateJobResultWithOptions(const string &_namespace, const string &jobHotUpdateId, const GetHotUpdateJobResultHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.getWorkspace());
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
 * @summary Retrieves the result of a hot update for a job.
 *
 * @return GetHotUpdateJobResultResponse
 */
GetHotUpdateJobResultResponse Client::getHotUpdateJobResult(const string &_namespace, const string &jobHotUpdateId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetHotUpdateJobResultHeaders headers = GetHotUpdateJobResultHeaders();
  return getHotUpdateJobResultWithOptions(namespace, jobHotUpdateId, headers, runtime);
}

/**
 * @summary Retrieves detailed information about a job instance.
 *
 * @param headers GetJobHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetJobResponse
 */
GetJobResponse Client::getJobWithOptions(const string &_namespace, const string &jobId, const GetJobHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.getWorkspace());
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
 * @summary Retrieves detailed information about a job instance.
 *
 * @return GetJobResponse
 */
GetJobResponse Client::getJob(const string &_namespace, const string &jobId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetJobHeaders headers = GetJobHeaders();
  return getJobWithOptions(namespace, jobId, headers, runtime);
}

/**
 * @summary Performs intelligent diagnostics on a job and retrieves information about abnormal diagnostic items.
 *
 * @param headers GetJobDiagnosisHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetJobDiagnosisResponse
 */
GetJobDiagnosisResponse Client::getJobDiagnosisWithOptions(const string &_namespace, const string &deploymentId, const string &jobId, const GetJobDiagnosisHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.getWorkspace());
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
 * @summary Performs intelligent diagnostics on a job and retrieves information about abnormal diagnostic items.
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
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.getWorkspace());
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
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.getWorkspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
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
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.getWorkspace());
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
    query["fileName"] = request.getFileName();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.getWorkspace());
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
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.getWorkspace());
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
 * @summary Retrieves a session cluster.
 *
 * @param headers GetSessionClusterHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSessionClusterResponse
 */
GetSessionClusterResponse Client::getSessionClusterWithOptions(const string &_namespace, const string &sessionClusterName, const GetSessionClusterHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.getWorkspace());
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
 * @summary Retrieves a session cluster.
 *
 * @return GetSessionClusterResponse
 */
GetSessionClusterResponse Client::getSessionCluster(const string &_namespace, const string &sessionClusterName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetSessionClusterHeaders headers = GetSessionClusterHeaders();
  return getSessionClusterWithOptions(namespace, sessionClusterName, headers, runtime);
}

/**
 * @summary Retrieves the details of a specific table or all tables in a database within a specified catalog.
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
    query["tableName"] = request.getTableName();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.getWorkspace());
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
 * @summary Retrieves the details of a specific table or all tables in a database within a specified catalog.
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
    query["udfArtifactName"] = request.getUdfArtifactName();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.getWorkspace());
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
 * @summary Queries the depth validation result of a job draft by ticket ID.
 *
 * @param headers GetValidateDeploymentDraftResultHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetValidateDeploymentDraftResultResponse
 */
GetValidateDeploymentDraftResultResponse Client::getValidateDeploymentDraftResultWithOptions(const string &_namespace, const string &ticketId, const GetValidateDeploymentDraftResultHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.getWorkspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetValidateDeploymentDraftResult"},
    {"version" , "2022-07-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/namespaces/" , Darabonba::Encode::Encoder::percentEncode(namespace) , "/deployment-drafts/tickets/" , Darabonba::Encode::Encoder::percentEncode(ticketId) , "/async-validate")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetValidateDeploymentDraftResultResponse>();
}

/**
 * @summary Queries the depth validation result of a job draft by ticket ID.
 *
 * @return GetValidateDeploymentDraftResultResponse
 */
GetValidateDeploymentDraftResultResponse Client::getValidateDeploymentDraftResult(const string &_namespace, const string &ticketId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetValidateDeploymentDraftResultHeaders headers = GetValidateDeploymentDraftResultHeaders();
  return getValidateDeploymentDraftResultWithOptions(namespace, ticketId, headers, runtime);
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
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.getWorkspace());
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
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.getWorkspace());
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
 * @summary Retrieves a list of SQL or data ingestion job drafts.
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
    query["pageIndex"] = request.getPageIndex();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.getWorkspace());
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
 * @summary Retrieves a list of SQL or data ingestion job drafts.
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
    query["pageIndex"] = request.getPageIndex();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.getWorkspace());
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
 * @summary Retrieve information about all deployed jobs.
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
    query["creator"] = request.getCreator();
  }

  if (!!request.hasExecutionMode()) {
    query["executionMode"] = request.getExecutionMode();
  }

  if (!!request.hasLabelKey()) {
    query["labelKey"] = request.getLabelKey();
  }

  if (!!request.hasLabelValueArray()) {
    query["labelValueArray"] = request.getLabelValueArray();
  }

  if (!!request.hasModifier()) {
    query["modifier"] = request.getModifier();
  }

  if (!!request.hasName()) {
    query["name"] = request.getName();
  }

  if (!!request.hasPageIndex()) {
    query["pageIndex"] = request.getPageIndex();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasSortName()) {
    query["sortName"] = request.getSortName();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.getStatus();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.getWorkspace());
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
 * @summary Retrieve information about all deployed jobs.
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
    query["namespace"] = request.getNamespace();
  }

  if (!!request.hasPageIndex()) {
    query["pageIndex"] = request.getPageIndex();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["regionId"] = request.getRegionId();
  }

  if (!!request.hasWorkspaceId()) {
    query["workspaceId"] = request.getWorkspaceId();
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
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.getWorkspace());
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
 * @summary Retrieves information about all job instances for a specified deployment.
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
    query["deploymentId"] = request.getDeploymentId();
  }

  if (!!request.hasPageIndex()) {
    query["pageIndex"] = request.getPageIndex();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasSortName()) {
    query["sortName"] = request.getSortName();
  }

  if (!!request.hasSortOrder()) {
    query["sortOrder"] = request.getSortOrder();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.getWorkspace());
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
 * @summary Retrieves information about all job instances for a specified deployment.
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
    query["pageIndex"] = request.getPageIndex();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.getWorkspace());
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
    query["deploymentId"] = request.getDeploymentId();
  }

  if (!!request.hasJobId()) {
    query["jobId"] = request.getJobId();
  }

  if (!!request.hasPageIndex()) {
    query["pageIndex"] = request.getPageIndex();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.getWorkspace());
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
 * @summary Lists scheduled plans.
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
    query["deploymentId"] = request.getDeploymentId();
  }

  if (!!request.hasPageIndex()) {
    query["pageIndex"] = request.getPageIndex();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.getWorkspace());
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
 * @summary Lists scheduled plans.
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
 * @summary Retrieves the execution history of a scheduled plan.
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
    query["deploymentId"] = request.getDeploymentId();
  }

  if (!!request.hasOrigin()) {
    query["origin"] = request.getOrigin();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.getWorkspace());
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
 * @summary Retrieves the execution history of a scheduled plan.
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
 * @summary This operation lists session clusters.
 *
 * @param headers ListSessionClustersHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSessionClustersResponse
 */
ListSessionClustersResponse Client::listSessionClustersWithOptions(const string &_namespace, const ListSessionClustersHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.getWorkspace());
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
 * @summary This operation lists session clusters.
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
    query["pageIndex"] = request.getPageIndex();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.getWorkspace());
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
    query["jarUrl"] = request.getJarUrl();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.getWorkspace());
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
    query["className"] = request.getClassName();
  }

  if (!!request.hasFunctionName()) {
    query["functionName"] = request.getFunctionName();
  }

  if (!!request.hasUdfArtifactName()) {
    query["udfArtifactName"] = request.getUdfArtifactName();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.getWorkspace());
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
 * @summary Create and start a job instance.
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
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.getWorkspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
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
 * @summary Create and start a job instance.
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
 * @summary Starts a job instance.
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
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.getWorkspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
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
 * @summary Starts a job instance.
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
 * @summary Starts a session cluster.
 *
 * @param headers StartSessionClusterHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartSessionClusterResponse
 */
StartSessionClusterResponse Client::startSessionClusterWithOptions(const string &_namespace, const string &sessionClusterName, const StartSessionClusterHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.getWorkspace());
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
 * @summary Starts a session cluster.
 *
 * @return StartSessionClusterResponse
 */
StartSessionClusterResponse Client::startSessionCluster(const string &_namespace, const string &sessionClusterName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  StartSessionClusterHeaders headers = StartSessionClusterHeaders();
  return startSessionClusterWithOptions(namespace, sessionClusterName, headers, runtime);
}

/**
 * @summary Stops the application of a scheduled plan.
 *
 * @param headers StopApplyScheduledPlanHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopApplyScheduledPlanResponse
 */
StopApplyScheduledPlanResponse Client::stopApplyScheduledPlanWithOptions(const string &_namespace, const string &scheduledPlanId, const StopApplyScheduledPlanHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.getWorkspace());
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
 * @summary Stops the application of a scheduled plan.
 *
 * @return StopApplyScheduledPlanResponse
 */
StopApplyScheduledPlanResponse Client::stopApplyScheduledPlan(const string &_namespace, const string &scheduledPlanId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  StopApplyScheduledPlanHeaders headers = StopApplyScheduledPlanHeaders();
  return stopApplyScheduledPlanWithOptions(namespace, scheduledPlanId, headers, runtime);
}

/**
 * @summary Stops a job instance.
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
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.getWorkspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
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
 * @summary Stops a job instance.
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
 * @summary Stops a session cluster.
 *
 * @param headers StopSessionClusterHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopSessionClusterResponse
 */
StopSessionClusterResponse Client::stopSessionClusterWithOptions(const string &_namespace, const string &sessionClusterName, const StopSessionClusterHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.getWorkspace());
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
 * @summary Stops a session cluster.
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
    query["sessionClusterName"] = request.getSessionClusterName();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.getWorkspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
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
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.getWorkspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
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
 * @summary Updates the draft of an SQL or data ingestion job.
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
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.getWorkspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
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
 * @summary Updates the draft of an SQL or data ingestion job.
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
 * @summary Updates a deployment target.
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
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.getWorkspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
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
 * @summary Updates a deployment target.
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
 * @summary Updates a deployment target.
 *
 * @description This new API operation updates deployment targets that use fixed resources, elastic resources, or mixed mode. The previous operation supported only fixed and elastic resources.
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
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.getWorkspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
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
 * @summary Updates a deployment target.
 *
 * @description This new API operation updates deployment targets that use fixed resources, elastic resources, or mixed mode. The previous operation supported only fixed and elastic resources.
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
 * @summary Updates a folder.
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
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.getWorkspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
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
 * @summary Updates a folder.
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
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.getWorkspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
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
 * @summary Updates a scheduled plan.
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
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.getWorkspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
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
 * @summary Updates a scheduled plan.
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
 * @summary Updates a session cluster.
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
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.getWorkspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
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
 * @summary Updates a session cluster.
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
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.getWorkspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
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
 * @summary Updates the information about a variable in a namespace.
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
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.getWorkspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
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
 * @summary Updates the information about a variable in a namespace.
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
 * @summary Asynchronously performs an in-depth check of a Flink job draft to validate its syntax and resource configuration.
 *
 * @description This API asynchronously validates a job draft. It conducts end-to-end compliance and compatibility checks on the draft\\"s configuration before it is submitted for deployment.
 *
 * @param request ValidateDeploymentDraftAsyncRequest
 * @param headers ValidateDeploymentDraftAsyncHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ValidateDeploymentDraftAsyncResponse
 */
ValidateDeploymentDraftAsyncResponse Client::validateDeploymentDraftAsyncWithOptions(const string &_namespace, const ValidateDeploymentDraftAsyncRequest &request, const ValidateDeploymentDraftAsyncHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.getWorkspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "ValidateDeploymentDraftAsync"},
    {"version" , "2022-07-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v2/namespaces/" , Darabonba::Encode::Encoder::percentEncode(namespace) , "/deployment-drafts/async-validate")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ValidateDeploymentDraftAsyncResponse>();
}

/**
 * @summary Asynchronously performs an in-depth check of a Flink job draft to validate its syntax and resource configuration.
 *
 * @description This API asynchronously validates a job draft. It conducts end-to-end compliance and compatibility checks on the draft\\"s configuration before it is submitted for deployment.
 *
 * @param request ValidateDeploymentDraftAsyncRequest
 * @return ValidateDeploymentDraftAsyncResponse
 */
ValidateDeploymentDraftAsyncResponse Client::validateDeploymentDraftAsync(const string &_namespace, const ValidateDeploymentDraftAsyncRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ValidateDeploymentDraftAsyncHeaders headers = ValidateDeploymentDraftAsyncHeaders();
  return validateDeploymentDraftAsyncWithOptions(namespace, request, headers, runtime);
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
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasWorkspace()) {
    realHeaders["workspace"] = Darabonba::Convert::stringVal(headers.getWorkspace());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
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