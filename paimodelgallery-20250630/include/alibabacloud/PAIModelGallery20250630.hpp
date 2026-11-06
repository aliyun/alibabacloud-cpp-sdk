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
       * @summary 创建任务计划。
       *
       * @param request CreateJobPlanRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateJobPlanResponse
       */
      Models::CreateJobPlanResponse createJobPlanWithOptions(const Models::CreateJobPlanRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建任务计划。
       *
       * @param request CreateJobPlanRequest
       * @return CreateJobPlanResponse
       */
      Models::CreateJobPlanResponse createJobPlan(const Models::CreateJobPlanRequest &request);

      /**
       * @summary 删除任务计划。
       *
       * @param request DeleteJobPlanRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteJobPlanResponse
       */
      Models::DeleteJobPlanResponse deleteJobPlanWithOptions(const string &JobPlanId, const Models::DeleteJobPlanRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除任务计划。
       *
       * @param request DeleteJobPlanRequest
       * @return DeleteJobPlanResponse
       */
      Models::DeleteJobPlanResponse deleteJobPlan(const string &JobPlanId, const Models::DeleteJobPlanRequest &request);

      /**
       * @summary 查询蒸馏模板详情。
       *
       * @param request GetDistillationTemplateRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDistillationTemplateResponse
       */
      Models::GetDistillationTemplateResponse getDistillationTemplateWithOptions(const string &TemplateId, const Models::GetDistillationTemplateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询蒸馏模板详情。
       *
       * @param request GetDistillationTemplateRequest
       * @return GetDistillationTemplateResponse
       */
      Models::GetDistillationTemplateResponse getDistillationTemplate(const string &TemplateId, const Models::GetDistillationTemplateRequest &request);

      /**
       * @summary 获取任务计划。
       *
       * @param request GetJobPlanRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetJobPlanResponse
       */
      Models::GetJobPlanResponse getJobPlanWithOptions(const string &JobPlanId, const Models::GetJobPlanRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取任务计划。
       *
       * @param request GetJobPlanRequest
       * @return GetJobPlanResponse
       */
      Models::GetJobPlanResponse getJobPlan(const string &JobPlanId, const Models::GetJobPlanRequest &request);

      /**
       * @summary 查询蒸馏模板列表。
       *
       * @param request ListDistillationTemplatesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDistillationTemplatesResponse
       */
      Models::ListDistillationTemplatesResponse listDistillationTemplatesWithOptions(const Models::ListDistillationTemplatesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询蒸馏模板列表。
       *
       * @param request ListDistillationTemplatesRequest
       * @return ListDistillationTemplatesResponse
       */
      Models::ListDistillationTemplatesResponse listDistillationTemplates(const Models::ListDistillationTemplatesRequest &request);

      /**
       * @summary 获取任务计划列表。
       *
       * @param tmpReq ListJobPlansRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListJobPlansResponse
       */
      Models::ListJobPlansResponse listJobPlansWithOptions(const Models::ListJobPlansRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取任务计划列表。
       *
       * @param request ListJobPlansRequest
       * @return ListJobPlansResponse
       */
      Models::ListJobPlansResponse listJobPlans(const Models::ListJobPlansRequest &request);

      /**
       * @summary 获取ModelGallery模型列表
       *
       * @param tmpReq ListModelGalleryModelsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListModelGalleryModelsResponse
       */
      Models::ListModelGalleryModelsResponse listModelGalleryModelsWithOptions(const Models::ListModelGalleryModelsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取ModelGallery模型列表
       *
       * @param request ListModelGalleryModelsRequest
       * @return ListModelGalleryModelsResponse
       */
      Models::ListModelGalleryModelsResponse listModelGalleryModels(const Models::ListModelGalleryModelsRequest &request);

      /**
       * @summary 更新任务计划。
       *
       * @param request UpdateJobPlanRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateJobPlanResponse
       */
      Models::UpdateJobPlanResponse updateJobPlanWithOptions(const string &JobPlanId, const Models::UpdateJobPlanRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新任务计划。
       *
       * @param request UpdateJobPlanRequest
       * @return UpdateJobPlanResponse
       */
      Models::UpdateJobPlanResponse updateJobPlan(const string &JobPlanId, const Models::UpdateJobPlanRequest &request);
  };
} // namespace AlibabaCloud
} // namespace PAIModelGallery20250630
#endif
