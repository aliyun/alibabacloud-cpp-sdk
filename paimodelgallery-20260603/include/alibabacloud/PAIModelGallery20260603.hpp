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
