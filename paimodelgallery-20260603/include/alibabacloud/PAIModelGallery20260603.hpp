// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_PAIMODELGALLERY20260603_HPP_
#define ALIBABACLOUD_PAIMODELGALLERY20260603_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/PAIModelGallery20260603Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/PAIModelGallery20260603.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAIModelGallery20260603
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 获取模型部署方案匹配资源
       *
       * @param request GetModelDeploymentResourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetModelDeploymentResourcesResponse
       */
      Models::GetModelDeploymentResourcesResponse getModelDeploymentResourcesWithOptions(const string &ModelId, const Models::GetModelDeploymentResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取模型部署方案匹配资源
       *
       * @param request GetModelDeploymentResourcesRequest
       * @return GetModelDeploymentResourcesResponse
       */
      Models::GetModelDeploymentResourcesResponse getModelDeploymentResources(const string &ModelId, const Models::GetModelDeploymentResourcesRequest &request);

      /**
       * @summary 生成模型部署配置
       *
       * @param request GetModelDeploymentSpecRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetModelDeploymentSpecResponse
       */
      Models::GetModelDeploymentSpecResponse getModelDeploymentSpecWithOptions(const string &ModelId, const Models::GetModelDeploymentSpecRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 生成模型部署配置
       *
       * @param request GetModelDeploymentSpecRequest
       * @return GetModelDeploymentSpecResponse
       */
      Models::GetModelDeploymentSpecResponse getModelDeploymentSpec(const string &ModelId, const Models::GetModelDeploymentSpecRequest &request);

      /**
       * @summary 获取模型部署方案列表
       *
       * @param request ListModelDeploymentProfilesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListModelDeploymentProfilesResponse
       */
      Models::ListModelDeploymentProfilesResponse listModelDeploymentProfilesWithOptions(const string &ModelId, const Models::ListModelDeploymentProfilesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取模型部署方案列表
       *
       * @param request ListModelDeploymentProfilesRequest
       * @return ListModelDeploymentProfilesResponse
       */
      Models::ListModelDeploymentProfilesResponse listModelDeploymentProfiles(const string &ModelId, const Models::ListModelDeploymentProfilesRequest &request);

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
  };
} // namespace AlibabaCloud
} // namespace PAIModelGallery20260603
#endif
