#include <darabonba/Core.hpp>
#include <alibabacloud/PAIModelGallery20250630.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/gateway/POP.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
#include <darabonba/encode/Encoder.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::Gateway;
using namespace AlibabaCloud::OpenApi;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::PAIModelGallery20250630::Models;
namespace AlibabaCloud
{
namespace PAIModelGallery20250630
{

AlibabaCloud::PAIModelGallery20250630::Client::Client(Config &config): OpenApiClient(config){
  this->_productId = "PAIModelGallery";
  shared_ptr<POP> gatewayClient = make_shared<POP>();
  this->_spi = gatewayClient;
  this->_endpointRule = "regional";
  checkConfig(config);
  this->_endpoint = getEndpoint("paimodelgallery", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 创建任务计划。
 *
 * @param request CreateJobPlanRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateJobPlanResponse
 */
CreateJobPlanResponse Client::createJobPlanWithOptions(const CreateJobPlanRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasJobPlanName()) {
    body["JobPlanName"] = request.getJobPlanName();
  }

  if (!!request.hasJobPlanSteps()) {
    body["JobPlanSteps"] = request.getJobPlanSteps();
  }

  if (!!request.hasJobPlanType()) {
    body["JobPlanType"] = request.getJobPlanType();
  }

  if (!!request.hasTag()) {
    body["Tag"] = request.getTag();
  }

  if (!!request.hasTemplateId()) {
    body["TemplateId"] = request.getTemplateId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateJobPlan"},
    {"version" , "2025-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/jobplans")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateJobPlanResponse>();
}

/**
 * @summary 创建任务计划。
 *
 * @param request CreateJobPlanRequest
 * @return CreateJobPlanResponse
 */
CreateJobPlanResponse Client::createJobPlan(const CreateJobPlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createJobPlanWithOptions(request, headers, runtime);
}

/**
 * @summary 删除任务计划。
 *
 * @param request DeleteJobPlanRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteJobPlanResponse
 */
DeleteJobPlanResponse Client::deleteJobPlanWithOptions(const string &JobPlanId, const DeleteJobPlanRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteJobPlan"},
    {"version" , "2025-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/jobplans/" , Darabonba::Encode::Encoder::percentEncode(JobPlanId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteJobPlanResponse>();
}

/**
 * @summary 删除任务计划。
 *
 * @param request DeleteJobPlanRequest
 * @return DeleteJobPlanResponse
 */
DeleteJobPlanResponse Client::deleteJobPlan(const string &JobPlanId, const DeleteJobPlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteJobPlanWithOptions(JobPlanId, request, headers, runtime);
}

/**
 * @summary 查询蒸馏模板详情。
 *
 * @param request GetDistillationTemplateRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDistillationTemplateResponse
 */
GetDistillationTemplateResponse Client::getDistillationTemplateWithOptions(const string &TemplateId, const GetDistillationTemplateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDistillationTemplate"},
    {"version" , "2025-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/distillationtemplates/" , Darabonba::Encode::Encoder::percentEncode(TemplateId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDistillationTemplateResponse>();
}

/**
 * @summary 查询蒸馏模板详情。
 *
 * @param request GetDistillationTemplateRequest
 * @return GetDistillationTemplateResponse
 */
GetDistillationTemplateResponse Client::getDistillationTemplate(const string &TemplateId, const GetDistillationTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getDistillationTemplateWithOptions(TemplateId, request, headers, runtime);
}

/**
 * @summary 获取任务计划。
 *
 * @param request GetJobPlanRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetJobPlanResponse
 */
GetJobPlanResponse Client::getJobPlanWithOptions(const string &JobPlanId, const GetJobPlanRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetJobPlan"},
    {"version" , "2025-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/jobplans/" , Darabonba::Encode::Encoder::percentEncode(JobPlanId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetJobPlanResponse>();
}

/**
 * @summary 获取任务计划。
 *
 * @param request GetJobPlanRequest
 * @return GetJobPlanResponse
 */
GetJobPlanResponse Client::getJobPlan(const string &JobPlanId, const GetJobPlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getJobPlanWithOptions(JobPlanId, request, headers, runtime);
}

/**
 * @summary 查询蒸馏模板列表。
 *
 * @param request ListDistillationTemplatesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDistillationTemplatesResponse
 */
ListDistillationTemplatesResponse Client::listDistillationTemplatesWithOptions(const ListDistillationTemplatesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCategory()) {
    query["Category"] = request.getCategory();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.getKeyword();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  if (!!request.hasTemplateKind()) {
    query["TemplateKind"] = request.getTemplateKind();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDistillationTemplates"},
    {"version" , "2025-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/distillationtemplates")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDistillationTemplatesResponse>();
}

/**
 * @summary 查询蒸馏模板列表。
 *
 * @param request ListDistillationTemplatesRequest
 * @return ListDistillationTemplatesResponse
 */
ListDistillationTemplatesResponse Client::listDistillationTemplates(const ListDistillationTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listDistillationTemplatesWithOptions(request, headers, runtime);
}

/**
 * @summary 获取任务计划列表。
 *
 * @param tmpReq ListJobPlansRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListJobPlansResponse
 */
ListJobPlansResponse Client::listJobPlansWithOptions(const ListJobPlansRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListJobPlansShrinkRequest request = ListJobPlansShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTag()) {
    request.setTagShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTag(), "Tag", "json"));
  }

  json query = {};
  if (!!request.hasHasTemplate()) {
    query["HasTemplate"] = request.getHasTemplate();
  }

  if (!!request.hasJobPlanName()) {
    query["JobPlanName"] = request.getJobPlanName();
  }

  if (!!request.hasJobPlanType()) {
    query["JobPlanType"] = request.getJobPlanType();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  if (!!request.hasTagShrink()) {
    query["Tag"] = request.getTagShrink();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListJobPlans"},
    {"version" , "2025-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/jobplans")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListJobPlansResponse>();
}

/**
 * @summary 获取任务计划列表。
 *
 * @param request ListJobPlansRequest
 * @return ListJobPlansResponse
 */
ListJobPlansResponse Client::listJobPlans(const ListJobPlansRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listJobPlansWithOptions(request, headers, runtime);
}

/**
 * @summary 获取ModelGallery模型列表
 *
 * @param tmpReq ListModelGalleryModelsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListModelGalleryModelsResponse
 */
ListModelGalleryModelsResponse Client::listModelGalleryModelsWithOptions(const ListModelGalleryModelsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListModelGalleryModelsShrinkRequest request = ListModelGalleryModelsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasConditions()) {
    request.setConditionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getConditions(), "Conditions", "json"));
  }

  if (!!tmpReq.hasTag()) {
    request.setTagShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTag(), "Tag", "json"));
  }

  json query = {};
  if (!!request.hasCollections()) {
    query["Collections"] = request.getCollections();
  }

  if (!!request.hasCompressible()) {
    query["Compressible"] = request.getCompressible();
  }

  if (!!request.hasConditionsShrink()) {
    query["Conditions"] = request.getConditionsShrink();
  }

  if (!!request.hasDeepThink()) {
    query["DeepThink"] = request.getDeepThink();
  }

  if (!!request.hasDemonstrable()) {
    query["Demonstrable"] = request.getDemonstrable();
  }

  if (!!request.hasDeployable()) {
    query["Deployable"] = request.getDeployable();
  }

  if (!!request.hasDistillable()) {
    query["Distillable"] = request.getDistillable();
  }

  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasEvaluable()) {
    query["Evaluable"] = request.getEvaluable();
  }

  if (!!request.hasFunctionCall()) {
    query["FunctionCall"] = request.getFunctionCall();
  }

  if (!!request.hasModelName()) {
    query["ModelName"] = request.getModelName();
  }

  if (!!request.hasModelSeries()) {
    query["ModelSeries"] = request.getModelSeries();
  }

  if (!!request.hasModelType()) {
    query["ModelType"] = request.getModelType();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasOrigin()) {
    query["Origin"] = request.getOrigin();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasQuery()) {
    query["Query"] = request.getQuery();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  if (!!request.hasSupportedCompressionResource()) {
    query["SupportedCompressionResource"] = request.getSupportedCompressionResource();
  }

  if (!!request.hasSupportedDistillationResource()) {
    query["SupportedDistillationResource"] = request.getSupportedDistillationResource();
  }

  if (!!request.hasSupportedEvaluationResource()) {
    query["SupportedEvaluationResource"] = request.getSupportedEvaluationResource();
  }

  if (!!request.hasSupportedInferenceResource()) {
    query["SupportedInferenceResource"] = request.getSupportedInferenceResource();
  }

  if (!!request.hasSupportedTrainingResource()) {
    query["SupportedTrainingResource"] = request.getSupportedTrainingResource();
  }

  if (!!request.hasTagShrink()) {
    query["Tag"] = request.getTagShrink();
  }

  if (!!request.hasTask()) {
    query["Task"] = request.getTask();
  }

  if (!!request.hasTrainable()) {
    query["Trainable"] = request.getTrainable();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListModelGalleryModels"},
    {"version" , "2025-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/modelgallery/models")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListModelGalleryModelsResponse>();
}

/**
 * @summary 获取ModelGallery模型列表
 *
 * @param request ListModelGalleryModelsRequest
 * @return ListModelGalleryModelsResponse
 */
ListModelGalleryModelsResponse Client::listModelGalleryModels(const ListModelGalleryModelsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listModelGalleryModelsWithOptions(request, headers, runtime);
}

/**
 * @summary 更新任务计划。
 *
 * @param request UpdateJobPlanRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateJobPlanResponse
 */
UpdateJobPlanResponse Client::updateJobPlanWithOptions(const string &JobPlanId, const UpdateJobPlanRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasJobPlanCurrentStep()) {
    body["JobPlanCurrentStep"] = request.getJobPlanCurrentStep();
  }

  if (!!request.hasTag()) {
    body["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateJobPlan"},
    {"version" , "2025-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/jobplans/" , Darabonba::Encode::Encoder::percentEncode(JobPlanId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateJobPlanResponse>();
}

/**
 * @summary 更新任务计划。
 *
 * @param request UpdateJobPlanRequest
 * @return UpdateJobPlanResponse
 */
UpdateJobPlanResponse Client::updateJobPlan(const string &JobPlanId, const UpdateJobPlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateJobPlanWithOptions(JobPlanId, request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace PAIModelGallery20250630