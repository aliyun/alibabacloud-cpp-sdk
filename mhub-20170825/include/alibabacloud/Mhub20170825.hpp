// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MHUB20170825_HPP_
#define ALIBABACLOUD_MHUB20170825_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Mhub20170825Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Mhub20170825.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mhub20170825
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @param request CreateAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAppResponse
       */
      Models::CreateAppResponse createAppWithOptions(const Models::CreateAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateAppRequest
       * @return CreateAppResponse
       */
      Models::CreateAppResponse createApp(const Models::CreateAppRequest &request);

      /**
       * @param request CreateProductRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateProductResponse
       */
      Models::CreateProductResponse createProductWithOptions(const Models::CreateProductRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateProductRequest
       * @return CreateProductResponse
       */
      Models::CreateProductResponse createProduct(const Models::CreateProductRequest &request);

      /**
       * @param request DeleteAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAppResponse
       */
      Models::DeleteAppResponse deleteAppWithOptions(const Models::DeleteAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteAppRequest
       * @return DeleteAppResponse
       */
      Models::DeleteAppResponse deleteApp(const Models::DeleteAppRequest &request);

      /**
       * @param request DeleteProductRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteProductResponse
       */
      Models::DeleteProductResponse deleteProductWithOptions(const Models::DeleteProductRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteProductRequest
       * @return DeleteProductResponse
       */
      Models::DeleteProductResponse deleteProduct(const Models::DeleteProductRequest &request);

      /**
       * @summary 获取emas dashboard
       *
       * @param request DescribeDashboardRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDashboardResponse
       */
      Models::DescribeDashboardResponse describeDashboardWithOptions(const Models::DescribeDashboardRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取emas dashboard
       *
       * @param request DescribeDashboardRequest
       * @return DescribeDashboardResponse
       */
      Models::DescribeDashboardResponse describeDashboard(const Models::DescribeDashboardRequest &request);

      /**
       * @summary 展示用户应用列表
       *
       * @param request ListAppsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAppsResponse
       */
      Models::ListAppsResponse listAppsWithOptions(const Models::ListAppsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 展示用户应用列表
       *
       * @param request ListAppsRequest
       * @return ListAppsResponse
       */
      Models::ListAppsResponse listApps(const Models::ListAppsRequest &request);

      /**
       * @summary 分页获取产品(在基座中表达为项目)列表
       *
       * @param request ListProductsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListProductsResponse
       */
      Models::ListProductsResponse listProductsWithOptions(const Models::ListProductsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 分页获取产品(在基座中表达为项目)列表
       *
       * @param request ListProductsRequest
       * @return ListProductsResponse
       */
      Models::ListProductsResponse listProducts(const Models::ListProductsRequest &request);

      /**
       * @param request ModifyAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAppResponse
       */
      Models::ModifyAppResponse modifyAppWithOptions(const Models::ModifyAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ModifyAppRequest
       * @return ModifyAppResponse
       */
      Models::ModifyAppResponse modifyApp(const Models::ModifyAppRequest &request);

      /**
       * @param request ModifyProductRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyProductResponse
       */
      Models::ModifyProductResponse modifyProductWithOptions(const Models::ModifyProductRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ModifyProductRequest
       * @return ModifyProductResponse
       */
      Models::ModifyProductResponse modifyProduct(const Models::ModifyProductRequest &request);

      /**
       * @param request OpenEmasServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OpenEmasServiceResponse
       */
      Models::OpenEmasServiceResponse openEmasServiceWithOptions(const Models::OpenEmasServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request OpenEmasServiceRequest
       * @return OpenEmasServiceResponse
       */
      Models::OpenEmasServiceResponse openEmasService(const Models::OpenEmasServiceRequest &request);

      /**
       * @param request QueryAppInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryAppInfoResponse
       */
      Models::QueryAppInfoResponse queryAppInfoWithOptions(const Models::QueryAppInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryAppInfoRequest
       * @return QueryAppInfoResponse
       */
      Models::QueryAppInfoResponse queryAppInfo(const Models::QueryAppInfoRequest &request);

      /**
       * @summary 查询应用对应的安全字段
       *
       * @param request QueryAppSecurityInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryAppSecurityInfoResponse
       */
      Models::QueryAppSecurityInfoResponse queryAppSecurityInfoWithOptions(const Models::QueryAppSecurityInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询应用对应的安全字段
       *
       * @param request QueryAppSecurityInfoRequest
       * @return QueryAppSecurityInfoResponse
       */
      Models::QueryAppSecurityInfoResponse queryAppSecurityInfo(const Models::QueryAppSecurityInfoRequest &request);

      /**
       * @summary 查询基座的Product信息
       *
       * @param request QueryProductInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryProductInfoResponse
       */
      Models::QueryProductInfoResponse queryProductInfoWithOptions(const Models::QueryProductInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询基座的Product信息
       *
       * @param request QueryProductInfoRequest
       * @return QueryProductInfoResponse
       */
      Models::QueryProductInfoResponse queryProductInfo(const Models::QueryProductInfoRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Mhub20170825
#endif
