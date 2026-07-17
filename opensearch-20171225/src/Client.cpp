#include <darabonba/Core.hpp>
#include <alibabacloud/OpenSearch20171225.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
#include <darabonba/encode/Encoder.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::OpenSearch20171225::Models;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{

AlibabaCloud::OpenSearch20171225::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"us-east-1" , "opensearch.us-east-1.aliyuncs.com"},
    {"eu-central-1" , "opensearch.eu-central-1.aliyuncs.com"},
    {"cn-zhangjiakou" , "opensearch.cn-zhangjiakou.aliyuncs.com"},
    {"cn-shenzhen" , "opensearch.cn-shenzhen.aliyuncs.com"},
    {"cn-shanghai" , "opensearch.cn-shanghai.aliyuncs.com"},
    {"cn-qingdao" , "opensearch.cn-qingdao.aliyuncs.com"},
    {"cn-hongkong" , "opensearch.cn-hongkong.aliyuncs.com"},
    {"cn-hangzhou" , "opensearch.cn-hangzhou.aliyuncs.com"},
    {"cn-beijing" , "opensearch.cn-beijing.aliyuncs.com"},
    {"ap-southeast-5" , "opensearch.ap-southeast-5.aliyuncs.com"},
    {"ap-southeast-1" , "opensearch.ap-southeast-1.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("opensearch", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Binds a custom analyzer to an Elasticsearch instance.
 *
 * @param request BindESUserAnalyzerRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return BindESUserAnalyzerResponse
 */
BindESUserAnalyzerResponse Client::bindESUserAnalyzerWithOptions(const string &appGroupIdentity, const string &esInstanceId, const BindESUserAnalyzerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , request.getBody()}
  }));
  Params params = Params(json({
    {"action" , "BindESUserAnalyzer"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/es/" , Darabonba::Encode::Encoder::percentEncode(esInstanceId) , "/actions/bind-analyzer")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BindESUserAnalyzerResponse>();
}

/**
 * @summary Binds a custom analyzer to an Elasticsearch instance.
 *
 * @param request BindESUserAnalyzerRequest
 * @return BindESUserAnalyzerResponse
 */
BindESUserAnalyzerResponse Client::bindESUserAnalyzer(const string &appGroupIdentity, const string &esInstanceId, const BindESUserAnalyzerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return bindESUserAnalyzerWithOptions(appGroupIdentity, esInstanceId, request, headers, runtime);
}

/**
 * @summary Binds an Elasticsearch instance as a dependency.
 *
 * @param request BindEsInstanceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return BindEsInstanceResponse
 */
BindEsInstanceResponse Client::bindEsInstanceWithOptions(const string &appGroupIdentity, const BindEsInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBody()) {
    body["body"] = request.getBody();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "BindEsInstance"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/actions/bind-es-instance")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BindEsInstanceResponse>();
}

/**
 * @summary Binds an Elasticsearch instance as a dependency.
 *
 * @param request BindEsInstanceRequest
 * @return BindEsInstanceResponse
 */
BindEsInstanceResponse Client::bindEsInstance(const string &appGroupIdentity, const BindEsInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return bindEsInstanceWithOptions(appGroupIdentity, request, headers, runtime);
}

/**
 * @summary Compiles a sort script.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CompileSortScriptResponse
 */
CompileSortScriptResponse Client::compileSortScriptWithOptions(const string &appGroupIdentity, const string &scriptName, const string &appVersionId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CompileSortScript"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/apps/" , Darabonba::Encode::Encoder::percentEncode(appVersionId) , "/sort-scripts/" , Darabonba::Encode::Encoder::percentEncode(scriptName) , "/actions/compiling")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CompileSortScriptResponse>();
}

/**
 * @summary Compiles a sort script.
 *
 * @return CompileSortScriptResponse
 */
CompileSortScriptResponse Client::compileSortScript(const string &appGroupIdentity, const string &scriptName, const string &appVersionId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return compileSortScriptWithOptions(appGroupIdentity, scriptName, appVersionId, headers, runtime);
}

/**
 * @summary Creates an experiment.
 *
 * @param request CreateABTestExperimentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateABTestExperimentResponse
 */
CreateABTestExperimentResponse Client::createABTestExperimentWithOptions(const string &appGroupIdentity, const string &sceneId, const string &groupId, const CreateABTestExperimentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDryRun()) {
    query["dryRun"] = request.getDryRun();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "CreateABTestExperiment"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/scenes/" , Darabonba::Encode::Encoder::percentEncode(sceneId) , "/groups/" , Darabonba::Encode::Encoder::percentEncode(groupId) , "/experiments")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateABTestExperimentResponse>();
}

/**
 * @summary Creates an experiment.
 *
 * @param request CreateABTestExperimentRequest
 * @return CreateABTestExperimentResponse
 */
CreateABTestExperimentResponse Client::createABTestExperiment(const string &appGroupIdentity, const string &sceneId, const string &groupId, const CreateABTestExperimentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createABTestExperimentWithOptions(appGroupIdentity, sceneId, groupId, request, headers, runtime);
}

/**
 * @summary Creates an experiment group.
 *
 * @param request CreateABTestGroupRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateABTestGroupResponse
 */
CreateABTestGroupResponse Client::createABTestGroupWithOptions(const string &appGroupIdentity, const string &sceneId, const CreateABTestGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDryRun()) {
    query["dryRun"] = request.getDryRun();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "CreateABTestGroup"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/scenes/" , Darabonba::Encode::Encoder::percentEncode(sceneId) , "/groups")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateABTestGroupResponse>();
}

/**
 * @summary Creates an experiment group.
 *
 * @param request CreateABTestGroupRequest
 * @return CreateABTestGroupResponse
 */
CreateABTestGroupResponse Client::createABTestGroup(const string &appGroupIdentity, const string &sceneId, const CreateABTestGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createABTestGroupWithOptions(appGroupIdentity, sceneId, request, headers, runtime);
}

/**
 * @summary Creates an experiment scenario.
 *
 * @param request CreateABTestSceneRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateABTestSceneResponse
 */
CreateABTestSceneResponse Client::createABTestSceneWithOptions(const string &appGroupIdentity, const CreateABTestSceneRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDryRun()) {
    query["dryRun"] = request.getDryRun();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "CreateABTestScene"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/scenes")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateABTestSceneResponse>();
}

/**
 * @summary Creates an experiment scenario.
 *
 * @param request CreateABTestSceneRequest
 * @return CreateABTestSceneResponse
 */
CreateABTestSceneResponse Client::createABTestScene(const string &appGroupIdentity, const CreateABTestSceneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createABTestSceneWithOptions(appGroupIdentity, request, headers, runtime);
}

/**
 * @summary Creates a new version of an OpenSearch application.
 *
 * @description - If a Standard Edition application with the same name already exists, a new version is created.
 * - The autoSwitch and realtimeShared parameters are required to create a new version.
 * - The quota for the new version is automatically inherited from the previous version.
 * - You cannot modify the quota when you create the new version.
 *
 * @param request CreateAppRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAppResponse
 */
CreateAppResponse Client::createAppWithOptions(const string &appGroupIdentity, const CreateAppRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDryRun()) {
    query["dryRun"] = request.getDryRun();
  }

  json body = {};
  if (!!request.hasAutoSwitch()) {
    body["autoSwitch"] = request.getAutoSwitch();
  }

  if (!!request.hasCluster()) {
    body["cluster"] = request.getCluster();
  }

  if (!!request.hasConfigItems()) {
    body["configItems"] = request.getConfigItems();
  }

  if (!!request.hasDataSources()) {
    body["dataSources"] = request.getDataSources();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasDomain()) {
    body["domain"] = request.getDomain();
  }

  if (!!request.hasFetchFields()) {
    body["fetchFields"] = request.getFetchFields();
  }

  if (!!request.hasFirstRanks()) {
    body["firstRanks"] = request.getFirstRanks();
  }

  if (!!request.hasInterpretations()) {
    body["interpretations"] = request.getInterpretations();
  }

  if (!!request.hasNetworkType()) {
    body["networkType"] = request.getNetworkType();
  }

  if (!!request.hasPrompts()) {
    body["prompts"] = request.getPrompts();
  }

  if (!!request.hasQueryProcessors()) {
    body["queryProcessors"] = request.getQueryProcessors();
  }

  if (!!request.hasRealtimeShared()) {
    body["realtimeShared"] = request.getRealtimeShared();
  }

  if (!!request.hasSchema()) {
    body["schema"] = request.getSchema();
  }

  if (!!request.hasSchemas()) {
    body["schemas"] = request.getSchemas();
  }

  if (!!request.hasSecondRanks()) {
    body["secondRanks"] = request.getSecondRanks();
  }

  if (!!request.hasSummaries()) {
    body["summaries"] = request.getSummaries();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateApp"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/apps")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAppResponse>();
}

/**
 * @summary Creates a new version of an OpenSearch application.
 *
 * @description - If a Standard Edition application with the same name already exists, a new version is created.
 * - The autoSwitch and realtimeShared parameters are required to create a new version.
 * - The quota for the new version is automatically inherited from the previous version.
 * - You cannot modify the quota when you create the new version.
 *
 * @param request CreateAppRequest
 * @return CreateAppResponse
 */
CreateAppResponse Client::createApp(const string &appGroupIdentity, const CreateAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createAppWithOptions(appGroupIdentity, request, headers, runtime);
}

/**
 * @summary Creates an OpenSearch application.
 *
 * @param request CreateAppGroupRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAppGroupResponse
 */
CreateAppGroupResponse Client::createAppGroupWithOptions(const CreateAppGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasChargeType()) {
    body["chargeType"] = request.getChargeType();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasQuota()) {
    body["quota"] = request.getQuota();
  }

  if (!!request.hasResourceGroupId()) {
    body["resourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasTags()) {
    body["tags"] = request.getTags();
  }

  if (!!request.hasType()) {
    body["type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateAppGroup"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAppGroupResponse>();
}

/**
 * @summary Creates an OpenSearch application.
 *
 * @param request CreateAppGroupRequest
 * @return CreateAppGroupResponse
 */
CreateAppGroupResponse Client::createAppGroup(const CreateAppGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createAppGroupWithOptions(request, headers, runtime);
}

/**
 * @summary Creates access credentials for a specified application group. This operation supports a dry run to preview the results.
 *
 * @param request CreateAppGroupCredentialsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAppGroupCredentialsResponse
 */
CreateAppGroupCredentialsResponse Client::createAppGroupCredentialsWithOptions(const string &appGroupIdentity, const CreateAppGroupCredentialsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDryRun()) {
    query["dryRun"] = request.getDryRun();
  }

  json body = {};
  if (!!request.hasType()) {
    body["type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateAppGroupCredentials"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/credentials")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAppGroupCredentialsResponse>();
}

/**
 * @summary Creates access credentials for a specified application group. This operation supports a dry run to preview the results.
 *
 * @param request CreateAppGroupCredentialsRequest
 * @return CreateAppGroupCredentialsResponse
 */
CreateAppGroupCredentialsResponse Client::createAppGroupCredentials(const string &appGroupIdentity, const CreateAppGroupCredentialsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createAppGroupCredentialsWithOptions(appGroupIdentity, request, headers, runtime);
}

/**
 * @summary 创建弹性计划
 *
 * @param request CreateElasticPlanRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateElasticPlanResponse
 */
CreateElasticPlanResponse Client::createElasticPlanWithOptions(const string &appGroupIdentity, const CreateElasticPlanRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDryRun()) {
    query["dryRun"] = request.getDryRun();
  }

  json body = {};
  if (!!request.hasCustomDates()) {
    body["customDates"] = request.getCustomDates();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasElasticLcu()) {
    body["elasticLcu"] = request.getElasticLcu();
  }

  if (!!request.hasEndHour()) {
    body["endHour"] = request.getEndHour();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasScheduleType()) {
    body["scheduleType"] = request.getScheduleType();
  }

  if (!!request.hasStartHour()) {
    body["startHour"] = request.getStartHour();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateElasticPlan"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/elastic-plans")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateElasticPlanResponse>();
}

/**
 * @summary 创建弹性计划
 *
 * @param request CreateElasticPlanRequest
 * @return CreateElasticPlanResponse
 */
CreateElasticPlanResponse Client::createElasticPlan(const string &appGroupIdentity, const CreateElasticPlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createElasticPlanWithOptions(appGroupIdentity, request, headers, runtime);
}

/**
 * @summary Creates a rough sort expression for a version of an OpenSearch application. If you set `dryRun` to true, this operation validates the specified rough sort expression. By default, the value of `dryRun` is `false`.
 *
 * @param request CreateFirstRankRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateFirstRankResponse
 */
CreateFirstRankResponse Client::createFirstRankWithOptions(const string &appGroupIdentity, const string &appId, const CreateFirstRankRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDryRun()) {
    query["dryRun"] = request.getDryRun();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "CreateFirstRank"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/apps/" , Darabonba::Encode::Encoder::percentEncode(appId) , "/first-ranks")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateFirstRankResponse>();
}

/**
 * @summary Creates a rough sort expression for a version of an OpenSearch application. If you set `dryRun` to true, this operation validates the specified rough sort expression. By default, the value of `dryRun` is `false`.
 *
 * @param request CreateFirstRankRequest
 * @return CreateFirstRankResponse
 */
CreateFirstRankResponse Client::createFirstRank(const string &appGroupIdentity, const string &appId, const CreateFirstRankRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createFirstRankWithOptions(appGroupIdentity, appId, request, headers, runtime);
}

/**
 * @summary Creates an algorithm instance of a feature.
 *
 * @description You can call the [GetFunctionCurrentVersion](https://help.aliyun.com/document_detail/421377.html) operation to query the latest version of a feature. The response of the operation includes the createParameters parameter that is used to create an algorithm instance, the usageParameters parameter, and the requirements for setting these parameters.
 *
 * @param request CreateFunctionInstanceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateFunctionInstanceResponse
 */
CreateFunctionInstanceResponse Client::createFunctionInstanceWithOptions(const string &appGroupIdentity, const string &functionName, const CreateFunctionInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCreateParameters()) {
    body["createParameters"] = request.getCreateParameters();
  }

  if (!!request.hasCron()) {
    body["cron"] = request.getCron();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasFunctionType()) {
    body["functionType"] = request.getFunctionType();
  }

  if (!!request.hasInstanceName()) {
    body["instanceName"] = request.getInstanceName();
  }

  if (!!request.hasModelType()) {
    body["modelType"] = request.getModelType();
  }

  if (!!request.hasUsageParameters()) {
    body["usageParameters"] = request.getUsageParameters();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateFunctionInstance"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/functions/" , Darabonba::Encode::Encoder::percentEncode(functionName) , "/instances")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateFunctionInstanceResponse>();
}

/**
 * @summary Creates an algorithm instance of a feature.
 *
 * @description You can call the [GetFunctionCurrentVersion](https://help.aliyun.com/document_detail/421377.html) operation to query the latest version of a feature. The response of the operation includes the createParameters parameter that is used to create an algorithm instance, the usageParameters parameter, and the requirements for setting these parameters.
 *
 * @param request CreateFunctionInstanceRequest
 * @return CreateFunctionInstanceResponse
 */
CreateFunctionInstanceResponse Client::createFunctionInstance(const string &appGroupIdentity, const string &functionName, const CreateFunctionInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createFunctionInstanceWithOptions(appGroupIdentity, functionName, request, headers, runtime);
}

/**
 * @summary Creates an algorithm resource for a specified feature.
 *
 * @param request CreateFunctionResourceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateFunctionResourceResponse
 */
CreateFunctionResourceResponse Client::createFunctionResourceWithOptions(const string &appGroupIdentity, const string &functionName, const CreateFunctionResourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasData()) {
    body["Data"] = request.getData();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasResourceName()) {
    body["ResourceName"] = request.getResourceName();
  }

  if (!!request.hasResourceType()) {
    body["ResourceType"] = request.getResourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateFunctionResource"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/functions/" , Darabonba::Encode::Encoder::percentEncode(functionName) , "/resources")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateFunctionResourceResponse>();
}

/**
 * @summary Creates an algorithm resource for a specified feature.
 *
 * @param request CreateFunctionResourceRequest
 * @return CreateFunctionResourceResponse
 */
CreateFunctionResourceResponse Client::createFunctionResource(const string &appGroupIdentity, const string &functionName, const CreateFunctionResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createFunctionResourceWithOptions(appGroupIdentity, functionName, request, headers, runtime);
}

/**
 * @summary Starts a training task.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateFunctionTaskResponse
 */
CreateFunctionTaskResponse Client::createFunctionTaskWithOptions(const string &appGroupIdentity, const string &functionName, const string &instanceName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateFunctionTask"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/functions/" , Darabonba::Encode::Encoder::percentEncode(functionName) , "/instances/" , Darabonba::Encode::Encoder::percentEncode(instanceName) , "/tasks")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateFunctionTaskResponse>();
}

/**
 * @summary Starts a training task.
 *
 * @return CreateFunctionTaskResponse
 */
CreateFunctionTaskResponse Client::createFunctionTask(const string &appGroupIdentity, const string &functionName, const string &instanceName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createFunctionTaskWithOptions(appGroupIdentity, functionName, instanceName, headers, runtime);
}

/**
 * @summary Creates an intervention dictionary.
 *
 * @param request CreateInterventionDictionaryRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateInterventionDictionaryResponse
 */
CreateInterventionDictionaryResponse Client::createInterventionDictionaryWithOptions(const CreateInterventionDictionaryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDryRun()) {
    query["dryRun"] = request.getDryRun();
  }

  json body = {};
  if (!!request.hasAnalyzerType()) {
    body["analyzerType"] = request.getAnalyzerType();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasType()) {
    body["type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateInterventionDictionary"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/intervention-dictionaries")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateInterventionDictionaryResponse>();
}

/**
 * @summary Creates an intervention dictionary.
 *
 * @param request CreateInterventionDictionaryRequest
 * @return CreateInterventionDictionaryResponse
 */
CreateInterventionDictionaryResponse Client::createInterventionDictionary(const CreateInterventionDictionaryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createInterventionDictionaryWithOptions(request, headers, runtime);
}

/**
 * @summary Creates a query analysis rule. If you set dryRun to true, this operation checks the specified query analysis rule. By default, the value of dryRun is false if you do not set this parameter.
 *
 * @param request CreateQueryProcessorRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateQueryProcessorResponse
 */
CreateQueryProcessorResponse Client::createQueryProcessorWithOptions(const string &appGroupIdentity, const string &appId, const CreateQueryProcessorRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDryRun()) {
    query["dryRun"] = request.getDryRun();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.getBody()}
  }));
  Params params = Params(json({
    {"action" , "CreateQueryProcessor"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/apps/" , Darabonba::Encode::Encoder::percentEncode(appId) , "/query-processors")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateQueryProcessorResponse>();
}

/**
 * @summary Creates a query analysis rule. If you set dryRun to true, this operation checks the specified query analysis rule. By default, the value of dryRun is false if you do not set this parameter.
 *
 * @param request CreateQueryProcessorRequest
 * @return CreateQueryProcessorResponse
 */
CreateQueryProcessorResponse Client::createQueryProcessor(const string &appGroupIdentity, const string &appId, const CreateQueryProcessorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createQueryProcessorWithOptions(appGroupIdentity, appId, request, headers, runtime);
}

/**
 * @summary Creates a scheduled task for an OpenSearch application.
 *
 * @param request CreateScheduledTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateScheduledTaskResponse
 */
CreateScheduledTaskResponse Client::createScheduledTaskWithOptions(const string &appGroupIdentity, const CreateScheduledTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "CreateScheduledTask"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/scheduled-tasks")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateScheduledTaskResponse>();
}

/**
 * @summary Creates a scheduled task for an OpenSearch application.
 *
 * @param request CreateScheduledTaskRequest
 * @return CreateScheduledTaskResponse
 */
CreateScheduledTaskResponse Client::createScheduledTask(const string &appGroupIdentity, const CreateScheduledTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createScheduledTaskWithOptions(appGroupIdentity, request, headers, runtime);
}

/**
 * @summary Creates a search strategy.
 *
 * @param request CreateSearchStrategyRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSearchStrategyResponse
 */
CreateSearchStrategyResponse Client::createSearchStrategyWithOptions(const string &appGroupIdentity, const string &appId, const CreateSearchStrategyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "CreateSearchStrategy"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/apps/" , Darabonba::Encode::Encoder::percentEncode(appId) , "/search-strategies")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSearchStrategyResponse>();
}

/**
 * @summary Creates a search strategy.
 *
 * @param request CreateSearchStrategyRequest
 * @return CreateSearchStrategyResponse
 */
CreateSearchStrategyResponse Client::createSearchStrategy(const string &appGroupIdentity, const string &appId, const CreateSearchStrategyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createSearchStrategyWithOptions(appGroupIdentity, appId, request, headers, runtime);
}

/**
 * @summary Creates a fine sort expression for a version of an OpenSearch application. If you set the dryRun parameter to true, this operation validates the specified fine sort expression. The default value of this parameter is false.
 *
 * @param request CreateSecondRankRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSecondRankResponse
 */
CreateSecondRankResponse Client::createSecondRankWithOptions(const string &appGroupIdentity, const string &appId, const CreateSecondRankRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDryRun()) {
    query["dryRun"] = request.getDryRun();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "CreateSecondRank"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/apps/" , Darabonba::Encode::Encoder::percentEncode(appId) , "/second-ranks")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSecondRankResponse>();
}

/**
 * @summary Creates a fine sort expression for a version of an OpenSearch application. If you set the dryRun parameter to true, this operation validates the specified fine sort expression. The default value of this parameter is false.
 *
 * @param request CreateSecondRankRequest
 * @return CreateSecondRankResponse
 */
CreateSecondRankResponse Client::createSecondRank(const string &appGroupIdentity, const string &appId, const CreateSecondRankRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createSecondRankWithOptions(appGroupIdentity, appId, request, headers, runtime);
}

/**
 * @summary Creates a sort script.
 *
 * @param request CreateSortScriptRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSortScriptResponse
 */
CreateSortScriptResponse Client::createSortScriptWithOptions(const string &appGroupIdentity, const string &appVersionId, const CreateSortScriptRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasScope()) {
    body["scope"] = request.getScope();
  }

  if (!!request.hasScriptName()) {
    body["scriptName"] = request.getScriptName();
  }

  if (!!request.hasType()) {
    body["type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateSortScript"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/apps/" , Darabonba::Encode::Encoder::percentEncode(appVersionId) , "/sort-scripts")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSortScriptResponse>();
}

/**
 * @summary Creates a sort script.
 *
 * @param request CreateSortScriptRequest
 * @return CreateSortScriptResponse
 */
CreateSortScriptResponse Client::createSortScript(const string &appGroupIdentity, const string &appVersionId, const CreateSortScriptRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createSortScriptWithOptions(appGroupIdentity, appVersionId, request, headers, runtime);
}

/**
 * @summary Creates a custom analyzer.
 *
 * @param request CreateUserAnalyzerRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateUserAnalyzerResponse
 */
CreateUserAnalyzerResponse Client::createUserAnalyzerWithOptions(const CreateUserAnalyzerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDryRun()) {
    query["dryRun"] = request.getDryRun();
  }

  json body = {};
  if (!!request.hasBusiness()) {
    body["business"] = request.getBusiness();
  }

  if (!!request.hasBusinessAppGroupId()) {
    body["businessAppGroupId"] = request.getBusinessAppGroupId();
  }

  if (!!request.hasBusinessType()) {
    body["businessType"] = request.getBusinessType();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasType()) {
    body["type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateUserAnalyzer"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/user-analyzers")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateUserAnalyzerResponse>();
}

/**
 * @summary Creates a custom analyzer.
 *
 * @param request CreateUserAnalyzerRequest
 * @return CreateUserAnalyzerResponse
 */
CreateUserAnalyzerResponse Client::createUserAnalyzer(const CreateUserAnalyzerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createUserAnalyzerWithOptions(request, headers, runtime);
}

/**
 * @summary Deletes an experiment.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteABTestExperimentResponse
 */
DeleteABTestExperimentResponse Client::deleteABTestExperimentWithOptions(const string &appGroupIdentity, const string &sceneId, const string &groupId, const string &experimentId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteABTestExperiment"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/scenes/" , Darabonba::Encode::Encoder::percentEncode(sceneId) , "/groups/" , Darabonba::Encode::Encoder::percentEncode(groupId) , "/experiments/" , Darabonba::Encode::Encoder::percentEncode(experimentId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteABTestExperimentResponse>();
}

/**
 * @summary Deletes an experiment.
 *
 * @return DeleteABTestExperimentResponse
 */
DeleteABTestExperimentResponse Client::deleteABTestExperiment(const string &appGroupIdentity, const string &sceneId, const string &groupId, const string &experimentId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteABTestExperimentWithOptions(appGroupIdentity, sceneId, groupId, experimentId, headers, runtime);
}

/**
 * @summary Deletes an A/B test group.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteABTestGroupResponse
 */
DeleteABTestGroupResponse Client::deleteABTestGroupWithOptions(const string &appGroupIdentity, const string &sceneId, const string &groupId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteABTestGroup"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/scenes/" , Darabonba::Encode::Encoder::percentEncode(sceneId) , "/groups/" , Darabonba::Encode::Encoder::percentEncode(groupId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteABTestGroupResponse>();
}

/**
 * @summary Deletes an A/B test group.
 *
 * @return DeleteABTestGroupResponse
 */
DeleteABTestGroupResponse Client::deleteABTestGroup(const string &appGroupIdentity, const string &sceneId, const string &groupId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteABTestGroupWithOptions(appGroupIdentity, sceneId, groupId, headers, runtime);
}

/**
 * @summary Deletes an A/B test scenario.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteABTestSceneResponse
 */
DeleteABTestSceneResponse Client::deleteABTestSceneWithOptions(const string &appGroupIdentity, const string &sceneId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteABTestScene"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/scenes/" , Darabonba::Encode::Encoder::percentEncode(sceneId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteABTestSceneResponse>();
}

/**
 * @summary Deletes an A/B test scenario.
 *
 * @return DeleteABTestSceneResponse
 */
DeleteABTestSceneResponse Client::deleteABTestScene(const string &appGroupIdentity, const string &sceneId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteABTestSceneWithOptions(appGroupIdentity, sceneId, headers, runtime);
}

/**
 * @summary Deletes an algorithm instance. Before you delete an instance, ensure that it is not in use to prevent service interruptions.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteFunctionInstanceResponse
 */
DeleteFunctionInstanceResponse Client::deleteFunctionInstanceWithOptions(const string &appGroupIdentity, const string &functionName, const string &instanceName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteFunctionInstance"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/functions/" , Darabonba::Encode::Encoder::percentEncode(functionName) , "/instances/" , Darabonba::Encode::Encoder::percentEncode(instanceName))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteFunctionInstanceResponse>();
}

/**
 * @summary Deletes an algorithm instance. Before you delete an instance, ensure that it is not in use to prevent service interruptions.
 *
 * @return DeleteFunctionInstanceResponse
 */
DeleteFunctionInstanceResponse Client::deleteFunctionInstance(const string &appGroupIdentity, const string &functionName, const string &instanceName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteFunctionInstanceWithOptions(appGroupIdentity, functionName, instanceName, headers, runtime);
}

/**
 * @summary Deletes a specified algorithm resource.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteFunctionResourceResponse
 */
DeleteFunctionResourceResponse Client::deleteFunctionResourceWithOptions(const string &appGroupIdentity, const string &functionName, const string &resourceName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteFunctionResource"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/functions/" , Darabonba::Encode::Encoder::percentEncode(functionName) , "/resources/" , Darabonba::Encode::Encoder::percentEncode(resourceName))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteFunctionResourceResponse>();
}

/**
 * @summary Deletes a specified algorithm resource.
 *
 * @return DeleteFunctionResourceResponse
 */
DeleteFunctionResourceResponse Client::deleteFunctionResource(const string &appGroupIdentity, const string &functionName, const string &resourceName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteFunctionResourceWithOptions(appGroupIdentity, functionName, resourceName, headers, runtime);
}

/**
 * @summary Deletes a training record. A training record that is in progress cannot be deleted.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteFunctionTaskResponse
 */
DeleteFunctionTaskResponse Client::deleteFunctionTaskWithOptions(const string &appGroupIdentity, const string &functionName, const string &instanceName, const string &generation, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteFunctionTask"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/functions/" , Darabonba::Encode::Encoder::percentEncode(functionName) , "/instances/" , Darabonba::Encode::Encoder::percentEncode(instanceName) , "/tasks/" , Darabonba::Encode::Encoder::percentEncode(generation))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteFunctionTaskResponse>();
}

/**
 * @summary Deletes a training record. A training record that is in progress cannot be deleted.
 *
 * @return DeleteFunctionTaskResponse
 */
DeleteFunctionTaskResponse Client::deleteFunctionTask(const string &appGroupIdentity, const string &functionName, const string &instanceName, const string &generation) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteFunctionTaskWithOptions(appGroupIdentity, functionName, instanceName, generation, headers, runtime);
}

/**
 * @summary Deletes a sort script.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSortScriptResponse
 */
DeleteSortScriptResponse Client::deleteSortScriptWithOptions(const string &appGroupIdentity, const string &scriptName, const string &appVersionId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSortScript"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/apps/" , Darabonba::Encode::Encoder::percentEncode(appVersionId) , "/sort-scripts/" , Darabonba::Encode::Encoder::percentEncode(scriptName))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSortScriptResponse>();
}

/**
 * @summary Deletes a sort script.
 *
 * @return DeleteSortScriptResponse
 */
DeleteSortScriptResponse Client::deleteSortScript(const string &appGroupIdentity, const string &scriptName, const string &appVersionId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteSortScriptWithOptions(appGroupIdentity, scriptName, appVersionId, headers, runtime);
}

/**
 * @summary Deletes a script file.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSortScriptFileResponse
 */
DeleteSortScriptFileResponse Client::deleteSortScriptFileWithOptions(const string &appGroupIdentity, const string &appVersionId, const string &scriptName, const string &fileName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSortScriptFile"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/apps/" , Darabonba::Encode::Encoder::percentEncode(appVersionId) , "/sort-scripts/" , Darabonba::Encode::Encoder::percentEncode(scriptName) , "/files/src/" , Darabonba::Encode::Encoder::percentEncode(fileName))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSortScriptFileResponse>();
}

/**
 * @summary Deletes a script file.
 *
 * @return DeleteSortScriptFileResponse
 */
DeleteSortScriptFileResponse Client::deleteSortScriptFile(const string &appGroupIdentity, const string &appVersionId, const string &scriptName, const string &fileName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteSortScriptFileWithOptions(appGroupIdentity, appVersionId, scriptName, fileName, headers, runtime);
}

/**
 * @summary Retrieves the details of an experiment.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeABTestExperimentResponse
 */
DescribeABTestExperimentResponse Client::describeABTestExperimentWithOptions(const string &appGroupIdentity, const string &sceneId, const string &groupId, const string &experimentId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeABTestExperiment"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/scenes/" , Darabonba::Encode::Encoder::percentEncode(sceneId) , "/groups/" , Darabonba::Encode::Encoder::percentEncode(groupId) , "/experiments/" , Darabonba::Encode::Encoder::percentEncode(experimentId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeABTestExperimentResponse>();
}

/**
 * @summary Retrieves the details of an experiment.
 *
 * @return DescribeABTestExperimentResponse
 */
DescribeABTestExperimentResponse Client::describeABTestExperiment(const string &appGroupIdentity, const string &sceneId, const string &groupId, const string &experimentId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeABTestExperimentWithOptions(appGroupIdentity, sceneId, groupId, experimentId, headers, runtime);
}

/**
 * @summary Retrieves the details of an A/B test group.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeABTestGroupResponse
 */
DescribeABTestGroupResponse Client::describeABTestGroupWithOptions(const string &appGroupIdentity, const string &sceneId, const string &groupId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeABTestGroup"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/scenes/" , Darabonba::Encode::Encoder::percentEncode(sceneId) , "/groups/" , Darabonba::Encode::Encoder::percentEncode(groupId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeABTestGroupResponse>();
}

/**
 * @summary Retrieves the details of an A/B test group.
 *
 * @return DescribeABTestGroupResponse
 */
DescribeABTestGroupResponse Client::describeABTestGroup(const string &appGroupIdentity, const string &sceneId, const string &groupId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeABTestGroupWithOptions(appGroupIdentity, sceneId, groupId, headers, runtime);
}

/**
 * @summary Query an A/B test scenario.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeABTestSceneResponse
 */
DescribeABTestSceneResponse Client::describeABTestSceneWithOptions(const string &appGroupIdentity, const string &sceneId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeABTestScene"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/scenes/" , Darabonba::Encode::Encoder::percentEncode(sceneId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeABTestSceneResponse>();
}

/**
 * @summary Query an A/B test scenario.
 *
 * @return DescribeABTestSceneResponse
 */
DescribeABTestSceneResponse Client::describeABTestScene(const string &appGroupIdentity, const string &sceneId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeABTestSceneWithOptions(appGroupIdentity, sceneId, headers, runtime);
}

/**
 * @summary Queries the information about a version of an OpenSearch application.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAppResponse
 */
DescribeAppResponse Client::describeAppWithOptions(const string &appGroupIdentity, const string &appId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeApp"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/apps/" , Darabonba::Encode::Encoder::percentEncode(appId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAppResponse>();
}

/**
 * @summary Queries the information about a version of an OpenSearch application.
 *
 * @return DescribeAppResponse
 */
DescribeAppResponse Client::describeApp(const string &appGroupIdentity, const string &appId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeAppWithOptions(appGroupIdentity, appId, headers, runtime);
}

/**
 * @summary Query an OpenSearch application.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAppGroupResponse
 */
DescribeAppGroupResponse Client::describeAppGroupWithOptions(const string &appGroupIdentity, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAppGroup"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAppGroupResponse>();
}

/**
 * @summary Query an OpenSearch application.
 *
 * @return DescribeAppGroupResponse
 */
DescribeAppGroupResponse Client::describeAppGroup(const string &appGroupIdentity) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeAppGroupWithOptions(appGroupIdentity, headers, runtime);
}

/**
 * @summary Queries the statistics about a version of an OpenSearch application.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAppStatisticsResponse
 */
DescribeAppStatisticsResponse Client::describeAppStatisticsWithOptions(const string &appGroupIdentity, const string &appId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAppStatistics"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/apps/" , Darabonba::Encode::Encoder::percentEncode(appId) , "/statistics")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAppStatisticsResponse>();
}

/**
 * @summary Queries the statistics about a version of an OpenSearch application.
 *
 * @return DescribeAppStatisticsResponse
 */
DescribeAppStatisticsResponse Client::describeAppStatistics(const string &appGroupIdentity, const string &appId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeAppStatisticsWithOptions(appGroupIdentity, appId, headers, runtime);
}

/**
 * @summary Queries the versions of an OpenSearch application.
 *
 * @description - If a Standard Edition application with the same name exists, a new version is created.
 * - When you create a new version, the autoSwitch and realtimeShared parameters are required.
 * - When you create a new version, the quota is inherited from the previous version.
 * - When you create a new version, modifications to the quota do not take effect.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAppsResponse
 */
DescribeAppsResponse Client::describeAppsWithOptions(const string &appGroupIdentity, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeApps"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/apps")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAppsResponse>();
}

/**
 * @summary Queries the versions of an OpenSearch application.
 *
 * @description - If a Standard Edition application with the same name exists, a new version is created.
 * - When you create a new version, the autoSwitch and realtimeShared parameters are required.
 * - When you create a new version, the quota is inherited from the previous version.
 * - When you create a new version, modifications to the quota do not take effect.
 *
 * @return DescribeAppsResponse
 */
DescribeAppsResponse Client::describeApps(const string &appGroupIdentity) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeAppsWithOptions(appGroupIdentity, headers, runtime);
}

/**
 * @summary Retrieves the details of a data collection for a specified application.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDataCollctionResponse
 */
DescribeDataCollctionResponse Client::describeDataCollctionWithOptions(const string &appGroupIdentity, const string &dataCollectionIdentity, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDataCollction"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/data-collections/" , Darabonba::Encode::Encoder::percentEncode(dataCollectionIdentity))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDataCollctionResponse>();
}

/**
 * @summary Retrieves the details of a data collection for a specified application.
 *
 * @return DescribeDataCollctionResponse
 */
DescribeDataCollctionResponse Client::describeDataCollction(const string &appGroupIdentity, const string &dataCollectionIdentity) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeDataCollctionWithOptions(appGroupIdentity, dataCollectionIdentity, headers, runtime);
}

/**
 * @summary 获取弹性计划详情
 *
 * @description - 若已存在同名标准版应用，则创建新版本；
 * - 在新建版本情况下，autoSwitch 和 realtimeShared 也是必填的；
 * - 在新建版本情况下，quota 是自动从上一个版本继承的；
 * - 在新建版本情况下，修改 quota 是无效的。
 *
 * @param request DescribeElasticPlanRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeElasticPlanResponse
 */
DescribeElasticPlanResponse Client::describeElasticPlanWithOptions(const string &appGroupIdentity, const string &planId, const DescribeElasticPlanRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDryRun()) {
    query["dryRun"] = request.getDryRun();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeElasticPlan"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/elastic-plans/" , Darabonba::Encode::Encoder::percentEncode(planId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeElasticPlanResponse>();
}

/**
 * @summary 获取弹性计划详情
 *
 * @description - 若已存在同名标准版应用，则创建新版本；
 * - 在新建版本情况下，autoSwitch 和 realtimeShared 也是必填的；
 * - 在新建版本情况下，quota 是自动从上一个版本继承的；
 * - 在新建版本情况下，修改 quota 是无效的。
 *
 * @param request DescribeElasticPlanRequest
 * @return DescribeElasticPlanResponse
 */
DescribeElasticPlanResponse Client::describeElasticPlan(const string &appGroupIdentity, const string &planId, const DescribeElasticPlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeElasticPlanWithOptions(appGroupIdentity, planId, request, headers, runtime);
}

/**
 * @summary Queries the rough sort expression configured for an OpenSearch application version.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeFirstRankResponse
 */
DescribeFirstRankResponse Client::describeFirstRankWithOptions(const string &appGroupIdentity, const string &appId, const string &name, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeFirstRank"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/apps/" , Darabonba::Encode::Encoder::percentEncode(appId) , "/first-ranks/" , Darabonba::Encode::Encoder::percentEncode(name))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeFirstRankResponse>();
}

/**
 * @summary Queries the rough sort expression configured for an OpenSearch application version.
 *
 * @return DescribeFirstRankResponse
 */
DescribeFirstRankResponse Client::describeFirstRank(const string &appGroupIdentity, const string &appId, const string &name) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeFirstRankWithOptions(appGroupIdentity, appId, name, headers, runtime);
}

/**
 * @summary Retrieves the details of an intervention dictionary.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInterventionDictionaryResponse
 */
DescribeInterventionDictionaryResponse Client::describeInterventionDictionaryWithOptions(const string &name, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInterventionDictionary"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/intervention-dictionaries/" , Darabonba::Encode::Encoder::percentEncode(name))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInterventionDictionaryResponse>();
}

/**
 * @summary Retrieves the details of an intervention dictionary.
 *
 * @return DescribeInterventionDictionaryResponse
 */
DescribeInterventionDictionaryResponse Client::describeInterventionDictionary(const string &name) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeInterventionDictionaryWithOptions(name, headers, runtime);
}

/**
 * @summary Describes a query analysis rule for a version of an OpenSearch application.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeQueryProcessorResponse
 */
DescribeQueryProcessorResponse Client::describeQueryProcessorWithOptions(const string &appGroupIdentity, const string &appId, const string &name, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeQueryProcessor"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/apps/" , Darabonba::Encode::Encoder::percentEncode(appId) , "/query-processors/" , Darabonba::Encode::Encoder::percentEncode(name))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeQueryProcessorResponse>();
}

/**
 * @summary Describes a query analysis rule for a version of an OpenSearch application.
 *
 * @return DescribeQueryProcessorResponse
 */
DescribeQueryProcessorResponse Client::describeQueryProcessor(const string &appGroupIdentity, const string &appId, const string &name) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeQueryProcessorWithOptions(appGroupIdentity, appId, name, headers, runtime);
}

/**
 * @summary Retrieves the endpoints for all regions.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegionsWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRegions"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/regions")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRegionsResponse>();
}

/**
 * @summary Retrieves the endpoints for all regions.
 *
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegions() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeRegionsWithOptions(headers, runtime);
}

/**
 * @summary Query a scheduled task for an OpenSearch application.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeScheduledTaskResponse
 */
DescribeScheduledTaskResponse Client::describeScheduledTaskWithOptions(const string &appGroupIdentity, const string &taskId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeScheduledTask"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/scheduled-tasks/" , Darabonba::Encode::Encoder::percentEncode(taskId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeScheduledTaskResponse>();
}

/**
 * @summary Query a scheduled task for an OpenSearch application.
 *
 * @return DescribeScheduledTaskResponse
 */
DescribeScheduledTaskResponse Client::describeScheduledTask(const string &appGroupIdentity, const string &taskId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeScheduledTaskWithOptions(appGroupIdentity, taskId, headers, runtime);
}

/**
 * @summary Queries the fine sort expression for a version of an OpenSearch application.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSecondRankResponse
 */
DescribeSecondRankResponse Client::describeSecondRankWithOptions(const string &appGroupIdentity, const string &appId, const string &name, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSecondRank"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/apps/" , Darabonba::Encode::Encoder::percentEncode(appId) , "/second-ranks/" , Darabonba::Encode::Encoder::percentEncode(name))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSecondRankResponse>();
}

/**
 * @summary Queries the fine sort expression for a version of an OpenSearch application.
 *
 * @return DescribeSecondRankResponse
 */
DescribeSecondRankResponse Client::describeSecondRank(const string &appGroupIdentity, const string &appId, const string &name) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeSecondRankWithOptions(appGroupIdentity, appId, name, headers, runtime);
}

/**
 * @summary Queries the status of the slow query feature.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSlowQueryStatusResponse
 */
DescribeSlowQueryStatusResponse Client::describeSlowQueryStatusWithOptions(const string &appGroupIdentity, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSlowQueryStatus"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/optimizers/slow-query")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSlowQueryStatusResponse>();
}

/**
 * @summary Queries the status of the slow query feature.
 *
 * @return DescribeSlowQueryStatusResponse
 */
DescribeSlowQueryStatusResponse Client::describeSlowQueryStatus(const string &appGroupIdentity) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeSlowQueryStatusWithOptions(appGroupIdentity, headers, runtime);
}

/**
 * @summary Retrieves the details of a custom analyzer.
 *
 * @param request DescribeUserAnalyzerRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUserAnalyzerResponse
 */
DescribeUserAnalyzerResponse Client::describeUserAnalyzerWithOptions(const string &name, const DescribeUserAnalyzerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasWith()) {
    query["with"] = request.getWith();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeUserAnalyzer"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/user-analyzers/" , Darabonba::Encode::Encoder::percentEncode(name))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeUserAnalyzerResponse>();
}

/**
 * @summary Retrieves the details of a custom analyzer.
 *
 * @param request DescribeUserAnalyzerRequest
 * @return DescribeUserAnalyzerResponse
 */
DescribeUserAnalyzerResponse Client::describeUserAnalyzer(const string &name, const DescribeUserAnalyzerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeUserAnalyzerWithOptions(name, request, headers, runtime);
}

/**
 * @summary Disables the slow query service for Search Diagnoser.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableSlowQueryResponse
 */
DisableSlowQueryResponse Client::disableSlowQueryWithOptions(const string &appGroupIdentity, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableSlowQuery"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/optimizers/slow-query/actions/disable")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableSlowQueryResponse>();
}

/**
 * @summary Disables the slow query service for Search Diagnoser.
 *
 * @return DisableSlowQueryResponse
 */
DisableSlowQueryResponse Client::disableSlowQuery(const string &appGroupIdentity) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return disableSlowQueryWithOptions(appGroupIdentity, headers, runtime);
}

/**
 * @summary Enables the slow query service for the optimizer.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableSlowQueryResponse
 */
EnableSlowQueryResponse Client::enableSlowQueryWithOptions(const string &appGroupIdentity, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableSlowQuery"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/optimizers/slow-query/actions/enable")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableSlowQueryResponse>();
}

/**
 * @summary Enables the slow query service for the optimizer.
 *
 * @return EnableSlowQueryResponse
 */
EnableSlowQueryResponse Client::enableSlowQuery(const string &appGroupIdentity) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return enableSlowQueryWithOptions(appGroupIdentity, headers, runtime);
}

/**
 * @summary Queries the information about a wide table that is generated after a JOIN operation is performed on multiple tables.
 *
 * @param request GenerateMergedTableRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GenerateMergedTableResponse
 */
GenerateMergedTableResponse Client::generateMergedTableWithOptions(const GenerateMergedTableRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSpec()) {
    query["spec"] = request.getSpec();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "GenerateMergedTable"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/assist/schema/actions/merge")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GenerateMergedTableResponse>();
}

/**
 * @summary Queries the information about a wide table that is generated after a JOIN operation is performed on multiple tables.
 *
 * @param request GenerateMergedTableRequest
 * @return GenerateMergedTableResponse
 */
GenerateMergedTableResponse Client::generateMergedTable(const GenerateMergedTableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return generateMergedTableWithOptions(request, headers, runtime);
}

/**
 * @summary Retrieves the industry type.
 *
 * @param request GetDomainRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDomainResponse
 */
GetDomainResponse Client::getDomainWithOptions(const string &domainName, const GetDomainRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppGroupIdentity()) {
    query["appGroupIdentity"] = request.getAppGroupIdentity();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDomain"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/domains/" , Darabonba::Encode::Encoder::percentEncode(domainName))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDomainResponse>();
}

/**
 * @summary Retrieves the industry type.
 *
 * @param request GetDomainRequest
 * @return GetDomainResponse
 */
GetDomainResponse Client::getDomain(const string &domainName, const GetDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getDomainWithOptions(domainName, request, headers, runtime);
}

/**
 * @summary Retrieves the version information of the feature that is used to create an instance.
 *
 * @param request GetFunctionCurrentVersionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetFunctionCurrentVersionResponse
 */
GetFunctionCurrentVersionResponse Client::getFunctionCurrentVersionWithOptions(const string &functionName, const GetFunctionCurrentVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCategory()) {
    query["category"] = request.getCategory();
  }

  if (!!request.hasDomain()) {
    query["domain"] = request.getDomain();
  }

  if (!!request.hasFunctionType()) {
    query["functionType"] = request.getFunctionType();
  }

  if (!!request.hasModelType()) {
    query["modelType"] = request.getModelType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetFunctionCurrentVersion"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/functions/" , Darabonba::Encode::Encoder::percentEncode(functionName) , "/current-version")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetFunctionCurrentVersionResponse>();
}

/**
 * @summary Retrieves the version information of the feature that is used to create an instance.
 *
 * @param request GetFunctionCurrentVersionRequest
 * @return GetFunctionCurrentVersionResponse
 */
GetFunctionCurrentVersionResponse Client::getFunctionCurrentVersion(const string &functionName, const GetFunctionCurrentVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getFunctionCurrentVersionWithOptions(functionName, request, headers, runtime);
}

/**
 * @summary Queries the default algorithm instance for an application.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetFunctionDefaultInstanceResponse
 */
GetFunctionDefaultInstanceResponse Client::getFunctionDefaultInstanceWithOptions(const string &appGroupIdentity, const string &functionName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetFunctionDefaultInstance"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/functions/" , Darabonba::Encode::Encoder::percentEncode(functionName) , "/default-instance")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetFunctionDefaultInstanceResponse>();
}

/**
 * @summary Queries the default algorithm instance for an application.
 *
 * @return GetFunctionDefaultInstanceResponse
 */
GetFunctionDefaultInstanceResponse Client::getFunctionDefaultInstance(const string &appGroupIdentity, const string &functionName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getFunctionDefaultInstanceWithOptions(appGroupIdentity, functionName, headers, runtime);
}

/**
 * @summary Query an algorithm instance by instance name.
 *
 * @param request GetFunctionInstanceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetFunctionInstanceResponse
 */
GetFunctionInstanceResponse Client::getFunctionInstanceWithOptions(const string &appGroupIdentity, const string &functionName, const string &instanceName, const GetFunctionInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOutput()) {
    query["output"] = request.getOutput();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetFunctionInstance"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/functions/" , Darabonba::Encode::Encoder::percentEncode(functionName) , "/instances/" , Darabonba::Encode::Encoder::percentEncode(instanceName))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetFunctionInstanceResponse>();
}

/**
 * @summary Query an algorithm instance by instance name.
 *
 * @param request GetFunctionInstanceRequest
 * @return GetFunctionInstanceResponse
 */
GetFunctionInstanceResponse Client::getFunctionInstance(const string &appGroupIdentity, const string &functionName, const string &instanceName, const GetFunctionInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getFunctionInstanceWithOptions(appGroupIdentity, functionName, instanceName, request, headers, runtime);
}

/**
 * @summary Retrieves the specified algorithm resource.
 *
 * @param request GetFunctionResourceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetFunctionResourceResponse
 */
GetFunctionResourceResponse Client::getFunctionResourceWithOptions(const string &appGroupIdentity, const string &functionName, const string &resourceName, const GetFunctionResourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOutput()) {
    query["output"] = request.getOutput();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetFunctionResource"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/functions/" , Darabonba::Encode::Encoder::percentEncode(functionName) , "/resources/" , Darabonba::Encode::Encoder::percentEncode(resourceName))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetFunctionResourceResponse>();
}

/**
 * @summary Retrieves the specified algorithm resource.
 *
 * @param request GetFunctionResourceRequest
 * @return GetFunctionResourceResponse
 */
GetFunctionResourceResponse Client::getFunctionResource(const string &appGroupIdentity, const string &functionName, const string &resourceName, const GetFunctionResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getFunctionResourceWithOptions(appGroupIdentity, functionName, resourceName, request, headers, runtime);
}

/**
 * @summary Queries the details of a training task.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetFunctionTaskResponse
 */
GetFunctionTaskResponse Client::getFunctionTaskWithOptions(const string &appGroupIdentity, const string &functionName, const string &instanceName, const string &generation, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetFunctionTask"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/functions/" , Darabonba::Encode::Encoder::percentEncode(functionName) , "/instances/" , Darabonba::Encode::Encoder::percentEncode(instanceName) , "/tasks/" , Darabonba::Encode::Encoder::percentEncode(generation))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetFunctionTaskResponse>();
}

/**
 * @summary Queries the details of a training task.
 *
 * @return GetFunctionTaskResponse
 */
GetFunctionTaskResponse Client::getFunctionTask(const string &appGroupIdentity, const string &functionName, const string &instanceName, const string &generation) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getFunctionTaskWithOptions(appGroupIdentity, functionName, instanceName, generation, headers, runtime);
}

/**
 * @summary Queries the information about a function version.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetFunctionVersionResponse
 */
GetFunctionVersionResponse Client::getFunctionVersionWithOptions(const string &functionName, const string &versionId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetFunctionVersion"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/functions/" , Darabonba::Encode::Encoder::percentEncode(functionName) , "/versions/" , Darabonba::Encode::Encoder::percentEncode(versionId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetFunctionVersionResponse>();
}

/**
 * @summary Queries the information about a function version.
 *
 * @return GetFunctionVersionResponse
 */
GetFunctionVersionResponse Client::getFunctionVersion(const string &functionName, const string &versionId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getFunctionVersionWithOptions(functionName, versionId, headers, runtime);
}

/**
 * @summary Retrieves the names of all files in a specified script for a specific application version.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetScriptFileNamesResponse
 */
GetScriptFileNamesResponse Client::getScriptFileNamesWithOptions(const string &appGroupIdentity, const string &appVersionId, const string &scriptName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetScriptFileNames"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/apps/" , Darabonba::Encode::Encoder::percentEncode(appVersionId) , "/sort-scripts/" , Darabonba::Encode::Encoder::percentEncode(scriptName) , "/file-names")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetScriptFileNamesResponse>();
}

/**
 * @summary Retrieves the names of all files in a specified script for a specific application version.
 *
 * @return GetScriptFileNamesResponse
 */
GetScriptFileNamesResponse Client::getScriptFileNames(const string &appGroupIdentity, const string &appVersionId, const string &scriptName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getScriptFileNamesWithOptions(appGroupIdentity, appVersionId, scriptName, headers, runtime);
}

/**
 * @summary Retrieves the details of a query policy.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSearchStrategyResponse
 */
GetSearchStrategyResponse Client::getSearchStrategyWithOptions(const string &appGroupIdentity, const string &appId, const string &strategyName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSearchStrategy"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/apps/" , Darabonba::Encode::Encoder::percentEncode(appId) , "/search-strategies/" , Darabonba::Encode::Encoder::percentEncode(strategyName))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSearchStrategyResponse>();
}

/**
 * @summary Retrieves the details of a query policy.
 *
 * @return GetSearchStrategyResponse
 */
GetSearchStrategyResponse Client::getSearchStrategy(const string &appGroupIdentity, const string &appId, const string &strategyName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getSearchStrategyWithOptions(appGroupIdentity, appId, strategyName, headers, runtime);
}

/**
 * @summary Retrieves the details of a sort script.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSortScriptResponse
 */
GetSortScriptResponse Client::getSortScriptWithOptions(const string &appGroupIdentity, const string &scriptName, const string &appVersionId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSortScript"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/apps/" , Darabonba::Encode::Encoder::percentEncode(appVersionId) , "/sort-scripts/" , Darabonba::Encode::Encoder::percentEncode(scriptName))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSortScriptResponse>();
}

/**
 * @summary Retrieves the details of a sort script.
 *
 * @return GetSortScriptResponse
 */
GetSortScriptResponse Client::getSortScript(const string &appGroupIdentity, const string &scriptName, const string &appVersionId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getSortScriptWithOptions(appGroupIdentity, scriptName, appVersionId, headers, runtime);
}

/**
 * @summary Retrieves the content of a sort script.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSortScriptFileResponse
 */
GetSortScriptFileResponse Client::getSortScriptFileWithOptions(const string &appGroupIdentity, const string &scriptName, const string &appVersionId, const string &fileName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSortScriptFile"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/apps/" , Darabonba::Encode::Encoder::percentEncode(appVersionId) , "/sort-scripts/" , Darabonba::Encode::Encoder::percentEncode(scriptName) , "/files/src/" , Darabonba::Encode::Encoder::percentEncode(fileName))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSortScriptFileResponse>();
}

/**
 * @summary Retrieves the content of a sort script.
 *
 * @return GetSortScriptFileResponse
 */
GetSortScriptFileResponse Client::getSortScriptFile(const string &appGroupIdentity, const string &scriptName, const string &appVersionId, const string &fileName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getSortScriptFileWithOptions(appGroupIdentity, scriptName, appVersionId, fileName, headers, runtime);
}

/**
 * @summary Queries a list of experiments.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListABTestExperimentsResponse
 */
ListABTestExperimentsResponse Client::listABTestExperimentsWithOptions(const string &appGroupIdentity, const string &sceneId, const string &groupId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListABTestExperiments"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/scenes/" , Darabonba::Encode::Encoder::percentEncode(sceneId) , "/groups/" , Darabonba::Encode::Encoder::percentEncode(groupId) , "/experiments")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListABTestExperimentsResponse>();
}

/**
 * @summary Queries a list of experiments.
 *
 * @return ListABTestExperimentsResponse
 */
ListABTestExperimentsResponse Client::listABTestExperiments(const string &appGroupIdentity, const string &sceneId, const string &groupId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listABTestExperimentsWithOptions(appGroupIdentity, sceneId, groupId, headers, runtime);
}

/**
 * @summary Lists whitelists.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListABTestFixedFlowDividersResponse
 */
ListABTestFixedFlowDividersResponse Client::listABTestFixedFlowDividersWithOptions(const string &appGroupIdentity, const string &sceneId, const string &groupId, const string &experimentId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListABTestFixedFlowDividers"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/scenes/" , Darabonba::Encode::Encoder::percentEncode(sceneId) , "/groups/" , Darabonba::Encode::Encoder::percentEncode(groupId) , "/experiments/" , Darabonba::Encode::Encoder::percentEncode(experimentId) , "/fixed-flow-dividers")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListABTestFixedFlowDividersResponse>();
}

/**
 * @summary Lists whitelists.
 *
 * @return ListABTestFixedFlowDividersResponse
 */
ListABTestFixedFlowDividersResponse Client::listABTestFixedFlowDividers(const string &appGroupIdentity, const string &sceneId, const string &groupId, const string &experimentId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listABTestFixedFlowDividersWithOptions(appGroupIdentity, sceneId, groupId, experimentId, headers, runtime);
}

/**
 * @summary Retrieves a list of test groups.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListABTestGroupsResponse
 */
ListABTestGroupsResponse Client::listABTestGroupsWithOptions(const string &appGroupIdentity, const string &sceneId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListABTestGroups"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/scenes/" , Darabonba::Encode::Encoder::percentEncode(sceneId) , "/groups")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListABTestGroupsResponse>();
}

/**
 * @summary Retrieves a list of test groups.
 *
 * @return ListABTestGroupsResponse
 */
ListABTestGroupsResponse Client::listABTestGroups(const string &appGroupIdentity, const string &sceneId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listABTestGroupsWithOptions(appGroupIdentity, sceneId, headers, runtime);
}

/**
 * @summary Queries test scenarios.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListABTestScenesResponse
 */
ListABTestScenesResponse Client::listABTestScenesWithOptions(const string &appGroupIdentity, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListABTestScenes"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/scenes")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListABTestScenesResponse>();
}

/**
 * @summary Queries test scenarios.
 *
 * @return ListABTestScenesResponse
 */
ListABTestScenesResponse Client::listABTestScenes(const string &appGroupIdentity) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listABTestScenesWithOptions(appGroupIdentity, headers, runtime);
}

/**
 * @summary Queries a list of OpenSearch applications.
 *
 * @description - Filters applications by name, instance ID, and type.
 * - Sorts applications by their creation time.
 * - Supports paging.
 *
 * @param tmpReq ListAppGroupsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAppGroupsResponse
 */
ListAppGroupsResponse Client::listAppGroupsWithOptions(const ListAppGroupsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListAppGroupsShrinkRequest request = ListAppGroupsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTags(), "tags", "json"));
  }

  json query = {};
  if (!!request.hasInstanceId()) {
    query["instanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    query["name"] = request.getName();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceGroupId()) {
    query["resourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasSortBy()) {
    query["sortBy"] = request.getSortBy();
  }

  if (!!request.hasTagsShrink()) {
    query["tags"] = request.getTagsShrink();
  }

  if (!!request.hasType()) {
    query["type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAppGroups"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAppGroupsResponse>();
}

/**
 * @summary Queries a list of OpenSearch applications.
 *
 * @description - Filters applications by name, instance ID, and type.
 * - Sorts applications by their creation time.
 * - Supports paging.
 *
 * @param request ListAppGroupsRequest
 * @return ListAppGroupsResponse
 */
ListAppGroupsResponse Client::listAppGroups(const ListAppGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listAppGroupsWithOptions(request, headers, runtime);
}

/**
 * @summary Lists the data collections for an OpenSearch application.
 *
 * @param request ListDataCollectionsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataCollectionsResponse
 */
ListDataCollectionsResponse Client::listDataCollectionsWithOptions(const string &appGroupIdentity, const ListDataCollectionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDataCollections"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/data-collections")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataCollectionsResponse>();
}

/**
 * @summary Lists the data collections for an OpenSearch application.
 *
 * @param request ListDataCollectionsRequest
 * @return ListDataCollectionsResponse
 */
ListDataCollectionsResponse Client::listDataCollections(const string &appGroupIdentity, const ListDataCollectionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listDataCollectionsWithOptions(appGroupIdentity, request, headers, runtime);
}

/**
 * @summary This internal API retrieves all fields from a specified data table.
 *
 * @param request ListDataSourceTableFieldsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataSourceTableFieldsResponse
 */
ListDataSourceTableFieldsResponse Client::listDataSourceTableFieldsWithOptions(const string &dataSourceType, const ListDataSourceTableFieldsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasParams()) {
    query["params"] = request.getParams();
  }

  if (!!request.hasRawType()) {
    query["rawType"] = request.getRawType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDataSourceTableFields"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/assist/data-sources/" , Darabonba::Encode::Encoder::percentEncode(dataSourceType) , "/fields")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataSourceTableFieldsResponse>();
}

/**
 * @summary This internal API retrieves all fields from a specified data table.
 *
 * @param request ListDataSourceTableFieldsRequest
 * @return ListDataSourceTableFieldsResponse
 */
ListDataSourceTableFieldsResponse Client::listDataSourceTableFields(const string &dataSourceType, const ListDataSourceTableFieldsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listDataSourceTableFieldsWithOptions(dataSourceType, request, headers, runtime);
}

/**
 * @summary Retrieves all data from a specified data source.
 *
 * @param request ListDataSourceTablesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataSourceTablesResponse
 */
ListDataSourceTablesResponse Client::listDataSourceTablesWithOptions(const string &dataSourceType, const ListDataSourceTablesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasParams()) {
    query["params"] = request.getParams();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDataSourceTables"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/assist/data-sources/" , Darabonba::Encode::Encoder::percentEncode(dataSourceType) , "/tables")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataSourceTablesResponse>();
}

/**
 * @summary Retrieves all data from a specified data source.
 *
 * @param request ListDataSourceTablesRequest
 * @return ListDataSourceTablesResponse
 */
ListDataSourceTablesResponse Client::listDataSourceTables(const string &dataSourceType, const ListDataSourceTablesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listDataSourceTablesWithOptions(dataSourceType, request, headers, runtime);
}

/**
 * @summary 获取弹性计划列表
 *
 * @param request ListElasticPlansRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListElasticPlansResponse
 */
ListElasticPlansResponse Client::listElasticPlansWithOptions(const string &appGroupIdentity, const ListElasticPlansRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnabled()) {
    query["enabled"] = request.getEnabled();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasName()) {
    query["name"] = request.getName();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListElasticPlans"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/elastic-plans")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListElasticPlansResponse>();
}

/**
 * @summary 获取弹性计划列表
 *
 * @param request ListElasticPlansRequest
 * @return ListElasticPlansResponse
 */
ListElasticPlansResponse Client::listElasticPlans(const string &appGroupIdentity, const ListElasticPlansRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listElasticPlansWithOptions(appGroupIdentity, request, headers, runtime);
}

/**
 * @summary Queries the rough sort expressions that are configured for a version of an OpenSearch application.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListFirstRanksResponse
 */
ListFirstRanksResponse Client::listFirstRanksWithOptions(const string &appGroupIdentity, const string &appId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListFirstRanks"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/apps/" , Darabonba::Encode::Encoder::percentEncode(appId) , "/first-ranks")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListFirstRanksResponse>();
}

/**
 * @summary Queries the rough sort expressions that are configured for a version of an OpenSearch application.
 *
 * @return ListFirstRanksResponse
 */
ListFirstRanksResponse Client::listFirstRanks(const string &appGroupIdentity, const string &appId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listFirstRanksWithOptions(appGroupIdentity, appId, headers, runtime);
}

/**
 * @summary Lists all instances that match the specified conditions.
 *
 * @param request ListFunctionInstancesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListFunctionInstancesResponse
 */
ListFunctionInstancesResponse Client::listFunctionInstancesWithOptions(const string &appGroupIdentity, const string &functionName, const ListFunctionInstancesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFunctionType()) {
    query["functionType"] = request.getFunctionType();
  }

  if (!!request.hasModelType()) {
    query["modelType"] = request.getModelType();
  }

  if (!!request.hasOutput()) {
    query["output"] = request.getOutput();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasSource()) {
    query["source"] = request.getSource();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListFunctionInstances"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/functions/" , Darabonba::Encode::Encoder::percentEncode(functionName) , "/instances")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListFunctionInstancesResponse>();
}

/**
 * @summary Lists all instances that match the specified conditions.
 *
 * @param request ListFunctionInstancesRequest
 * @return ListFunctionInstancesResponse
 */
ListFunctionInstancesResponse Client::listFunctionInstances(const string &appGroupIdentity, const string &functionName, const ListFunctionInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listFunctionInstancesWithOptions(appGroupIdentity, functionName, request, headers, runtime);
}

/**
 * @summary Lists the algorithm resources.
 *
 * @param request ListFunctionResourcesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListFunctionResourcesResponse
 */
ListFunctionResourcesResponse Client::listFunctionResourcesWithOptions(const string &appGroupIdentity, const string &functionName, const ListFunctionResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOutput()) {
    query["output"] = request.getOutput();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceType()) {
    query["resourceType"] = request.getResourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListFunctionResources"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/functions/" , Darabonba::Encode::Encoder::percentEncode(functionName) , "/resources")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListFunctionResourcesResponse>();
}

/**
 * @summary Lists the algorithm resources.
 *
 * @param request ListFunctionResourcesRequest
 * @return ListFunctionResourcesResponse
 */
ListFunctionResourcesResponse Client::listFunctionResources(const string &appGroupIdentity, const string &functionName, const ListFunctionResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listFunctionResourcesWithOptions(appGroupIdentity, functionName, request, headers, runtime);
}

/**
 * @summary Queries the training tasks. The results are sorted in descending order by start time.
 *
 * @param request ListFunctionTasksRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListFunctionTasksResponse
 */
ListFunctionTasksResponse Client::listFunctionTasksWithOptions(const string &appGroupIdentity, const string &functionName, const string &instanceName, const ListFunctionTasksRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["endTime"] = request.getEndTime();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasStartTime()) {
    query["startTime"] = request.getStartTime();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListFunctionTasks"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/functions/" , Darabonba::Encode::Encoder::percentEncode(functionName) , "/instances/" , Darabonba::Encode::Encoder::percentEncode(instanceName) , "/tasks")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListFunctionTasksResponse>();
}

/**
 * @summary Queries the training tasks. The results are sorted in descending order by start time.
 *
 * @param request ListFunctionTasksRequest
 * @return ListFunctionTasksResponse
 */
ListFunctionTasksResponse Client::listFunctionTasks(const string &appGroupIdentity, const string &functionName, const string &instanceName, const ListFunctionTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listFunctionTasksWithOptions(appGroupIdentity, functionName, instanceName, request, headers, runtime);
}

/**
 * @summary Retrieves a list of intervention dictionaries.
 *
 * @param request ListInterventionDictionariesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInterventionDictionariesResponse
 */
ListInterventionDictionariesResponse Client::listInterventionDictionariesWithOptions(const ListInterventionDictionariesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasTypes()) {
    query["types"] = request.getTypes();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListInterventionDictionaries"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/intervention-dictionaries")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInterventionDictionariesResponse>();
}

/**
 * @summary Retrieves a list of intervention dictionaries.
 *
 * @param request ListInterventionDictionariesRequest
 * @return ListInterventionDictionariesResponse
 */
ListInterventionDictionariesResponse Client::listInterventionDictionaries(const ListInterventionDictionariesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listInterventionDictionariesWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the intervention entries in an intervention dictionary.
 *
 * @param request ListInterventionDictionaryEntriesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInterventionDictionaryEntriesResponse
 */
ListInterventionDictionaryEntriesResponse Client::listInterventionDictionaryEntriesWithOptions(const string &name, const ListInterventionDictionaryEntriesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasWord()) {
    query["word"] = request.getWord();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListInterventionDictionaryEntries"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/intervention-dictionaries/" , Darabonba::Encode::Encoder::percentEncode(name) , "/entries")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInterventionDictionaryEntriesResponse>();
}

/**
 * @summary Queries the intervention entries in an intervention dictionary.
 *
 * @param request ListInterventionDictionaryEntriesRequest
 * @return ListInterventionDictionaryEntriesResponse
 */
ListInterventionDictionaryEntriesResponse Client::listInterventionDictionaryEntries(const string &name, const ListInterventionDictionaryEntriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listInterventionDictionaryEntriesWithOptions(name, request, headers, runtime);
}

/**
 * @summary Retrieves the Named Entity Recognition (NER) results.
 *
 * @param request ListInterventionDictionaryNerResultsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInterventionDictionaryNerResultsResponse
 */
ListInterventionDictionaryNerResultsResponse Client::listInterventionDictionaryNerResultsWithOptions(const string &name, const ListInterventionDictionaryNerResultsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasQuery()) {
    query["query"] = request.getQuery();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListInterventionDictionaryNerResults"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/intervention-dictionaries/" , Darabonba::Encode::Encoder::percentEncode(name) , "/ner-results")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInterventionDictionaryNerResultsResponse>();
}

/**
 * @summary Retrieves the Named Entity Recognition (NER) results.
 *
 * @param request ListInterventionDictionaryNerResultsRequest
 * @return ListInterventionDictionaryNerResultsResponse
 */
ListInterventionDictionaryNerResultsResponse Client::listInterventionDictionaryNerResults(const string &name, const ListInterventionDictionaryNerResultsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listInterventionDictionaryNerResultsWithOptions(name, request, headers, runtime);
}

/**
 * @summary Queries the list of resources associated with an intervention dictionary. If a query processor (QP) references the dictionary, the operation returns all associated applications and information about the QP.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInterventionDictionaryRelatedEntitiesResponse
 */
ListInterventionDictionaryRelatedEntitiesResponse Client::listInterventionDictionaryRelatedEntitiesWithOptions(const string &name, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListInterventionDictionaryRelatedEntities"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/intervention-dictionaries/" , Darabonba::Encode::Encoder::percentEncode(name) , "/related")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInterventionDictionaryRelatedEntitiesResponse>();
}

/**
 * @summary Queries the list of resources associated with an intervention dictionary. If a query processor (QP) references the dictionary, the operation returns all associated applications and information about the QP.
 *
 * @return ListInterventionDictionaryRelatedEntitiesResponse
 */
ListInterventionDictionaryRelatedEntitiesResponse Client::listInterventionDictionaryRelatedEntities(const string &name) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listInterventionDictionaryRelatedEntitiesWithOptions(name, headers, runtime);
}

/**
 * @summary Lists the current proceedings.
 *
 * @param request ListProceedingsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListProceedingsResponse
 */
ListProceedingsResponse Client::listProceedingsWithOptions(const string &appGroupIdentity, const ListProceedingsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFilterFinished()) {
    query["filterFinished"] = request.getFilterFinished();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListProceedings"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/proceedings")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListProceedingsResponse>();
}

/**
 * @summary Lists the current proceedings.
 *
 * @param request ListProceedingsRequest
 * @return ListProceedingsResponse
 */
ListProceedingsResponse Client::listProceedings(const string &appGroupIdentity, const ListProceedingsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listProceedingsWithOptions(appGroupIdentity, request, headers, runtime);
}

/**
 * @summary Tests the results of query analysis. This operation can be called only for existing applications of the Open Source-compatible Edition.
 *
 * @param request ListQueryProcessorAnalyzerResultsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListQueryProcessorAnalyzerResultsResponse
 */
ListQueryProcessorAnalyzerResultsResponse Client::listQueryProcessorAnalyzerResultsWithOptions(const string &appGroupIdentity, const string &appId, const string &name, const ListQueryProcessorAnalyzerResultsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasText()) {
    query["text"] = request.getText();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListQueryProcessorAnalyzerResults"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/apps/" , Darabonba::Encode::Encoder::percentEncode(appId) , "/query-processors/" , Darabonba::Encode::Encoder::percentEncode(name) , "/analyze")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListQueryProcessorAnalyzerResultsResponse>();
}

/**
 * @summary Tests the results of query analysis. This operation can be called only for existing applications of the Open Source-compatible Edition.
 *
 * @param request ListQueryProcessorAnalyzerResultsRequest
 * @return ListQueryProcessorAnalyzerResultsResponse
 */
ListQueryProcessorAnalyzerResultsResponse Client::listQueryProcessorAnalyzerResults(const string &appGroupIdentity, const string &appId, const string &name, const ListQueryProcessorAnalyzerResultsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listQueryProcessorAnalyzerResultsWithOptions(appGroupIdentity, appId, name, request, headers, runtime);
}

/**
 * @summary Queries the recommended priority settings for entity types in Named Entity Recognition (NER).
 *
 * @param request ListQueryProcessorNersRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListQueryProcessorNersResponse
 */
ListQueryProcessorNersResponse Client::listQueryProcessorNersWithOptions(const ListQueryProcessorNersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["domain"] = request.getDomain();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListQueryProcessorNers"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/query-processor/ner/default-priorities")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListQueryProcessorNersResponse>();
}

/**
 * @summary Queries the recommended priority settings for entity types in Named Entity Recognition (NER).
 *
 * @param request ListQueryProcessorNersRequest
 * @return ListQueryProcessorNersResponse
 */
ListQueryProcessorNersResponse Client::listQueryProcessorNers(const ListQueryProcessorNersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listQueryProcessorNersWithOptions(request, headers, runtime);
}

/**
 * @summary Queries a list of query analysis rules configured for a specific version of an OpenSearch application.
 *
 * @param request ListQueryProcessorsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListQueryProcessorsResponse
 */
ListQueryProcessorsResponse Client::listQueryProcessorsWithOptions(const string &appGroupIdentity, const string &appId, const ListQueryProcessorsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIsActive()) {
    query["isActive"] = request.getIsActive();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListQueryProcessors"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/apps/" , Darabonba::Encode::Encoder::percentEncode(appId) , "/query-processors")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListQueryProcessorsResponse>();
}

/**
 * @summary Queries a list of query analysis rules configured for a specific version of an OpenSearch application.
 *
 * @param request ListQueryProcessorsRequest
 * @return ListQueryProcessorsResponse
 */
ListQueryProcessorsResponse Client::listQueryProcessors(const string &appGroupIdentity, const string &appId, const ListQueryProcessorsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listQueryProcessorsWithOptions(appGroupIdentity, appId, request, headers, runtime);
}

/**
 * @summary Lists the quota approval tickets for a specified OpenSearch application.
 *
 * @param request ListQuotaReviewTasksRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListQuotaReviewTasksResponse
 */
ListQuotaReviewTasksResponse Client::listQuotaReviewTasksWithOptions(const string &appGroupIdentity, const ListQuotaReviewTasksRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListQuotaReviewTasks"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/quota-review-tasks")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListQuotaReviewTasksResponse>();
}

/**
 * @summary Lists the quota approval tickets for a specified OpenSearch application.
 *
 * @param request ListQuotaReviewTasksRequest
 * @return ListQuotaReviewTasksResponse
 */
ListQuotaReviewTasksResponse Client::listQuotaReviewTasks(const string &appGroupIdentity, const ListQuotaReviewTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listQuotaReviewTasksWithOptions(appGroupIdentity, request, headers, runtime);
}

/**
 * @summary Queries a list of scheduled tasks for an OpenSearch application.
 *
 * @param request ListScheduledTasksRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListScheduledTasksResponse
 */
ListScheduledTasksResponse Client::listScheduledTasksWithOptions(const string &appGroupIdentity, const ListScheduledTasksRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasType()) {
    query["type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListScheduledTasks"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/scheduled-tasks")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListScheduledTasksResponse>();
}

/**
 * @summary Queries a list of scheduled tasks for an OpenSearch application.
 *
 * @param request ListScheduledTasksRequest
 * @return ListScheduledTasksResponse
 */
ListScheduledTasksResponse Client::listScheduledTasks(const string &appGroupIdentity, const ListScheduledTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listScheduledTasksWithOptions(appGroupIdentity, request, headers, runtime);
}

/**
 * @summary Retrieves the details of query policies.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSearchStrategiesResponse
 */
ListSearchStrategiesResponse Client::listSearchStrategiesWithOptions(const string &appGroupIdentity, const string &appId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSearchStrategies"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/apps/" , Darabonba::Encode::Encoder::percentEncode(appId) , "/search-strategies")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSearchStrategiesResponse>();
}

/**
 * @summary Retrieves the details of query policies.
 *
 * @return ListSearchStrategiesResponse
 */
ListSearchStrategiesResponse Client::listSearchStrategies(const string &appGroupIdentity, const string &appId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listSearchStrategiesWithOptions(appGroupIdentity, appId, headers, runtime);
}

/**
 * @summary Lists the fine sort expressions for a specific version of an OpenSearch application.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSecondRanksResponse
 */
ListSecondRanksResponse Client::listSecondRanksWithOptions(const string &appGroupIdentity, const string &appId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSecondRanks"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/apps/" , Darabonba::Encode::Encoder::percentEncode(appId) , "/second-ranks")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSecondRanksResponse>();
}

/**
 * @summary Lists the fine sort expressions for a specific version of an OpenSearch application.
 *
 * @return ListSecondRanksResponse
 */
ListSecondRanksResponse Client::listSecondRanks(const string &appGroupIdentity, const string &appId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listSecondRanksWithOptions(appGroupIdentity, appId, headers, runtime);
}

/**
 * @summary Lists the optimization suggestions for slow queries from Search Diagnosis.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSlowQueryCategoriesResponse
 */
ListSlowQueryCategoriesResponse Client::listSlowQueryCategoriesWithOptions(const string &appGroupIdentity, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSlowQueryCategories"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/optimizers/slow-query/categories")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSlowQueryCategoriesResponse>();
}

/**
 * @summary Lists the optimization suggestions for slow queries from Search Diagnosis.
 *
 * @return ListSlowQueryCategoriesResponse
 */
ListSlowQueryCategoriesResponse Client::listSlowQueryCategories(const string &appGroupIdentity) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listSlowQueryCategoriesWithOptions(appGroupIdentity, headers, runtime);
}

/**
 * @summary Lists the slow queries from the Query Optimizer.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSlowQueryQueriesResponse
 */
ListSlowQueryQueriesResponse Client::listSlowQueryQueriesWithOptions(const string &appGroupIdentity, const string &categoryIndex, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSlowQueryQueries"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/optimizers/slow-query/categories/" , Darabonba::Encode::Encoder::percentEncode(categoryIndex) , "/queries")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSlowQueryQueriesResponse>();
}

/**
 * @summary Lists the slow queries from the Query Optimizer.
 *
 * @return ListSlowQueryQueriesResponse
 */
ListSlowQueryQueriesResponse Client::listSlowQueryQueries(const string &appGroupIdentity, const string &categoryIndex) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listSlowQueryQueriesWithOptions(appGroupIdentity, categoryIndex, headers, runtime);
}

/**
 * @summary Lists the sort expressions that are configured for a version of an OpenSearch application.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSortExpressionsResponse
 */
ListSortExpressionsResponse Client::listSortExpressionsWithOptions(const string &appGroupIdentity, const string &appId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSortExpressions"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/apps/" , Darabonba::Encode::Encoder::percentEncode(appId) , "/sort-expressions")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSortExpressionsResponse>();
}

/**
 * @summary Lists the sort expressions that are configured for a version of an OpenSearch application.
 *
 * @return ListSortExpressionsResponse
 */
ListSortExpressionsResponse Client::listSortExpressions(const string &appGroupIdentity, const string &appId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listSortExpressionsWithOptions(appGroupIdentity, appId, headers, runtime);
}

/**
 * @summary Lists all sort scripts for a specified application version.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSortScriptsResponse
 */
ListSortScriptsResponse Client::listSortScriptsWithOptions(const string &appGroupIdentity, const string &appVersionId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSortScripts"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/apps/" , Darabonba::Encode::Encoder::percentEncode(appVersionId) , "/sort-scripts")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSortScriptsResponse>();
}

/**
 * @summary Lists all sort scripts for a specified application version.
 *
 * @return ListSortScriptsResponse
 */
ListSortScriptsResponse Client::listSortScripts(const string &appGroupIdentity, const string &appVersionId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listSortScriptsWithOptions(appGroupIdentity, appVersionId, headers, runtime);
}

/**
 * @summary Queries log statistics, such as application error logs, hotword rankings, and slow query logs.
 *
 * @param request ListStatisticLogsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListStatisticLogsResponse
 */
ListStatisticLogsResponse Client::listStatisticLogsWithOptions(const string &appGroupIdentity, const string &moduleName, const ListStatisticLogsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasColumns()) {
    query["columns"] = request.getColumns();
  }

  if (!!request.hasDistinct()) {
    query["distinct"] = request.getDistinct();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasQuery()) {
    query["query"] = request.getQuery();
  }

  if (!!request.hasSortBy()) {
    query["sortBy"] = request.getSortBy();
  }

  if (!!request.hasStartTime()) {
    query["startTime"] = request.getStartTime();
  }

  if (!!request.hasStopTime()) {
    query["stopTime"] = request.getStopTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListStatisticLogs"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/statistic-logs/" , Darabonba::Encode::Encoder::percentEncode(moduleName))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListStatisticLogsResponse>();
}

/**
 * @summary Queries log statistics, such as application error logs, hotword rankings, and slow query logs.
 *
 * @param request ListStatisticLogsRequest
 * @return ListStatisticLogsResponse
 */
ListStatisticLogsResponse Client::listStatisticLogs(const string &appGroupIdentity, const string &moduleName, const ListStatisticLogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listStatisticLogsWithOptions(appGroupIdentity, moduleName, request, headers, runtime);
}

/**
 * @summary Queries statistical reports, such as application, drop-down suggestion, top search hint, A/B test, and data quality reports.
 *
 * @param request ListStatisticReportRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListStatisticReportResponse
 */
ListStatisticReportResponse Client::listStatisticReportWithOptions(const string &appGroupIdentity, const string &moduleName, const ListStatisticReportRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasColumns()) {
    query["columns"] = request.getColumns();
  }

  if (!!request.hasEndTime()) {
    query["endTime"] = request.getEndTime();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasQuery()) {
    query["query"] = request.getQuery();
  }

  if (!!request.hasStartTime()) {
    query["startTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListStatisticReport"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/statistic-report/" , Darabonba::Encode::Encoder::percentEncode(moduleName))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListStatisticReportResponse>();
}

/**
 * @summary Queries statistical reports, such as application, drop-down suggestion, top search hint, A/B test, and data quality reports.
 *
 * @param request ListStatisticReportRequest
 * @return ListStatisticReportResponse
 */
ListStatisticReportResponse Client::listStatisticReport(const string &appGroupIdentity, const string &moduleName, const ListStatisticReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listStatisticReportWithOptions(appGroupIdentity, moduleName, request, headers, runtime);
}

/**
 * @summary Queries the tags of specified resources.
 *
 * @param tmpReq ListTagResourcesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResourcesWithOptions(const ListTagResourcesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListTagResourcesShrinkRequest request = ListTagResourcesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasResourceId()) {
    request.setResourceIdShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getResourceId(), "resourceId", "json"));
  }

  if (!!tmpReq.hasTag()) {
    request.setTagShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTag(), "tag", "json"));
  }

  json query = {};
  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasResourceIdShrink()) {
    query["resourceId"] = request.getResourceIdShrink();
  }

  if (!!request.hasResourceType()) {
    query["resourceType"] = request.getResourceType();
  }

  if (!!request.hasTagShrink()) {
    query["tag"] = request.getTagShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTagResources"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/resource-tags")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTagResourcesResponse>();
}

/**
 * @summary Queries the tags of specified resources.
 *
 * @param request ListTagResourcesRequest
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResources(const ListTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listTagResourcesWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the entries of a custom analyzer.
 *
 * @param request ListUserAnalyzerEntriesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUserAnalyzerEntriesResponse
 */
ListUserAnalyzerEntriesResponse Client::listUserAnalyzerEntriesWithOptions(const string &name, const ListUserAnalyzerEntriesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasWord()) {
    query["word"] = request.getWord();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListUserAnalyzerEntries"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/user-analyzers/" , Darabonba::Encode::Encoder::percentEncode(name) , "/entries")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListUserAnalyzerEntriesResponse>();
}

/**
 * @summary Queries the entries of a custom analyzer.
 *
 * @param request ListUserAnalyzerEntriesRequest
 * @return ListUserAnalyzerEntriesResponse
 */
ListUserAnalyzerEntriesResponse Client::listUserAnalyzerEntries(const string &name, const ListUserAnalyzerEntriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listUserAnalyzerEntriesWithOptions(name, request, headers, runtime);
}

/**
 * @summary Retrieves a list of custom analyzers for your account.
 *
 * @param request ListUserAnalyzersRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUserAnalyzersResponse
 */
ListUserAnalyzersResponse Client::listUserAnalyzersWithOptions(const ListUserAnalyzersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListUserAnalyzers"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/user-analyzers")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListUserAnalyzersResponse>();
}

/**
 * @summary Retrieves a list of custom analyzers for your account.
 *
 * @param request ListUserAnalyzersRequest
 * @return ListUserAnalyzersResponse
 */
ListUserAnalyzersResponse Client::listUserAnalyzers(const ListUserAnalyzersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listUserAnalyzersWithOptions(request, headers, runtime);
}

/**
 * @summary Modifies the properties of an OpenSearch application or sets its online version.
 *
 * @param request ModifyAppGroupRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAppGroupResponse
 */
ModifyAppGroupResponse Client::modifyAppGroupWithOptions(const string &appGroupIdentity, const ModifyAppGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDryRun()) {
    query["dryRun"] = request.getDryRun();
  }

  json body = {};
  if (!!request.hasCurrentVersion()) {
    body["currentVersion"] = request.getCurrentVersion();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasDomain()) {
    body["domain"] = request.getDomain();
  }

  if (!!request.hasResourceGroupId()) {
    body["resourceGroupId"] = request.getResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ModifyAppGroup"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyAppGroupResponse>();
}

/**
 * @summary Modifies the properties of an OpenSearch application or sets its online version.
 *
 * @param request ModifyAppGroupRequest
 * @return ModifyAppGroupResponse
 */
ModifyAppGroupResponse Client::modifyAppGroup(const string &appGroupIdentity, const ModifyAppGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modifyAppGroupWithOptions(appGroupIdentity, request, headers, runtime);
}

/**
 * @summary Modifies the quota of an OpenSearch application.
 *
 * @param request ModifyAppGroupQuotaRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAppGroupQuotaResponse
 */
ModifyAppGroupQuotaResponse Client::modifyAppGroupQuotaWithOptions(const string &appGroupIdentity, const ModifyAppGroupQuotaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["dryRun"] = request.getDryRun();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "ModifyAppGroupQuota"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/quota")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyAppGroupQuotaResponse>();
}

/**
 * @summary Modifies the quota of an OpenSearch application.
 *
 * @param request ModifyAppGroupQuotaRequest
 * @return ModifyAppGroupQuotaResponse
 */
ModifyAppGroupQuotaResponse Client::modifyAppGroupQuota(const string &appGroupIdentity, const ModifyAppGroupQuotaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modifyAppGroupQuotaWithOptions(appGroupIdentity, request, headers, runtime);
}

/**
 * @summary 更新弹性计划
 *
 * @param request ModifyElasticPlanRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyElasticPlanResponse
 */
ModifyElasticPlanResponse Client::modifyElasticPlanWithOptions(const string &appGroupIdentity, const string &planId, const ModifyElasticPlanRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDryRun()) {
    query["dryRun"] = request.getDryRun();
  }

  json body = {};
  if (!!request.hasCustomDates()) {
    body["customDates"] = request.getCustomDates();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasElasticLcu()) {
    body["elasticLcu"] = request.getElasticLcu();
  }

  if (!!request.hasEnabled()) {
    body["enabled"] = request.getEnabled();
  }

  if (!!request.hasEndHour()) {
    body["endHour"] = request.getEndHour();
  }

  if (!!request.hasScheduleType()) {
    body["scheduleType"] = request.getScheduleType();
  }

  if (!!request.hasStartHour()) {
    body["startHour"] = request.getStartHour();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ModifyElasticPlan"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/elastic-plans/" , Darabonba::Encode::Encoder::percentEncode(planId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyElasticPlanResponse>();
}

/**
 * @summary 更新弹性计划
 *
 * @param request ModifyElasticPlanRequest
 * @return ModifyElasticPlanResponse
 */
ModifyElasticPlanResponse Client::modifyElasticPlan(const string &appGroupIdentity, const string &planId, const ModifyElasticPlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modifyElasticPlanWithOptions(appGroupIdentity, planId, request, headers, runtime);
}

/**
 * @summary Modifies the rough sort expression for an OpenSearch application version. If you set the dryRun parameter to true, this operation validates the modified rough sort expression. The default value of this parameter is false.
 *
 * @param request ModifyFirstRankRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyFirstRankResponse
 */
ModifyFirstRankResponse Client::modifyFirstRankWithOptions(const string &appGroupIdentity, const string &appId, const string &name, const ModifyFirstRankRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDryRun()) {
    query["dryRun"] = request.getDryRun();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "ModifyFirstRank"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/apps/" , Darabonba::Encode::Encoder::percentEncode(appId) , "/first-ranks/" , Darabonba::Encode::Encoder::percentEncode(name))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyFirstRankResponse>();
}

/**
 * @summary Modifies the rough sort expression for an OpenSearch application version. If you set the dryRun parameter to true, this operation validates the modified rough sort expression. The default value of this parameter is false.
 *
 * @param request ModifyFirstRankRequest
 * @return ModifyFirstRankResponse
 */
ModifyFirstRankResponse Client::modifyFirstRank(const string &appGroupIdentity, const string &appId, const string &name, const ModifyFirstRankRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modifyFirstRankWithOptions(appGroupIdentity, appId, name, request, headers, runtime);
}

/**
 * @summary Modifies a query analysis rule for a specific application version. If you set the dryRun parameter to true, this operation checks the specified query analysis rule. If you do not specify the dryRun parameter, the default value is false.
 *
 * @param request ModifyQueryProcessorRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyQueryProcessorResponse
 */
ModifyQueryProcessorResponse Client::modifyQueryProcessorWithOptions(const string &appGroupIdentity, const string &appId, const string &name, const ModifyQueryProcessorRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDryRun()) {
    query["dryRun"] = request.getDryRun();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.getBody()}
  }));
  Params params = Params(json({
    {"action" , "ModifyQueryProcessor"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/apps/" , Darabonba::Encode::Encoder::percentEncode(appId) , "/query-processors/" , Darabonba::Encode::Encoder::percentEncode(name))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyQueryProcessorResponse>();
}

/**
 * @summary Modifies a query analysis rule for a specific application version. If you set the dryRun parameter to true, this operation checks the specified query analysis rule. If you do not specify the dryRun parameter, the default value is false.
 *
 * @param request ModifyQueryProcessorRequest
 * @return ModifyQueryProcessorResponse
 */
ModifyQueryProcessorResponse Client::modifyQueryProcessor(const string &appGroupIdentity, const string &appId, const string &name, const ModifyQueryProcessorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modifyQueryProcessorWithOptions(appGroupIdentity, appId, name, request, headers, runtime);
}

/**
 * @summary Modifies a scheduled task.
 *
 * @param request ModifyScheduledTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyScheduledTaskResponse
 */
ModifyScheduledTaskResponse Client::modifyScheduledTaskWithOptions(const string &appGroupIdentity, const string &taskId, const ModifyScheduledTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , request.getBody()}
  }));
  Params params = Params(json({
    {"action" , "ModifyScheduledTask"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/scheduled-tasks/" , Darabonba::Encode::Encoder::percentEncode(taskId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyScheduledTaskResponse>();
}

/**
 * @summary Modifies a scheduled task.
 *
 * @param request ModifyScheduledTaskRequest
 * @return ModifyScheduledTaskResponse
 */
ModifyScheduledTaskResponse Client::modifyScheduledTask(const string &appGroupIdentity, const string &taskId, const ModifyScheduledTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modifyScheduledTaskWithOptions(appGroupIdentity, taskId, request, headers, runtime);
}

/**
 * @summary Modifies a fine sort expression for an OpenSearch application version. If you set `dryRun` to `true`, the modified fine sort expression is validated. The `dryRun` parameter is `false` by default.
 *
 * @param request ModifySecondRankRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifySecondRankResponse
 */
ModifySecondRankResponse Client::modifySecondRankWithOptions(const string &appGroupIdentity, const string &appId, const string &name, const ModifySecondRankRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDryRun()) {
    query["dryRun"] = request.getDryRun();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "ModifySecondRank"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/apps/" , Darabonba::Encode::Encoder::percentEncode(appId) , "/second-ranks/" , Darabonba::Encode::Encoder::percentEncode(name))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifySecondRankResponse>();
}

/**
 * @summary Modifies a fine sort expression for an OpenSearch application version. If you set `dryRun` to `true`, the modified fine sort expression is validated. The `dryRun` parameter is `false` by default.
 *
 * @param request ModifySecondRankRequest
 * @return ModifySecondRankResponse
 */
ModifySecondRankResponse Client::modifySecondRank(const string &appGroupIdentity, const string &appId, const string &name, const ModifySecondRankRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return modifySecondRankWithOptions(appGroupIdentity, appId, name, request, headers, runtime);
}

/**
 * @summary Applies changes to intervention dictionary entries.
 *
 * @param request PushInterventionDictionaryEntriesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return PushInterventionDictionaryEntriesResponse
 */
PushInterventionDictionaryEntriesResponse Client::pushInterventionDictionaryEntriesWithOptions(const string &name, const PushInterventionDictionaryEntriesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDryRun()) {
    query["dryRun"] = request.getDryRun();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::toArray(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "PushInterventionDictionaryEntries"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/intervention-dictionaries/" , Darabonba::Encode::Encoder::percentEncode(name) , "/entries/actions/bulk")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PushInterventionDictionaryEntriesResponse>();
}

/**
 * @summary Applies changes to intervention dictionary entries.
 *
 * @param request PushInterventionDictionaryEntriesRequest
 * @return PushInterventionDictionaryEntriesResponse
 */
PushInterventionDictionaryEntriesResponse Client::pushInterventionDictionaryEntries(const string &name, const PushInterventionDictionaryEntriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return pushInterventionDictionaryEntriesWithOptions(name, request, headers, runtime);
}

/**
 * @summary Applies changes to the entries of a custom analyzer.
 *
 * @param request PushUserAnalyzerEntriesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return PushUserAnalyzerEntriesResponse
 */
PushUserAnalyzerEntriesResponse Client::pushUserAnalyzerEntriesWithOptions(const string &name, const PushUserAnalyzerEntriesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDryRun()) {
    query["dryRun"] = request.getDryRun();
  }

  json body = {};
  if (!!request.hasEntries()) {
    body["entries"] = request.getEntries();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "PushUserAnalyzerEntries"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/user-analyzers/" , Darabonba::Encode::Encoder::percentEncode(name) , "/entries/actions/bulk")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PushUserAnalyzerEntriesResponse>();
}

/**
 * @summary Applies changes to the entries of a custom analyzer.
 *
 * @param request PushUserAnalyzerEntriesRequest
 * @return PushUserAnalyzerEntriesResponse
 */
PushUserAnalyzerEntriesResponse Client::pushUserAnalyzerEntries(const string &name, const PushUserAnalyzerEntriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return pushUserAnalyzerEntriesWithOptions(name, request, headers, runtime);
}

/**
 * @summary Releases a sort script.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReleaseSortScriptResponse
 */
ReleaseSortScriptResponse Client::releaseSortScriptWithOptions(const string &appGroupIdentity, const string &scriptName, const string &appVersionId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ReleaseSortScript"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/apps/" , Darabonba::Encode::Encoder::percentEncode(appVersionId) , "/sort-scripts/" , Darabonba::Encode::Encoder::percentEncode(scriptName) , "/actions/release")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReleaseSortScriptResponse>();
}

/**
 * @summary Releases a sort script.
 *
 * @return ReleaseSortScriptResponse
 */
ReleaseSortScriptResponse Client::releaseSortScript(const string &appGroupIdentity, const string &scriptName, const string &appVersionId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return releaseSortScriptWithOptions(appGroupIdentity, scriptName, appVersionId, headers, runtime);
}

/**
 * @summary Deletes a version of an OpenSearch application.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveAppResponse
 */
RemoveAppResponse Client::removeAppWithOptions(const string &appGroupIdentity, const string &appId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveApp"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/apps/" , Darabonba::Encode::Encoder::percentEncode(appId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveAppResponse>();
}

/**
 * @summary Deletes a version of an OpenSearch application.
 *
 * @return RemoveAppResponse
 */
RemoveAppResponse Client::removeApp(const string &appGroupIdentity, const string &appId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return removeAppWithOptions(appGroupIdentity, appId, headers, runtime);
}

/**
 * @summary Deletes an OpenSearch application.
 *
 * @description You can only delete pay-as-you-go applications. Subscription applications cannot be deleted.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveAppGroupResponse
 */
RemoveAppGroupResponse Client::removeAppGroupWithOptions(const string &appGroupIdentity, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveAppGroup"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveAppGroupResponse>();
}

/**
 * @summary Deletes an OpenSearch application.
 *
 * @description You can only delete pay-as-you-go applications. Subscription applications cannot be deleted.
 *
 * @return RemoveAppGroupResponse
 */
RemoveAppGroupResponse Client::removeAppGroup(const string &appGroupIdentity) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return removeAppGroupWithOptions(appGroupIdentity, headers, runtime);
}

/**
 * @summary Disables data collection.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveDataCollectionResponse
 */
RemoveDataCollectionResponse Client::removeDataCollectionWithOptions(const string &appGroupIdentity, const string &dataCollectionIdentity, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveDataCollection"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/data-collections/" , Darabonba::Encode::Encoder::percentEncode(dataCollectionIdentity))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveDataCollectionResponse>();
}

/**
 * @summary Disables data collection.
 *
 * @return RemoveDataCollectionResponse
 */
RemoveDataCollectionResponse Client::removeDataCollection(const string &appGroupIdentity, const string &dataCollectionIdentity) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return removeDataCollectionWithOptions(appGroupIdentity, dataCollectionIdentity, headers, runtime);
}

/**
 * @summary 获取弹性计划详情
 *
 * @param request RemoveElasticPlanRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveElasticPlanResponse
 */
RemoveElasticPlanResponse Client::removeElasticPlanWithOptions(const string &appGroupIdentity, const string &planId, const RemoveElasticPlanRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveElasticPlan"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/elastic-plans/" , Darabonba::Encode::Encoder::percentEncode(planId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveElasticPlanResponse>();
}

/**
 * @summary 获取弹性计划详情
 *
 * @param request RemoveElasticPlanRequest
 * @return RemoveElasticPlanResponse
 */
RemoveElasticPlanResponse Client::removeElasticPlan(const string &appGroupIdentity, const string &planId, const RemoveElasticPlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return removeElasticPlanWithOptions(appGroupIdentity, planId, request, headers, runtime);
}

/**
 * @summary Deletes the rough sort configuration of an OpenSearch application version.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveFirstRankResponse
 */
RemoveFirstRankResponse Client::removeFirstRankWithOptions(const string &appGroupIdentity, const string &appId, const string &name, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveFirstRank"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/apps/" , Darabonba::Encode::Encoder::percentEncode(appId) , "/first-ranks/" , Darabonba::Encode::Encoder::percentEncode(name))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveFirstRankResponse>();
}

/**
 * @summary Deletes the rough sort configuration of an OpenSearch application version.
 *
 * @return RemoveFirstRankResponse
 */
RemoveFirstRankResponse Client::removeFirstRank(const string &appGroupIdentity, const string &appId, const string &name) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return removeFirstRankWithOptions(appGroupIdentity, appId, name, headers, runtime);
}

/**
 * @summary Deletes an intervention dictionary.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveInterventionDictionaryResponse
 */
RemoveInterventionDictionaryResponse Client::removeInterventionDictionaryWithOptions(const string &name, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveInterventionDictionary"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/intervention-dictionaries/" , Darabonba::Encode::Encoder::percentEncode(name))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveInterventionDictionaryResponse>();
}

/**
 * @summary Deletes an intervention dictionary.
 *
 * @return RemoveInterventionDictionaryResponse
 */
RemoveInterventionDictionaryResponse Client::removeInterventionDictionary(const string &name) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return removeInterventionDictionaryWithOptions(name, headers, runtime);
}

/**
 * @summary Removes a query analysis rule from an OpenSearch application version.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveQueryProcessorResponse
 */
RemoveQueryProcessorResponse Client::removeQueryProcessorWithOptions(const string &appGroupIdentity, const string &appId, const string &name, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveQueryProcessor"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/apps/" , Darabonba::Encode::Encoder::percentEncode(appId) , "/query-processors/" , Darabonba::Encode::Encoder::percentEncode(name))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveQueryProcessorResponse>();
}

/**
 * @summary Removes a query analysis rule from an OpenSearch application version.
 *
 * @return RemoveQueryProcessorResponse
 */
RemoveQueryProcessorResponse Client::removeQueryProcessor(const string &appGroupIdentity, const string &appId, const string &name) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return removeQueryProcessorWithOptions(appGroupIdentity, appId, name, headers, runtime);
}

/**
 * @summary Deletes a scheduled task from an OpenSearch application.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveScheduledTaskResponse
 */
RemoveScheduledTaskResponse Client::removeScheduledTaskWithOptions(const string &appGroupIdentity, const string &taskId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveScheduledTask"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/scheduled-tasks/" , Darabonba::Encode::Encoder::percentEncode(taskId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveScheduledTaskResponse>();
}

/**
 * @summary Deletes a scheduled task from an OpenSearch application.
 *
 * @return RemoveScheduledTaskResponse
 */
RemoveScheduledTaskResponse Client::removeScheduledTask(const string &appGroupIdentity, const string &taskId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return removeScheduledTaskWithOptions(appGroupIdentity, taskId, headers, runtime);
}

/**
 * @summary Deletes a search strategy.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveSearchStrategyResponse
 */
RemoveSearchStrategyResponse Client::removeSearchStrategyWithOptions(const string &appGroupIdentity, const string &appId, const string &strategyName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveSearchStrategy"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/apps/" , Darabonba::Encode::Encoder::percentEncode(appId) , "/search-strategies/" , Darabonba::Encode::Encoder::percentEncode(strategyName))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveSearchStrategyResponse>();
}

/**
 * @summary Deletes a search strategy.
 *
 * @return RemoveSearchStrategyResponse
 */
RemoveSearchStrategyResponse Client::removeSearchStrategy(const string &appGroupIdentity, const string &appId, const string &strategyName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return removeSearchStrategyWithOptions(appGroupIdentity, appId, strategyName, headers, runtime);
}

/**
 * @summary Deletes a fine sort expression from a version of an OpenSearch application.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveSecondRankResponse
 */
RemoveSecondRankResponse Client::removeSecondRankWithOptions(const string &appGroupIdentity, const string &appId, const string &name, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveSecondRank"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/apps/" , Darabonba::Encode::Encoder::percentEncode(appId) , "/second-ranks/" , Darabonba::Encode::Encoder::percentEncode(name))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveSecondRankResponse>();
}

/**
 * @summary Deletes a fine sort expression from a version of an OpenSearch application.
 *
 * @return RemoveSecondRankResponse
 */
RemoveSecondRankResponse Client::removeSecondRank(const string &appGroupIdentity, const string &appId, const string &name) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return removeSecondRankWithOptions(appGroupIdentity, appId, name, headers, runtime);
}

/**
 * @summary Deletes a custom analyzer.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveUserAnalyzerResponse
 */
RemoveUserAnalyzerResponse Client::removeUserAnalyzerWithOptions(const string &name, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveUserAnalyzer"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/user-analyzers/" , Darabonba::Encode::Encoder::percentEncode(name))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveUserAnalyzerResponse>();
}

/**
 * @summary Deletes a custom analyzer.
 *
 * @return RemoveUserAnalyzerResponse
 */
RemoveUserAnalyzerResponse Client::removeUserAnalyzer(const string &name) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return removeUserAnalyzerWithOptions(name, headers, runtime);
}

/**
 * @summary Renews an application. This API operation is unavailable. To renew an application, use the OpenSearch console.
 *
 * @param request RenewAppGroupRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RenewAppGroupResponse
 */
RenewAppGroupResponse Client::renewAppGroupWithOptions(const string &appGroupIdentity, const RenewAppGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "RenewAppGroup"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/actions/renew")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RenewAppGroupResponse>();
}

/**
 * @summary Renews an application. This API operation is unavailable. To renew an application, use the OpenSearch console.
 *
 * @param request RenewAppGroupRequest
 * @return RenewAppGroupResponse
 */
RenewAppGroupResponse Client::renewAppGroup(const string &appGroupIdentity, const RenewAppGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return renewAppGroupWithOptions(appGroupIdentity, request, headers, runtime);
}

/**
 * @summary Converts a service-based application to an instance-based application.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReplaceAppGroupCommodityCodeResponse
 */
ReplaceAppGroupCommodityCodeResponse Client::replaceAppGroupCommodityCodeWithOptions(const string &appGroupIdentity, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ReplaceAppGroupCommodityCode"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/actions/to-instance-typed")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReplaceAppGroupCommodityCodeResponse>();
}

/**
 * @summary Converts a service-based application to an instance-based application.
 *
 * @return ReplaceAppGroupCommodityCodeResponse
 */
ReplaceAppGroupCommodityCodeResponse Client::replaceAppGroupCommodityCode(const string &appGroupIdentity) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return replaceAppGroupCommodityCodeWithOptions(appGroupIdentity, headers, runtime);
}

/**
 * @summary Uploads a sort script.
 *
 * @param request SaveSortScriptFileRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveSortScriptFileResponse
 */
SaveSortScriptFileResponse Client::saveSortScriptFileWithOptions(const string &appGroupIdentity, const string &scriptName, const string &appVersionId, const string &fileName, const SaveSortScriptFileRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasContent()) {
    body["content"] = request.getContent();
  }

  if (!!request.hasVersion()) {
    body["version"] = request.getVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SaveSortScriptFile"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/apps/" , Darabonba::Encode::Encoder::percentEncode(appVersionId) , "/sort-scripts/" , Darabonba::Encode::Encoder::percentEncode(scriptName) , "/files/src/" , Darabonba::Encode::Encoder::percentEncode(fileName))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveSortScriptFileResponse>();
}

/**
 * @summary Uploads a sort script.
 *
 * @param request SaveSortScriptFileRequest
 * @return SaveSortScriptFileResponse
 */
SaveSortScriptFileResponse Client::saveSortScriptFile(const string &appGroupIdentity, const string &scriptName, const string &appVersionId, const string &fileName, const SaveSortScriptFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return saveSortScriptFileWithOptions(appGroupIdentity, scriptName, appVersionId, fileName, request, headers, runtime);
}

/**
 * @summary Starts a slow query analysis task.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartSlowQueryAnalyzerResponse
 */
StartSlowQueryAnalyzerResponse Client::startSlowQueryAnalyzerWithOptions(const string &appGroupIdentity, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartSlowQueryAnalyzer"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/optimizers/slow-query/actions/run")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartSlowQueryAnalyzerResponse>();
}

/**
 * @summary Starts a slow query analysis task.
 *
 * @return StartSlowQueryAnalyzerResponse
 */
StartSlowQueryAnalyzerResponse Client::startSlowQueryAnalyzer(const string &appGroupIdentity) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return startSlowQueryAnalyzerWithOptions(appGroupIdentity, headers, runtime);
}

/**
 * @summary Adds tags to resources.
 *
 * @param request TagResourcesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResourcesWithOptions(const TagResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasResourceId()) {
    body["resourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    body["resourceType"] = request.getResourceType();
  }

  if (!!request.hasTag()) {
    body["tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "TagResources"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/resource-tags")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TagResourcesResponse>();
}

/**
 * @summary Adds tags to resources.
 *
 * @param request TagResourcesRequest
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResources(const TagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return tagResourcesWithOptions(request, headers, runtime);
}

/**
 * @summary Detaches a custom analyzer from an Elasticsearch instance.
 *
 * @description Use this operation to detach a custom analyzer from an Elasticsearch instance.
 *
 * @param request UnbindESUserAnalyzerRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnbindESUserAnalyzerResponse
 */
UnbindESUserAnalyzerResponse Client::unbindESUserAnalyzerWithOptions(const string &appGroupIdentity, const string &esInstanceId, const UnbindESUserAnalyzerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , request.getBody()}
  }));
  Params params = Params(json({
    {"action" , "UnbindESUserAnalyzer"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/es/" , Darabonba::Encode::Encoder::percentEncode(esInstanceId) , "/actions/unbind-analyzer")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnbindESUserAnalyzerResponse>();
}

/**
 * @summary Detaches a custom analyzer from an Elasticsearch instance.
 *
 * @description Use this operation to detach a custom analyzer from an Elasticsearch instance.
 *
 * @param request UnbindESUserAnalyzerRequest
 * @return UnbindESUserAnalyzerResponse
 */
UnbindESUserAnalyzerResponse Client::unbindESUserAnalyzer(const string &appGroupIdentity, const string &esInstanceId, const UnbindESUserAnalyzerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return unbindESUserAnalyzerWithOptions(appGroupIdentity, esInstanceId, request, headers, runtime);
}

/**
 * @summary Unbinds an Elasticsearch instance from an OpenSearch application.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnbindEsInstanceResponse
 */
UnbindEsInstanceResponse Client::unbindEsInstanceWithOptions(const string &appGroupIdentity, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UnbindEsInstance"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/actions/unbind-es-instance")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnbindEsInstanceResponse>();
}

/**
 * @summary Unbinds an Elasticsearch instance from an OpenSearch application.
 *
 * @return UnbindEsInstanceResponse
 */
UnbindEsInstanceResponse Client::unbindEsInstance(const string &appGroupIdentity) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return unbindEsInstanceWithOptions(appGroupIdentity, headers, runtime);
}

/**
 * @summary Removes tags from resources.
 *
 * @param tmpReq UntagResourcesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResourcesWithOptions(const UntagResourcesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UntagResourcesShrinkRequest request = UntagResourcesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasResourceId()) {
    request.setResourceIdShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getResourceId(), "resourceId", "json"));
  }

  if (!!tmpReq.hasTagKey()) {
    request.setTagKeyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTagKey(), "tagKey", "json"));
  }

  json query = {};
  if (!!request.hasAll()) {
    query["all"] = request.getAll();
  }

  if (!!request.hasResourceIdShrink()) {
    query["resourceId"] = request.getResourceIdShrink();
  }

  if (!!request.hasResourceType()) {
    query["resourceType"] = request.getResourceType();
  }

  if (!!request.hasTagKeyShrink()) {
    query["tagKey"] = request.getTagKeyShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UntagResources"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/resource-tags")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UntagResourcesResponse>();
}

/**
 * @summary Removes tags from resources.
 *
 * @param request UntagResourcesRequest
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResources(const UntagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return untagResourcesWithOptions(request, headers, runtime);
}

/**
 * @summary Updates the parameters of an A/B test experiment.
 *
 * @param request UpdateABTestExperimentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateABTestExperimentResponse
 */
UpdateABTestExperimentResponse Client::updateABTestExperimentWithOptions(const string &appGroupIdentity, const string &sceneId, const string &groupId, const string &experimentId, const UpdateABTestExperimentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDryRun()) {
    query["dryRun"] = request.getDryRun();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "UpdateABTestExperiment"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/scenes/" , Darabonba::Encode::Encoder::percentEncode(sceneId) , "/groups/" , Darabonba::Encode::Encoder::percentEncode(groupId) , "/experiments/" , Darabonba::Encode::Encoder::percentEncode(experimentId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateABTestExperimentResponse>();
}

/**
 * @summary Updates the parameters of an A/B test experiment.
 *
 * @param request UpdateABTestExperimentRequest
 * @return UpdateABTestExperimentResponse
 */
UpdateABTestExperimentResponse Client::updateABTestExperiment(const string &appGroupIdentity, const string &sceneId, const string &groupId, const string &experimentId, const UpdateABTestExperimentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateABTestExperimentWithOptions(appGroupIdentity, sceneId, groupId, experimentId, request, headers, runtime);
}

/**
 * @summary Updates the whitelist data.
 *
 * @param request UpdateABTestFixedFlowDividersRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateABTestFixedFlowDividersResponse
 */
UpdateABTestFixedFlowDividersResponse Client::updateABTestFixedFlowDividersWithOptions(const string &appGroupIdentity, const string &sceneId, const string &groupId, const string &experimentId, const UpdateABTestFixedFlowDividersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , request.getBody()}
  }));
  Params params = Params(json({
    {"action" , "UpdateABTestFixedFlowDividers"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/scenes/" , Darabonba::Encode::Encoder::percentEncode(sceneId) , "/groups/" , Darabonba::Encode::Encoder::percentEncode(groupId) , "/experiments/" , Darabonba::Encode::Encoder::percentEncode(experimentId) , "/fixed-flow-dividers")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateABTestFixedFlowDividersResponse>();
}

/**
 * @summary Updates the whitelist data.
 *
 * @param request UpdateABTestFixedFlowDividersRequest
 * @return UpdateABTestFixedFlowDividersResponse
 */
UpdateABTestFixedFlowDividersResponse Client::updateABTestFixedFlowDividers(const string &appGroupIdentity, const string &sceneId, const string &groupId, const string &experimentId, const UpdateABTestFixedFlowDividersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateABTestFixedFlowDividersWithOptions(appGroupIdentity, sceneId, groupId, experimentId, request, headers, runtime);
}

/**
 * @summary Modifies a test group.
 *
 * @param request UpdateABTestGroupRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateABTestGroupResponse
 */
UpdateABTestGroupResponse Client::updateABTestGroupWithOptions(const string &appGroupIdentity, const string &sceneId, const string &groupId, const UpdateABTestGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDryRun()) {
    query["dryRun"] = request.getDryRun();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "UpdateABTestGroup"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/scenes/" , Darabonba::Encode::Encoder::percentEncode(sceneId) , "/groups/" , Darabonba::Encode::Encoder::percentEncode(groupId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateABTestGroupResponse>();
}

/**
 * @summary Modifies a test group.
 *
 * @param request UpdateABTestGroupRequest
 * @return UpdateABTestGroupResponse
 */
UpdateABTestGroupResponse Client::updateABTestGroup(const string &appGroupIdentity, const string &sceneId, const string &groupId, const UpdateABTestGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateABTestGroupWithOptions(appGroupIdentity, sceneId, groupId, request, headers, runtime);
}

/**
 * @summary Modifies an experiment scenario.
 *
 * @param request UpdateABTestSceneRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateABTestSceneResponse
 */
UpdateABTestSceneResponse Client::updateABTestSceneWithOptions(const string &appGroupIdentity, const string &sceneId, const UpdateABTestSceneRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDryRun()) {
    query["dryRun"] = request.getDryRun();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "UpdateABTestScene"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/scenes/" , Darabonba::Encode::Encoder::percentEncode(sceneId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateABTestSceneResponse>();
}

/**
 * @summary Modifies an experiment scenario.
 *
 * @param request UpdateABTestSceneRequest
 * @return UpdateABTestSceneResponse
 */
UpdateABTestSceneResponse Client::updateABTestScene(const string &appGroupIdentity, const string &sceneId, const UpdateABTestSceneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateABTestSceneWithOptions(appGroupIdentity, sceneId, request, headers, runtime);
}

/**
 * @summary Updates the delete protection status for an application group.
 *
 * @param request UpdateAppGroupDeleteProtectionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAppGroupDeleteProtectionResponse
 */
UpdateAppGroupDeleteProtectionResponse Client::updateAppGroupDeleteProtectionWithOptions(const string &appGroupIdentity, const UpdateAppGroupDeleteProtectionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBody()) {
    body["body"] = request.getBody();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateAppGroupDeleteProtection"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/delete-protection")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAppGroupDeleteProtectionResponse>();
}

/**
 * @summary Updates the delete protection status for an application group.
 *
 * @param request UpdateAppGroupDeleteProtectionRequest
 * @return UpdateAppGroupDeleteProtectionResponse
 */
UpdateAppGroupDeleteProtectionResponse Client::updateAppGroupDeleteProtection(const string &appGroupIdentity, const UpdateAppGroupDeleteProtectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateAppGroupDeleteProtectionWithOptions(appGroupIdentity, request, headers, runtime);
}

/**
 * @summary This operation supports dry runs.
 *
 * @param request UpdateFetchFieldsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateFetchFieldsResponse
 */
UpdateFetchFieldsResponse Client::updateFetchFieldsWithOptions(const string &appGroupIdentity, const string &appId, const UpdateFetchFieldsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDryRun()) {
    query["dryRun"] = request.getDryRun();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , request.getBody()}
  }));
  Params params = Params(json({
    {"action" , "UpdateFetchFields"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/apps/" , Darabonba::Encode::Encoder::percentEncode(appId) , "/fetch-fields")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateFetchFieldsResponse>();
}

/**
 * @summary This operation supports dry runs.
 *
 * @param request UpdateFetchFieldsRequest
 * @return UpdateFetchFieldsResponse
 */
UpdateFetchFieldsResponse Client::updateFetchFields(const string &appGroupIdentity, const string &appId, const UpdateFetchFieldsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateFetchFieldsWithOptions(appGroupIdentity, appId, request, headers, runtime);
}

/**
 * @summary Sets the default algorithm instance for the specified application. The new algorithm instance automatically overwrites the previously set default instance. If no instance is specified, the default instance is canceled.
 *
 * @param request UpdateFunctionDefaultInstanceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateFunctionDefaultInstanceResponse
 */
UpdateFunctionDefaultInstanceResponse Client::updateFunctionDefaultInstanceWithOptions(const string &appGroupIdentity, const string &functionName, const UpdateFunctionDefaultInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceName()) {
    body["instanceName"] = request.getInstanceName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateFunctionDefaultInstance"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/functions/" , Darabonba::Encode::Encoder::percentEncode(functionName) , "/default-instance")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateFunctionDefaultInstanceResponse>();
}

/**
 * @summary Sets the default algorithm instance for the specified application. The new algorithm instance automatically overwrites the previously set default instance. If no instance is specified, the default instance is canceled.
 *
 * @param request UpdateFunctionDefaultInstanceRequest
 * @return UpdateFunctionDefaultInstanceResponse
 */
UpdateFunctionDefaultInstanceResponse Client::updateFunctionDefaultInstance(const string &appGroupIdentity, const string &functionName, const UpdateFunctionDefaultInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateFunctionDefaultInstanceWithOptions(appGroupIdentity, functionName, request, headers, runtime);
}

/**
 * @summary Updates the configuration of a function instance.
 *
 * @param request UpdateFunctionInstanceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateFunctionInstanceResponse
 */
UpdateFunctionInstanceResponse Client::updateFunctionInstanceWithOptions(const string &appGroupIdentity, const string &functionName, const string &instanceName, const UpdateFunctionInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCreateParameters()) {
    body["createParameters"] = request.getCreateParameters();
  }

  if (!!request.hasCron()) {
    body["cron"] = request.getCron();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasUsageParameters()) {
    body["usageParameters"] = request.getUsageParameters();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateFunctionInstance"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/functions/" , Darabonba::Encode::Encoder::percentEncode(functionName) , "/instances/" , Darabonba::Encode::Encoder::percentEncode(instanceName))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateFunctionInstanceResponse>();
}

/**
 * @summary Updates the configuration of a function instance.
 *
 * @param request UpdateFunctionInstanceRequest
 * @return UpdateFunctionInstanceResponse
 */
UpdateFunctionInstanceResponse Client::updateFunctionInstance(const string &appGroupIdentity, const string &functionName, const string &instanceName, const UpdateFunctionInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateFunctionInstanceWithOptions(appGroupIdentity, functionName, instanceName, request, headers, runtime);
}

/**
 * @summary Updates an algorithm resource.
 *
 * @description Updates the information of a resource specified by its name. You can modify only the data and description of the resource.
 *
 * @param request UpdateFunctionResourceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateFunctionResourceResponse
 */
UpdateFunctionResourceResponse Client::updateFunctionResourceWithOptions(const string &appGroupIdentity, const string &functionName, const string &resourceName, const UpdateFunctionResourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasData()) {
    body["Data"] = request.getData();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateFunctionResource"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/functions/" , Darabonba::Encode::Encoder::percentEncode(functionName) , "/resources/" , Darabonba::Encode::Encoder::percentEncode(resourceName))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateFunctionResourceResponse>();
}

/**
 * @summary Updates an algorithm resource.
 *
 * @description Updates the information of a resource specified by its name. You can modify only the data and description of the resource.
 *
 * @param request UpdateFunctionResourceRequest
 * @return UpdateFunctionResourceResponse
 */
UpdateFunctionResourceResponse Client::updateFunctionResource(const string &appGroupIdentity, const string &functionName, const string &resourceName, const UpdateFunctionResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateFunctionResourceWithOptions(appGroupIdentity, functionName, resourceName, request, headers, runtime);
}

/**
 * @summary This operation supports dry runs.
 *
 * @param request UpdateSearchStrategyRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSearchStrategyResponse
 */
UpdateSearchStrategyResponse Client::updateSearchStrategyWithOptions(const string &appGroupIdentity, const string &appId, const string &strategyName, const UpdateSearchStrategyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "UpdateSearchStrategy"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/apps/" , Darabonba::Encode::Encoder::percentEncode(appId) , "/search-strategies/" , Darabonba::Encode::Encoder::percentEncode(strategyName))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSearchStrategyResponse>();
}

/**
 * @summary This operation supports dry runs.
 *
 * @param request UpdateSearchStrategyRequest
 * @return UpdateSearchStrategyResponse
 */
UpdateSearchStrategyResponse Client::updateSearchStrategy(const string &appGroupIdentity, const string &appId, const string &strategyName, const UpdateSearchStrategyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateSearchStrategyWithOptions(appGroupIdentity, appId, strategyName, request, headers, runtime);
}

/**
 * @summary Modifies the description of a sort script.
 *
 * @description Modifies the description of a sort script.
 *
 * @param request UpdateSortScriptRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSortScriptResponse
 */
UpdateSortScriptResponse Client::updateSortScriptWithOptions(const string &appGroupIdentity, const string &appVersionId, const string &scriptName, const UpdateSortScriptRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateSortScript"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/apps/" , Darabonba::Encode::Encoder::percentEncode(appVersionId) , "/sort-scripts/" , Darabonba::Encode::Encoder::percentEncode(scriptName))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSortScriptResponse>();
}

/**
 * @summary Modifies the description of a sort script.
 *
 * @description Modifies the description of a sort script.
 *
 * @param request UpdateSortScriptRequest
 * @return UpdateSortScriptResponse
 */
UpdateSortScriptResponse Client::updateSortScript(const string &appGroupIdentity, const string &appVersionId, const string &scriptName, const UpdateSortScriptRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateSortScriptWithOptions(appGroupIdentity, appVersionId, scriptName, request, headers, runtime);
}

/**
 * @summary This operation supports dry runs.
 *
 * @param request UpdateSummariesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSummariesResponse
 */
UpdateSummariesResponse Client::updateSummariesWithOptions(const string &appGroupIdentity, const string &appId, const UpdateSummariesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDryRun()) {
    query["dryRun"] = request.getDryRun();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::toArray(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "UpdateSummaries"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/app-groups/" , Darabonba::Encode::Encoder::percentEncode(appGroupIdentity) , "/apps/" , Darabonba::Encode::Encoder::percentEncode(appId) , "/summaries")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSummariesResponse>();
}

/**
 * @summary This operation supports dry runs.
 *
 * @param request UpdateSummariesRequest
 * @return UpdateSummariesResponse
 */
UpdateSummariesResponse Client::updateSummaries(const string &appGroupIdentity, const string &appId, const UpdateSummariesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateSummariesWithOptions(appGroupIdentity, appId, request, headers, runtime);
}

/**
 * @summary Validates data sources.
 *
 * @param request ValidateDataSourcesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ValidateDataSourcesResponse
 */
ValidateDataSourcesResponse Client::validateDataSourcesWithOptions(const ValidateDataSourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "ValidateDataSources"},
    {"version" , "2017-12-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v4/openapi/assist/data-sources/validations")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ValidateDataSourcesResponse>();
}

/**
 * @summary Validates data sources.
 *
 * @param request ValidateDataSourcesRequest
 * @return ValidateDataSourcesResponse
 */
ValidateDataSourcesResponse Client::validateDataSources(const ValidateDataSourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return validateDataSourcesWithOptions(request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace OpenSearch20171225