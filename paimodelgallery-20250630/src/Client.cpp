#include <darabonba/Core.hpp>
#include <alibabacloud/PAIModelGallery20250630.hpp>
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
using namespace AlibabaCloud::PAIModelGallery20250630::Models;
namespace AlibabaCloud
{
namespace PAIModelGallery20250630
{

AlibabaCloud::PAIModelGallery20250630::Client::Client(Config &config): OpenApiClient(config){
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
 * @summary Creates a new job plan that supports task types such as distillation.
 *
 * @description ## Operation description
 * - This API operation creates a new node plan. You can specify the workspace ID, node plan type, name, and steps.
 * - If you use a scenario-specific distillation template, provide the `TemplateId` parameter and make sure that `JobPlanSteps` contains distillation configurations that match the template.
 * - The `Tag` parameter follows the Alibaba Cloud label system specification and is used to add additional identity information to the node plan.
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
 * @summary Creates a new job plan that supports task types such as distillation.
 *
 * @description ## Operation description
 * - This API operation creates a new node plan. You can specify the workspace ID, node plan type, name, and steps.
 * - If you use a scenario-specific distillation template, provide the `TemplateId` parameter and make sure that `JobPlanSteps` contains distillation configurations that match the template.
 * - The `Tag` parameter follows the Alibaba Cloud label system specification and is used to add additional identity information to the node plan.
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
 * @summary Deletes a specified task plan by task plan ID.
 *
 * @description ## Operation description.
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
 * @summary Deletes a specified task plan by task plan ID.
 *
 * @description ## Operation description.
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
 * @summary Retrieves the details of a specified distillation template, including preset configurations and default YAML.
 *
 * @description ## Operation description
 * - This API operation queries the full details of a specific distillation template to facilitate rendering the creation form.
 * - The template ID is a required parameter, obtained from the `ListDistillationTemplates` operation.
 * - The `DefaultConfig` field provides the complete EasyDistill configuration YAML (with comments). All paths in the YAML are relative paths, and callers do not need to perform absolute path conversion or string replacement.
 * - All translatable fields are automatically parsed into the corresponding language version based on the `x-acs-accept-language` request header.
 * - If the `TrainingOptions` field is missing, the template supports only the first stage of processing. Attempts to use such a template to create a task that includes the second stage will fail.
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
 * @summary Retrieves the details of a specified distillation template, including preset configurations and default YAML.
 *
 * @description ## Operation description
 * - This API operation queries the full details of a specific distillation template to facilitate rendering the creation form.
 * - The template ID is a required parameter, obtained from the `ListDistillationTemplates` operation.
 * - The `DefaultConfig` field provides the complete EasyDistill configuration YAML (with comments). All paths in the YAML are relative paths, and callers do not need to perform absolute path conversion or string replacement.
 * - All translatable fields are automatically parsed into the corresponding language version based on the `x-acs-accept-language` request header.
 * - If the `TrainingOptions` field is missing, the template supports only the first stage of processing. Attempts to use such a template to create a task that includes the second stage will fail.
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
 * @summary Queries the details of a specified job plan by job plan ID.
 *
 * @description ## Description
 * This API operation retrieves the details of a job plan based on the specified job plan ID (`JobPlanId`), including but not limited to the name, type, and current step status of the job plan. Make sure the `JobPlanId` provided in the request is valid and belongs to your workspace.
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
 * @summary Queries the details of a specified job plan by job plan ID.
 *
 * @description ## Description
 * This API operation retrieves the details of a job plan based on the specified job plan ID (`JobPlanId`), including but not limited to the name, type, and current step status of the job plan. Make sure the `JobPlanId` provided in the request is valid and belongs to your workspace.
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
 * @summary Retrieves summary information of distillation templates for rendering the template card list.
 *
 * @description ## Operation description
 * - This operation supports filtered queries by using the TemplateId, Category, and Keyword parameters.
 * - Pagination is controlled by the PageNumber and PageSize parameters, consistent with other paginated operations of the same service.
 * - Templates are public resources that do not belong to any workspace. Therefore, you do not need to specify WorkspaceId.
 * - All translatable fields such as TemplateName and Description are automatically parsed into the corresponding language version based on the x-acs-accept-language request header.
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
 * @summary Retrieves summary information of distillation templates for rendering the template card list.
 *
 * @description ## Operation description
 * - This operation supports filtered queries by using the TemplateId, Category, and Keyword parameters.
 * - Pagination is controlled by the PageNumber and PageSize parameters, consistent with other paginated operations of the same service.
 * - Templates are public resources that do not belong to any workspace. Therefore, you do not need to specify WorkspaceId.
 * - All translatable fields such as TemplateName and Description are automatically parsed into the corresponding language version based on the x-acs-accept-language request header.
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
 * @summary Retrieves the list of job plans in a specified workspace.
 *
 * @description ## Operation description
 * - `WorkspaceId` is a required parameter that specifies the workspace to which the job plans belong.
 * - The `Tag` parameter must be encoded by using `EncodeURI` before being passed.
 * - If both `TemplateId` and `HasTemplate` are specified, the value of `TemplateId` takes precedence for filtering.
 * - `JobPlanName` supports exact match. Enclose the specific name in quotation marks.
 * - By default, results are sorted in descending order by creation time (`GmtCreateTime`). Set the `Order` parameter to `ASC` to change the sort order.
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
 * @summary Retrieves the list of job plans in a specified workspace.
 *
 * @description ## Operation description
 * - `WorkspaceId` is a required parameter that specifies the workspace to which the job plans belong.
 * - The `Tag` parameter must be encoded by using `EncodeURI` before being passed.
 * - If both `TemplateId` and `HasTemplate` are specified, the value of `TemplateId` takes precedence for filtering.
 * - `JobPlanName` supports exact match. Enclose the specific name in quotation marks.
 * - By default, results are sorted in descending order by creation time (`GmtCreateTime`). Set the `Order` parameter to `ASC` to change the sort order.
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
 * @summary Retrieves the list of models from ModelGallery (deprecated, use the 2026-06-03 version instead).
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
 * @summary Retrieves the list of models from ModelGallery (deprecated, use the 2026-06-03 version instead).
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
 * @summary Updates the current step and tag information of a specified task plan.
 *
 * @description ## Request description
 * You can use this API operation to update the current execution step (`JobPlanCurrentStep`) and related tags (`Tag`) of a specific task plan identified by `JobPlanId`. If the request contains tag information, tags are updated or added based on the provided key-value pairs.
 * - **JobPlanId** is a path parameter. You must provide a valid task plan ID.
 * - **JobPlanCurrentStep** is an optional parameter that specifies the new current step of the task.
 * - **Tag** is an optional parameter that specifies a list of key-value pairs used to label the task plan. Each tag consists of a `Key` and a `Value`.
 * Note: Ensure that the `JobPlanId` you provide exists and that you have the permissions to modify it.
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
 * @summary Updates the current step and tag information of a specified task plan.
 *
 * @description ## Request description
 * You can use this API operation to update the current execution step (`JobPlanCurrentStep`) and related tags (`Tag`) of a specific task plan identified by `JobPlanId`. If the request contains tag information, tags are updated or added based on the provided key-value pairs.
 * - **JobPlanId** is a path parameter. You must provide a valid task plan ID.
 * - **JobPlanCurrentStep** is an optional parameter that specifies the new current step of the task.
 * - **Tag** is an optional parameter that specifies a list of key-value pairs used to label the task plan. Each tag consists of a `Key` and a `Value`.
 * Note: Ensure that the `JobPlanId` you provide exists and that you have the permissions to modify it.
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