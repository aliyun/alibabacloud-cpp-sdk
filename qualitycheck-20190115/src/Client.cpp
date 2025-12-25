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
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::Qualitycheck20190115::Models;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{

AlibabaCloud::Qualitycheck20190115::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
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
 * @param request AddBusinessCategoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddBusinessCategoryResponse
 */
AddBusinessCategoryResponse Client::addBusinessCategoryWithOptions(const AddBusinessCategoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.baseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.jsonStr();
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
 * @param request AddBusinessCategoryRequest
 * @return AddBusinessCategoryResponse
 */
AddBusinessCategoryResponse Client::addBusinessCategory(const AddBusinessCategoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addBusinessCategoryWithOptions(request, runtime);
}

/**
 * @param request AddRuleCategoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddRuleCategoryResponse
 */
AddRuleCategoryResponse Client::addRuleCategoryWithOptions(const AddRuleCategoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.baseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.jsonStr();
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
 * @param request AddRuleCategoryRequest
 * @return AddRuleCategoryResponse
 */
AddRuleCategoryResponse Client::addRuleCategory(const AddRuleCategoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addRuleCategoryWithOptions(request, runtime);
}

/**
 * @summary V4创建规则
 *
 * @param request AddRuleV4Request
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddRuleV4Response
 */
AddRuleV4Response Client::addRuleV4WithOptions(const AddRuleV4Request &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.baseMeAgentId();
  }

  json body = {};
  if (!!request.hasIsCopy()) {
    body["IsCopy"] = request.isCopy();
  }

  if (!!request.hasJsonStrForRule()) {
    body["JsonStrForRule"] = request.jsonStrForRule();
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
 * @summary V4创建规则
 *
 * @param request AddRuleV4Request
 * @return AddRuleV4Response
 */
AddRuleV4Response Client::addRuleV4(const AddRuleV4Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addRuleV4WithOptions(request, runtime);
}

/**
 * @summary 申领实时语音所需token
 *
 * @param request ApplyWsTokenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ApplyWsTokenResponse
 */
ApplyWsTokenResponse Client::applyWsTokenWithOptions(const ApplyWsTokenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.baseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.jsonStr();
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
 * @summary 申领实时语音所需token
 *
 * @param request ApplyWsTokenRequest
 * @return ApplyWsTokenResponse
 */
ApplyWsTokenResponse Client::applyWsToken(const ApplyWsTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return applyWsTokenWithOptions(request, runtime);
}

/**
 * @param request AssignReviewerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AssignReviewerResponse
 */
AssignReviewerResponse Client::assignReviewerWithOptions(const AssignReviewerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.baseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.jsonStr();
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
 * @summary 会话组批量分配
 *
 * @param request AssignReviewerBySessionGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AssignReviewerBySessionGroupResponse
 */
AssignReviewerBySessionGroupResponse Client::assignReviewerBySessionGroupWithOptions(const AssignReviewerBySessionGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.baseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["jsonStr"] = request.jsonStr();
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
 * @summary 会话组批量分配
 *
 * @param request AssignReviewerBySessionGroupRequest
 * @return AssignReviewerBySessionGroupResponse
 */
AssignReviewerBySessionGroupResponse Client::assignReviewerBySessionGroup(const AssignReviewerBySessionGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return assignReviewerBySessionGroupWithOptions(request, runtime);
}

/**
 * @summary 批量复核
 *
 * @param request BatchSubmitReviewInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchSubmitReviewInfoResponse
 */
BatchSubmitReviewInfoResponse Client::batchSubmitReviewInfoWithOptions(const BatchSubmitReviewInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.baseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["jsonStr"] = request.jsonStr();
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
 * @summary 批量复核
 *
 * @param request BatchSubmitReviewInfoRequest
 * @return BatchSubmitReviewInfoResponse
 */
BatchSubmitReviewInfoResponse Client::batchSubmitReviewInfo(const BatchSubmitReviewInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchSubmitReviewInfoWithOptions(request, runtime);
}

/**
 * @summary 创建热词模型
 *
 * @param request CreateAsrVocabRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAsrVocabResponse
 */
CreateAsrVocabResponse Client::createAsrVocabWithOptions(const CreateAsrVocabRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.baseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.jsonStr();
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
 * @summary 创建热词模型
 *
 * @param request CreateAsrVocabRequest
 * @return CreateAsrVocabResponse
 */
CreateAsrVocabResponse Client::createAsrVocab(const CreateAsrVocabRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAsrVocabWithOptions(request, runtime);
}

/**
 * @summary 创建质检方案中的质检维度
 *
 * @param request CreateCheckTypeToSchemeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCheckTypeToSchemeResponse
 */
CreateCheckTypeToSchemeResponse Client::createCheckTypeToSchemeWithOptions(const CreateCheckTypeToSchemeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.baseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["jsonStr"] = request.jsonStr();
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
 * @summary 创建质检方案中的质检维度
 *
 * @param request CreateCheckTypeToSchemeRequest
 * @return CreateCheckTypeToSchemeResponse
 */
CreateCheckTypeToSchemeResponse Client::createCheckTypeToScheme(const CreateCheckTypeToSchemeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCheckTypeToSchemeWithOptions(request, runtime);
}

/**
 * @summary 创建标签挖掘任务
 *
 * @param request CreateMiningTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMiningTaskResponse
 */
CreateMiningTaskResponse Client::createMiningTaskWithOptions(const CreateMiningTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.baseMeAgentId();
  }

  json body = {};
  if (!!request.hasCallbackUrl()) {
    body["CallbackUrl"] = request.callbackUrl();
  }

  if (!!request.hasFilePath()) {
    body["FilePath"] = request.filePath();
  }

  if (!!request.hasParam()) {
    body["Param"] = request.param();
  }

  if (!!request.hasTaskType()) {
    body["TaskType"] = request.taskType();
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
 * @summary 创建标签挖掘任务
 *
 * @param request CreateMiningTaskRequest
 * @return CreateMiningTaskResponse
 */
CreateMiningTaskResponse Client::createMiningTask(const CreateMiningTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createMiningTaskWithOptions(request, runtime);
}

/**
 * @summary 新增质检方案
 *
 * @param request CreateQualityCheckSchemeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateQualityCheckSchemeResponse
 */
CreateQualityCheckSchemeResponse Client::createQualityCheckSchemeWithOptions(const CreateQualityCheckSchemeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.baseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["jsonStr"] = request.jsonStr();
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
 * @summary 新增质检方案
 *
 * @param request CreateQualityCheckSchemeRequest
 * @return CreateQualityCheckSchemeResponse
 */
CreateQualityCheckSchemeResponse Client::createQualityCheckScheme(const CreateQualityCheckSchemeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createQualityCheckSchemeWithOptions(request, runtime);
}

/**
 * @summary 新建质检任务
 *
 * @param request CreateSchemeTaskConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSchemeTaskConfigResponse
 */
CreateSchemeTaskConfigResponse Client::createSchemeTaskConfigWithOptions(const CreateSchemeTaskConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.baseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["jsonStr"] = request.jsonStr();
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
 * @summary 新建质检任务
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
 * @param request CreateSkillGroupConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSkillGroupConfigResponse
 */
CreateSkillGroupConfigResponse Client::createSkillGroupConfigWithOptions(const CreateSkillGroupConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.baseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.jsonStr();
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
 * @param request CreateSkillGroupConfigRequest
 * @return CreateSkillGroupConfigResponse
 */
CreateSkillGroupConfigResponse Client::createSkillGroupConfig(const CreateSkillGroupConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSkillGroupConfigWithOptions(request, runtime);
}

/**
 * @param request CreateTaskAssignRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTaskAssignRuleResponse
 */
CreateTaskAssignRuleResponse Client::createTaskAssignRuleWithOptions(const CreateTaskAssignRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.baseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.jsonStr();
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
 * @param request CreateTaskAssignRuleRequest
 * @return CreateTaskAssignRuleResponse
 */
CreateTaskAssignRuleResponse Client::createTaskAssignRule(const CreateTaskAssignRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTaskAssignRuleWithOptions(request, runtime);
}

/**
 * @summary 创建用户
 *
 * @param request CreateUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateUserResponse
 */
CreateUserResponse Client::createUserWithOptions(const CreateUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBaseMeAgentId()) {
    body["BaseMeAgentId"] = request.baseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    body["JsonStr"] = request.jsonStr();
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
 * @summary 创建用户
 *
 * @param request CreateUserRequest
 * @return CreateUserResponse
 */
CreateUserResponse Client::createUser(const CreateUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createUserWithOptions(request, runtime);
}

/**
 * @param request CreateWarningConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateWarningConfigResponse
 */
CreateWarningConfigResponse Client::createWarningConfigWithOptions(const CreateWarningConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.baseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.jsonStr();
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
    query["BaseMeAgentId"] = request.baseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.jsonStr();
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
 * @param request DelRuleCategoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DelRuleCategoryResponse
 */
DelRuleCategoryResponse Client::delRuleCategoryWithOptions(const DelRuleCategoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.baseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.jsonStr();
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
 * @param request DelRuleCategoryRequest
 * @return DelRuleCategoryResponse
 */
DelRuleCategoryResponse Client::delRuleCategory(const DelRuleCategoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return delRuleCategoryWithOptions(request, runtime);
}

/**
 * @param request DeleteAsrVocabRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAsrVocabResponse
 */
DeleteAsrVocabResponse Client::deleteAsrVocabWithOptions(const DeleteAsrVocabRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.baseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.jsonStr();
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
 * @param request DeleteAsrVocabRequest
 * @return DeleteAsrVocabResponse
 */
DeleteAsrVocabResponse Client::deleteAsrVocab(const DeleteAsrVocabRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAsrVocabWithOptions(request, runtime);
}

/**
 * @param request DeleteBusinessCategoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteBusinessCategoryResponse
 */
DeleteBusinessCategoryResponse Client::deleteBusinessCategoryWithOptions(const DeleteBusinessCategoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.baseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.jsonStr();
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
 * @param request DeleteBusinessCategoryRequest
 * @return DeleteBusinessCategoryResponse
 */
DeleteBusinessCategoryResponse Client::deleteBusinessCategory(const DeleteBusinessCategoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteBusinessCategoryWithOptions(request, runtime);
}

/**
 * @summary 删除质检唯独
 *
 * @param request DeleteCheckTypeToSchemeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCheckTypeToSchemeResponse
 */
DeleteCheckTypeToSchemeResponse Client::deleteCheckTypeToSchemeWithOptions(const DeleteCheckTypeToSchemeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.baseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.jsonStr();
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
 * @summary 删除质检唯独
 *
 * @param request DeleteCheckTypeToSchemeRequest
 * @return DeleteCheckTypeToSchemeResponse
 */
DeleteCheckTypeToSchemeResponse Client::deleteCheckTypeToScheme(const DeleteCheckTypeToSchemeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCheckTypeToSchemeWithOptions(request, runtime);
}

/**
 * @param request DeleteCustomizationConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCustomizationConfigResponse
 */
DeleteCustomizationConfigResponse Client::deleteCustomizationConfigWithOptions(const DeleteCustomizationConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.baseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.jsonStr();
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
 * @param request DeleteDataSetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDataSetResponse
 */
DeleteDataSetResponse Client::deleteDataSetWithOptions(const DeleteDataSetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.baseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.jsonStr();
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
 * @param request DeleteDataSetRequest
 * @return DeleteDataSetResponse
 */
DeleteDataSetResponse Client::deleteDataSet(const DeleteDataSetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDataSetWithOptions(request, runtime);
}

/**
 * @param request DeletePrecisionTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePrecisionTaskResponse
 */
DeletePrecisionTaskResponse Client::deletePrecisionTaskWithOptions(const DeletePrecisionTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.baseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.jsonStr();
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
 * @param request DeletePrecisionTaskRequest
 * @return DeletePrecisionTaskResponse
 */
DeletePrecisionTaskResponse Client::deletePrecisionTask(const DeletePrecisionTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deletePrecisionTaskWithOptions(request, runtime);
}

/**
 * @summary 删除质检方案
 *
 * @param request DeleteQualityCheckSchemeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteQualityCheckSchemeResponse
 */
DeleteQualityCheckSchemeResponse Client::deleteQualityCheckSchemeWithOptions(const DeleteQualityCheckSchemeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.baseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["jsonStr"] = request.jsonStr();
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
 * @summary 删除质检方案
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
 * @summary 删除规则
 *
 * @param request DeleteRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRuleResponse
 */
DeleteRuleResponse Client::deleteRuleWithOptions(const DeleteRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.baseMeAgentId();
  }

  json body = {};
  if (!!request.hasForceDelete()) {
    body["ForceDelete"] = request.forceDelete();
  }

  if (!!request.hasIsSchemeData()) {
    body["IsSchemeData"] = request.isSchemeData();
  }

  if (!!request.hasRuleId()) {
    body["RuleId"] = request.ruleId();
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
 * @summary 删除规则
 *
 * @param request DeleteRuleRequest
 * @return DeleteRuleResponse
 */
DeleteRuleResponse Client::deleteRule(const DeleteRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteRuleWithOptions(request, runtime);
}

/**
 * @summary V4删除规则
 *
 * @param request DeleteRuleV4Request
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRuleV4Response
 */
DeleteRuleV4Response Client::deleteRuleV4WithOptions(const DeleteRuleV4Request &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.baseMeAgentId();
  }

  json body = {};
  if (!!request.hasForceDelete()) {
    body["ForceDelete"] = request.forceDelete();
  }

  if (!!request.hasRuleId()) {
    body["RuleId"] = request.ruleId();
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
 * @summary V4删除规则
 *
 * @param request DeleteRuleV4Request
 * @return DeleteRuleV4Response
 */
DeleteRuleV4Response Client::deleteRuleV4(const DeleteRuleV4Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteRuleV4WithOptions(request, runtime);
}

/**
 * @summary 删除质检任务
 *
 * @param request DeleteSchemeTaskConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSchemeTaskConfigResponse
 */
DeleteSchemeTaskConfigResponse Client::deleteSchemeTaskConfigWithOptions(const DeleteSchemeTaskConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.baseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["jsonStr"] = request.jsonStr();
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
 * @summary 删除质检任务
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
 * @param request DeleteSkillGroupConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSkillGroupConfigResponse
 */
DeleteSkillGroupConfigResponse Client::deleteSkillGroupConfigWithOptions(const DeleteSkillGroupConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.baseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.jsonStr();
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
 * @param request DeleteSkillGroupConfigRequest
 * @return DeleteSkillGroupConfigResponse
 */
DeleteSkillGroupConfigResponse Client::deleteSkillGroupConfig(const DeleteSkillGroupConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSkillGroupConfigWithOptions(request, runtime);
}

/**
 * @param request DeleteTaskAssignRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteTaskAssignRuleResponse
 */
DeleteTaskAssignRuleResponse Client::deleteTaskAssignRuleWithOptions(const DeleteTaskAssignRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.baseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.jsonStr();
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
 * @param request DeleteTaskAssignRuleRequest
 * @return DeleteTaskAssignRuleResponse
 */
DeleteTaskAssignRuleResponse Client::deleteTaskAssignRule(const DeleteTaskAssignRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteTaskAssignRuleWithOptions(request, runtime);
}

/**
 * @param request DeleteWarningConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteWarningConfigResponse
 */
DeleteWarningConfigResponse Client::deleteWarningConfigWithOptions(const DeleteWarningConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.baseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.jsonStr();
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
    query["BaseMeAgentId"] = request.baseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.jsonStr();
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
 * @param request GetAsrVocabRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAsrVocabResponse
 */
GetAsrVocabResponse Client::getAsrVocabWithOptions(const GetAsrVocabRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.baseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.jsonStr();
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
 * @param request GetAsrVocabRequest
 * @return GetAsrVocabResponse
 */
GetAsrVocabResponse Client::getAsrVocab(const GetAsrVocabRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAsrVocabWithOptions(request, runtime);
}

/**
 * @param request GetBusinessCategoryListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetBusinessCategoryListResponse
 */
GetBusinessCategoryListResponse Client::getBusinessCategoryListWithOptions(const GetBusinessCategoryListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.baseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.jsonStr();
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
 * @param request GetBusinessCategoryListRequest
 * @return GetBusinessCategoryListResponse
 */
GetBusinessCategoryListResponse Client::getBusinessCategoryList(const GetBusinessCategoryListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getBusinessCategoryListWithOptions(request, runtime);
}

/**
 * @summary 获取语音模型列表
 *
 * @param request GetCustomizationConfigListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCustomizationConfigListResponse
 */
GetCustomizationConfigListResponse Client::getCustomizationConfigListWithOptions(const GetCustomizationConfigListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.baseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.jsonStr();
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
 * @summary 获取语音模型列表
 *
 * @param request GetCustomizationConfigListRequest
 * @return GetCustomizationConfigListResponse
 */
GetCustomizationConfigListResponse Client::getCustomizationConfigList(const GetCustomizationConfigListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCustomizationConfigListWithOptions(request, runtime);
}

/**
 * @summary 获取标签挖掘任务结果
 *
 * @param request GetMiningTaskResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMiningTaskResultResponse
 */
GetMiningTaskResultResponse Client::getMiningTaskResultWithOptions(const GetMiningTaskResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.baseMeAgentId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
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
 * @summary 获取标签挖掘任务结果
 *
 * @param request GetMiningTaskResultRequest
 * @return GetMiningTaskResultResponse
 */
GetMiningTaskResultResponse Client::getMiningTaskResult(const GetMiningTaskResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMiningTaskResultWithOptions(request, runtime);
}

/**
 * @param request GetNextResultToVerifyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetNextResultToVerifyResponse
 */
GetNextResultToVerifyResponse Client::getNextResultToVerifyWithOptions(const GetNextResultToVerifyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.baseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.jsonStr();
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
 * @param request GetNextResultToVerifyRequest
 * @return GetNextResultToVerifyResponse
 */
GetNextResultToVerifyResponse Client::getNextResultToVerify(const GetNextResultToVerifyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getNextResultToVerifyWithOptions(request, runtime);
}

/**
 * @param request GetPrecisionTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPrecisionTaskResponse
 */
GetPrecisionTaskResponse Client::getPrecisionTaskWithOptions(const GetPrecisionTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.baseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.jsonStr();
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
 * @param request GetPrecisionTaskRequest
 * @return GetPrecisionTaskResponse
 */
GetPrecisionTaskResponse Client::getPrecisionTask(const GetPrecisionTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPrecisionTaskWithOptions(request, runtime);
}

/**
 * @summary 获取质检方案
 *
 * @param request GetQualityCheckSchemeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetQualityCheckSchemeResponse
 */
GetQualityCheckSchemeResponse Client::getQualityCheckSchemeWithOptions(const GetQualityCheckSchemeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.baseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["jsonStr"] = request.jsonStr();
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
 * @summary 获取质检方案
 *
 * @param request GetQualityCheckSchemeRequest
 * @return GetQualityCheckSchemeResponse
 */
GetQualityCheckSchemeResponse Client::getQualityCheckScheme(const GetQualityCheckSchemeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getQualityCheckSchemeWithOptions(request, runtime);
}

/**
 * @param request GetResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetResultResponse
 */
GetResultResponse Client::getResultWithOptions(const GetResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.baseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.jsonStr();
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
 * @param request GetResultRequest
 * @return GetResultResponse
 */
GetResultResponse Client::getResult(const GetResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getResultWithOptions(request, runtime);
}

/**
 * @summary 获取质检结果详情用于复核
 *
 * @param request GetResultToReviewRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetResultToReviewResponse
 */
GetResultToReviewResponse Client::getResultToReviewWithOptions(const GetResultToReviewRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.baseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.jsonStr();
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
 * @summary 获取质检结果详情用于复核
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
 * @param request GetRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRuleResponse
 */
GetRuleResponse Client::getRuleWithOptions(const GetRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.baseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.jsonStr();
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
 * @summary 获取规则
 *
 * @param request GetRuleByIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRuleByIdResponse
 */
GetRuleByIdResponse Client::getRuleByIdWithOptions(const GetRuleByIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.baseMeAgentId();
  }

  json body = {};
  if (!!request.hasRuleId()) {
    body["RuleId"] = request.ruleId();
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
 * @summary 获取规则
 *
 * @param request GetRuleByIdRequest
 * @return GetRuleByIdResponse
 */
GetRuleByIdResponse Client::getRuleById(const GetRuleByIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRuleByIdWithOptions(request, runtime);
}

/**
 * @param request GetRuleCategoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRuleCategoryResponse
 */
GetRuleCategoryResponse Client::getRuleCategoryWithOptions(const GetRuleCategoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.baseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.jsonStr();
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
 * @param request GetRuleDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRuleDetailResponse
 */
GetRuleDetailResponse Client::getRuleDetailWithOptions(const GetRuleDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.baseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.jsonStr();
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
 * @param request GetRuleDetailRequest
 * @return GetRuleDetailResponse
 */
GetRuleDetailResponse Client::getRuleDetail(const GetRuleDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRuleDetailWithOptions(request, runtime);
}

/**
 * @summary V4获取规则
 *
 * @param request GetRuleV4Request
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRuleV4Response
 */
GetRuleV4Response Client::getRuleV4WithOptions(const GetRuleV4Request &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasRuleId()) {
    body["RuleId"] = request.ruleId();
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
 * @summary V4获取规则
 *
 * @param request GetRuleV4Request
 * @return GetRuleV4Response
 */
GetRuleV4Response Client::getRuleV4(const GetRuleV4Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRuleV4WithOptions(request, runtime);
}

/**
 * @summary 获得规则列表
 *
 * @param request GetRulesCountListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRulesCountListResponse
 */
GetRulesCountListResponse Client::getRulesCountListWithOptions(const GetRulesCountListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.baseMeAgentId();
  }

  json body = {};
  if (!!request.hasBusinessName()) {
    body["BusinessName"] = request.businessName();
  }

  if (!!request.hasBusinessRange()) {
    body["BusinessRange"] = request.businessRange();
  }

  if (!!request.hasCategoryName()) {
    body["CategoryName"] = request.categoryName();
  }

  if (!!request.hasCountTotal()) {
    body["CountTotal"] = request.countTotal();
  }

  if (!!request.hasCreateEmpid()) {
    body["CreateEmpid"] = request.createEmpid();
  }

  if (!!request.hasCreateUserId()) {
    body["CreateUserId"] = request.createUserId();
  }

  if (!!request.hasCurrentPage()) {
    body["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasEndTime()) {
    body["EndTime"] = request.endTime();
  }

  if (!!request.hasLastUpdateEmpid()) {
    body["LastUpdateEmpid"] = request.lastUpdateEmpid();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasRequireInfos()) {
    body["RequireInfos"] = request.requireInfos();
  }

  if (!!request.hasRid()) {
    body["Rid"] = request.rid();
  }

  if (!!request.hasRuleIdOrRuleName()) {
    body["RuleIdOrRuleName"] = request.ruleIdOrRuleName();
  }

  if (!!request.hasRuleScoreSingleType()) {
    body["RuleScoreSingleType"] = request.ruleScoreSingleType();
  }

  if (!!request.hasRuleType()) {
    body["RuleType"] = request.ruleType();
  }

  if (!!request.hasSchemeId()) {
    body["SchemeId"] = request.schemeId();
  }

  if (!!request.hasSourceType()) {
    body["SourceType"] = request.sourceType();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.startTime();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.status();
  }

  if (!!request.hasType()) {
    body["Type"] = request.type();
  }

  if (!!request.hasTypeName()) {
    body["TypeName"] = request.typeName();
  }

  if (!!request.hasUpdateEndTime()) {
    body["UpdateEndTime"] = request.updateEndTime();
  }

  if (!!request.hasUpdateStartTime()) {
    body["UpdateStartTime"] = request.updateStartTime();
  }

  if (!!request.hasUpdateUserId()) {
    body["UpdateUserId"] = request.updateUserId();
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
 * @summary 获得规则列表
 *
 * @param request GetRulesCountListRequest
 * @return GetRulesCountListResponse
 */
GetRulesCountListResponse Client::getRulesCountList(const GetRulesCountListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRulesCountListWithOptions(request, runtime);
}

/**
 * @summary 获取质检任务配置详情
 *
 * @param request GetSchemeTaskConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSchemeTaskConfigResponse
 */
GetSchemeTaskConfigResponse Client::getSchemeTaskConfigWithOptions(const GetSchemeTaskConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.baseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.jsonStr();
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
 * @summary 获取质检任务配置详情
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
 * @param request GetScoreInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetScoreInfoResponse
 */
GetScoreInfoResponse Client::getScoreInfoWithOptions(const GetScoreInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.baseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.jsonStr();
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
 * @param request GetSkillGroupConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSkillGroupConfigResponse
 */
GetSkillGroupConfigResponse Client::getSkillGroupConfigWithOptions(const GetSkillGroupConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.baseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.jsonStr();
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
 * @param request GetSyncResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSyncResultResponse
 */
GetSyncResultResponse Client::getSyncResultWithOptions(const GetSyncResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.baseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.jsonStr();
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
 * @param request GetSyncResultRequest
 * @return GetSyncResultResponse
 */
GetSyncResultResponse Client::getSyncResult(const GetSyncResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSyncResultWithOptions(request, runtime);
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
    query["BaseMeAgentId"] = request.baseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.jsonStr();
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
 * @param request HandleComplaintRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return HandleComplaintResponse
 */
HandleComplaintResponse Client::handleComplaintWithOptions(const HandleComplaintRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.baseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.jsonStr();
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
 * @param request InvalidRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return InvalidRuleResponse
 */
InvalidRuleResponse Client::invalidRuleWithOptions(const InvalidRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.baseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.jsonStr();
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
 * @param request InvalidRuleRequest
 * @return InvalidRuleResponse
 */
InvalidRuleResponse Client::invalidRule(const InvalidRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return invalidRuleWithOptions(request, runtime);
}

/**
 * @summary 获取热词模型列表
 *
 * @param request ListAsrVocabRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAsrVocabResponse
 */
ListAsrVocabResponse Client::listAsrVocabWithOptions(const ListAsrVocabRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.baseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.jsonStr();
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
 * @summary 获取热词模型列表
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
 * @summary 获取数据集列表
 *
 * @param request ListDataSetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataSetResponse
 */
ListDataSetResponse Client::listDataSetWithOptions(const ListDataSetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.baseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.jsonStr();
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
 * @summary 获取数据集列表
 *
 * @param request ListDataSetRequest
 * @return ListDataSetResponse
 */
ListDataSetResponse Client::listDataSet(const ListDataSetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataSetWithOptions(request, runtime);
}

/**
 * @param request ListPrecisionTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPrecisionTaskResponse
 */
ListPrecisionTaskResponse Client::listPrecisionTaskWithOptions(const ListPrecisionTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.baseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.jsonStr();
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
 * @param request ListPrecisionTaskRequest
 * @return ListPrecisionTaskResponse
 */
ListPrecisionTaskResponse Client::listPrecisionTask(const ListPrecisionTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPrecisionTaskWithOptions(request, runtime);
}

/**
 * @summary 质检方案列表
 *
 * @param request ListQualityCheckSchemeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListQualityCheckSchemeResponse
 */
ListQualityCheckSchemeResponse Client::listQualityCheckSchemeWithOptions(const ListQualityCheckSchemeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.baseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.jsonStr();
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
 * @summary 质检方案列表
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
 * @param request ListRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRulesResponse
 */
ListRulesResponse Client::listRulesWithOptions(const ListRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.baseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.jsonStr();
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
 * @param request ListRulesRequest
 * @return ListRulesResponse
 */
ListRulesResponse Client::listRules(const ListRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRulesWithOptions(request, runtime);
}

/**
 * @summary V4获得规则列表
 *
 * @param request ListRulesV4Request
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRulesV4Response
 */
ListRulesV4Response Client::listRulesV4WithOptions(const ListRulesV4Request &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.baseMeAgentId();
  }

  json body = {};
  if (!!request.hasBusinessName()) {
    body["BusinessName"] = request.businessName();
  }

  if (!!request.hasBusinessRange()) {
    body["BusinessRange"] = request.businessRange();
  }

  if (!!request.hasCategoryName()) {
    body["CategoryName"] = request.categoryName();
  }

  if (!!request.hasCountTotal()) {
    body["CountTotal"] = request.countTotal();
  }

  if (!!request.hasCreateEmpid()) {
    body["CreateEmpid"] = request.createEmpid();
  }

  if (!!request.hasCreateUserId()) {
    body["CreateUserId"] = request.createUserId();
  }

  if (!!request.hasCurrentPage()) {
    body["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasEndTime()) {
    body["EndTime"] = request.endTime();
  }

  if (!!request.hasLastUpdateEmpid()) {
    body["LastUpdateEmpid"] = request.lastUpdateEmpid();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasRequireInfos()) {
    body["RequireInfos"] = request.requireInfos();
  }

  if (!!request.hasRid()) {
    body["Rid"] = request.rid();
  }

  if (!!request.hasRuleIdOrRuleName()) {
    body["RuleIdOrRuleName"] = request.ruleIdOrRuleName();
  }

  if (!!request.hasRuleScoreSingleType()) {
    body["RuleScoreSingleType"] = request.ruleScoreSingleType();
  }

  if (!!request.hasRuleType()) {
    body["RuleType"] = request.ruleType();
  }

  if (!!request.hasSchemeId()) {
    body["SchemeId"] = request.schemeId();
  }

  if (!!request.hasSourceType()) {
    body["SourceType"] = request.sourceType();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.startTime();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.status();
  }

  if (!!request.hasType()) {
    body["Type"] = request.type();
  }

  if (!!request.hasTypeName()) {
    body["TypeName"] = request.typeName();
  }

  if (!!request.hasUpdateEndTime()) {
    body["UpdateEndTime"] = request.updateEndTime();
  }

  if (!!request.hasUpdateStartTime()) {
    body["UpdateStartTime"] = request.updateStartTime();
  }

  if (!!request.hasUpdateUserId()) {
    body["UpdateUserId"] = request.updateUserId();
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
 * @summary V4获得规则列表
 *
 * @param request ListRulesV4Request
 * @return ListRulesV4Response
 */
ListRulesV4Response Client::listRulesV4(const ListRulesV4Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRulesV4WithOptions(request, runtime);
}

/**
 * @summary 获取质检任务列表
 *
 * @param request ListSchemeTaskConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSchemeTaskConfigResponse
 */
ListSchemeTaskConfigResponse Client::listSchemeTaskConfigWithOptions(const ListSchemeTaskConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.baseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["jsonStr"] = request.jsonStr();
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
 * @summary 获取质检任务列表
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
 * @summary 获取会话组列表
 *
 * @param request ListSessionGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSessionGroupResponse
 */
ListSessionGroupResponse Client::listSessionGroupWithOptions(const ListSessionGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.baseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["jsonStr"] = request.jsonStr();
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
 * @summary 获取会话组列表
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
 * @param request ListSkillGroupConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSkillGroupConfigResponse
 */
ListSkillGroupConfigResponse Client::listSkillGroupConfigWithOptions(const ListSkillGroupConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.baseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.jsonStr();
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
 * @param request ListSkillGroupConfigRequest
 * @return ListSkillGroupConfigResponse
 */
ListSkillGroupConfigResponse Client::listSkillGroupConfig(const ListSkillGroupConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSkillGroupConfigWithOptions(request, runtime);
}

/**
 * @param request ListTaskAssignRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTaskAssignRulesResponse
 */
ListTaskAssignRulesResponse Client::listTaskAssignRulesWithOptions(const ListTaskAssignRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.baseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.jsonStr();
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
 * @param request ListTaskAssignRulesRequest
 * @return ListTaskAssignRulesResponse
 */
ListTaskAssignRulesResponse Client::listTaskAssignRules(const ListTaskAssignRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTaskAssignRulesWithOptions(request, runtime);
}

/**
 * @param request ListUsersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUsersResponse
 */
ListUsersResponse Client::listUsersWithOptions(const ListUsersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.baseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.jsonStr();
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
 * @param request ListUsersRequest
 * @return ListUsersResponse
 */
ListUsersResponse Client::listUsers(const ListUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUsersWithOptions(request, runtime);
}

/**
 * @param request ListWarningConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListWarningConfigResponse
 */
ListWarningConfigResponse Client::listWarningConfigWithOptions(const ListWarningConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.baseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.jsonStr();
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
    query["BaseMeAgentId"] = request.baseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.jsonStr();
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
 * @summary 批量回收
 *
 * @param request RevertAssignedSessionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RevertAssignedSessionResponse
 */
RevertAssignedSessionResponse Client::revertAssignedSessionWithOptions(const RevertAssignedSessionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.baseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["jsonStr"] = request.jsonStr();
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
 * @summary 批量回收
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
 * @summary 会话组批量回收
 *
 * @param request RevertAssignedSessionGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RevertAssignedSessionGroupResponse
 */
RevertAssignedSessionGroupResponse Client::revertAssignedSessionGroupWithOptions(const RevertAssignedSessionGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.baseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["jsonStr"] = request.jsonStr();
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
 * @summary 会话组批量回收
 *
 * @param request RevertAssignedSessionGroupRequest
 * @return RevertAssignedSessionGroupResponse
 */
RevertAssignedSessionGroupResponse Client::revertAssignedSessionGroup(const RevertAssignedSessionGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return revertAssignedSessionGroupWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI SaveConfigDataSet is deprecated
 *
 * @param request SaveConfigDataSetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveConfigDataSetResponse
 */
SaveConfigDataSetResponse Client::saveConfigDataSetWithOptions(const SaveConfigDataSetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.baseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.jsonStr();
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
 * @param request SaveConfigDataSetRequest
 * @return SaveConfigDataSetResponse
 */
SaveConfigDataSetResponse Client::saveConfigDataSet(const SaveConfigDataSetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveConfigDataSetWithOptions(request, runtime);
}

/**
 * @param request SubmitComplaintRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitComplaintResponse
 */
SubmitComplaintResponse Client::submitComplaintWithOptions(const SubmitComplaintRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.baseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.jsonStr();
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
 * @param request SubmitComplaintRequest
 * @return SubmitComplaintResponse
 */
SubmitComplaintResponse Client::submitComplaint(const SubmitComplaintRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitComplaintWithOptions(request, runtime);
}

/**
 * @param request SubmitPrecisionTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitPrecisionTaskResponse
 */
SubmitPrecisionTaskResponse Client::submitPrecisionTaskWithOptions(const SubmitPrecisionTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.baseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.jsonStr();
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
 * @param request SubmitPrecisionTaskRequest
 * @return SubmitPrecisionTaskResponse
 */
SubmitPrecisionTaskResponse Client::submitPrecisionTask(const SubmitPrecisionTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitPrecisionTaskWithOptions(request, runtime);
}

/**
 * @param request SubmitQualityCheckTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitQualityCheckTaskResponse
 */
SubmitQualityCheckTaskResponse Client::submitQualityCheckTaskWithOptions(const SubmitQualityCheckTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.baseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.jsonStr();
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
 * @param request SubmitQualityCheckTaskRequest
 * @return SubmitQualityCheckTaskResponse
 */
SubmitQualityCheckTaskResponse Client::submitQualityCheckTask(const SubmitQualityCheckTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitQualityCheckTaskWithOptions(request, runtime);
}

/**
 * @param request SubmitReviewInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitReviewInfoResponse
 */
SubmitReviewInfoResponse Client::submitReviewInfoWithOptions(const SubmitReviewInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.baseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.jsonStr();
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
 * @param request SubmitReviewInfoRequest
 * @return SubmitReviewInfoResponse
 */
SubmitReviewInfoResponse Client::submitReviewInfo(const SubmitReviewInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitReviewInfoWithOptions(request, runtime);
}

/**
 * @summary 提交复核结果v4
 *
 * @param request SubmitReviewInfoV4Request
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitReviewInfoV4Response
 */
SubmitReviewInfoV4Response Client::submitReviewInfoV4WithOptions(const SubmitReviewInfoV4Request &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBaseMeAgentId()) {
    body["BaseMeAgentId"] = request.baseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    body["JsonStr"] = request.jsonStr();
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
 * @summary 提交复核结果v4
 *
 * @param request SubmitReviewInfoV4Request
 * @return SubmitReviewInfoV4Response
 */
SubmitReviewInfoV4Response Client::submitReviewInfoV4(const SubmitReviewInfoV4Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitReviewInfoV4WithOptions(request, runtime);
}

/**
 * @param request SyncQualityCheckRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SyncQualityCheckResponse
 */
SyncQualityCheckResponse Client::syncQualityCheckWithOptions(const SyncQualityCheckRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.baseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.jsonStr();
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
 * @param request SyncQualityCheckRequest
 * @return SyncQualityCheckResponse
 */
SyncQualityCheckResponse Client::syncQualityCheck(const SyncQualityCheckRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return syncQualityCheckWithOptions(request, runtime);
}

/**
 * @summary 测试规则
 *
 * @param request TestRuleV4Request
 * @param runtime runtime options for this request RuntimeOptions
 * @return TestRuleV4Response
 */
TestRuleV4Response Client::testRuleV4WithOptions(const TestRuleV4Request &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasIsSchemeData()) {
    body["IsSchemeData"] = request.isSchemeData();
  }

  if (!!request.hasTestJson()) {
    body["TestJson"] = request.testJson();
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
 * @summary 测试规则
 *
 * @param request TestRuleV4Request
 * @return TestRuleV4Response
 */
TestRuleV4Response Client::testRuleV4(const TestRuleV4Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return testRuleV4WithOptions(request, runtime);
}

/**
 * @param request UpdateAsrVocabRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAsrVocabResponse
 */
UpdateAsrVocabResponse Client::updateAsrVocabWithOptions(const UpdateAsrVocabRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.baseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.jsonStr();
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
 * @param request UpdateAsrVocabRequest
 * @return UpdateAsrVocabResponse
 */
UpdateAsrVocabResponse Client::updateAsrVocab(const UpdateAsrVocabRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAsrVocabWithOptions(request, runtime);
}

/**
 * @summary 更新质检方案中的质检维度
 *
 * @param request UpdateCheckTypeToSchemeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCheckTypeToSchemeResponse
 */
UpdateCheckTypeToSchemeResponse Client::updateCheckTypeToSchemeWithOptions(const UpdateCheckTypeToSchemeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.baseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["jsonStr"] = request.jsonStr();
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
 * @summary 更新质检方案中的质检维度
 *
 * @param request UpdateCheckTypeToSchemeRequest
 * @return UpdateCheckTypeToSchemeResponse
 */
UpdateCheckTypeToSchemeResponse Client::updateCheckTypeToScheme(const UpdateCheckTypeToSchemeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateCheckTypeToSchemeWithOptions(request, runtime);
}

/**
 * @summary 更新会话随录数据
 *
 * @param request UpdateQualityCheckDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateQualityCheckDataResponse
 */
UpdateQualityCheckDataResponse Client::updateQualityCheckDataWithOptions(const UpdateQualityCheckDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.baseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.jsonStr();
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
 * @summary 更新会话随录数据
 *
 * @param request UpdateQualityCheckDataRequest
 * @return UpdateQualityCheckDataResponse
 */
UpdateQualityCheckDataResponse Client::updateQualityCheckData(const UpdateQualityCheckDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateQualityCheckDataWithOptions(request, runtime);
}

/**
 * @summary 更新质检方案
 *
 * @param request UpdateQualityCheckSchemeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateQualityCheckSchemeResponse
 */
UpdateQualityCheckSchemeResponse Client::updateQualityCheckSchemeWithOptions(const UpdateQualityCheckSchemeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.baseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["jsonStr"] = request.jsonStr();
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
 * @summary 更新质检方案
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
 * @param request UpdateRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateRuleResponse
 */
UpdateRuleResponse Client::updateRuleWithOptions(const UpdateRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.baseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.jsonStr();
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
 * @summary 更新规则
 *
 * @param request UpdateRuleByIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateRuleByIdResponse
 */
UpdateRuleByIdResponse Client::updateRuleByIdWithOptions(const UpdateRuleByIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.baseMeAgentId();
  }

  json body = {};
  if (!!request.hasIsCopy()) {
    body["IsCopy"] = request.isCopy();
  }

  if (!!request.hasJsonStrForRule()) {
    body["JsonStrForRule"] = request.jsonStrForRule();
  }

  if (!!request.hasReturnRelatedSchemes()) {
    body["ReturnRelatedSchemes"] = request.returnRelatedSchemes();
  }

  if (!!request.hasRuleId()) {
    body["RuleId"] = request.ruleId();
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
 * @summary 更新规则
 *
 * @param request UpdateRuleByIdRequest
 * @return UpdateRuleByIdResponse
 */
UpdateRuleByIdResponse Client::updateRuleById(const UpdateRuleByIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateRuleByIdWithOptions(request, runtime);
}

/**
 * @summary 更新质检方案的规则
 *
 * @param request UpdateRuleToSchemeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateRuleToSchemeResponse
 */
UpdateRuleToSchemeResponse Client::updateRuleToSchemeWithOptions(const UpdateRuleToSchemeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.baseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["jsonStr"] = request.jsonStr();
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
 * @summary 更新质检方案的规则
 *
 * @param request UpdateRuleToSchemeRequest
 * @return UpdateRuleToSchemeResponse
 */
UpdateRuleToSchemeResponse Client::updateRuleToScheme(const UpdateRuleToSchemeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateRuleToSchemeWithOptions(request, runtime);
}

/**
 * @summary V4更新规则
 *
 * @param request UpdateRuleV4Request
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateRuleV4Response
 */
UpdateRuleV4Response Client::updateRuleV4WithOptions(const UpdateRuleV4Request &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.baseMeAgentId();
  }

  json body = {};
  if (!!request.hasJsonStrForRule()) {
    body["JsonStrForRule"] = request.jsonStrForRule();
  }

  if (!!request.hasRuleId()) {
    body["RuleId"] = request.ruleId();
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
 * @summary V4更新规则
 *
 * @param request UpdateRuleV4Request
 * @return UpdateRuleV4Response
 */
UpdateRuleV4Response Client::updateRuleV4(const UpdateRuleV4Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateRuleV4WithOptions(request, runtime);
}

/**
 * @summary 更新质检任务
 *
 * @param request UpdateSchemeTaskConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSchemeTaskConfigResponse
 */
UpdateSchemeTaskConfigResponse Client::updateSchemeTaskConfigWithOptions(const UpdateSchemeTaskConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.baseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["jsonStr"] = request.jsonStr();
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
 * @summary 更新质检任务
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
 * @param request UpdateSkillGroupConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSkillGroupConfigResponse
 */
UpdateSkillGroupConfigResponse Client::updateSkillGroupConfigWithOptions(const UpdateSkillGroupConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.baseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.jsonStr();
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
 * @param request UpdateSkillGroupConfigRequest
 * @return UpdateSkillGroupConfigResponse
 */
UpdateSkillGroupConfigResponse Client::updateSkillGroupConfig(const UpdateSkillGroupConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateSkillGroupConfigWithOptions(request, runtime);
}

/**
 * @param request UpdateSyncQualityCheckDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSyncQualityCheckDataResponse
 */
UpdateSyncQualityCheckDataResponse Client::updateSyncQualityCheckDataWithOptions(const UpdateSyncQualityCheckDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.baseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.jsonStr();
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
 * @param request UpdateSyncQualityCheckDataRequest
 * @return UpdateSyncQualityCheckDataResponse
 */
UpdateSyncQualityCheckDataResponse Client::updateSyncQualityCheckData(const UpdateSyncQualityCheckDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateSyncQualityCheckDataWithOptions(request, runtime);
}

/**
 * @param request UpdateTaskAssignRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTaskAssignRuleResponse
 */
UpdateTaskAssignRuleResponse Client::updateTaskAssignRuleWithOptions(const UpdateTaskAssignRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.baseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.jsonStr();
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
 * @param request UpdateTaskAssignRuleRequest
 * @return UpdateTaskAssignRuleResponse
 */
UpdateTaskAssignRuleResponse Client::updateTaskAssignRule(const UpdateTaskAssignRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateTaskAssignRuleWithOptions(request, runtime);
}

/**
 * @param request UpdateUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateUserResponse
 */
UpdateUserResponse Client::updateUserWithOptions(const UpdateUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.baseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.jsonStr();
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
 * @param request UpdateUserRequest
 * @return UpdateUserResponse
 */
UpdateUserResponse Client::updateUser(const UpdateUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateUserWithOptions(request, runtime);
}

/**
 * @param request UpdateWarningConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateWarningConfigResponse
 */
UpdateWarningConfigResponse Client::updateWarningConfigWithOptions(const UpdateWarningConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.baseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.jsonStr();
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
    query["BaseMeAgentId"] = request.baseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.jsonStr();
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
 * @param request UploadAudioDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UploadAudioDataResponse
 */
UploadAudioDataResponse Client::uploadAudioDataWithOptions(const UploadAudioDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.baseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.jsonStr();
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
 * @summary 推荐使用UploadDataV4接口,支持更长的JsonStr,但仅支持POST方法.
 *
 * @param request UploadDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UploadDataResponse
 */
UploadDataResponse Client::uploadDataWithOptions(const UploadDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.baseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.jsonStr();
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
 * @summary 推荐使用UploadDataV4接口,支持更长的JsonStr,但仅支持POST方法.
 *
 * @param request UploadDataRequest
 * @return UploadDataResponse
 */
UploadDataResponse Client::uploadData(const UploadDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return uploadDataWithOptions(request, runtime);
}

/**
 * @summary http_hsf
 *
 * @param request UploadDataSyncRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UploadDataSyncResponse
 */
UploadDataSyncResponse Client::uploadDataSyncWithOptions(const UploadDataSyncRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.baseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.jsonStr();
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
 * @summary http_hsf
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
    query["BaseMeAgentId"] = request.baseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.jsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
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
 * @summary UploadDataV4
 *
 * @param request UploadDataV4Request
 * @param runtime runtime options for this request RuntimeOptions
 * @return UploadDataV4Response
 */
UploadDataV4Response Client::uploadDataV4WithOptions(const UploadDataV4Request &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBaseMeAgentId()) {
    body["BaseMeAgentId"] = request.baseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    body["JsonStr"] = request.jsonStr();
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
 * @summary UploadDataV4
 *
 * @param request UploadDataV4Request
 * @return UploadDataV4Response
 */
UploadDataV4Response Client::uploadDataV4(const UploadDataV4Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return uploadDataV4WithOptions(request, runtime);
}

/**
 * @param request UploadRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UploadRuleResponse
 */
UploadRuleResponse Client::uploadRuleWithOptions(const UploadRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.baseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.jsonStr();
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
 * @param request UploadRuleRequest
 * @return UploadRuleResponse
 */
UploadRuleResponse Client::uploadRule(const UploadRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return uploadRuleWithOptions(request, runtime);
}

/**
 * @param request VerifyFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return VerifyFileResponse
 */
VerifyFileResponse Client::verifyFileWithOptions(const VerifyFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.baseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.jsonStr();
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
 * @param request VerifyFileRequest
 * @return VerifyFileResponse
 */
VerifyFileResponse Client::verifyFile(const VerifyFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return verifyFileWithOptions(request, runtime);
}

/**
 * @param request VerifySentenceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return VerifySentenceResponse
 */
VerifySentenceResponse Client::verifySentenceWithOptions(const VerifySentenceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseMeAgentId()) {
    query["BaseMeAgentId"] = request.baseMeAgentId();
  }

  if (!!request.hasJsonStr()) {
    query["JsonStr"] = request.jsonStr();
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
 * @param request VerifySentenceRequest
 * @return VerifySentenceResponse
 */
VerifySentenceResponse Client::verifySentence(const VerifySentenceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return verifySentenceWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115