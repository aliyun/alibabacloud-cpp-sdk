// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_PAIMODELGALLERY20250630_HPP_
#define ALIBABACLOUD_PAIMODELGALLERY20250630_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/PAIModelGallery20250630Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/PAIModelGallery20250630.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAIModelGallery20250630
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

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
      Models::CreateJobPlanResponse createJobPlanWithOptions(const Models::CreateJobPlanRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

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
      Models::CreateJobPlanResponse createJobPlan(const Models::CreateJobPlanRequest &request);

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
      Models::DeleteJobPlanResponse deleteJobPlanWithOptions(const string &JobPlanId, const Models::DeleteJobPlanRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified task plan by task plan ID.
       *
       * @description ## Operation description.
       *
       * @param request DeleteJobPlanRequest
       * @return DeleteJobPlanResponse
       */
      Models::DeleteJobPlanResponse deleteJobPlan(const string &JobPlanId, const Models::DeleteJobPlanRequest &request);

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
      Models::GetDistillationTemplateResponse getDistillationTemplateWithOptions(const string &TemplateId, const Models::GetDistillationTemplateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

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
      Models::GetDistillationTemplateResponse getDistillationTemplate(const string &TemplateId, const Models::GetDistillationTemplateRequest &request);

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
      Models::GetJobPlanResponse getJobPlanWithOptions(const string &JobPlanId, const Models::GetJobPlanRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a specified job plan by job plan ID.
       *
       * @description ## Description
       * This API operation retrieves the details of a job plan based on the specified job plan ID (`JobPlanId`), including but not limited to the name, type, and current step status of the job plan. Make sure the `JobPlanId` provided in the request is valid and belongs to your workspace.
       *
       * @param request GetJobPlanRequest
       * @return GetJobPlanResponse
       */
      Models::GetJobPlanResponse getJobPlan(const string &JobPlanId, const Models::GetJobPlanRequest &request);

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
      Models::ListDistillationTemplatesResponse listDistillationTemplatesWithOptions(const Models::ListDistillationTemplatesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

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
      Models::ListDistillationTemplatesResponse listDistillationTemplates(const Models::ListDistillationTemplatesRequest &request);

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
      Models::ListJobPlansResponse listJobPlansWithOptions(const Models::ListJobPlansRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

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
      Models::ListJobPlansResponse listJobPlans(const Models::ListJobPlansRequest &request);

      /**
       * @summary Retrieves the list of models from ModelGallery (deprecated, use the 2026-06-03 version instead).
       *
       * @param tmpReq ListModelGalleryModelsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListModelGalleryModelsResponse
       */
      Models::ListModelGalleryModelsResponse listModelGalleryModelsWithOptions(const Models::ListModelGalleryModelsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of models from ModelGallery (deprecated, use the 2026-06-03 version instead).
       *
       * @param request ListModelGalleryModelsRequest
       * @return ListModelGalleryModelsResponse
       */
      Models::ListModelGalleryModelsResponse listModelGalleryModels(const Models::ListModelGalleryModelsRequest &request);

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
      Models::UpdateJobPlanResponse updateJobPlanWithOptions(const string &JobPlanId, const Models::UpdateJobPlanRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

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
      Models::UpdateJobPlanResponse updateJobPlan(const string &JobPlanId, const Models::UpdateJobPlanRequest &request);
  };
} // namespace AlibabaCloud
} // namespace PAIModelGallery20250630
#endif
