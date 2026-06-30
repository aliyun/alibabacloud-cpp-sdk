#include <darabonba/Core.hpp>
#include <alibabacloud/Qualitycheck20190115.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::OpenApi::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::Qualitycheck20190115::Models;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{

AlibabaCloud::Qualitycheck20190115::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"cn-hangzhou" , "qualitycheck.cn-hangzhou.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("qualitycheck", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Adds a business category.
 *
 * @param request AddBusinessCategoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddBusinessCategoryResponse
 */
AddBusinessCategoryResponse Client::addBusinessCategoryWithOptions(const AddBusinessCategoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddBusinessCategory"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddBusinessCategoryResponse>();
}

/**
 * @summary Adds a business category.
 *
 * @param request AddBusinessCategoryRequest
 * @return AddBusinessCategoryResponse
 */
AddBusinessCategoryResponse Client::addBusinessCategory(const AddBusinessCategoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addBusinessCategoryWithOptions(request, runtime);
}

/**
 * @summary Add a rule category.
 *
 * @param request AddRuleCategoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddRuleCategoryResponse
 */
AddRuleCategoryResponse Client::addRuleCategoryWithOptions(const AddRuleCategoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddRuleCategory"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddRuleCategoryResponse>();
}

/**
 * @summary Add a rule category.
 *
 * @param request AddRuleCategoryRequest
 * @return AddRuleCategoryResponse
 */
AddRuleCategoryResponse Client::addRuleCategory(const AddRuleCategoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addRuleCategoryWithOptions(request, runtime);
}

/**
 * @summary This operation creates a rule on the Quality Inspection Rule Configuration page. For Apsara Stack, the URL is ip:port/api/client/UpdateRuleById.json.
 *
 * @param request AddRuleV4Request
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddRuleV4Response
 */
AddRuleV4Response Client::addRuleV4WithOptions(const AddRuleV4Request &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  json body = {};
  if (!!request.hasIsCopy()) {
    body["IsCopy"] = request.getIsCopy();
  }

  if (!!request.hasJsonStrForRule()) {
    body["JsonStrForRule"] = request.getJsonStrForRule();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AddRuleV4"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddRuleV4Response>();
}

/**
 * @summary This operation creates a rule on the Quality Inspection Rule Configuration page. For Apsara Stack, the URL is ip:port/api/client/UpdateRuleById.json.
 *
 * @param request AddRuleV4Request
 * @return AddRuleV4Response
 */
AddRuleV4Response Client::addRuleV4(const AddRuleV4Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addRuleV4WithOptions(request, runtime);
}

/**
 * @summary Performs tag categorization.
 *
 * @param request AnalyzeLabelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AnalyzeLabelResponse
 */
AnalyzeLabelResponse Client::analyzeLabelWithOptions(const AnalyzeLabelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AnalyzeLabel"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AnalyzeLabelResponse>();
}

/**
 * @summary Performs tag categorization.
 *
 * @param request AnalyzeLabelRequest
 * @return AnalyzeLabelResponse
 */
AnalyzeLabelResponse Client::analyzeLabel(const AnalyzeLabelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return analyzeLabelWithOptions(request, runtime);
}

/**
 * @summary Apply for the token required for real-time speech processing.
 *
 * @param request ApplyWsTokenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ApplyWsTokenResponse
 */
ApplyWsTokenResponse Client::applyWsTokenWithOptions(const ApplyWsTokenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ApplyWsToken"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ApplyWsTokenResponse>();
}

/**
 * @summary Apply for the token required for real-time speech processing.
 *
 * @param request ApplyWsTokenRequest
 * @return ApplyWsTokenResponse
 */
ApplyWsTokenResponse Client::applyWsToken(const ApplyWsTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return applyWsTokenWithOptions(request, runtime);
}

/**
 * @summary Manually assign quality reviewers.
 *
 * @description You can manually assign files that have completed quality inspection to reviewers. Assignments can be made one file at a time or in batches:
 * Single-file assignment: Assign a specific file to a specified reviewer.
 * Batch assignment: Assign multiple filtered files to one or more reviewers. You can specify how many files each reviewer receives, or let the system distribute the files evenly among reviewers.
 *
 * @param request AssignReviewerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AssignReviewerResponse
 */
AssignReviewerResponse Client::assignReviewerWithOptions(const AssignReviewerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AssignReviewer"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AssignReviewerResponse>();
}

/**
 * @summary Manually assign quality reviewers.
 *
 * @description You can manually assign files that have completed quality inspection to reviewers. Assignments can be made one file at a time or in batches:
 * Single-file assignment: Assign a specific file to a specified reviewer.
 * Batch assignment: Assign multiple filtered files to one or more reviewers. You can specify how many files each reviewer receives, or let the system distribute the files evenly among reviewers.
 *
 * @param request AssignReviewerRequest
 * @return AssignReviewerResponse
 */
AssignReviewerResponse Client::assignReviewer(const AssignReviewerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return assignReviewerWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI AssignReviewerBySessionGroup is deprecated
 *
 * @summary Frontend location: Quality Check Plan Management > Task Results > Session Groups > Batch Assign. Apsara Stack URL: ip:port/api/job/AssignReviewerBySessionGroup.json.
 *
 * @param request AssignReviewerBySessionGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AssignReviewerBySessionGroupResponse
 */
AssignReviewerBySessionGroupResponse Client::assignReviewerBySessionGroupWithOptions(const AssignReviewerBySessionGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["jsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AssignReviewerBySessionGroup"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AssignReviewerBySessionGroupResponse>();
}

/**
 * @deprecated OpenAPI AssignReviewerBySessionGroup is deprecated
 *
 * @summary Frontend location: Quality Check Plan Management > Task Results > Session Groups > Batch Assign. Apsara Stack URL: ip:port/api/job/AssignReviewerBySessionGroup.json.
 *
 * @param request AssignReviewerBySessionGroupRequest
 * @return AssignReviewerBySessionGroupResponse
 */
AssignReviewerBySessionGroupResponse Client::assignReviewerBySessionGroup(const AssignReviewerBySessionGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return assignReviewerBySessionGroupWithOptions(request, runtime);
}

/**
 * @summary This operation implements the Batch Review feature, which is available in the frontend under Task Management > Task Result.
 * For private cloud deployments, use the URL: ip:port/api/qcsBatchSubmitReviewInfo.json.
 * You can use this operation to perform a batch review on all filtered data.
 * Note: This operation updates a large volume of data. The changes may take some time to appear.
 *
 * @param request BatchSubmitReviewInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchSubmitReviewInfoResponse
 */
BatchSubmitReviewInfoResponse Client::batchSubmitReviewInfoWithOptions(const BatchSubmitReviewInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["jsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BatchSubmitReviewInfo"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchSubmitReviewInfoResponse>();
}

/**
 * @summary This operation implements the Batch Review feature, which is available in the frontend under Task Management > Task Result.
 * For private cloud deployments, use the URL: ip:port/api/qcsBatchSubmitReviewInfo.json.
 * You can use this operation to perform a batch review on all filtered data.
 * Note: This operation updates a large volume of data. The changes may take some time to appear.
 *
 * @param request BatchSubmitReviewInfoRequest
 * @return BatchSubmitReviewInfoResponse
 */
BatchSubmitReviewInfoResponse Client::batchSubmitReviewInfo(const BatchSubmitReviewInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchSubmitReviewInfoWithOptions(request, runtime);
}

/**
 * @summary Creates an agent.
 *
 * @param request CreateAgentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAgentResponse
 */
CreateAgentResponse Client::createAgentWithOptions(const CreateAgentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBaseMeAgentId()) {
    body["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    body["JsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateAgent"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAgentResponse>();
}

/**
 * @summary Creates an agent.
 *
 * @param request CreateAgentRequest
 * @return CreateAgentResponse
 */
CreateAgentResponse Client::createAgent(const CreateAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAgentWithOptions(request, runtime);
}

/**
 * @summary Creates an Agent batch task for conversation analysis. The application call supports HTTP calls to complete the customer response.
 *
 * @param request CreateAgentTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAgentTaskResponse
 */
CreateAgentTaskResponse Client::createAgentTaskWithOptions(const CreateAgentTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBaseMeAgentId()) {
    body["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    body["JsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateAgentTask"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAgentTaskResponse>();
}

/**
 * @summary Creates an Agent batch task for conversation analysis. The application call supports HTTP calls to complete the customer response.
 *
 * @param request CreateAgentTaskRequest
 * @return CreateAgentTaskResponse
 */
CreateAgentTaskResponse Client::createAgentTask(const CreateAgentTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAgentTaskWithOptions(request, runtime);
}

/**
 * @summary Uploads a set of speech hotwords to the server and obtains the hotword ID in the response.
 *
 * @description > Hotwords help improve recognition accuracy for specific terms, such as names, place names, or technical terms. [Learn more](https://help.aliyun.com/document_detail/213249.html).
 *
 * @param request CreateAsrVocabRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAsrVocabResponse
 */
CreateAsrVocabResponse Client::createAsrVocabWithOptions(const CreateAsrVocabRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAsrVocab"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAsrVocabResponse>();
}

/**
 * @summary Uploads a set of speech hotwords to the server and obtains the hotword ID in the response.
 *
 * @description > Hotwords help improve recognition accuracy for specific terms, such as names, place names, or technical terms. [Learn more](https://help.aliyun.com/document_detail/213249.html).
 *
 * @param request CreateAsrVocabRequest
 * @return CreateAsrVocabResponse
 */
CreateAsrVocabResponse Client::createAsrVocab(const CreateAsrVocabRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAsrVocabWithOptions(request, runtime);
}

/**
 * @summary UI path: Quality Check Plan Management > Add or Edit Quality Check Dimension > Add Quality Check Dimension. Apsara Stack API endpoint: ip:port/api/qcs/CreateCheckTypeToScheme.json.
 *
 * @param request CreateCheckTypeToSchemeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCheckTypeToSchemeResponse
 */
CreateCheckTypeToSchemeResponse Client::createCheckTypeToSchemeWithOptions(const CreateCheckTypeToSchemeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["jsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateCheckTypeToScheme"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCheckTypeToSchemeResponse>();
}

/**
 * @summary UI path: Quality Check Plan Management > Add or Edit Quality Check Dimension > Add Quality Check Dimension. Apsara Stack API endpoint: ip:port/api/qcs/CreateCheckTypeToScheme.json.
 *
 * @param request CreateCheckTypeToSchemeRequest
 * @return CreateCheckTypeToSchemeResponse
 */
CreateCheckTypeToSchemeResponse Client::createCheckTypeToScheme(const CreateCheckTypeToSchemeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCheckTypeToSchemeWithOptions(request, runtime);
}

/**
 * @summary Creates a label mining task.
 *
 * @param request CreateMiningTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMiningTaskResponse
 */
CreateMiningTaskResponse Client::createMiningTaskWithOptions(const CreateMiningTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  json body = {};
  if (!!request.hasCallbackUrl()) {
    body["CallbackUrl"] = request.getCallbackUrl();
  }

  if (!!request.hasFilePath()) {
    body["FilePath"] = request.getFilePath();
  }

  if (!!request.hasParam()) {
    body["Param"] = request.getParam();
  }

  if (!!request.hasTaskType()) {
    body["TaskType"] = request.getTaskType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateMiningTask"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateMiningTaskResponse>();
}

/**
 * @summary Creates a label mining task.
 *
 * @param request CreateMiningTaskRequest
 * @return CreateMiningTaskResponse
 */
CreateMiningTaskResponse Client::createMiningTask(const CreateMiningTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createMiningTaskWithOptions(request, runtime);
}

/**
 * @summary You can access this operation from the Quality Check Plan Management page in the console. The Apsara Stack endpoint is ip:port/api/qcs/CreateQualityCheckScheme.json.
 *
 * @param request CreateQualityCheckSchemeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateQualityCheckSchemeResponse
 */
CreateQualityCheckSchemeResponse Client::createQualityCheckSchemeWithOptions(const CreateQualityCheckSchemeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["jsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateQualityCheckScheme"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateQualityCheckSchemeResponse>();
}

/**
 * @summary You can access this operation from the Quality Check Plan Management page in the console. The Apsara Stack endpoint is ip:port/api/qcs/CreateQualityCheckScheme.json.
 *
 * @param request CreateQualityCheckSchemeRequest
 * @return CreateQualityCheckSchemeResponse
 */
CreateQualityCheckSchemeResponse Client::createQualityCheckScheme(const CreateQualityCheckSchemeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createQualityCheckSchemeWithOptions(request, runtime);
}

/**
 * @summary Corresponding frontend feature location: Plan Management > Create Quality Inspection Job. Apsara Stack URL: ip:port/api/task/CreateSchemeTaskConfig.json.
 *
 * @param request CreateSchemeTaskConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSchemeTaskConfigResponse
 */
CreateSchemeTaskConfigResponse Client::createSchemeTaskConfigWithOptions(const CreateSchemeTaskConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["jsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateSchemeTaskConfig"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSchemeTaskConfigResponse>();
}

/**
 * @summary Corresponding frontend feature location: Plan Management > Create Quality Inspection Job. Apsara Stack URL: ip:port/api/task/CreateSchemeTaskConfig.json.
 *
 * @param request CreateSchemeTaskConfigRequest
 * @return CreateSchemeTaskConfigResponse
 */
CreateSchemeTaskConfigResponse Client::createSchemeTaskConfig(const CreateSchemeTaskConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSchemeTaskConfigWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI CreateSkillGroupConfig is deprecated
 *
 * @summary Create a configuration.
 *
 * @param request CreateSkillGroupConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSkillGroupConfigResponse
 */
CreateSkillGroupConfigResponse Client::createSkillGroupConfigWithOptions(const CreateSkillGroupConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateSkillGroupConfig"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSkillGroupConfigResponse>();
}

/**
 * @deprecated OpenAPI CreateSkillGroupConfig is deprecated
 *
 * @summary Create a configuration.
 *
 * @param request CreateSkillGroupConfigRequest
 * @return CreateSkillGroupConfigResponse
 */
CreateSkillGroupConfigResponse Client::createSkillGroupConfig(const CreateSkillGroupConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSkillGroupConfigWithOptions(request, runtime);
}

/**
 * @summary Creates a label node.
 *
 * @param request CreateTagRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTagResponse
 */
CreateTagResponse Client::createTagWithOptions(const CreateTagRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateTag"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTagResponse>();
}

/**
 * @summary Creates a label node.
 *
 * @param request CreateTagRequest
 * @return CreateTagResponse
 */
CreateTagResponse Client::createTag(const CreateTagRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTagWithOptions(request, runtime);
}

/**
 * @summary Creates an automatic allocation rule for quality review tasks.
 *
 * @param request CreateTaskAssignRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTaskAssignRuleResponse
 */
CreateTaskAssignRuleResponse Client::createTaskAssignRuleWithOptions(const CreateTaskAssignRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateTaskAssignRule"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTaskAssignRuleResponse>();
}

/**
 * @summary Creates an automatic allocation rule for quality review tasks.
 *
 * @param request CreateTaskAssignRuleRequest
 * @return CreateTaskAssignRuleResponse
 */
CreateTaskAssignRuleResponse Client::createTaskAssignRule(const CreateTaskAssignRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTaskAssignRuleWithOptions(request, runtime);
}

/**
 * @summary Create a user
 *
 * @description Alibaba Cloud uses Resource Access Management (RAM) for unified account management. Before you create a user in Smart Conversation Analysis, first create the user in [RAM](https://ram.console.aliyun.com). Then, obtain the user’s UID, username, and display name. Finally, add the RAM user to Smart Conversation Analysis to grant them access to the Smart Conversation Analysis service.
 *
 * @param request CreateUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateUserResponse
 */
CreateUserResponse Client::createUserWithOptions(const CreateUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBaseMeAgentId()) {
    body["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    body["JsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateUser"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateUserResponse>();
}

/**
 * @summary Create a user
 *
 * @description Alibaba Cloud uses Resource Access Management (RAM) for unified account management. Before you create a user in Smart Conversation Analysis, first create the user in [RAM](https://ram.console.aliyun.com). Then, obtain the user’s UID, username, and display name. Finally, add the RAM user to Smart Conversation Analysis to grant them access to the Smart Conversation Analysis service.
 *
 * @param request CreateUserRequest
 * @return CreateUserResponse
 */
CreateUserResponse Client::createUser(const CreateUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createUserWithOptions(request, runtime);
}

/**
 * @summary Create a warning configuration.
 *
 * @param request CreateWarningConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateWarningConfigResponse
 */
CreateWarningConfigResponse Client::createWarningConfigWithOptions(const CreateWarningConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateWarningConfig"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateWarningConfigResponse>();
}

/**
 * @summary Create a warning configuration.
 *
 * @param request CreateWarningConfigRequest
 * @return CreateWarningConfigResponse
 */
CreateWarningConfigResponse Client::createWarningConfig(const CreateWarningConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createWarningConfigWithOptions(request, runtime);
}

/**
 * @summary  预警策略-新增
 *
 * @param request CreateWarningStrategyConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateWarningStrategyConfigResponse
 */
CreateWarningStrategyConfigResponse Client::createWarningStrategyConfigWithOptions(const CreateWarningStrategyConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateWarningStrategyConfig"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateWarningStrategyConfigResponse>();
}

/**
 * @summary  预警策略-新增
 *
 * @param request CreateWarningStrategyConfigRequest
 * @return CreateWarningStrategyConfigResponse
 */
CreateWarningStrategyConfigResponse Client::createWarningStrategyConfig(const CreateWarningStrategyConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createWarningStrategyConfigWithOptions(request, runtime);
}

/**
 * @summary Deletes a rule category.
 *
 * @param request DelRuleCategoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DelRuleCategoryResponse
 */
DelRuleCategoryResponse Client::delRuleCategoryWithOptions(const DelRuleCategoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DelRuleCategory"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DelRuleCategoryResponse>();
}

/**
 * @summary Deletes a rule category.
 *
 * @param request DelRuleCategoryRequest
 * @return DelRuleCategoryResponse
 */
DelRuleCategoryResponse Client::delRuleCategory(const DelRuleCategoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return delRuleCategoryWithOptions(request, runtime);
}

/**
 * @summary Deletes an agent.
 *
 * @param request DeleteAgentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAgentResponse
 */
DeleteAgentResponse Client::deleteAgentWithOptions(const DeleteAgentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBaseMeAgentId()) {
    body["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    body["JsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteAgent"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAgentResponse>();
}

/**
 * @summary Deletes an agent.
 *
 * @param request DeleteAgentRequest
 * @return DeleteAgentResponse
 */
DeleteAgentResponse Client::deleteAgent(const DeleteAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAgentWithOptions(request, runtime);
}

/**
 * @summary Deletes a hotword group.
 *
 * @param request DeleteAsrVocabRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAsrVocabResponse
 */
DeleteAsrVocabResponse Client::deleteAsrVocabWithOptions(const DeleteAsrVocabRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAsrVocab"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAsrVocabResponse>();
}

/**
 * @summary Deletes a hotword group.
 *
 * @param request DeleteAsrVocabRequest
 * @return DeleteAsrVocabResponse
 */
DeleteAsrVocabResponse Client::deleteAsrVocab(const DeleteAsrVocabRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAsrVocabWithOptions(request, runtime);
}

/**
 * @summary Deletes a business category.
 *
 * @param request DeleteBusinessCategoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteBusinessCategoryResponse
 */
DeleteBusinessCategoryResponse Client::deleteBusinessCategoryWithOptions(const DeleteBusinessCategoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteBusinessCategory"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteBusinessCategoryResponse>();
}

/**
 * @summary Deletes a business category.
 *
 * @param request DeleteBusinessCategoryRequest
 * @return DeleteBusinessCategoryResponse
 */
DeleteBusinessCategoryResponse Client::deleteBusinessCategory(const DeleteBusinessCategoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteBusinessCategoryWithOptions(request, runtime);
}

/**
 * @summary Deletes a dimension from a quality inspection scheme.
 *
 * @param request DeleteCheckTypeToSchemeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCheckTypeToSchemeResponse
 */
DeleteCheckTypeToSchemeResponse Client::deleteCheckTypeToSchemeWithOptions(const DeleteCheckTypeToSchemeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCheckTypeToScheme"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCheckTypeToSchemeResponse>();
}

/**
 * @summary Deletes a dimension from a quality inspection scheme.
 *
 * @param request DeleteCheckTypeToSchemeRequest
 * @return DeleteCheckTypeToSchemeResponse
 */
DeleteCheckTypeToSchemeResponse Client::deleteCheckTypeToScheme(const DeleteCheckTypeToSchemeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCheckTypeToSchemeWithOptions(request, runtime);
}

/**
 * @summary Deletes a language model.
 *
 * @param request DeleteCustomizationConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCustomizationConfigResponse
 */
DeleteCustomizationConfigResponse Client::deleteCustomizationConfigWithOptions(const DeleteCustomizationConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCustomizationConfig"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCustomizationConfigResponse>();
}

/**
 * @summary Deletes a language model.
 *
 * @param request DeleteCustomizationConfigRequest
 * @return DeleteCustomizationConfigResponse
 */
DeleteCustomizationConfigResponse Client::deleteCustomizationConfig(const DeleteCustomizationConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCustomizationConfigWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI DeleteDataSet is deprecated
 *
 * @summary Deletes a dataset.
 *
 * @param request DeleteDataSetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDataSetResponse
 */
DeleteDataSetResponse Client::deleteDataSetWithOptions(const DeleteDataSetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDataSet"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDataSetResponse>();
}

/**
 * @deprecated OpenAPI DeleteDataSet is deprecated
 *
 * @summary Deletes a dataset.
 *
 * @param request DeleteDataSetRequest
 * @return DeleteDataSetResponse
 */
DeleteDataSetResponse Client::deleteDataSet(const DeleteDataSetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDataSetWithOptions(request, runtime);
}

/**
 * @summary Delete a speech recognition quality check task.
 *
 * @param request DeletePrecisionTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePrecisionTaskResponse
 */
DeletePrecisionTaskResponse Client::deletePrecisionTaskWithOptions(const DeletePrecisionTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeletePrecisionTask"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeletePrecisionTaskResponse>();
}

/**
 * @summary Delete a speech recognition quality check task.
 *
 * @param request DeletePrecisionTaskRequest
 * @return DeletePrecisionTaskResponse
 */
DeletePrecisionTaskResponse Client::deletePrecisionTask(const DeletePrecisionTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deletePrecisionTaskWithOptions(request, runtime);
}

/**
 * @summary You can delete a quality check plan from the Quality Check Plan Management page by clicking the Delete button on the right side of the plan. The Apsara Stack API endpoint is ip:port/api/qcs/DeleteQualityCheckScheme.json.
 *
 * @param request DeleteQualityCheckSchemeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteQualityCheckSchemeResponse
 */
DeleteQualityCheckSchemeResponse Client::deleteQualityCheckSchemeWithOptions(const DeleteQualityCheckSchemeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["jsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteQualityCheckScheme"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteQualityCheckSchemeResponse>();
}

/**
 * @summary You can delete a quality check plan from the Quality Check Plan Management page by clicking the Delete button on the right side of the plan. The Apsara Stack API endpoint is ip:port/api/qcs/DeleteQualityCheckScheme.json.
 *
 * @param request DeleteQualityCheckSchemeRequest
 * @return DeleteQualityCheckSchemeResponse
 */
DeleteQualityCheckSchemeResponse Client::deleteQualityCheckScheme(const DeleteQualityCheckSchemeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteQualityCheckSchemeWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI DeleteRule is deprecated, please use Qualitycheck::2019-01-15::DeleteRuleV4 instead.
 *
 * @summary This operation deletes a quality check rule. You can access it from the Quality Check Rule Configuration page in the Apsara Stack console. The API endpoint is ip:port/api/client/DeleteRule.json.
 *
 * @param request DeleteRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRuleResponse
 */
DeleteRuleResponse Client::deleteRuleWithOptions(const DeleteRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  json body = {};
  if (!!request.hasForceDelete()) {
    body["ForceDelete"] = request.getForceDelete();
  }

  if (!!request.hasIsSchemeData()) {
    body["IsSchemeData"] = request.getIsSchemeData();
  }

  if (!!request.hasRuleId()) {
    body["RuleId"] = request.getRuleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteRule"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRuleResponse>();
}

/**
 * @deprecated OpenAPI DeleteRule is deprecated, please use Qualitycheck::2019-01-15::DeleteRuleV4 instead.
 *
 * @summary This operation deletes a quality check rule. You can access it from the Quality Check Rule Configuration page in the Apsara Stack console. The API endpoint is ip:port/api/client/DeleteRule.json.
 *
 * @param request DeleteRuleRequest
 * @return DeleteRuleResponse
 */
DeleteRuleResponse Client::deleteRule(const DeleteRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteRuleWithOptions(request, runtime);
}

/**
 * @summary Frontend feature location: Quality Inspection Rule Configuration — Delete. Apsara Stack URL: ip:port/api/client/DeleteRule.json.
 *
 * @param request DeleteRuleV4Request
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRuleV4Response
 */
DeleteRuleV4Response Client::deleteRuleV4WithOptions(const DeleteRuleV4Request &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  json body = {};
  if (!!request.hasForceDelete()) {
    body["ForceDelete"] = request.getForceDelete();
  }

  if (!!request.hasRuleId()) {
    body["RuleId"] = request.getRuleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteRuleV4"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRuleV4Response>();
}

/**
 * @summary Frontend feature location: Quality Inspection Rule Configuration — Delete. Apsara Stack URL: ip:port/api/client/DeleteRule.json.
 *
 * @param request DeleteRuleV4Request
 * @return DeleteRuleV4Response
 */
DeleteRuleV4Response Client::deleteRuleV4(const DeleteRuleV4Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteRuleV4WithOptions(request, runtime);
}

/**
 * @summary This feature is not available on the frontend. The Apsara Stack API endpoint is ip:port/api/task/DeleteSchemeTaskConfig.json.
 *
 * @param request DeleteSchemeTaskConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSchemeTaskConfigResponse
 */
DeleteSchemeTaskConfigResponse Client::deleteSchemeTaskConfigWithOptions(const DeleteSchemeTaskConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["jsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSchemeTaskConfig"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSchemeTaskConfigResponse>();
}

/**
 * @summary This feature is not available on the frontend. The Apsara Stack API endpoint is ip:port/api/task/DeleteSchemeTaskConfig.json.
 *
 * @param request DeleteSchemeTaskConfigRequest
 * @return DeleteSchemeTaskConfigResponse
 */
DeleteSchemeTaskConfigResponse Client::deleteSchemeTaskConfig(const DeleteSchemeTaskConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSchemeTaskConfigWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI DeleteSkillGroupConfig is deprecated
 *
 * @summary Delete a configuration.
 *
 * @param request DeleteSkillGroupConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSkillGroupConfigResponse
 */
DeleteSkillGroupConfigResponse Client::deleteSkillGroupConfigWithOptions(const DeleteSkillGroupConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSkillGroupConfig"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSkillGroupConfigResponse>();
}

/**
 * @deprecated OpenAPI DeleteSkillGroupConfig is deprecated
 *
 * @summary Delete a configuration.
 *
 * @param request DeleteSkillGroupConfigRequest
 * @return DeleteSkillGroupConfigResponse
 */
DeleteSkillGroupConfigResponse Client::deleteSkillGroupConfig(const DeleteSkillGroupConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSkillGroupConfigWithOptions(request, runtime);
}

/**
 * @summary Deletes a label node.
 *
 * @param request DeleteTagRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteTagResponse
 */
DeleteTagResponse Client::deleteTagWithOptions(const DeleteTagRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteTag"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteTagResponse>();
}

/**
 * @summary Deletes a label node.
 *
 * @param request DeleteTagRequest
 * @return DeleteTagResponse
 */
DeleteTagResponse Client::deleteTag(const DeleteTagRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteTagWithOptions(request, runtime);
}

/**
 * @summary Deletes an automatic allocation rule for review tasks.
 *
 * @param request DeleteTaskAssignRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteTaskAssignRuleResponse
 */
DeleteTaskAssignRuleResponse Client::deleteTaskAssignRuleWithOptions(const DeleteTaskAssignRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteTaskAssignRule"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteTaskAssignRuleResponse>();
}

/**
 * @summary Deletes an automatic allocation rule for review tasks.
 *
 * @param request DeleteTaskAssignRuleRequest
 * @return DeleteTaskAssignRuleResponse
 */
DeleteTaskAssignRuleResponse Client::deleteTaskAssignRule(const DeleteTaskAssignRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteTaskAssignRuleWithOptions(request, runtime);
}

/**
 * @summary Deletes a warning configuration.
 *
 * @param request DeleteWarningConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteWarningConfigResponse
 */
DeleteWarningConfigResponse Client::deleteWarningConfigWithOptions(const DeleteWarningConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteWarningConfig"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteWarningConfigResponse>();
}

/**
 * @summary Deletes a warning configuration.
 *
 * @param request DeleteWarningConfigRequest
 * @return DeleteWarningConfigResponse
 */
DeleteWarningConfigResponse Client::deleteWarningConfig(const DeleteWarningConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteWarningConfigWithOptions(request, runtime);
}

/**
 * @summary  预警策略-删除
 *
 * @param request DeleteWarningStrategyConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteWarningStrategyConfigResponse
 */
DeleteWarningStrategyConfigResponse Client::deleteWarningStrategyConfigWithOptions(const DeleteWarningStrategyConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteWarningStrategyConfig"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteWarningStrategyConfigResponse>();
}

/**
 * @summary  预警策略-删除
 *
 * @param request DeleteWarningStrategyConfigRequest
 * @return DeleteWarningStrategyConfigResponse
 */
DeleteWarningStrategyConfigResponse Client::deleteWarningStrategyConfig(const DeleteWarningStrategyConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteWarningStrategyConfigWithOptions(request, runtime);
}

/**
 * @summary Runs an agent.
 *
 * @param request ExecuteAgentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExecuteAgentResponse
 */
FutureGenerator<ExecuteAgentResponse> Client::executeAgentWithSSE(const ExecuteAgentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBaseMeAgentId()) {
    body["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    body["JsonStr"] = request.getJsonStr();
  }

  if (!!request.hasStream()) {
    body["Stream"] = request.getStream();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ExecuteAgent"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  FutureGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    if (!!resp.hasEvent() && !!resp.getEvent().hasData()) {
      json data = json(json::parse(resp.getEvent().getData()));
json       __retrun = json(json({
        {"statusCode" , resp.getStatusCode()},
        {"headers" , resp.getHeaders()},
        {"id" , resp.getEvent().getId()},
        {"event" , resp.getEvent().getEvent()},
        {"body" , data}
      })).get<ExecuteAgentResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary Runs an agent.
 *
 * @param request ExecuteAgentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExecuteAgentResponse
 */
ExecuteAgentResponse Client::executeAgentWithOptions(const ExecuteAgentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBaseMeAgentId()) {
    body["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    body["JsonStr"] = request.getJsonStr();
  }

  if (!!request.hasStream()) {
    body["Stream"] = request.getStream();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ExecuteAgent"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExecuteAgentResponse>();
}

/**
 * @summary Runs an agent.
 *
 * @param request ExecuteAgentRequest
 * @return ExecuteAgentResponse
 */
ExecuteAgentResponse Client::executeAgent(const ExecuteAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return executeAgentWithOptions(request, runtime);
}

/**
 * @summary Generates labels.
 *
 * @param request GenerateLabelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GenerateLabelResponse
 */
GenerateLabelResponse Client::generateLabelWithOptions(const GenerateLabelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GenerateLabel"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GenerateLabelResponse>();
}

/**
 * @summary Generates labels.
 *
 * @param request GenerateLabelRequest
 * @return GenerateLabelResponse
 */
GenerateLabelResponse Client::generateLabel(const GenerateLabelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return generateLabelWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of an agent.
 *
 * @param request GetAgentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAgentResponse
 */
GetAgentResponse Client::getAgentWithOptions(const GetAgentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBaseMeAgentId()) {
    body["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    body["JsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetAgent"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAgentResponse>();
}

/**
 * @summary Retrieves the details of an agent.
 *
 * @param request GetAgentRequest
 * @return GetAgentResponse
 */
GetAgentResponse Client::getAgent(const GetAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAgentWithOptions(request, runtime);
}

/**
 * @summary Retrieves the task result of an agent node.
 *
 * @param request GetAgentTaskResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAgentTaskResultResponse
 */
GetAgentTaskResultResponse Client::getAgentTaskResultWithOptions(const GetAgentTaskResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBaseMeAgentId()) {
    body["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    body["JsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetAgentTaskResult"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAgentTaskResultResponse>();
}

/**
 * @summary Retrieves the task result of an agent node.
 *
 * @param request GetAgentTaskResultRequest
 * @return GetAgentTaskResultResponse
 */
GetAgentTaskResultResponse Client::getAgentTaskResult(const GetAgentTaskResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAgentTaskResultWithOptions(request, runtime);
}

/**
 * @summary Retrieves details for a specified hotword group.
 *
 * @param request GetAsrVocabRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAsrVocabResponse
 */
GetAsrVocabResponse Client::getAsrVocabWithOptions(const GetAsrVocabRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAsrVocab"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAsrVocabResponse>();
}

/**
 * @summary Retrieves details for a specified hotword group.
 *
 * @param request GetAsrVocabRequest
 * @return GetAsrVocabResponse
 */
GetAsrVocabResponse Client::getAsrVocab(const GetAsrVocabRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAsrVocabWithOptions(request, runtime);
}

/**
 * @summary Obtain the list of applicable businesses.
 *
 * @param request GetBusinessCategoryListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetBusinessCategoryListResponse
 */
GetBusinessCategoryListResponse Client::getBusinessCategoryListWithOptions(const GetBusinessCategoryListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetBusinessCategoryList"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetBusinessCategoryListResponse>();
}

/**
 * @summary Obtain the list of applicable businesses.
 *
 * @param request GetBusinessCategoryListRequest
 * @return GetBusinessCategoryListResponse
 */
GetBusinessCategoryListResponse Client::getBusinessCategoryList(const GetBusinessCategoryListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getBusinessCategoryListWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of language models.
 *
 * @param request GetCustomizationConfigListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCustomizationConfigListResponse
 */
GetCustomizationConfigListResponse Client::getCustomizationConfigListWithOptions(const GetCustomizationConfigListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCustomizationConfigList"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCustomizationConfigListResponse>();
}

/**
 * @summary Retrieves a list of language models.
 *
 * @param request GetCustomizationConfigListRequest
 * @return GetCustomizationConfigListResponse
 */
GetCustomizationConfigListResponse Client::getCustomizationConfigList(const GetCustomizationConfigListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCustomizationConfigListWithOptions(request, runtime);
}

/**
 * @summary Queries the results of tag categorization analysis.
 *
 * @param request GetLabelAnalysisResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLabelAnalysisResultResponse
 */
GetLabelAnalysisResultResponse Client::getLabelAnalysisResultWithOptions(const GetLabelAnalysisResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetLabelAnalysisResult"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetLabelAnalysisResultResponse>();
}

/**
 * @summary Queries the results of tag categorization analysis.
 *
 * @param request GetLabelAnalysisResultRequest
 * @return GetLabelAnalysisResultResponse
 */
GetLabelAnalysisResultResponse Client::getLabelAnalysisResult(const GetLabelAnalysisResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getLabelAnalysisResultWithOptions(request, runtime);
}

/**
 * @summary Queries the result of a label generation task.
 *
 * @param request GetLabelGeneratedResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLabelGeneratedResultResponse
 */
GetLabelGeneratedResultResponse Client::getLabelGeneratedResultWithOptions(const GetLabelGeneratedResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetLabelGeneratedResult"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetLabelGeneratedResultResponse>();
}

/**
 * @summary Queries the result of a label generation task.
 *
 * @param request GetLabelGeneratedResultRequest
 * @return GetLabelGeneratedResultResponse
 */
GetLabelGeneratedResultResponse Client::getLabelGeneratedResult(const GetLabelGeneratedResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getLabelGeneratedResultWithOptions(request, runtime);
}

/**
 * @summary Retrieve the result of a tag mining task.
 *
 * @param request GetMiningTaskResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMiningTaskResultResponse
 */
GetMiningTaskResultResponse Client::getMiningTaskResultWithOptions(const GetMiningTaskResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMiningTaskResult"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMiningTaskResultResponse>();
}

/**
 * @summary Retrieve the result of a tag mining task.
 *
 * @param request GetMiningTaskResultRequest
 * @return GetMiningTaskResultResponse
 */
GetMiningTaskResultResponse Client::getMiningTaskResult(const GetMiningTaskResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMiningTaskResultWithOptions(request, runtime);
}

/**
 * @summary Retrieve the next file details for manual verification.
 *
 * @param request GetNextResultToVerifyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetNextResultToVerifyResponse
 */
GetNextResultToVerifyResponse Client::getNextResultToVerifyWithOptions(const GetNextResultToVerifyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetNextResultToVerify"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetNextResultToVerifyResponse>();
}

/**
 * @summary Retrieve the next file details for manual verification.
 *
 * @param request GetNextResultToVerifyRequest
 * @return GetNextResultToVerifyResponse
 */
GetNextResultToVerifyResponse Client::getNextResultToVerify(const GetNextResultToVerifyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getNextResultToVerifyWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a (speech recognition) detection task.
 *
 * @param request GetPrecisionTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPrecisionTaskResponse
 */
GetPrecisionTaskResponse Client::getPrecisionTaskWithOptions(const GetPrecisionTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPrecisionTask"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPrecisionTaskResponse>();
}

/**
 * @summary Retrieves the details of a (speech recognition) detection task.
 *
 * @param request GetPrecisionTaskRequest
 * @return GetPrecisionTaskResponse
 */
GetPrecisionTaskResponse Client::getPrecisionTask(const GetPrecisionTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPrecisionTaskWithOptions(request, runtime);
}

/**
 * @summary This operation implements the query feature in quality check plan management on the frontend. The Apsara Stack URL is ip:port/api/qcs/GetQualityCheckScheme.json.
 *
 * @param request GetQualityCheckSchemeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetQualityCheckSchemeResponse
 */
GetQualityCheckSchemeResponse Client::getQualityCheckSchemeWithOptions(const GetQualityCheckSchemeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["jsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetQualityCheckScheme"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetQualityCheckSchemeResponse>();
}

/**
 * @summary This operation implements the query feature in quality check plan management on the frontend. The Apsara Stack URL is ip:port/api/qcs/GetQualityCheckScheme.json.
 *
 * @param request GetQualityCheckSchemeRequest
 * @return GetQualityCheckSchemeResponse
 */
GetQualityCheckSchemeResponse Client::getQualityCheckScheme(const GetQualityCheckSchemeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getQualityCheckSchemeWithOptions(request, runtime);
}

/**
 * @summary Query quality inspection results. Some fields require the requiredFields parameter to be explicitly specified in the request. Set the service endpoint (Region) to Hangzhou (cn-hangzhou).
 *
 * @description You can query data uploaded using [UploadAudioData](https://help.aliyun.com/document_detail/139399.html) or [UploadData](https://help.aliyun.com/document_detail/111394.html). You can also query data from dataset-based quality inspection tasks created with [SubmitQualityCheckTask](https://help.aliyun.com/document_detail/158890.html). You can search by task ID (taskId) or by time range.
 *
 * @param request GetResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetResultResponse
 */
GetResultResponse Client::getResultWithOptions(const GetResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetResult"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetResultResponse>();
}

/**
 * @summary Query quality inspection results. Some fields require the requiredFields parameter to be explicitly specified in the request. Set the service endpoint (Region) to Hangzhou (cn-hangzhou).
 *
 * @description You can query data uploaded using [UploadAudioData](https://help.aliyun.com/document_detail/139399.html) or [UploadData](https://help.aliyun.com/document_detail/111394.html). You can also query data from dataset-based quality inspection tasks created with [SubmitQualityCheckTask](https://help.aliyun.com/document_detail/158890.html). You can search by task ID (taskId) or by time range.
 *
 * @param request GetResultRequest
 * @return GetResultResponse
 */
GetResultResponse Client::getResult(const GetResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getResultWithOptions(request, runtime);
}

/**
 * @summary Retrieves the quality inspection results for a specified file. The response includes the transcript, audio URL, and details of detected rule hits. You can use this information to review the file by listening to the audio, reading the transcript, and locating where rules were triggered.
 *
 * @param request GetResultToReviewRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetResultToReviewResponse
 */
GetResultToReviewResponse Client::getResultToReviewWithOptions(const GetResultToReviewRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetResultToReview"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetResultToReviewResponse>();
}

/**
 * @summary Retrieves the quality inspection results for a specified file. The response includes the transcript, audio URL, and details of detected rule hits. You can use this information to review the file by listening to the audio, reading the transcript, and locating where rules were triggered.
 *
 * @param request GetResultToReviewRequest
 * @return GetResultToReviewResponse
 */
GetResultToReviewResponse Client::getResultToReview(const GetResultToReviewRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getResultToReviewWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI GetRule is deprecated, please use Qualitycheck::2019-01-15::GetRuleV4 instead.
 *
 * @summary Retrieves basic information about rules.
 *
 * @description > This operation returns basic rule information such as the **id** and **name**. You can use this information with [GetRuleDetails](https://help.aliyun.com/document_detail/142310.html).
 *
 * @param request GetRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRuleResponse
 */
GetRuleResponse Client::getRuleWithOptions(const GetRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRule"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRuleResponse>();
}

/**
 * @deprecated OpenAPI GetRule is deprecated, please use Qualitycheck::2019-01-15::GetRuleV4 instead.
 *
 * @summary Retrieves basic information about rules.
 *
 * @description > This operation returns basic rule information such as the **id** and **name**. You can use this information with [GetRuleDetails](https://help.aliyun.com/document_detail/142310.html).
 *
 * @param request GetRuleRequest
 * @return GetRuleResponse
 */
GetRuleResponse Client::getRule(const GetRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRuleWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI GetRuleById is deprecated, please use Qualitycheck::2019-01-15::GetRuleV4 instead.
 *
 * @summary Retrieves the details of a specific quality inspection rule. It corresponds to the **Edit** action on the **Quality Inspection Rule Configuration** page. The URL for this operation in a private cloud is `ip:port/api/client/GetRuleById.json`.
 *
 * @param request GetRuleByIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRuleByIdResponse
 */
GetRuleByIdResponse Client::getRuleByIdWithOptions(const GetRuleByIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  json body = {};
  if (!!request.hasRuleId()) {
    body["RuleId"] = request.getRuleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetRuleById"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRuleByIdResponse>();
}

/**
 * @deprecated OpenAPI GetRuleById is deprecated, please use Qualitycheck::2019-01-15::GetRuleV4 instead.
 *
 * @summary Retrieves the details of a specific quality inspection rule. It corresponds to the **Edit** action on the **Quality Inspection Rule Configuration** page. The URL for this operation in a private cloud is `ip:port/api/client/GetRuleById.json`.
 *
 * @param request GetRuleByIdRequest
 * @return GetRuleByIdResponse
 */
GetRuleByIdResponse Client::getRuleById(const GetRuleByIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRuleByIdWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of rule types.
 *
 * @param request GetRuleCategoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRuleCategoryResponse
 */
GetRuleCategoryResponse Client::getRuleCategoryWithOptions(const GetRuleCategoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRuleCategory"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRuleCategoryResponse>();
}

/**
 * @summary Retrieves a list of rule types.
 *
 * @param request GetRuleCategoryRequest
 * @return GetRuleCategoryResponse
 */
GetRuleCategoryResponse Client::getRuleCategory(const GetRuleCategoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRuleCategoryWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI GetRuleDetail is deprecated, please use Qualitycheck::2019-01-15::GetRuleV4 instead.
 *
 * @summary Retrieves the detailed information of a rule.
 *
 * @description > This operation is used in conjunction with [Get basic rule information](https://help.aliyun.com/document_detail/142333.html). First, call the GetRule operation to obtain the rule ID. Then, use the rule ID as a parameter to call the **GetRuleDetail** operation.
 *
 * @param request GetRuleDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRuleDetailResponse
 */
GetRuleDetailResponse Client::getRuleDetailWithOptions(const GetRuleDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRuleDetail"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRuleDetailResponse>();
}

/**
 * @deprecated OpenAPI GetRuleDetail is deprecated, please use Qualitycheck::2019-01-15::GetRuleV4 instead.
 *
 * @summary Retrieves the detailed information of a rule.
 *
 * @description > This operation is used in conjunction with [Get basic rule information](https://help.aliyun.com/document_detail/142333.html). First, call the GetRule operation to obtain the rule ID. Then, use the rule ID as a parameter to call the **GetRuleDetail** operation.
 *
 * @param request GetRuleDetailRequest
 * @return GetRuleDetailResponse
 */
GetRuleDetailResponse Client::getRuleDetail(const GetRuleDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRuleDetailWithOptions(request, runtime);
}

/**
 * @summary This API is located in the frontend at Quality Check Rule Configuration > Query. The Apsara Stack URL is ip:port/api/client/GetRuleById.json.
 *
 * @param request GetRuleV4Request
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRuleV4Response
 */
GetRuleV4Response Client::getRuleV4WithOptions(const GetRuleV4Request &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasRuleId()) {
    body["RuleId"] = request.getRuleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetRuleV4"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRuleV4Response>();
}

/**
 * @summary This API is located in the frontend at Quality Check Rule Configuration > Query. The Apsara Stack URL is ip:port/api/client/GetRuleById.json.
 *
 * @param request GetRuleV4Request
 * @return GetRuleV4Response
 */
GetRuleV4Response Client::getRuleV4(const GetRuleV4Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRuleV4WithOptions(request, runtime);
}

/**
 * @summary Corresponds to the frontend feature location: Quality Inspection Rule Configuration > List. Apsara Stack URL: ip:port/api/rule/GetRulesCountList.json.
 *
 * @param request GetRulesCountListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRulesCountListResponse
 */
GetRulesCountListResponse Client::getRulesCountListWithOptions(const GetRulesCountListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  json body = {};
  if (!!request.hasBusinessName()) {
    body["BusinessName"] = request.getBusinessName();
  }

  if (!!request.hasBusinessRange()) {
    body["BusinessRange"] = request.getBusinessRange();
  }

  if (!!request.hasCategoryName()) {
    body["CategoryName"] = request.getCategoryName();
  }

  if (!!request.hasCountTotal()) {
    body["CountTotal"] = request.getCountTotal();
  }

  if (!!request.hasCreateEmpid()) {
    body["CreateEmpid"] = request.getCreateEmpid();
  }

  if (!!request.hasCreateUserId()) {
    body["CreateUserId"] = request.getCreateUserId();
  }

  if (!!request.hasCurrentPage()) {
    body["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasEndTime()) {
    body["EndTime"] = request.getEndTime();
  }

  if (!!request.hasLastUpdateEmpid()) {
    body["LastUpdateEmpid"] = request.getLastUpdateEmpid();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRequireInfos()) {
    body["RequireInfos"] = request.getRequireInfos();
  }

  if (!!request.hasRid()) {
    body["Rid"] = request.getRid();
  }

  if (!!request.hasRuleIdOrRuleName()) {
    body["RuleIdOrRuleName"] = request.getRuleIdOrRuleName();
  }

  if (!!request.hasRuleScoreSingleType()) {
    body["RuleScoreSingleType"] = request.getRuleScoreSingleType();
  }

  if (!!request.hasRuleType()) {
    body["RuleType"] = request.getRuleType();
  }

  if (!!request.hasSchemeId()) {
    body["SchemeId"] = request.getSchemeId();
  }

  if (!!request.hasSourceType()) {
    body["SourceType"] = request.getSourceType();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.getStartTime();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.getStatus();
  }

  if (!!request.hasType()) {
    body["Type"] = request.getType();
  }

  if (!!request.hasTypeName()) {
    body["TypeName"] = request.getTypeName();
  }

  if (!!request.hasUpdateEndTime()) {
    body["UpdateEndTime"] = request.getUpdateEndTime();
  }

  if (!!request.hasUpdateStartTime()) {
    body["UpdateStartTime"] = request.getUpdateStartTime();
  }

  if (!!request.hasUpdateUserId()) {
    body["UpdateUserId"] = request.getUpdateUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetRulesCountList"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRulesCountListResponse>();
}

/**
 * @summary Corresponds to the frontend feature location: Quality Inspection Rule Configuration > List. Apsara Stack URL: ip:port/api/rule/GetRulesCountList.json.
 *
 * @param request GetRulesCountListRequest
 * @return GetRulesCountListResponse
 */
GetRulesCountListResponse Client::getRulesCountList(const GetRulesCountListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRulesCountListWithOptions(request, runtime);
}

/**
 * @summary Obtain the configuration details of a quality inspection task.
 *
 * @param request GetSchemeTaskConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSchemeTaskConfigResponse
 */
GetSchemeTaskConfigResponse Client::getSchemeTaskConfigWithOptions(const GetSchemeTaskConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSchemeTaskConfig"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSchemeTaskConfigResponse>();
}

/**
 * @summary Obtain the configuration details of a quality inspection task.
 *
 * @param request GetSchemeTaskConfigRequest
 * @return GetSchemeTaskConfigResponse
 */
GetSchemeTaskConfigResponse Client::getSchemeTaskConfig(const GetSchemeTaskConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSchemeTaskConfigWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI GetScoreInfo is deprecated
 *
 * @summary Retrieves information about all scoring items.
 *
 * @param request GetScoreInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetScoreInfoResponse
 */
GetScoreInfoResponse Client::getScoreInfoWithOptions(const GetScoreInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetScoreInfo"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetScoreInfoResponse>();
}

/**
 * @deprecated OpenAPI GetScoreInfo is deprecated
 *
 * @summary Retrieves information about all scoring items.
 *
 * @param request GetScoreInfoRequest
 * @return GetScoreInfoResponse
 */
GetScoreInfoResponse Client::getScoreInfo(const GetScoreInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getScoreInfoWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI GetSkillGroupConfig is deprecated
 *
 * @summary Retrieves the configuration that is specified by its ID.
 *
 * @param request GetSkillGroupConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSkillGroupConfigResponse
 */
GetSkillGroupConfigResponse Client::getSkillGroupConfigWithOptions(const GetSkillGroupConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSkillGroupConfig"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSkillGroupConfigResponse>();
}

/**
 * @deprecated OpenAPI GetSkillGroupConfig is deprecated
 *
 * @summary Retrieves the configuration that is specified by its ID.
 *
 * @param request GetSkillGroupConfigRequest
 * @return GetSkillGroupConfigResponse
 */
GetSkillGroupConfigResponse Client::getSkillGroupConfig(const GetSkillGroupConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSkillGroupConfigWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI GetSyncResult is deprecated, please use Qualitycheck::2019-01-15::GetResult instead.
 *
 * @summary You can obtain the real-time quality inspection result of the hotline.
 *
 * @param request GetSyncResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSyncResultResponse
 */
GetSyncResultResponse Client::getSyncResultWithOptions(const GetSyncResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSyncResult"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSyncResultResponse>();
}

/**
 * @deprecated OpenAPI GetSyncResult is deprecated, please use Qualitycheck::2019-01-15::GetResult instead.
 *
 * @summary You can obtain the real-time quality inspection result of the hotline.
 *
 * @param request GetSyncResultRequest
 * @return GetSyncResultResponse
 */
GetSyncResultResponse Client::getSyncResult(const GetSyncResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSyncResultWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a label node.
 *
 * @param request GetTagRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTagResponse
 */
GetTagResponse Client::getTagWithOptions(const GetTagRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTag"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTagResponse>();
}

/**
 * @summary Queries the details of a label node.
 *
 * @param request GetTagRequest
 * @return GetTagResponse
 */
GetTagResponse Client::getTag(const GetTagRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTagWithOptions(request, runtime);
}

/**
 * @summary 预警策略-详情
 *
 * @param request GetWarningStrategyConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetWarningStrategyConfigResponse
 */
GetWarningStrategyConfigResponse Client::getWarningStrategyConfigWithOptions(const GetWarningStrategyConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetWarningStrategyConfig"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetWarningStrategyConfigResponse>();
}

/**
 * @summary 预警策略-详情
 *
 * @param request GetWarningStrategyConfigRequest
 * @return GetWarningStrategyConfigResponse
 */
GetWarningStrategyConfigResponse Client::getWarningStrategyConfig(const GetWarningStrategyConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getWarningStrategyConfigWithOptions(request, runtime);
}

/**
 * @summary Handles a complaint.
 *
 * @description Only quality checkers or administrators can call this operation.
 *
 * @param request HandleComplaintRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return HandleComplaintResponse
 */
HandleComplaintResponse Client::handleComplaintWithOptions(const HandleComplaintRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "HandleComplaint"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<HandleComplaintResponse>();
}

/**
 * @summary Handles a complaint.
 *
 * @description Only quality checkers or administrators can call this operation.
 *
 * @param request HandleComplaintRequest
 * @return HandleComplaintResponse
 */
HandleComplaintResponse Client::handleComplaint(const HandleComplaintRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return handleComplaintWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI InvalidRule is deprecated, please use Qualitycheck::2019-01-15::DeleteRuleV4 instead.
 *
 * @summary Delete rules.
 *
 * @param request InvalidRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return InvalidRuleResponse
 */
InvalidRuleResponse Client::invalidRuleWithOptions(const InvalidRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "InvalidRule"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InvalidRuleResponse>();
}

/**
 * @deprecated OpenAPI InvalidRule is deprecated, please use Qualitycheck::2019-01-15::DeleteRuleV4 instead.
 *
 * @summary Delete rules.
 *
 * @param request InvalidRuleRequest
 * @return InvalidRuleResponse
 */
InvalidRuleResponse Client::invalidRule(const InvalidRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return invalidRuleWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of vocabulary groups without their specific content.
 *
 * @param request ListAsrVocabRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAsrVocabResponse
 */
ListAsrVocabResponse Client::listAsrVocabWithOptions(const ListAsrVocabRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAsrVocab"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAsrVocabResponse>();
}

/**
 * @summary Retrieves a list of vocabulary groups without their specific content.
 *
 * @param request ListAsrVocabRequest
 * @return ListAsrVocabResponse
 */
ListAsrVocabResponse Client::listAsrVocab(const ListAsrVocabRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAsrVocabWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI ListDataSet is deprecated
 *
 * @summary This feature is located in the Dataset management section of the frontend. The Apsara Stack URL is ip:port/api/dataset/ListDataSet.json.
 *
 * @param request ListDataSetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataSetResponse
 */
ListDataSetResponse Client::listDataSetWithOptions(const ListDataSetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDataSet"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataSetResponse>();
}

/**
 * @deprecated OpenAPI ListDataSet is deprecated
 *
 * @summary This feature is located in the Dataset management section of the frontend. The Apsara Stack URL is ip:port/api/dataset/ListDataSet.json.
 *
 * @param request ListDataSetRequest
 * @return ListDataSetResponse
 */
ListDataSetResponse Client::listDataSet(const ListDataSetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataSetWithOptions(request, runtime);
}

/**
 * @summary Retrieve the list of speech recognition precision tasks. Set the service endpoint to Hangzhou (cn-hangzhou).
 *
 * @param request ListPrecisionTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPrecisionTaskResponse
 */
ListPrecisionTaskResponse Client::listPrecisionTaskWithOptions(const ListPrecisionTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPrecisionTask"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPrecisionTaskResponse>();
}

/**
 * @summary Retrieve the list of speech recognition precision tasks. Set the service endpoint to Hangzhou (cn-hangzhou).
 *
 * @param request ListPrecisionTaskRequest
 * @return ListPrecisionTaskResponse
 */
ListPrecisionTaskResponse Client::listPrecisionTask(const ListPrecisionTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPrecisionTaskWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of quality check schemes.
 *
 * @param request ListQualityCheckSchemeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListQualityCheckSchemeResponse
 */
ListQualityCheckSchemeResponse Client::listQualityCheckSchemeWithOptions(const ListQualityCheckSchemeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListQualityCheckScheme"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListQualityCheckSchemeResponse>();
}

/**
 * @summary Retrieves a list of quality check schemes.
 *
 * @param request ListQualityCheckSchemeRequest
 * @return ListQualityCheckSchemeResponse
 */
ListQualityCheckSchemeResponse Client::listQualityCheckScheme(const ListQualityCheckSchemeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listQualityCheckSchemeWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI ListRules is deprecated, please use Qualitycheck::2019-01-15::ListRulesV4 instead.
 *
 * @summary Lists rules.
 *
 * @param request ListRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRulesResponse
 */
ListRulesResponse Client::listRulesWithOptions(const ListRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRules"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRulesResponse>();
}

/**
 * @deprecated OpenAPI ListRules is deprecated, please use Qualitycheck::2019-01-15::ListRulesV4 instead.
 *
 * @summary Lists rules.
 *
 * @param request ListRulesRequest
 * @return ListRulesResponse
 */
ListRulesResponse Client::listRules(const ListRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRulesWithOptions(request, runtime);
}

/**
 * @summary Frontend location: Quality inspection rule configuration — List. Apsara Stack URL: ip:port/api/rule/GetRulesCountList.json.
 *
 * @param request ListRulesV4Request
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRulesV4Response
 */
ListRulesV4Response Client::listRulesV4WithOptions(const ListRulesV4Request &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  json body = {};
  if (!!request.hasBusinessName()) {
    body["BusinessName"] = request.getBusinessName();
  }

  if (!!request.hasBusinessRange()) {
    body["BusinessRange"] = request.getBusinessRange();
  }

  if (!!request.hasCategoryName()) {
    body["CategoryName"] = request.getCategoryName();
  }

  if (!!request.hasCountTotal()) {
    body["CountTotal"] = request.getCountTotal();
  }

  if (!!request.hasCreateEmpid()) {
    body["CreateEmpid"] = request.getCreateEmpid();
  }

  if (!!request.hasCreateUserId()) {
    body["CreateUserId"] = request.getCreateUserId();
  }

  if (!!request.hasCurrentPage()) {
    body["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasEndTime()) {
    body["EndTime"] = request.getEndTime();
  }

  if (!!request.hasLastUpdateEmpid()) {
    body["LastUpdateEmpid"] = request.getLastUpdateEmpid();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRequireInfos()) {
    body["RequireInfos"] = request.getRequireInfos();
  }

  if (!!request.hasRid()) {
    body["Rid"] = request.getRid();
  }

  if (!!request.hasRuleIdOrRuleName()) {
    body["RuleIdOrRuleName"] = request.getRuleIdOrRuleName();
  }

  if (!!request.hasRuleScoreSingleType()) {
    body["RuleScoreSingleType"] = request.getRuleScoreSingleType();
  }

  if (!!request.hasRuleType()) {
    body["RuleType"] = request.getRuleType();
  }

  if (!!request.hasSchemeId()) {
    body["SchemeId"] = request.getSchemeId();
  }

  if (!!request.hasSourceType()) {
    body["SourceType"] = request.getSourceType();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.getStartTime();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.getStatus();
  }

  if (!!request.hasType()) {
    body["Type"] = request.getType();
  }

  if (!!request.hasTypeName()) {
    body["TypeName"] = request.getTypeName();
  }

  if (!!request.hasUpdateEndTime()) {
    body["UpdateEndTime"] = request.getUpdateEndTime();
  }

  if (!!request.hasUpdateStartTime()) {
    body["UpdateStartTime"] = request.getUpdateStartTime();
  }

  if (!!request.hasUpdateUserId()) {
    body["UpdateUserId"] = request.getUpdateUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListRulesV4"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRulesV4Response>();
}

/**
 * @summary Frontend location: Quality inspection rule configuration — List. Apsara Stack URL: ip:port/api/rule/GetRulesCountList.json.
 *
 * @param request ListRulesV4Request
 * @return ListRulesV4Response
 */
ListRulesV4Response Client::listRulesV4(const ListRulesV4Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRulesV4WithOptions(request, runtime);
}

/**
 * @summary This operation is used for the Task Management feature on the frontend. The Apsara Stack URL is ip:port/api/task/ListSchemeTaskInfo.json.
 *
 * @param request ListSchemeTaskConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSchemeTaskConfigResponse
 */
ListSchemeTaskConfigResponse Client::listSchemeTaskConfigWithOptions(const ListSchemeTaskConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["jsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSchemeTaskConfig"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSchemeTaskConfigResponse>();
}

/**
 * @summary This operation is used for the Task Management feature on the frontend. The Apsara Stack URL is ip:port/api/task/ListSchemeTaskInfo.json.
 *
 * @param request ListSchemeTaskConfigRequest
 * @return ListSchemeTaskConfigResponse
 */
ListSchemeTaskConfigResponse Client::listSchemeTaskConfig(const ListSchemeTaskConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSchemeTaskConfigWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI ListSessionGroup is deprecated
 *
 * @summary This API corresponds to the frontend location: Task Management > View Results > Task Result > Session Group Results tab. The Apsara Stack URL is: ip:port/api/session/group/ListSessionGroup.json. It aggregates multi-turn sessions by their session group ID for unified management. You must pass the `sessionGroupId` field. For more information, see the UploadData and UploadAudioData API documentation.
 *
 * @param request ListSessionGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSessionGroupResponse
 */
ListSessionGroupResponse Client::listSessionGroupWithOptions(const ListSessionGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["jsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSessionGroup"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSessionGroupResponse>();
}

/**
 * @deprecated OpenAPI ListSessionGroup is deprecated
 *
 * @summary This API corresponds to the frontend location: Task Management > View Results > Task Result > Session Group Results tab. The Apsara Stack URL is: ip:port/api/session/group/ListSessionGroup.json. It aggregates multi-turn sessions by their session group ID for unified management. You must pass the `sessionGroupId` field. For more information, see the UploadData and UploadAudioData API documentation.
 *
 * @param request ListSessionGroupRequest
 * @return ListSessionGroupResponse
 */
ListSessionGroupResponse Client::listSessionGroup(const ListSessionGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSessionGroupWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI ListSkillGroupConfig is deprecated
 *
 * @summary You can call ListSkillGroupConfig to obtain the configuration list.
 *
 * @param request ListSkillGroupConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSkillGroupConfigResponse
 */
ListSkillGroupConfigResponse Client::listSkillGroupConfigWithOptions(const ListSkillGroupConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSkillGroupConfig"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSkillGroupConfigResponse>();
}

/**
 * @deprecated OpenAPI ListSkillGroupConfig is deprecated
 *
 * @summary You can call ListSkillGroupConfig to obtain the configuration list.
 *
 * @param request ListSkillGroupConfigRequest
 * @return ListSkillGroupConfigResponse
 */
ListSkillGroupConfigResponse Client::listSkillGroupConfig(const ListSkillGroupConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSkillGroupConfigWithOptions(request, runtime);
}

/**
 * @summary Queries the list of label nodes.
 *
 * @param request ListTagRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagResponse
 */
ListTagResponse Client::listTagWithOptions(const ListTagRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTag"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTagResponse>();
}

/**
 * @summary Queries the list of label nodes.
 *
 * @param request ListTagRequest
 * @return ListTagResponse
 */
ListTagResponse Client::listTag(const ListTagRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagWithOptions(request, runtime);
}

/**
 * @summary Lists automatic allocation rules for review tasks.
 *
 * @param request ListTaskAssignRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTaskAssignRulesResponse
 */
ListTaskAssignRulesResponse Client::listTaskAssignRulesWithOptions(const ListTaskAssignRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTaskAssignRules"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTaskAssignRulesResponse>();
}

/**
 * @summary Lists automatic allocation rules for review tasks.
 *
 * @param request ListTaskAssignRulesRequest
 * @return ListTaskAssignRulesResponse
 */
ListTaskAssignRulesResponse Client::listTaskAssignRules(const ListTaskAssignRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTaskAssignRulesWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of users. Set the service endpoint to China (Hangzhou) (cn-hangzhou).
 *
 * @param request ListUsersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUsersResponse
 */
ListUsersResponse Client::listUsersWithOptions(const ListUsersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListUsers"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListUsersResponse>();
}

/**
 * @summary Retrieves a list of users. Set the service endpoint to China (Hangzhou) (cn-hangzhou).
 *
 * @param request ListUsersRequest
 * @return ListUsersResponse
 */
ListUsersResponse Client::listUsers(const ListUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUsersWithOptions(request, runtime);
}

/**
 * @summary Lists warning configurations.
 *
 * @param request ListWarningConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListWarningConfigResponse
 */
ListWarningConfigResponse Client::listWarningConfigWithOptions(const ListWarningConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListWarningConfig"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListWarningConfigResponse>();
}

/**
 * @summary Lists warning configurations.
 *
 * @param request ListWarningConfigRequest
 * @return ListWarningConfigResponse
 */
ListWarningConfigResponse Client::listWarningConfig(const ListWarningConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listWarningConfigWithOptions(request, runtime);
}

/**
 * @summary  预警策略-列表
 *
 * @param request ListWarningStrategyConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListWarningStrategyConfigResponse
 */
ListWarningStrategyConfigResponse Client::listWarningStrategyConfigWithOptions(const ListWarningStrategyConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListWarningStrategyConfig"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListWarningStrategyConfigResponse>();
}

/**
 * @summary  预警策略-列表
 *
 * @param request ListWarningStrategyConfigRequest
 * @return ListWarningStrategyConfigResponse
 */
ListWarningStrategyConfigResponse Client::listWarningStrategyConfig(const ListWarningStrategyConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listWarningStrategyConfigWithOptions(request, runtime);
}

/**
 * @summary Frontend location: Task Management > Task Results > Batch Revoke. Apsara Stack URL: ip:port/api/job/RevertAssignedSession.json.
 *
 * @param request RevertAssignedSessionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RevertAssignedSessionResponse
 */
RevertAssignedSessionResponse Client::revertAssignedSessionWithOptions(const RevertAssignedSessionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["jsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RevertAssignedSession"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RevertAssignedSessionResponse>();
}

/**
 * @summary Frontend location: Task Management > Task Results > Batch Revoke. Apsara Stack URL: ip:port/api/job/RevertAssignedSession.json.
 *
 * @param request RevertAssignedSessionRequest
 * @return RevertAssignedSessionResponse
 */
RevertAssignedSessionResponse Client::revertAssignedSession(const RevertAssignedSessionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return revertAssignedSessionWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI RevertAssignedSessionGroup is deprecated
 *
 * @summary You can use this feature in the frontend console under Plan Management > Task Result > Session Group > Batch Revoke. The Apsara Stack URL for this operation is `ip:port/api/job/RevertAssignedSessionGroup.json`.
 *
 * @param request RevertAssignedSessionGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RevertAssignedSessionGroupResponse
 */
RevertAssignedSessionGroupResponse Client::revertAssignedSessionGroupWithOptions(const RevertAssignedSessionGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["jsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RevertAssignedSessionGroup"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RevertAssignedSessionGroupResponse>();
}

/**
 * @deprecated OpenAPI RevertAssignedSessionGroup is deprecated
 *
 * @summary You can use this feature in the frontend console under Plan Management > Task Result > Session Group > Batch Revoke. The Apsara Stack URL for this operation is `ip:port/api/job/RevertAssignedSessionGroup.json`.
 *
 * @param request RevertAssignedSessionGroupRequest
 * @return RevertAssignedSessionGroupResponse
 */
RevertAssignedSessionGroupResponse Client::revertAssignedSessionGroup(const RevertAssignedSessionGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return revertAssignedSessionGroupWithOptions(request, runtime);
}

/**
 * @summary This operation calls a large model using the message protocol to generate a response. You can make calls using standard HTTP for a complete response or use Server-Sent Events (SSE) for a streaming response.
 *
 * @param tmpReq RunCompletionMessageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunCompletionMessageResponse
 */
FutureGenerator<RunCompletionMessageResponse> Client::runCompletionMessageWithSSE(const RunCompletionMessageRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RunCompletionMessageShrinkRequest request = RunCompletionMessageShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasMessages()) {
    request.setMessagesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getMessages(), "Messages", "json"));
  }

  json body = {};
  if (!!request.hasMessagesShrink()) {
    body["Messages"] = request.getMessagesShrink();
  }

  if (!!request.hasModelCode()) {
    body["ModelCode"] = request.getModelCode();
  }

  if (!!request.hasStream()) {
    body["Stream"] = request.getStream();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RunCompletionMessage"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  FutureGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    if (!!resp.hasEvent() && !!resp.getEvent().hasData()) {
      json data = json(json::parse(resp.getEvent().getData()));
json       __retrun = json(json({
        {"statusCode" , resp.getStatusCode()},
        {"headers" , resp.getHeaders()},
        {"id" , resp.getEvent().getId()},
        {"event" , resp.getEvent().getEvent()},
        {"body" , data}
      })).get<RunCompletionMessageResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary This operation calls a large model using the message protocol to generate a response. You can make calls using standard HTTP for a complete response or use Server-Sent Events (SSE) for a streaming response.
 *
 * @param tmpReq RunCompletionMessageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunCompletionMessageResponse
 */
RunCompletionMessageResponse Client::runCompletionMessageWithOptions(const RunCompletionMessageRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RunCompletionMessageShrinkRequest request = RunCompletionMessageShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasMessages()) {
    request.setMessagesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getMessages(), "Messages", "json"));
  }

  json body = {};
  if (!!request.hasMessagesShrink()) {
    body["Messages"] = request.getMessagesShrink();
  }

  if (!!request.hasModelCode()) {
    body["ModelCode"] = request.getModelCode();
  }

  if (!!request.hasStream()) {
    body["Stream"] = request.getStream();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RunCompletionMessage"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunCompletionMessageResponse>();
}

/**
 * @summary This operation calls a large model using the message protocol to generate a response. You can make calls using standard HTTP for a complete response or use Server-Sent Events (SSE) for a streaming response.
 *
 * @param request RunCompletionMessageRequest
 * @return RunCompletionMessageResponse
 */
RunCompletionMessageResponse Client::runCompletionMessage(const RunCompletionMessageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runCompletionMessageWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI SaveConfigDataSet is deprecated
 *
 * @summary Saves the speaker role configuration for a dataset.
 *
 * @param request SaveConfigDataSetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveConfigDataSetResponse
 */
SaveConfigDataSetResponse Client::saveConfigDataSetWithOptions(const SaveConfigDataSetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SaveConfigDataSet"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveConfigDataSetResponse>();
}

/**
 * @deprecated OpenAPI SaveConfigDataSet is deprecated
 *
 * @summary Saves the speaker role configuration for a dataset.
 *
 * @param request SaveConfigDataSetRequest
 * @return SaveConfigDataSetResponse
 */
SaveConfigDataSetResponse Client::saveConfigDataSet(const SaveConfigDataSetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveConfigDataSetWithOptions(request, runtime);
}

/**
 * @summary Submits a complaint.
 *
 * @param request SubmitComplaintRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitComplaintResponse
 */
SubmitComplaintResponse Client::submitComplaintWithOptions(const SubmitComplaintRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitComplaint"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitComplaintResponse>();
}

/**
 * @summary Submits a complaint.
 *
 * @param request SubmitComplaintRequest
 * @return SubmitComplaintResponse
 */
SubmitComplaintResponse Client::submitComplaint(const SubmitComplaintRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitComplaintWithOptions(request, runtime);
}

/**
 * @summary Creates a speech recognition evaluation task. The service endpoint is China East 1 (Hangzhou) (cn-hangzhou).
 *
 * @param request SubmitPrecisionTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitPrecisionTaskResponse
 */
SubmitPrecisionTaskResponse Client::submitPrecisionTaskWithOptions(const SubmitPrecisionTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitPrecisionTask"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitPrecisionTaskResponse>();
}

/**
 * @summary Creates a speech recognition evaluation task. The service endpoint is China East 1 (Hangzhou) (cn-hangzhou).
 *
 * @param request SubmitPrecisionTaskRequest
 * @return SubmitPrecisionTaskResponse
 */
SubmitPrecisionTaskResponse Client::submitPrecisionTask(const SubmitPrecisionTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitPrecisionTaskWithOptions(request, runtime);
}

/**
 * @summary Create a new dataset quality check task.
 *
 * @param request SubmitQualityCheckTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitQualityCheckTaskResponse
 */
SubmitQualityCheckTaskResponse Client::submitQualityCheckTaskWithOptions(const SubmitQualityCheckTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitQualityCheckTask"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitQualityCheckTaskResponse>();
}

/**
 * @summary Create a new dataset quality check task.
 *
 * @param request SubmitQualityCheckTaskRequest
 * @return SubmitQualityCheckTaskResponse
 */
SubmitQualityCheckTaskResponse Client::submitQualityCheckTask(const SubmitQualityCheckTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitQualityCheckTaskWithOptions(request, runtime);
}

/**
 * @summary Save review results. This is only supported by the legacy Smart Conversation Analysis.
 *
 * @description You can manually review files after quality inspection. After completing the review, call this API to save the review results. This involves manually reviewing rules identified by the system as hits to determine if they are true hits or false positives. Refer to the file review feature on the console page. For more information, see [File Review](https://help.aliyun.com/document_detail/139653.html#h2-u6587u4EF6u590Du68385).
 *
 * @param request SubmitReviewInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitReviewInfoResponse
 */
SubmitReviewInfoResponse Client::submitReviewInfoWithOptions(const SubmitReviewInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitReviewInfo"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitReviewInfoResponse>();
}

/**
 * @summary Save review results. This is only supported by the legacy Smart Conversation Analysis.
 *
 * @description You can manually review files after quality inspection. After completing the review, call this API to save the review results. This involves manually reviewing rules identified by the system as hits to determine if they are true hits or false positives. Refer to the file review feature on the console page. For more information, see [File Review](https://help.aliyun.com/document_detail/139653.html#h2-u6587u4EF6u590Du68385).
 *
 * @param request SubmitReviewInfoRequest
 * @return SubmitReviewInfoResponse
 */
SubmitReviewInfoResponse Client::submitReviewInfo(const SubmitReviewInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitReviewInfoWithOptions(request, runtime);
}

/**
 * @summary Review quality inspection results
 *
 * @param request SubmitReviewInfoV4Request
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitReviewInfoV4Response
 */
SubmitReviewInfoV4Response Client::submitReviewInfoV4WithOptions(const SubmitReviewInfoV4Request &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBaseMeAgentId()) {
    body["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    body["JsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "SubmitReviewInfoV4"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitReviewInfoV4Response>();
}

/**
 * @summary Review quality inspection results
 *
 * @param request SubmitReviewInfoV4Request
 * @return SubmitReviewInfoV4Response
 */
SubmitReviewInfoV4Response Client::submitReviewInfoV4(const SubmitReviewInfoV4Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitReviewInfoV4WithOptions(request, runtime);
}

/**
 * @summary Perform real-time quality inspection for hotlines.
 *
 * @description Real-time hotline quality inspection transcribes spoken dialogue into text during a call. It sends the text to the Smart Conversation Analysis system for real-time quality inspection to detect potential issues or risks. You can display the dialogue text and inspection results in real time on the customer service representative\\"s workbench (a third-party system). This differs from offline quality inspection, which uses UploadAudioData for inspection or dataset inspection. For details, see the developer guide. Offline quality inspection occurs after the call ends and the recording file is generated.
 * **Usage Flow**
 * You can implement real-time transcription of audio streams to text during calls, or use Alibaba Cloud Call Center (CC) directly. CC integrates deeply with Smart Conversation Analysis, enabling real-time quality inspection during calls without API integration.
 * If you implement audio-to-text conversion yourself, invoke the SyncQualityCheck API for real-time quality inspection after a speaker finishes a sentence and generates dialogue text. This returns the inspection result for that sentence synchronously.
 * You should include skill group information when uploading data. Then, you can use the Call Center Quality Inspection - Configuration Management feature to configure different quality inspection rules for calls from different skill groups.
 * After the call ends, you can store the recording file on a storage server accessible over the public network. You can invoke the recording information maintenance API: UpdateSyncQualityCheckData. You can submit the recording name, recording file URL, and other details to the Smart Conversation Analysis service. This lets quality inspectors play back the recording during review.
 * After the call ends, you can view the quality inspection results in Call Center Quality Inspection - Result Display - Real-time Quality Inspection Results. You can also invoke the real-time quality inspection result query API: GetSyncResult to retrieve the results. You can use Score Dashboard - Real-time Dashboard to view data charts for customer service representatives, skill groups, and scoring items.
 * **Full-Text Quality Inspection**
 * Quality inspection rules include dozens of operators. Some operators require dialogue context (multi-turn conversations between customer service representatives and customers) for analysis. However, real-time quality inspection occurs during a call and typically uses text from only one sentence spoken by a single speaker. Some operators are not suitable for real-time quality inspection. Therefore, quality inspection rules are divided into real-time quality inspection rules and full-text quality inspection rules:
 * **Real-time quality inspection rules**: Rules used for real-time quality inspection. They support a limited number of operator types. They do not support specifying the detection range for operators.
 * **Full-text quality inspection rules**: Rules used for offline quality inspection. They support all operator types. They support custom detection ranges for operators.
 * For calls that underwent real-time quality inspection, you can apply full-text quality inspection rules to the complete dialogue text after the call ends. To enable full-text quality inspection after real-time inspection, see the full-text quality inspection description in Call Center Quality Inspection - Configuration Management.
 *
 * @param request SyncQualityCheckRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SyncQualityCheckResponse
 */
SyncQualityCheckResponse Client::syncQualityCheckWithOptions(const SyncQualityCheckRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SyncQualityCheck"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SyncQualityCheckResponse>();
}

/**
 * @summary Perform real-time quality inspection for hotlines.
 *
 * @description Real-time hotline quality inspection transcribes spoken dialogue into text during a call. It sends the text to the Smart Conversation Analysis system for real-time quality inspection to detect potential issues or risks. You can display the dialogue text and inspection results in real time on the customer service representative\\"s workbench (a third-party system). This differs from offline quality inspection, which uses UploadAudioData for inspection or dataset inspection. For details, see the developer guide. Offline quality inspection occurs after the call ends and the recording file is generated.
 * **Usage Flow**
 * You can implement real-time transcription of audio streams to text during calls, or use Alibaba Cloud Call Center (CC) directly. CC integrates deeply with Smart Conversation Analysis, enabling real-time quality inspection during calls without API integration.
 * If you implement audio-to-text conversion yourself, invoke the SyncQualityCheck API for real-time quality inspection after a speaker finishes a sentence and generates dialogue text. This returns the inspection result for that sentence synchronously.
 * You should include skill group information when uploading data. Then, you can use the Call Center Quality Inspection - Configuration Management feature to configure different quality inspection rules for calls from different skill groups.
 * After the call ends, you can store the recording file on a storage server accessible over the public network. You can invoke the recording information maintenance API: UpdateSyncQualityCheckData. You can submit the recording name, recording file URL, and other details to the Smart Conversation Analysis service. This lets quality inspectors play back the recording during review.
 * After the call ends, you can view the quality inspection results in Call Center Quality Inspection - Result Display - Real-time Quality Inspection Results. You can also invoke the real-time quality inspection result query API: GetSyncResult to retrieve the results. You can use Score Dashboard - Real-time Dashboard to view data charts for customer service representatives, skill groups, and scoring items.
 * **Full-Text Quality Inspection**
 * Quality inspection rules include dozens of operators. Some operators require dialogue context (multi-turn conversations between customer service representatives and customers) for analysis. However, real-time quality inspection occurs during a call and typically uses text from only one sentence spoken by a single speaker. Some operators are not suitable for real-time quality inspection. Therefore, quality inspection rules are divided into real-time quality inspection rules and full-text quality inspection rules:
 * **Real-time quality inspection rules**: Rules used for real-time quality inspection. They support a limited number of operator types. They do not support specifying the detection range for operators.
 * **Full-text quality inspection rules**: Rules used for offline quality inspection. They support all operator types. They support custom detection ranges for operators.
 * For calls that underwent real-time quality inspection, you can apply full-text quality inspection rules to the complete dialogue text after the call ends. To enable full-text quality inspection after real-time inspection, see the full-text quality inspection description in Call Center Quality Inspection - Configuration Management.
 *
 * @param request SyncQualityCheckRequest
 * @return SyncQualityCheckResponse
 */
SyncQualityCheckResponse Client::syncQualityCheck(const SyncQualityCheckRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return syncQualityCheckWithOptions(request, runtime);
}

/**
 * @summary Frontend location: Quality Check Rule Configuration > Test. Apsara Stack URL: http://<ip>:<port>/api/client/TestRule.json.
 *
 * @param request TestRuleV4Request
 * @param runtime runtime options for this request RuntimeOptions
 * @return TestRuleV4Response
 */
TestRuleV4Response Client::testRuleV4WithOptions(const TestRuleV4Request &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasIsSchemeData()) {
    body["IsSchemeData"] = request.getIsSchemeData();
  }

  if (!!request.hasTestJson()) {
    body["TestJson"] = request.getTestJson();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "TestRuleV4"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TestRuleV4Response>();
}

/**
 * @summary Frontend location: Quality Check Rule Configuration > Test. Apsara Stack URL: http://<ip>:<port>/api/client/TestRule.json.
 *
 * @param request TestRuleV4Request
 * @return TestRuleV4Response
 */
TestRuleV4Response Client::testRuleV4(const TestRuleV4Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return testRuleV4WithOptions(request, runtime);
}

/**
 * @summary Modifies an agent.
 *
 * @param request UpdateAgentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAgentResponse
 */
UpdateAgentResponse Client::updateAgentWithOptions(const UpdateAgentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBaseMeAgentId()) {
    body["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    body["JsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateAgent"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAgentResponse>();
}

/**
 * @summary Modifies an agent.
 *
 * @param request UpdateAgentRequest
 * @return UpdateAgentResponse
 */
UpdateAgentResponse Client::updateAgent(const UpdateAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAgentWithOptions(request, runtime);
}

/**
 * @summary Updates the hotword vocabulary.
 *
 * @param request UpdateAsrVocabRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAsrVocabResponse
 */
UpdateAsrVocabResponse Client::updateAsrVocabWithOptions(const UpdateAsrVocabRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateAsrVocab"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAsrVocabResponse>();
}

/**
 * @summary Updates the hotword vocabulary.
 *
 * @param request UpdateAsrVocabRequest
 * @return UpdateAsrVocabResponse
 */
UpdateAsrVocabResponse Client::updateAsrVocab(const UpdateAsrVocabRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAsrVocabWithOptions(request, runtime);
}

/**
 * @summary You can access this operation from the frontend by navigating to Plan Management > Create Quality Inspection Task or Edit > Edit icon next to the quality inspection dimension name. The Apsara Stack endpoint is ip:port/api/qcs/UpdateCheckTypeToScheme.json.
 *
 * @param request UpdateCheckTypeToSchemeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCheckTypeToSchemeResponse
 */
UpdateCheckTypeToSchemeResponse Client::updateCheckTypeToSchemeWithOptions(const UpdateCheckTypeToSchemeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["jsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateCheckTypeToScheme"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateCheckTypeToSchemeResponse>();
}

/**
 * @summary You can access this operation from the frontend by navigating to Plan Management > Create Quality Inspection Task or Edit > Edit icon next to the quality inspection dimension name. The Apsara Stack endpoint is ip:port/api/qcs/UpdateCheckTypeToScheme.json.
 *
 * @param request UpdateCheckTypeToSchemeRequest
 * @return UpdateCheckTypeToSchemeResponse
 */
UpdateCheckTypeToSchemeResponse Client::updateCheckTypeToScheme(const UpdateCheckTypeToSchemeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateCheckTypeToSchemeWithOptions(request, runtime);
}

/**
 * @summary Update session recording data (third-party business fields) to facilitate statistics and queries across more business dimensions.
 *
 * @param request UpdateQualityCheckDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateQualityCheckDataResponse
 */
UpdateQualityCheckDataResponse Client::updateQualityCheckDataWithOptions(const UpdateQualityCheckDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateQualityCheckData"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateQualityCheckDataResponse>();
}

/**
 * @summary Update session recording data (third-party business fields) to facilitate statistics and queries across more business dimensions.
 *
 * @param request UpdateQualityCheckDataRequest
 * @return UpdateQualityCheckDataResponse
 */
UpdateQualityCheckDataResponse Client::updateQualityCheckData(const UpdateQualityCheckDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateQualityCheckDataWithOptions(request, runtime);
}

/**
 * @summary Updates a quality check scheme.
 *
 * @param request UpdateQualityCheckSchemeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateQualityCheckSchemeResponse
 */
UpdateQualityCheckSchemeResponse Client::updateQualityCheckSchemeWithOptions(const UpdateQualityCheckSchemeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["jsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateQualityCheckScheme"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateQualityCheckSchemeResponse>();
}

/**
 * @summary Updates a quality check scheme.
 *
 * @param request UpdateQualityCheckSchemeRequest
 * @return UpdateQualityCheckSchemeResponse
 */
UpdateQualityCheckSchemeResponse Client::updateQualityCheckScheme(const UpdateQualityCheckSchemeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateQualityCheckSchemeWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI UpdateRule is deprecated, please use Qualitycheck::2019-01-15::UpdateRuleV4 instead.
 *
 * @summary Update rule information.
 *
 * @description > Update an existing rule. You can modify its conditions and operators as needed. The rule ID (rid) remains unchanged, but condition IDs and operator IDs may change.
 *
 * @param request UpdateRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateRuleResponse
 */
UpdateRuleResponse Client::updateRuleWithOptions(const UpdateRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateRule"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateRuleResponse>();
}

/**
 * @deprecated OpenAPI UpdateRule is deprecated, please use Qualitycheck::2019-01-15::UpdateRuleV4 instead.
 *
 * @summary Update rule information.
 *
 * @description > Update an existing rule. You can modify its conditions and operators as needed. The rule ID (rid) remains unchanged, but condition IDs and operator IDs may change.
 *
 * @param request UpdateRuleRequest
 * @return UpdateRuleResponse
 */
UpdateRuleResponse Client::updateRule(const UpdateRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateRuleWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI UpdateRuleById is deprecated, please use Qualitycheck::2019-01-15::UpdateRuleV4 instead.
 *
 * @summary This API maps to the frontend function location: Quality Inspection Rule Configuration - Create & Update. The Apsara Stack URL is: ip:port/api/client/UpdateRuleById.json.
 *
 * @param request UpdateRuleByIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateRuleByIdResponse
 */
UpdateRuleByIdResponse Client::updateRuleByIdWithOptions(const UpdateRuleByIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  json body = {};
  if (!!request.hasIsCopy()) {
    body["IsCopy"] = request.getIsCopy();
  }

  if (!!request.hasJsonStrForRule()) {
    body["JsonStrForRule"] = request.getJsonStrForRule();
  }

  if (!!request.hasReturnRelatedSchemes()) {
    body["ReturnRelatedSchemes"] = request.getReturnRelatedSchemes();
  }

  if (!!request.hasRuleId()) {
    body["RuleId"] = request.getRuleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateRuleById"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateRuleByIdResponse>();
}

/**
 * @deprecated OpenAPI UpdateRuleById is deprecated, please use Qualitycheck::2019-01-15::UpdateRuleV4 instead.
 *
 * @summary This API maps to the frontend function location: Quality Inspection Rule Configuration - Create & Update. The Apsara Stack URL is: ip:port/api/client/UpdateRuleById.json.
 *
 * @param request UpdateRuleByIdRequest
 * @return UpdateRuleByIdResponse
 */
UpdateRuleByIdResponse Client::updateRuleById(const UpdateRuleByIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateRuleByIdWithOptions(request, runtime);
}

/**
 * @summary Frontend location: Quality Check Plan Management > Create or edit a quality check task > Associate quality check rules. Apsara Stack URL: ip:port/api/qcs/UpdateRuleToScheme.json.
 *
 * @param request UpdateRuleToSchemeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateRuleToSchemeResponse
 */
UpdateRuleToSchemeResponse Client::updateRuleToSchemeWithOptions(const UpdateRuleToSchemeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["jsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateRuleToScheme"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateRuleToSchemeResponse>();
}

/**
 * @summary Frontend location: Quality Check Plan Management > Create or edit a quality check task > Associate quality check rules. Apsara Stack URL: ip:port/api/qcs/UpdateRuleToScheme.json.
 *
 * @param request UpdateRuleToSchemeRequest
 * @return UpdateRuleToSchemeResponse
 */
UpdateRuleToSchemeResponse Client::updateRuleToScheme(const UpdateRuleToSchemeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateRuleToSchemeWithOptions(request, runtime);
}

/**
 * @summary Corresponding frontend feature location: Rule Configuration - Update. Apsara Stack URL: ip:port/api/client/UpdateRuleById.json.
 *
 * @param request UpdateRuleV4Request
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateRuleV4Response
 */
UpdateRuleV4Response Client::updateRuleV4WithOptions(const UpdateRuleV4Request &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  json body = {};
  if (!!request.hasJsonStrForRule()) {
    body["JsonStrForRule"] = request.getJsonStrForRule();
  }

  if (!!request.hasRuleId()) {
    body["RuleId"] = request.getRuleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateRuleV4"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateRuleV4Response>();
}

/**
 * @summary Corresponding frontend feature location: Rule Configuration - Update. Apsara Stack URL: ip:port/api/client/UpdateRuleById.json.
 *
 * @param request UpdateRuleV4Request
 * @return UpdateRuleV4Response
 */
UpdateRuleV4Response Client::updateRuleV4(const UpdateRuleV4Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateRuleV4WithOptions(request, runtime);
}

/**
 * @summary Frontend path: Task Management > Edit any data on the right. Apsara Stack URL: ip:port/api/task/UpdateSchemeTaskConfig.json.
 *
 * @description Updates quality inspection task information.
 *
 * @param request UpdateSchemeTaskConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSchemeTaskConfigResponse
 */
UpdateSchemeTaskConfigResponse Client::updateSchemeTaskConfigWithOptions(const UpdateSchemeTaskConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["jsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateSchemeTaskConfig"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSchemeTaskConfigResponse>();
}

/**
 * @summary Frontend path: Task Management > Edit any data on the right. Apsara Stack URL: ip:port/api/task/UpdateSchemeTaskConfig.json.
 *
 * @description Updates quality inspection task information.
 *
 * @param request UpdateSchemeTaskConfigRequest
 * @return UpdateSchemeTaskConfigResponse
 */
UpdateSchemeTaskConfigResponse Client::updateSchemeTaskConfig(const UpdateSchemeTaskConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateSchemeTaskConfigWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI UpdateSkillGroupConfig is deprecated
 *
 * @summary You can call UpdateSkillGroupConfig to update a configuration.
 *
 * @param request UpdateSkillGroupConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSkillGroupConfigResponse
 */
UpdateSkillGroupConfigResponse Client::updateSkillGroupConfigWithOptions(const UpdateSkillGroupConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateSkillGroupConfig"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSkillGroupConfigResponse>();
}

/**
 * @deprecated OpenAPI UpdateSkillGroupConfig is deprecated
 *
 * @summary You can call UpdateSkillGroupConfig to update a configuration.
 *
 * @param request UpdateSkillGroupConfigRequest
 * @return UpdateSkillGroupConfigResponse
 */
UpdateSkillGroupConfigResponse Client::updateSkillGroupConfig(const UpdateSkillGroupConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateSkillGroupConfigWithOptions(request, runtime);
}

/**
 * @summary Maintain the recording information after real-time quality inspection is completed, which is used to play back the recording during review. After the recording information is maintained, the task status will change to Succeeded.
 *
 * @param request UpdateSyncQualityCheckDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSyncQualityCheckDataResponse
 */
UpdateSyncQualityCheckDataResponse Client::updateSyncQualityCheckDataWithOptions(const UpdateSyncQualityCheckDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateSyncQualityCheckData"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSyncQualityCheckDataResponse>();
}

/**
 * @summary Maintain the recording information after real-time quality inspection is completed, which is used to play back the recording during review. After the recording information is maintained, the task status will change to Succeeded.
 *
 * @param request UpdateSyncQualityCheckDataRequest
 * @return UpdateSyncQualityCheckDataResponse
 */
UpdateSyncQualityCheckDataResponse Client::updateSyncQualityCheckData(const UpdateSyncQualityCheckDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateSyncQualityCheckDataWithOptions(request, runtime);
}

/**
 * @summary Updates a label node.
 *
 * @param request UpdateTagRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTagResponse
 */
UpdateTagResponse Client::updateTagWithOptions(const UpdateTagRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateTag"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTagResponse>();
}

/**
 * @summary Updates a label node.
 *
 * @param request UpdateTagRequest
 * @return UpdateTagResponse
 */
UpdateTagResponse Client::updateTag(const UpdateTagRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateTagWithOptions(request, runtime);
}

/**
 * @summary Update the automatic allocation rule for quality review tasks.
 *
 * @param request UpdateTaskAssignRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTaskAssignRuleResponse
 */
UpdateTaskAssignRuleResponse Client::updateTaskAssignRuleWithOptions(const UpdateTaskAssignRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateTaskAssignRule"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTaskAssignRuleResponse>();
}

/**
 * @summary Update the automatic allocation rule for quality review tasks.
 *
 * @param request UpdateTaskAssignRuleRequest
 * @return UpdateTaskAssignRuleResponse
 */
UpdateTaskAssignRuleResponse Client::updateTaskAssignRule(const UpdateTaskAssignRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateTaskAssignRuleWithOptions(request, runtime);
}

/**
 * @summary Update users by modifying their roles in batches.
 *
 * @description When you update users, you can modify only their roles. You cannot modify other account information because all Alibaba Cloud products use a unified account management system. Smart Conversation Analysis uses these accounts. To modify account information, go to [Resource Access Management (RAM)](https://ram.console.aliyun.com/).
 *
 * @param request UpdateUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateUserResponse
 */
UpdateUserResponse Client::updateUserWithOptions(const UpdateUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateUser"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateUserResponse>();
}

/**
 * @summary Update users by modifying their roles in batches.
 *
 * @description When you update users, you can modify only their roles. You cannot modify other account information because all Alibaba Cloud products use a unified account management system. Smart Conversation Analysis uses these accounts. To modify account information, go to [Resource Access Management (RAM)](https://ram.console.aliyun.com/).
 *
 * @param request UpdateUserRequest
 * @return UpdateUserResponse
 */
UpdateUserResponse Client::updateUser(const UpdateUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateUserWithOptions(request, runtime);
}

/**
 * @summary Updates the warning configuration.
 *
 * @param request UpdateWarningConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateWarningConfigResponse
 */
UpdateWarningConfigResponse Client::updateWarningConfigWithOptions(const UpdateWarningConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateWarningConfig"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateWarningConfigResponse>();
}

/**
 * @summary Updates the warning configuration.
 *
 * @param request UpdateWarningConfigRequest
 * @return UpdateWarningConfigResponse
 */
UpdateWarningConfigResponse Client::updateWarningConfig(const UpdateWarningConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateWarningConfigWithOptions(request, runtime);
}

/**
 * @summary  预警策略-更新
 *
 * @param request UpdateWarningStrategyConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateWarningStrategyConfigResponse
 */
UpdateWarningStrategyConfigResponse Client::updateWarningStrategyConfigWithOptions(const UpdateWarningStrategyConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateWarningStrategyConfig"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateWarningStrategyConfigResponse>();
}

/**
 * @summary  预警策略-更新
 *
 * @param request UpdateWarningStrategyConfigRequest
 * @return UpdateWarningStrategyConfigResponse
 */
UpdateWarningStrategyConfigResponse Client::updateWarningStrategyConfig(const UpdateWarningStrategyConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateWarningStrategyConfigWithOptions(request, runtime);
}

/**
 * @summary Uploads offline audio data—such as recorded call session files—for quality inspection. This operation supports two call center agent scenarios.
 * Scenario 1: Native integration with Alibaba Cloud Call Center (CC). No development is required. You can push call data to Smart Conversation Analysis (SCA) with a single click.
 * Scenario 2: Integration with your own call center system. Each time a recording is generated, the call center pushes it to SCA for analysis.
 *
 * @description ### Process description
 * The process is as follows: An API call uploads the audio file for quality inspection → The audio file is converted to text → The transcribed text is separated by speaker role (agent and customer), based on the specified channel separation method → The role-separated text is analyzed using quality inspection rules → Quality inspection completes.
 * ### Task execution efficiency
 * Task execution speed depends on how quickly the audio file is transcribed. A 5-minute audio file is typically transcribed in about 2 minutes. However, if the transcription service queue is long, a waiting period occurs. Transcription usually completes within 6 hours, except when large volumes of data are uploaded simultaneously—more than 500 hours of audio within 30 minutes. After transcription, quality inspection analysis completes in milliseconds.
 * ### Audio file URL requirements
 * - Supports single-channel or dual-channel audio files in WAV or MP3 format. File size must be less than 512 MB.
 * - The URL must be accessible over HTTP. Local files are not supported. The audio file must have public access permissions.
 * - The URL must use a domain name, not an IP address. The URL cannot contain spaces or Chinese characters.
 * - After transcription, the system deletes the downloaded audio file. No copy of the recording is retained.
 * - If your audio URL has an expiration period—such as a presigned URL for an audio file stored in Alibaba Cloud Object Storage Service (OSS)—set the validity period to at least 12 hours. Ideally, set it to 24 hours. Because transcription may involve queuing, the audio file is downloaded only when transcription begins. A longer validity period prevents the URL from expiring before download starts.
 * - After quality inspection completes, the provided URL is used for playback when you review the file in the console. Ensure the URL remains valid long-term. Otherwise, audio playback fails.
 * ### Role separation
 * After transcription, the system automatically separates the text into two speaker roles but cannot determine which role corresponds to the agent and which to the customer. You must define rules for role separation. Role separation accuracy is critical because many quality inspection rules apply to a specific role—for example, checking only agent or only customer utterances. Incorrect role separation significantly reduces quality inspection accuracy.
 * Audio files are typically either single-channel (mono) or dual-channel (stereo):
 * - Single-channel recording: The voices of the agent and customer are mixed on one channel. After transcription, the system uses a built-in algorithm to separate dialogue into two roles. You can provide a list of keywords commonly spoken by agents. The system analyzes the transcribed text sentence by sentence. When a sentence contains a keyword, that speaker is identified as the agent, and the other speaker is identified as the customer. For more information, see the recognizeRoleDataSetId and serviceChannelKeywords request parameters. Because conversations can be unpredictable—for example, speakers may talk over each other—role separation for single-channel recordings cannot achieve 100% accuracy. We strongly recommend saving recordings as dual-channel audio.
 * - Dual-channel recording: The voices of the agent and customer are stored on separate channels. Even if speakers talk over each other, transcription accurately distinguishes between them. Specify the agent and customer channels using the serviceChannel and clientChannel request parameters.
 * ### Retrieve quality inspection results
 * Because audio analysis is asynchronous, you must retrieve results asynchronously. You can retrieve results in one of the following three ways:
 * - Message notification: For more information, see [Message Queue](https://help.aliyun.com/document_detail/213237.html). After you receive a message, call the GetResult operation to retrieve detailed results. (Recommended)
 * - Callback: Specify a callbackUrl in the request parameters. The system initiates a callback after the task completes. After you receive the callback, call the GetResult operation to retrieve detailed results.
 * - Polling: The operation returns a task ID (taskId). Use the taskId to poll the getResult operation and retrieve the result asynchronously. Check the `status` parameter in the response to determine whether the task is complete. We recommend a polling interval of 30 seconds or longer because analysis typically completes within a few minutes. (Not recommended)
 *
 * @param request UploadAudioDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UploadAudioDataResponse
 */
UploadAudioDataResponse Client::uploadAudioDataWithOptions(const UploadAudioDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UploadAudioData"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UploadAudioDataResponse>();
}

/**
 * @summary Uploads offline audio data—such as recorded call session files—for quality inspection. This operation supports two call center agent scenarios.
 * Scenario 1: Native integration with Alibaba Cloud Call Center (CC). No development is required. You can push call data to Smart Conversation Analysis (SCA) with a single click.
 * Scenario 2: Integration with your own call center system. Each time a recording is generated, the call center pushes it to SCA for analysis.
 *
 * @description ### Process description
 * The process is as follows: An API call uploads the audio file for quality inspection → The audio file is converted to text → The transcribed text is separated by speaker role (agent and customer), based on the specified channel separation method → The role-separated text is analyzed using quality inspection rules → Quality inspection completes.
 * ### Task execution efficiency
 * Task execution speed depends on how quickly the audio file is transcribed. A 5-minute audio file is typically transcribed in about 2 minutes. However, if the transcription service queue is long, a waiting period occurs. Transcription usually completes within 6 hours, except when large volumes of data are uploaded simultaneously—more than 500 hours of audio within 30 minutes. After transcription, quality inspection analysis completes in milliseconds.
 * ### Audio file URL requirements
 * - Supports single-channel or dual-channel audio files in WAV or MP3 format. File size must be less than 512 MB.
 * - The URL must be accessible over HTTP. Local files are not supported. The audio file must have public access permissions.
 * - The URL must use a domain name, not an IP address. The URL cannot contain spaces or Chinese characters.
 * - After transcription, the system deletes the downloaded audio file. No copy of the recording is retained.
 * - If your audio URL has an expiration period—such as a presigned URL for an audio file stored in Alibaba Cloud Object Storage Service (OSS)—set the validity period to at least 12 hours. Ideally, set it to 24 hours. Because transcription may involve queuing, the audio file is downloaded only when transcription begins. A longer validity period prevents the URL from expiring before download starts.
 * - After quality inspection completes, the provided URL is used for playback when you review the file in the console. Ensure the URL remains valid long-term. Otherwise, audio playback fails.
 * ### Role separation
 * After transcription, the system automatically separates the text into two speaker roles but cannot determine which role corresponds to the agent and which to the customer. You must define rules for role separation. Role separation accuracy is critical because many quality inspection rules apply to a specific role—for example, checking only agent or only customer utterances. Incorrect role separation significantly reduces quality inspection accuracy.
 * Audio files are typically either single-channel (mono) or dual-channel (stereo):
 * - Single-channel recording: The voices of the agent and customer are mixed on one channel. After transcription, the system uses a built-in algorithm to separate dialogue into two roles. You can provide a list of keywords commonly spoken by agents. The system analyzes the transcribed text sentence by sentence. When a sentence contains a keyword, that speaker is identified as the agent, and the other speaker is identified as the customer. For more information, see the recognizeRoleDataSetId and serviceChannelKeywords request parameters. Because conversations can be unpredictable—for example, speakers may talk over each other—role separation for single-channel recordings cannot achieve 100% accuracy. We strongly recommend saving recordings as dual-channel audio.
 * - Dual-channel recording: The voices of the agent and customer are stored on separate channels. Even if speakers talk over each other, transcription accurately distinguishes between them. Specify the agent and customer channels using the serviceChannel and clientChannel request parameters.
 * ### Retrieve quality inspection results
 * Because audio analysis is asynchronous, you must retrieve results asynchronously. You can retrieve results in one of the following three ways:
 * - Message notification: For more information, see [Message Queue](https://help.aliyun.com/document_detail/213237.html). After you receive a message, call the GetResult operation to retrieve detailed results. (Recommended)
 * - Callback: Specify a callbackUrl in the request parameters. The system initiates a callback after the task completes. After you receive the callback, call the GetResult operation to retrieve detailed results.
 * - Polling: The operation returns a task ID (taskId). Use the taskId to poll the getResult operation and retrieve the result asynchronously. Check the `status` parameter in the response to determine whether the task is complete. We recommend a polling interval of 30 seconds or longer because analysis typically completes within a few minutes. (Not recommended)
 *
 * @param request UploadAudioDataRequest
 * @return UploadAudioDataResponse
 */
UploadAudioDataResponse Client::uploadAudioData(const UploadAudioDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return uploadAudioDataWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI UploadData is deprecated, please use Qualitycheck::2019-01-15::UploadDataV4 instead.
 *
 * @summary Upload offline plain text quality inspection data (plain text sessions). This applies to online agent scenarios. Use the UploadDataV4 API. Differences between UploadDataV4 and UploadData include the following: UploadDataV4 supports only POST requests, and it supports longer JsonStr values.
 *
 * @description You can call UploadData.json to upload text-based quality inspection data. Text typically originates from online customer service interactions or tickets. The API returns a task ID. You can retrieve results in one of three ways:
 * - Message notification: For details, see [message queues](https://help.aliyun.com/document_detail/213237.html). After you receive a message, call the GetResult API to retrieve detailed results. (Recommended)
 * - Callback: Specify a callback URL in your request parameters. After the task completes, the system sends a callback to that URL. Then call the GetResult API to retrieve detailed results.
 * - Polling: Use the returned task ID to poll the GetResult API asynchronously. Check whether the status field in the response indicates completion. (Not recommended)
 *
 * @param request UploadDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UploadDataResponse
 */
UploadDataResponse Client::uploadDataWithOptions(const UploadDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UploadData"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UploadDataResponse>();
}

/**
 * @deprecated OpenAPI UploadData is deprecated, please use Qualitycheck::2019-01-15::UploadDataV4 instead.
 *
 * @summary Upload offline plain text quality inspection data (plain text sessions). This applies to online agent scenarios. Use the UploadDataV4 API. Differences between UploadDataV4 and UploadData include the following: UploadDataV4 supports only POST requests, and it supports longer JsonStr values.
 *
 * @description You can call UploadData.json to upload text-based quality inspection data. Text typically originates from online customer service interactions or tickets. The API returns a task ID. You can retrieve results in one of three ways:
 * - Message notification: For details, see [message queues](https://help.aliyun.com/document_detail/213237.html). After you receive a message, call the GetResult API to retrieve detailed results. (Recommended)
 * - Callback: Specify a callback URL in your request parameters. After the task completes, the system sends a callback to that URL. Then call the GetResult API to retrieve detailed results.
 * - Polling: Use the returned task ID to poll the GetResult API asynchronously. Check whether the status field in the response indicates completion. (Not recommended)
 *
 * @param request UploadDataRequest
 * @return UploadDataResponse
 */
UploadDataResponse Client::uploadData(const UploadDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return uploadDataWithOptions(request, runtime);
}

/**
 * @summary Real-time text quality check
 *
 * @description This API pushes text data to SCA for real-time quality inspection based on specified rules and synchronously returns the analysis results. Unlike post-call quality inspection, which requires uploading the full transcript after a dialogue ends, real-time quality inspection offers lower latency by analyzing text immediately after a speaker completes one or more utterances.
 * - If you push a single utterance from one speaker, some rule operators may fail because the required dialogue context is missing. Examples include the context repetition check, speech interruption check, and call mute check.
 * - SCA returns analysis results synchronously and does not save call records, so you cannot query the results later via an API.
 *
 * @param request UploadDataSyncRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UploadDataSyncResponse
 */
UploadDataSyncResponse Client::uploadDataSyncWithOptions(const UploadDataSyncRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UploadDataSync"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UploadDataSyncResponse>();
}

/**
 * @summary Real-time text quality check
 *
 * @description This API pushes text data to SCA for real-time quality inspection based on specified rules and synchronously returns the analysis results. Unlike post-call quality inspection, which requires uploading the full transcript after a dialogue ends, real-time quality inspection offers lower latency by analyzing text immediately after a speaker completes one or more utterances.
 * - If you push a single utterance from one speaker, some rule operators may fail because the required dialogue context is missing. Examples include the context repetition check, speech interruption check, and call mute check.
 * - SCA returns analysis results synchronously and does not save call records, so you cannot query the results later via an API.
 *
 * @param request UploadDataSyncRequest
 * @return UploadDataSyncResponse
 */
UploadDataSyncResponse Client::uploadDataSync(const UploadDataSyncRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return uploadDataSyncWithOptions(request, runtime);
}

/**
 * @summary http_hsf
 *
 * @param request UploadDataSyncForLLMRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UploadDataSyncForLLMResponse
 */
UploadDataSyncForLLMResponse Client::uploadDataSyncForLLMWithOptions(const UploadDataSyncForLLMRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  json body = {};
  if (!!request.hasJsonStr()) {
    body["JsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UploadDataSyncForLLM"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UploadDataSyncForLLMResponse>();
}

/**
 * @summary http_hsf
 *
 * @param request UploadDataSyncForLLMRequest
 * @return UploadDataSyncForLLMResponse
 */
UploadDataSyncForLLMResponse Client::uploadDataSyncForLLM(const UploadDataSyncForLLMRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return uploadDataSyncForLLMWithOptions(request, runtime);
}

/**
 * @summary Uploads offline plain text conversation data for quality inspection in online agent scenarios. We recommend that you use the UploadDataV4 API. Compared to the UploadData API, UploadDataV4 supports only POST requests and allows a longer JsonStr.
 *
 * @description You can call the UploadData.json operation to upload text data for quality inspection. The text usually comes from sources such as online customer service and tickets. The API returns a task ID. You can retrieve the results in one of the following three ways:
 * - Message notifications: After you receive a notification, call the GetResult API to obtain the detailed results. For more information, see [Message Queue](https://help.aliyun.com/document_detail/213237.html). (Recommended)
 * - Callbacks: Specify a callbackUrl in the request parameters. The system automatically initiates a callback after the task is complete. After you receive the callback, call the GetResult API to retrieve the detailed results.
 * - Polling: Use the task ID returned by this API to poll the GetResult API and asynchronously retrieve the results. Check the status in the response to determine whether the task is complete. (Not recommended)
 *
 * @param request UploadDataV4Request
 * @param runtime runtime options for this request RuntimeOptions
 * @return UploadDataV4Response
 */
UploadDataV4Response Client::uploadDataV4WithOptions(const UploadDataV4Request &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBaseMeAgentId()) {
    body["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    body["JsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UploadDataV4"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UploadDataV4Response>();
}

/**
 * @summary Uploads offline plain text conversation data for quality inspection in online agent scenarios. We recommend that you use the UploadDataV4 API. Compared to the UploadData API, UploadDataV4 supports only POST requests and allows a longer JsonStr.
 *
 * @description You can call the UploadData.json operation to upload text data for quality inspection. The text usually comes from sources such as online customer service and tickets. The API returns a task ID. You can retrieve the results in one of the following three ways:
 * - Message notifications: After you receive a notification, call the GetResult API to obtain the detailed results. For more information, see [Message Queue](https://help.aliyun.com/document_detail/213237.html). (Recommended)
 * - Callbacks: Specify a callbackUrl in the request parameters. The system automatically initiates a callback after the task is complete. After you receive the callback, call the GetResult API to retrieve the detailed results.
 * - Polling: Use the task ID returned by this API to poll the GetResult API and asynchronously retrieve the results. Check the status in the response to determine whether the task is complete. (Not recommended)
 *
 * @param request UploadDataV4Request
 * @return UploadDataV4Response
 */
UploadDataV4Response Client::uploadDataV4(const UploadDataV4Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return uploadDataV4WithOptions(request, runtime);
}

/**
 * @summary Creates a rule. You can use this operation to provide your own rule editing interface.
 *
 * @description > For more information, see [Rule configuration](https://help.aliyun.com/document_detail/213225.html).
 *
 * @param request UploadRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UploadRuleResponse
 */
UploadRuleResponse Client::uploadRuleWithOptions(const UploadRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UploadRule"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UploadRuleResponse>();
}

/**
 * @summary Creates a rule. You can use this operation to provide your own rule editing interface.
 *
 * @description > For more information, see [Rule configuration](https://help.aliyun.com/document_detail/213225.html).
 *
 * @param request UploadRuleRequest
 * @return UploadRuleResponse
 */
UploadRuleResponse Client::uploadRule(const UploadRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return uploadRuleWithOptions(request, runtime);
}

/**
 * @summary Saves the verification result of a single file.
 *
 * @param request VerifyFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return VerifyFileResponse
 */
VerifyFileResponse Client::verifyFileWithOptions(const VerifyFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "VerifyFile"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<VerifyFileResponse>();
}

/**
 * @summary Saves the verification result of a single file.
 *
 * @param request VerifyFileRequest
 * @return VerifyFileResponse
 */
VerifyFileResponse Client::verifyFile(const VerifyFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return verifyFileWithOptions(request, runtime);
}

/**
 * @summary Save the verification result for a single sentence.
 *
 * @param request VerifySentenceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return VerifySentenceResponse
 */
VerifySentenceResponse Client::verifySentenceWithOptions(const VerifySentenceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.getBaseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.getJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "VerifySentence"},
    {"version" , "2019-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<VerifySentenceResponse>();
}

/**
 * @summary Save the verification result for a single sentence.
 *
 * @param request VerifySentenceRequest
 * @return VerifySentenceResponse
 */
VerifySentenceResponse Client::verifySentence(const VerifySentenceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return verifySentenceWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115