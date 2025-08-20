// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_BRAININDUSTRIAL20200920_HPP_
#define ALIBABACLOUD_BRAININDUSTRIAL20200920_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/BrainIndustrial20200920Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/BrainIndustrial20200920.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BrainIndustrial20200920
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 激活License
       *
       * @param request ActivateLicenseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ActivateLicenseResponse
       */
      Models::ActivateLicenseResponse activateLicenseWithOptions(const Models::ActivateLicenseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 激活License
       *
       * @param request ActivateLicenseRequest
       * @return ActivateLicenseResponse
       */
      Models::ActivateLicenseResponse activateLicense(const Models::ActivateLicenseRequest &request);

      /**
       * @summary 调用aics openapi
       *
       * @param tmpReq AicsOpenApiInvokeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AicsOpenApiInvokeResponse
       */
      Models::AicsOpenApiInvokeResponse aicsOpenApiInvokeWithOptions(const Models::AicsOpenApiInvokeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 调用aics openapi
       *
       * @param request AicsOpenApiInvokeRequest
       * @return AicsOpenApiInvokeResponse
       */
      Models::AicsOpenApiInvokeResponse aicsOpenApiInvoke(const Models::AicsOpenApiInvokeRequest &request);

      /**
       * @summary 创建储能运行优化任务
       *
       * @param tmpReq CreateEssOptJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateEssOptJobResponse
       */
      Models::CreateEssOptJobResponse createEssOptJobWithOptions(const Models::CreateEssOptJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建储能运行优化任务
       *
       * @param request CreateEssOptJobRequest
       * @return CreateEssOptJobResponse
       */
      Models::CreateEssOptJobResponse createEssOptJob(const Models::CreateEssOptJobRequest &request);

      /**
       * @summary 创建用电负荷预测任务，历史数据来自文件url
       *
       * @param request CreateLoadForecastByFileUrlJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLoadForecastByFileUrlJobResponse
       */
      Models::CreateLoadForecastByFileUrlJobResponse createLoadForecastByFileUrlJobWithOptions(const Models::CreateLoadForecastByFileUrlJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建用电负荷预测任务，历史数据来自文件url
       *
       * @param request CreateLoadForecastByFileUrlJobRequest
       * @return CreateLoadForecastByFileUrlJobResponse
       */
      Models::CreateLoadForecastByFileUrlJobResponse createLoadForecastByFileUrlJob(const Models::CreateLoadForecastByFileUrlJobRequest &request);

      /**
       * @summary 创建用电负荷预测任务
       *
       * @param tmpReq CreateLoadForecastJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLoadForecastJobResponse
       */
      Models::CreateLoadForecastJobResponse createLoadForecastJobWithOptions(const Models::CreateLoadForecastJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建用电负荷预测任务
       *
       * @param request CreateLoadForecastJobRequest
       * @return CreateLoadForecastJobResponse
       */
      Models::CreateLoadForecastJobResponse createLoadForecastJob(const Models::CreateLoadForecastJobRequest &request);

      /**
       * @summary 创建发电功率预测任务，历史数据来自文件url
       *
       * @param tmpReq CreatePowerForecastByFileUrlJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePowerForecastByFileUrlJobResponse
       */
      Models::CreatePowerForecastByFileUrlJobResponse createPowerForecastByFileUrlJobWithOptions(const Models::CreatePowerForecastByFileUrlJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建发电功率预测任务，历史数据来自文件url
       *
       * @param request CreatePowerForecastByFileUrlJobRequest
       * @return CreatePowerForecastByFileUrlJobResponse
       */
      Models::CreatePowerForecastByFileUrlJobResponse createPowerForecastByFileUrlJob(const Models::CreatePowerForecastByFileUrlJobRequest &request);

      /**
       * @summary 创建发电功率预测任务
       *
       * @param tmpReq CreatePowerForecastJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePowerForecastJobResponse
       */
      Models::CreatePowerForecastJobResponse createPowerForecastJobWithOptions(const Models::CreatePowerForecastJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建发电功率预测任务
       *
       * @param request CreatePowerForecastJobRequest
       * @return CreatePowerForecastJobResponse
       */
      Models::CreatePowerForecastJobResponse createPowerForecastJob(const Models::CreatePowerForecastJobRequest &request);

      /**
       * @summary 查询aivpp算法job
       *
       * @param request GetAivppAlgoJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAivppAlgoJobResponse
       */
      Models::GetAivppAlgoJobResponse getAivppAlgoJobWithOptions(const Models::GetAivppAlgoJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询aivpp算法job
       *
       * @param request GetAivppAlgoJobRequest
       * @return GetAivppAlgoJobResponse
       */
      Models::GetAivppAlgoJobResponse getAivppAlgoJob(const Models::GetAivppAlgoJobRequest &request);

      /**
       * @summary License详情
       *
       * @param request GetLicenseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLicenseResponse
       */
      Models::GetLicenseResponse getLicenseWithOptions(const Models::GetLicenseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary License详情
       *
       * @param request GetLicenseRequest
       * @return GetLicenseResponse
       */
      Models::GetLicenseResponse getLicense(const Models::GetLicenseRequest &request);

      /**
       * @summary 获取用户AIVPP资源列表
       *
       * @param request ListAivppResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAivppResourcesResponse
       */
      Models::ListAivppResourcesResponse listAivppResourcesWithOptions(const Models::ListAivppResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取用户AIVPP资源列表
       *
       * @param request ListAivppResourcesRequest
       * @return ListAivppResourcesResponse
       */
      Models::ListAivppResourcesResponse listAivppResources(const Models::ListAivppResourcesRequest &request);

      /**
       * @summary License列表
       *
       * @param request ListLicensesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLicensesResponse
       */
      Models::ListLicensesResponse listLicensesWithOptions(const Models::ListLicensesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary License列表
       *
       * @param request ListLicensesRequest
       * @return ListLicensesResponse
       */
      Models::ListLicensesResponse listLicenses(const Models::ListLicensesRequest &request);

      /**
       * @summary 获取用户资源列表
       *
       * @param request ListUserResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUserResourcesResponse
       */
      Models::ListUserResourcesResponse listUserResourcesWithOptions(const Models::ListUserResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取用户资源列表
       *
       * @param request ListUserResourcesRequest
       * @return ListUserResourcesResponse
       */
      Models::ListUserResourcesResponse listUserResources(const Models::ListUserResourcesRequest &request);

      /**
       * @summary 更新license描述
       *
       * @param request UpdateLicenseDescriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLicenseDescriptionResponse
       */
      Models::UpdateLicenseDescriptionResponse updateLicenseDescriptionWithOptions(const Models::UpdateLicenseDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新license描述
       *
       * @param request UpdateLicenseDescriptionRequest
       * @return UpdateLicenseDescriptionResponse
       */
      Models::UpdateLicenseDescriptionResponse updateLicenseDescription(const Models::UpdateLicenseDescriptionRequest &request);
  };
} // namespace AlibabaCloud
} // namespace BrainIndustrial20200920
#endif
